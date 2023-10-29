/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Timer.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 00:10:28 by thepaqui          #+#    #+#             */
/*   Updated: 2023/10/29 00:10:28 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Timer.hpp"

Timer::Timer()
: mode(seconds), state(), duration(-1)
{}

Timer::Timer(t_timer_precision mode)
: mode(mode), state(set), duration(-1)
{}

void	Timer::start()
{
	switch (state)
	{
	case	started:
		throw StartTwiceException();
	case	stopped:
		reset(mode);
		__attribute__((fallthrough));
	default:
		if (clock_gettime(CLOCK_MONOTONIC, &startTime) == -1)
			throw ClockFailedException();
		state = started;
	}
}

void	Timer::stop()
{
	switch (state)
	{
	case	stopped:
		throw StopTwiceException();
	case	set:
		throw NoStartException();
	default:
		if (clock_gettime(CLOCK_MONOTONIC, &stopTime) == -1)
			throw ClockFailedException();
		state = stopped;
	}
}

void	Timer::reset()
{
	duration = -1;
	state = set;
}

void	Timer::reset(t_timer_precision newMode)
{
	duration = -1;
	mode = newMode;
	state = set;
}

void	Timer::setPrecision(t_timer_precision newMode)
{ mode = newMode; }

double	Timer::getTime()
{
	if (state == set)
		throw NoStartException();
	else if (state == started)
		throw NoStopException();
	calculateDuration();
	return duration;
}

double	Timer::getTime(t_timer_precision convertTo)
{
	mode = convertTo;
	return getTime();
}

double	Timer::getDuration_nsec()
{
	long long int	duration_sec = static_cast<long long int>(stopTime.tv_sec - startTime.tv_sec);
	double			duration_nsec;
	if (duration_sec)
	{
		duration_nsec = LF_BILLION - startTime.tv_nsec;
		while (--duration_sec)
			duration_nsec += LF_BILLION;
		duration_nsec += stopTime.tv_nsec;
	}
	else
		duration_nsec = static_cast<double>(stopTime.tv_nsec - startTime.tv_nsec); // nanoseconds
	return duration_nsec;
}

void	Timer::calculateDuration()
{
	duration = getDuration_nsec();
	switch (mode)
	{
		case	microseconds:
			duration /= LF_THOUSAND;
			break;
		case	milliseconds:
			duration /= LF_MILLION;
			break;
		case	seconds:
			duration /= LF_BILLION;
	}
}

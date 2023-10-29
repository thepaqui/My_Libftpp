/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Timer.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 23:50:41 by thepaqui          #+#    #+#             */
/*   Updated: 2023/10/28 23:50:41 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TIMER_HPP
# define TIMER_HPP

# include <exception>
# include <ctime>
# include <sys/time.h>

typedef enum	e_timer_precision
{
	seconds = 0,
	milliseconds = 1,
	microseconds = 2,
	nanoseconds = 3
}				t_timer_precision;

// seconds
# define TIMER_SEC seconds
// milliseconds
# define TIMER_MSEC milliseconds
// microseconds
# define TIMER_USEC microseconds
// nanoseconds
# define TIMER_NSEC nanoseconds

typedef enum	e_timer_state
{
	set,
	started,
	stopped
}				t_timer_state;

# define LF_THOUSAND	1000.0
# define LF_MILLION		1000000.0
# define LF_BILLION		1000000000.0

class Timer
{
private	:
	t_timer_precision	mode;
	t_timer_state		state;
	struct timespec		startTime; // nanoseconds
	struct timespec		stopTime; // nanoseconds
	double				duration;

	void	calculateDuration();
	double	getDuration_nsec();

public	:
	// Constructs with precision of seconds
	Timer();
	// Constructs with given precision
	Timer(t_timer_precision mode);
	// Default destructor
	~Timer() {}

	/* Methods */

	// Starts timer
	// Resets timer if it was used before without being reset
	// It resets without changing the precision
	// Throws if timer was already started
	// Throws if clock_gettime() failed
	void			start();

	// Stops timer
	// Throws if timer was not started
	// Throws if timer was already stopped without being reset
	// Throws if clock_gettime() failed
	void			stop();

	// Resets timer
	// Does not change precision
	void			reset();

	// Resets timer
	// Changes precision to given one
	void			reset(t_timer_precision newMode);

	// Changes precision to given one
	void			setPrecision(t_timer_precision mode);

	// Returns measured time in timer's precision
	// Throws if timer was just reset
	// Throws if timer was started but not stopped
	double			getTime();

	// Changes precision to given one, even if it throws
	// Returns measured time in timer's new precision
	// Throws if timer was just reset
	// Throws if timer was started but not stopped
	double			getTime(t_timer_precision convertTo);

	/* Exceptions */

	class StartTwiceException : public std::exception
	{ public: const char *what() const throw() { return "Timer started already"; } };
	class StopTwiceException : public std::exception
	{ public: const char *what() const throw() { return "Timer stopped already"; } };
	class NoStartException : public std::exception
	{ public: const char *what() const throw() { return "Timer did not start"; } };
	class NoStopException : public std::exception
	{ public: const char *what() const throw() { return "Timer did not stop"; } };
	class ClockFailedException : public std::exception
	{ public: const char *what() const throw() { return "Timer could not start/stop"; } };
};

#endif
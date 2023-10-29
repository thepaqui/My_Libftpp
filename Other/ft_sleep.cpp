/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sleep.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 06:40:29 by thepaqui          #+#    #+#             */
/*   Updated: 2023/10/26 06:40:29 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <exception>

double	getDuration_nsec(struct timespec &startTime, struct timespec &stopTime)
{
	long long int	duration_sec = static_cast<long long int>(stopTime.tv_sec - startTime.tv_sec);
	double			duration_nsec;
	if (duration_sec)
	{
		duration_nsec = 1000000000.0 - startTime.tv_nsec;
		while (--duration_sec)
			duration_nsec += 1000000000.0;
		duration_nsec += stopTime.tv_nsec;
	}
	else
		duration_nsec = static_cast<double>(stopTime.tv_nsec - startTime.tv_nsec); // nanoseconds
	return duration_nsec;
}

void	ft_sleep(double seconds)
{
	if (seconds <= 0)
		return ;

	struct timespec	startTime;
	if (clock_gettime(CLOCK_MONOTONIC, &startTime) == -1)
		throw std::exception();

	struct timespec	sleepHelp;
	sleepHelp.tv_sec = 0;
	sleepHelp.tv_nsec = seconds * 100000000;
	while (sleepHelp.tv_nsec > 999999999)
		sleepHelp.tv_nsec /= 10;

	struct timespec	endTime;
	if (clock_gettime(CLOCK_MONOTONIC, &endTime) == -1)
		throw std::exception();

	double	duration = getDuration_nsec(startTime, endTime) / 1000000000.0; // seconds
	while (duration < seconds)
	{
		nanosleep(&sleepHelp, NULL);

		if (clock_gettime(CLOCK_MONOTONIC, &endTime) == -1)
			throw std::exception();
		duration = getDuration_nsec(startTime, endTime) / 1000000000.0; // seconds
	}
}

/*void	ft_nsleep(long long int nanoseconds)
{
	if (nanoseconds <= 0)
		return ;

	struct timespec	startTime;
	if (clock_gettime(CLOCK_MONOTONIC, &startTime) == -1)
		throw std::exception();

	struct timespec	sleepHelp;
	sleepHelp.tv_sec = 0;
	sleepHelp.tv_nsec = nanoseconds / 10;
	while (sleepHelp.tv_nsec > 999999999)
		sleepHelp.tv_nsec /= 10;

	struct timespec	endTime;
	if (clock_gettime(CLOCK_MONOTONIC, &endTime) == -1)
		throw std::exception();

	double	duration = getDuration_nsec(startTime, endTime);
	while (duration < nanoseconds)
	{
		nanosleep(&sleepHelp, NULL);

		if (clock_gettime(CLOCK_MONOTONIC, &endTime) == -1)
			throw std::exception();
		duration = getDuration_nsec(startTime, endTime);
	}
}*/

/*
# include <iostream>
# include <iomanip>

int	main(void)
{
	std::clock_t	startTime = std::clock();
	ft_sleep(0.1279);
	std::clock_t	endTime = std::clock();
	double			sleepTime = static_cast<double>(endTime - startTime);
	sleepTime /= static_cast<double>(CLOCKS_PER_SEC); // seconds
	std::cout << "Slept for " << std::fixed << std::setprecision(4) << sleepTime << " seconds!" << std::endl;
	return 0;
}
*/

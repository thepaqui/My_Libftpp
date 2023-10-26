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

void	ft_sleep(double seconds)
{
	std::clock_t	startTime = std::clock();
	std::clock_t	endTime = std::clock();
	double			duration = static_cast<double>(endTime - startTime);
	duration /= static_cast<double>(CLOCKS_PER_SEC); // seconds
	while (duration < seconds)
	{
		endTime = std::clock();
		duration = static_cast<double>(endTime - startTime);
		duration /= static_cast<double>(CLOCKS_PER_SEC); // seconds
	}
}

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

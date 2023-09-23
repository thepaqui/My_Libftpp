/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomInt.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 04:00:21 by thepaqui          #+#    #+#             */
/*   Updated: 2023/09/23 04:00:21 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <random>

int	randomInt(int min, int max)
{
	static std::random_device			rd;
	static std::mt19937					rng(rd());
	std::uniform_int_distribution<int>	uni(min, max);
	return uni(rng);
}

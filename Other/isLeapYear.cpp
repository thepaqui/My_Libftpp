/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isLeapYear.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:19:56 by thepaqui          #+#    #+#             */
/*   Updated: 2023/10/15 19:19:56 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

bool isLeapYear(unsigned int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0 && year % 400 != 0)
			return false;
		else
			return true;
	}
	return false;
}

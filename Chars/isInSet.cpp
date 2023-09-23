/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isInSet.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:10:32 by thepaqui          #+#    #+#             */
/*   Updated: 2023/07/27 20:10:32 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

bool	isInSet(int c, const char *set)
{
	if (!set)
		return (false);
	for (int i = 0; set[i]; i++)
		if (set[i] == c)
			return true;
	return false;
}

bool	isInSet(int c, const std::string set)
{
	for (int i = 0; set[i]; i++)
		if (set[i] == c)
			return true;
	return false;
}

bool	isInSet(wint_t c, const std::wstring set)
{
	for (int i = 0; set[i]; i++)
		if (set[i] == c)
			return true;
	return false;
}

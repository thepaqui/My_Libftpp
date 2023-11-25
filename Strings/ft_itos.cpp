/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itos.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 15:00:02 by thepaqui          #+#    #+#             */
/*   Updated: 2023/11/25 15:00:02 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

std::string	ft_itos(int value)
{
	std::stringstream	stream;
	stream << value;

	std::string	ret;
	stream >> ret;

	return ret;
}
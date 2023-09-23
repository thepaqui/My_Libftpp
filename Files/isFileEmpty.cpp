/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isFileEmpty.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:38:10 by thepaqui          #+#    #+#             */
/*   Updated: 2023/07/30 15:38:10 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>

bool	isFileEmpty(std::ifstream &file)
{
	return (static_cast<int>(file.peek()) == std::ifstream::traits_type::eof());
}

bool	isFileEmpty(std::wifstream &file)
{
	return (static_cast<int>(file.peek()) == std::ifstream::traits_type::eof());
}

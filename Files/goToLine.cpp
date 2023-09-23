/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   goToLine.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 04:10:12 by thepaqui          #+#    #+#             */
/*   Updated: 2023/09/23 04:10:12 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <limits>

std::ifstream	&goToLine(std::ifstream &file, unsigned int line)
{
	file.seekg(std::ios::beg); // return to start of file
	for (unsigned int i = 0; i < line - 1; i++)
		file.ignore(std::numeric_limits<std::streamsize>::max(),'\n'); // ignore 1 line
	return file;
}

std::wifstream	&goToLine(std::wifstream &file, unsigned int line)
{
	file.seekg(std::ios::beg); // return to start of file
	for (unsigned int i = 0; i < line - 1; i++)
		file.ignore(std::numeric_limits<std::streamsize>::max(),'\n'); // ignore 1 line
	return file;
}

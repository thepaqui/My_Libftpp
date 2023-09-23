/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doesFileExist.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 04:03:06 by thepaqui          #+#    #+#             */
/*   Updated: 2023/09/23 04:03:06 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sys/stat.h>
#include "../libftpp.hpp"

bool	doesFileExist(std::string filename)
{
	struct stat	sb;
	return (stat(filename.c_str(), &sb) == 0);
}

bool	doesFileExist(std::wstring filename)
{
	struct stat	sb;
	return (stat(ws2s(filename).c_str(), &sb) == 0);
}

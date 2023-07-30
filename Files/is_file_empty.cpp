/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_file_empty.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:38:10 by thepaqui          #+#    #+#             */
/*   Updated: 2023/07/30 15:38:10 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <fstream>

bool	is_file_empty(std::ifstream &file)
{
	if (file.peek() == std::ifstream::traits_type::eof())
		return (true);
	return (false);
}

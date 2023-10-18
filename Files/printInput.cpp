/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printInput.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:05:39 by thepaqui          #+#    #+#             */
/*   Updated: 2023/10/18 18:05:39 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

// prints the contents of in to out
void	printInput(std::ostream &out, std::istream &in)
{
	if (in.fail() || out.fail())
		throw std::exception();

	std::string		line;
	do
	{
		getline(in, line);
		out << line << std::endl;
	}
	while (!in.eof());
}

// prints the contents of in to std::cout
void	printInput(std::istream &in)
{ printInput(std::cout, in); }

// prints the contents of the file associated with name inputFileName to out
void	printInput(std::ostream &out, const std::string inputFileName)
{
	std::ifstream	in(inputFileName);
	if (!in.is_open())
		throw std::exception();

	try { printInput(out, in); }
	catch (std::exception &err)
	{ in.close(); throw ; }
	in.close();
}

// prints the contents of the file associated with name inputFileName to std::cout
void	printInput(const std::string inputFileName)
{ printInput(std::cout, inputFileName); }

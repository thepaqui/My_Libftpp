/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftpp.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:07:38 by thepaqui          #+#    #+#             */
/*   Updated: 2023/07/27 20:07:38 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPP_HPP
# define LIBFTPP_HPP
# include <iostream>

/* Characters */

bool	ft_isascii(int c);
bool	ft_isdigit(int c);
bool	ft_isalpha(int c);
bool	ft_islower(int c);
bool	ft_isupper(int c);
bool	ft_isalnum(int c);
bool	ft_isspace(int c);
bool	ft_isprint(int c);
bool	isInSet(int c, const char *set);
bool	isInSet(int c, const std::string set);
bool	isInSet(wint_t c, const std::wstring set);

/* Strings */

int				ft_stoi(char *str);
int				ft_stoi(std::string str);
int				ft_stoi(std::wstring str);
std::wstring	s2ws(const std::string& str);
std::string		ws2s(const std::wstring& wstr);

/* Files */

bool			doesFileExist(std::string filename);
bool			doesFileExist(std::wstring filename);
bool			isFileEmpty(std::ifstream &file);
bool			isFileEmpty(std::wifstream &file);
std::ifstream	&goToLine(std::ifstream &file, unsigned int line);
std::wifstream	&goToLine(std::wifstream &file, unsigned int line);

/* Math */

int	randomInt(int min, int max);

/* Other */

uintptr_t	serialize(void *ptr);
void		*deserialize(uintptr_t raw);

#endif
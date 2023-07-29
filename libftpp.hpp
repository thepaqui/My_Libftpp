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
bool	ft_isinset(int c, const char *set);

/* Strings */

int		ft_stoi(std::string str);

#endif
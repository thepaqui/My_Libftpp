/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stoi.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 19:20:14 by thepaqui          #+#    #+#             */
/*   Updated: 2023/07/29 19:20:14 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

static int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	if (!str)
		return (0);
	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] == '0')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - '0');
	if (sign == 1 || res == -2147483648)
		return (res);
	return (res * sign);
}

int	ft_stoi(std::string str)
{
	return (ft_atoi(str.c_str()));
}

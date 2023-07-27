/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinset.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:10:32 by thepaqui          #+#    #+#             */
/*   Updated: 2023/07/27 20:10:32 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

bool	ft_isinset(int c, const char *set)
{
	if (!set)
		return (false);
	while (*set)
	{
		if (c == (int)(*set))
			return (true);
		set++;
	}
	return (false);
}

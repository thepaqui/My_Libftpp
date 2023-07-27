/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:32:10 by thepaqui          #+#    #+#             */
/*   Updated: 2023/07/27 20:32:10 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

bool	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (true);
	return (false);
}

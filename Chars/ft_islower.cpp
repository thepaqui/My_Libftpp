/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:34:32 by thepaqui          #+#    #+#             */
/*   Updated: 2023/07/27 20:34:32 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

bool	ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (true);
	return (false);
}
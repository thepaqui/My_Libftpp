/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:33:06 by thepaqui          #+#    #+#             */
/*   Updated: 2023/07/27 20:33:06 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftpp.hpp"

bool	ft_isspace(int c)
{
	if (ft_isinset(c, " \n\t\v\r\f"))
		return (true);
	return (false);
}

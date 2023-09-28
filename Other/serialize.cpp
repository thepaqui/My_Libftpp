/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 02:31:34 by thepaqui          #+#    #+#             */
/*   Updated: 2023/09/28 02:31:34 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>

uintptr_t	serialize(void *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

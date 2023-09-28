/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deserialize.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 02:32:43 by thepaqui          #+#    #+#             */
/*   Updated: 2023/09/28 02:32:43 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>

void	*deserialize(uintptr_t raw)
{
	return reinterpret_cast<void*>(raw);
}

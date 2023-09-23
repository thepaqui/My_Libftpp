/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s2ws.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 04:05:19 by thepaqui          #+#    #+#             */
/*   Updated: 2023/09/23 04:05:19 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <codecvt>
#include <locale>

std::wstring	s2ws(const std::string& str)
{
	using convert_typeX = std::codecvt_utf8<wchar_t>;
	std::wstring_convert<convert_typeX, wchar_t> converterX;
	return converterX.from_bytes(str);
}

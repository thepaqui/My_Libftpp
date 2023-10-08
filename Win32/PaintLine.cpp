/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PaintLine.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:19:26 by thepaqui          #+#    #+#             */
/*   Updated: 2023/10/08 18:19:26 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <windows.h>

void	PaintLine(HDC hdc, int startx, int starty, int endx, int endy, unsigned int width, COLORREF color)
{
	HPEN	pen = CreatePen(PS_DOT, width, color);
	HPEN	oldPen = (HPEN)SelectObject(hdc, pen);
	MoveToEx(hdc, startx, starty, NULL);
	LineTo(hdc, endx, endy);
	SelectObject(hdc, oldPen);
	DeleteObject(pen);
}

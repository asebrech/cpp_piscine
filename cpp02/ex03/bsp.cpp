/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:43:37 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/09 17:04:15 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Fixed area(Point a, Point b, Point c)
{
	Fixed abs((a.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - b.get_y())) / Fixed(2.0f));

	if (abs < 0)
		abs = abs * -1;

	return abs;
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) { 

	Fixed A = area(a, b, c);

	Fixed A1 = area(point, b, c);

	Fixed A2 = area(a, point, c);

	Fixed A3 = area(a, b, point);

	if (A1 == 0 || A2 == 0 || A3 == 0)
		return false;

	return (A == A1 + A2 + A3);
}

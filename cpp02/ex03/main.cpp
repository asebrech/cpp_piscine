/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:20:34 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/09 18:01:54 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

void	test(Point a, Point b, Point c, Point point) {

	std::cout << "for a triangle abc with coordinates :" << std::endl;
	std::cout << "ax = " << a.get_x() << " and ay = " << a.get_y() << std::endl;
	std::cout << "bx = " << b.get_x() << " and by = " << b.get_y() << std::endl;
	std::cout << "cx = " << c.get_x() << " and cy = " << c.get_y() << std::endl << std::endl;

	std::cout << "end a point of coordinates x = " << point.get_x() << " and y = " << point.get_y() << std::endl << std::endl;

	std::cout << "the point is ";

	if (bsp(a, b, c, point))
		std::cout << GRN << "actually" << RESET;
	else
		std::cout << RED <<"actually not" << RESET;

	std::cout << " on the triangle" << std::endl << std::endl;
}

int	main(void) {

	test(Point(Fixed(7), Fixed(7)), Point(Fixed(11), Fixed(1)), Point(Fixed(2), Fixed(2)), Point(Fixed(7), Fixed(3)));

	test(Point(Fixed(7), Fixed(7)), Point(Fixed(11), Fixed(1)), Point(Fixed(2), Fixed(2)), Point(Fixed(12), Fixed(6)));
	
	return 0;
}

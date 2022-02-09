/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:31:42 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/09 16:58:13 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
# define CLASS_HPP

# include "Fixed.hpp"

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define RESET "\e[0m"

class	Point {

public:

	Point(void);
	Point(Fixed const x, Fixed const y);
	Point(Point const &src);
	~Point(void);

	Point	&operator=(Point const &rhs);

	Fixed	get_x(void) const;	
	void	set_x(Fixed x);	

	Fixed	get_y(void) const;	
	void	set_y(Fixed y);	

private:

	Fixed	_x;
	Fixed	_y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif

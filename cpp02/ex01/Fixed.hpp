/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:06:00 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/09 18:07:26 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed {

public:

	Fixed(const int raw);
	Fixed(const float raw);

	Fixed(void);
	Fixed(Fixed const &src);
	~Fixed(void);

	Fixed	&operator=(Fixed const &rhs);

	int	getRawBits(void) const;
	void	setRawBits(int const raw);

	int	getFixed(void) const;
	void	setFixed(int fixed);

	float	toFloat(void) const;
	int	toInt(void) const;

private:

	void	_toFixed(const float raw);

	int	_raw;
	int	_fixed;

	static	int const	_fractional;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &i);

#endif

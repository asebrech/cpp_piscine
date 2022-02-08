/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:06:00 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/08 12:28:20 by asebrech         ###   ########.fr       */
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
	float	getRawBitsFloat(void) const;
	void	setRawBits(int const raw);
	void	setRawBits(float const raw);

	float	toFloat(void) const;
	int	toInt(void) const;

private:

	void	_toFixed(const float raw);

	float	_raw;
	int	_fixed;

	static	int const	_fractional;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &i);

#endif

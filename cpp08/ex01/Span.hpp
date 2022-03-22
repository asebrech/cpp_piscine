/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:55:43 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/22 22:48:07 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <exception>
# include <vector>

class	Span {

public:

	Span(unsigned int max);
	Span(Span const	&src);
	virtual ~Span(void);

	Span	&operator=(Span const &rhs);

	unsigned int	getMax(void) const;
	std::vector<int> const	&getVector(void) const;

	void	addNumber(int nbr);
	void	addByIt(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	int	shortestSpan(void) const;
	int	longestSpan(void) const;

private:

	Span(void);

	unsigned int	_max;
	std::vector<int>	_vector;
};

std::ostream	&operator<<(std::ostream &o, Span const &rhs);

#endif

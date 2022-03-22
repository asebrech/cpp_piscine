/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:09:03 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/23 00:00:58 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _max(0) {

	//std::cout << "Span default constructor called" << std::endl;

	return ;
}

Span::Span(unsigned int max) : _max(max) {

	//std::cout << "Span string constructor called" << std::endl;

	return ;
}

Span::Span(Span const &src) : _max(0) {

	//std::cout << "Span copy constructor called" << std::endl;

	*this = src;

	return ;
}

Span::~Span(void) {

	//std::cout << "Span destructor called" << std::endl;

	return ;
}

unsigned int	Span::getMax(void) const {

	return this->_max;
}

std::vector<int> const	&Span::getVector(void) const {

	return this->_vector;
}

Span	&Span::operator=(Span const &rhs) {

	//std::cout << "Span copy assignment operator called" << std::endl;

	if (&rhs != this)
	{
		this->_max = rhs.getMax();
		this->_vector = rhs.getVector();
	}

	return *this;
}

void	Span::addNumber(int nbr)
{
	if (this->_vector.size() < this->_max)
	{
		this->_vector.push_back(nbr);
	}
	else
		throw std::out_of_range("Range is full");
}

int	Span::shortestSpan(void) const
{
	if (this->_vector.size() > 1)
	{
		int	result = 0;
		std::vector<int>	tmp = this->_vector;
		sort(tmp.begin(), tmp.end());
		int	shortest = *(tmp.begin() + 1) - *tmp.begin();
		for (std::vector<int>::iterator it = tmp.begin() + 1; it != (tmp.end() - 1) && shortest != 0; it++)
		{
			result = *(it + 1) - *it;
			if (result < shortest)
				shortest = result;
		}
		return (shortest);
	}
	else
		throw std::logic_error("Not enough numbers, no span can be found");
}

int	Span::longestSpan(void) const
{
	if (this->_vector.size() > 1)
	{
		return (*std::max_element(this->_vector.begin(), this->_vector.end())
			- *std::min_element(this->_vector.begin(), this->_vector.end()));
	}
	else
		throw std::logic_error("Not enough numbers, no span can be found");
}

void	Span::addByIt(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int>	tmp(begin, end);

	if ((tmp.size() + this->_vector.size()) <= this->_max)
	{
		this->_vector.insert(this->_vector.end(), begin, end); 
	}
	else
		throw std::logic_error("Not enough place in the range");
}

std::ostream	&operator<<(std::ostream &o, Span const &rhs)
{
	std::vector<int>	tmp = rhs.getVector();

	o << "Range : ";

	for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end(); it++)
		o << *it << " ";

	return (o);
}

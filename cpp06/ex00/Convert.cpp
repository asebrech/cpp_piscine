/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:02:14 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/11 19:21:56 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void) 
{
	//std::cout << "Convert default constructor called" << std::endl;

	for (int i = 0; i < 4; i++)
		this->_type[i] = false;

	return ;
}

Convert::Convert(Convert & src)
{
	//std::cout << "Convert copy constructor called" << std::endl;

	*this = src;

	return ;
}

Convert::~Convert(void)
{
	//std::cout << "Convert destructor called" << std::endl;

	return ;
}

Convert	& Convert::operator=(Convert const & rhs) 
{
	//std::cout << "Convert copy assignment operator called" << std::endl;

	if (this != &rhs)
	{
		return (*this);	
	}

	return (*this);	
}

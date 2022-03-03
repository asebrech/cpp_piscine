/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:16:28 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/03 17:03:19 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	//std::cout << "MateriaSource default constructor called" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		this->_materias[i] = NULL;
	}

	return ;
}

MateriaSource::MateriaSource(MateriaSource & src)
{
	//std::cout << "MateriaSource copy constructor called" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		this->_materias[i] = NULL;
	}

	*this = src;

	return ;
}

MateriaSource::~MateriaSource(void)
{
	//std::cout << "MateriaSource destructor called" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		delete this->_materias[i];
	}

	return ;
}

MateriaSource	& MateriaSource::operator=(MateriaSource const & rhs) 
{
	//std::cout << "MateriaSource copy assignment operator called" << std::endl;

	if (&rhs != this)
	{
		for (int i = 0; i < 4; i++)
		{
			delete this->_materias[i];
		}

		this->_materias[0] = rhs.getMateria_0();
		this->_materias[1] = rhs.getMateria_1();
		this->_materias[2] = rhs.getMateria_2();
		this->_materias[3] = rhs.getMateria_3();
	}
	return (*this);	
}

AMateria	* MateriaSource::getMateria_0(void) const
{
	if (this->_materias[0] != NULL)
		return (this->_materias[0]->clone());
	else
		return (NULL);
}

AMateria	* MateriaSource::getMateria_1(void) const
{
	if (this->_materias[1] != NULL)
		return (this->_materias[1]->clone());
	else
		return (NULL);

}

AMateria	* MateriaSource::getMateria_2(void) const
{
	if (this->_materias[2] != NULL)
		return (this->_materias[2]->clone());
	else
		return (NULL);
}

AMateria	* MateriaSource::getMateria_3(void) const
{
	if (this->_materias[3] != NULL)
		return (this->_materias[3]->clone());
	else
		return (NULL);
}

void	MateriaSource::learnMateria(AMateria * m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] == NULL)
		{
			this->_materias[i] = m;
			break;
		}
	}

	return ;
}

AMateria	* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] != NULL && this->_materias[i]->getType() == type)
			return (this->_materias[i]->clone());
	}

	return (0);
}

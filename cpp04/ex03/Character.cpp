/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:16:28 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/28 20:50:26 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name(""), _index(0)
{
	std::cout << "Character default constructor called" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		this->_materias[i] = NULL;
	}

	return ;
}

Character::Character(Character & src) : _name(""), _index(0)
{
	std::cout << "Character copy constructor called" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		this->_materias[i] = NULL;
	}

	*this = src;

	return ;
}

Character::~Character(void)
{
	std::cout << "Character destructor called" << std::endl;

	for (int i = 0; i < this->_index; i++)
	{
		delete this->todelete[i];
	}

	for (int i = 0; i < 4; i++)
		delete this->_materias[i];

	return ;
}

Character	& Character::operator=(Character const & rhs) 
{
	std::cout << "Character copy assignment operator called" << std::endl;

	this->_name = rhs.getName();

	for (int i = 0; i < 4; i++)
		delete this->_materias[i];

	this->_materias[0] = rhs.getMateria_0();
	this->_materias[1] = rhs.getMateria_1();
	this->_materias[2] = rhs.getMateria_2();
	this->_materias[3] = rhs.getMateria_3();

	return (*this);	
}

std::string const	& Character::getName(void) const
{
	return (this->_name);
}

AMateria	* Character::getMateria_0(void) const
{
	if (this->_materias[0] != NULL)
		return (this->_materias[0]->clone());
	else
		return (NULL);
}

AMateria	* Character::getMateria_1(void) const
{
	if (this->_materias[1] != NULL)
		return (this->_materias[1]->clone());
	else
		return (NULL);

}

AMateria	* Character::getMateria_2(void) const
{
	if (this->_materias[2] != NULL)
		return (this->_materias[2]->clone());
	else
		return (NULL);
}

AMateria	* Character::getMateria_3(void) const
{
	if (this->_materias[3] != NULL)
		return (this->_materias[3]->clone());
	else
		return (NULL);
}

Character::Character(std::string const & name) : _name(name), _index(0)
{
	std::cout << "Character string constructor called" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		this->_materias[i] = NULL;
	}

	return ;
}

void	Character::equip(AMateria * m)
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

void	Character::unequip(int idx)
{
	if (this->_index < 100)
	{
		this->todelete[this->_index] = this->_materias[idx];	
		this->_materias[idx] = NULL;	
		this->_index++;
	}

	return ;
}

void Character::use(int idx, ICharacter& target)
{
	if (this->_materias[idx] != NULL)
		this->_materias[idx]->use(target);

	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:26:05 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/13 17:31:14 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name(""), _hitPoint(10), _energyPoint(10), _attackDamage(0) {

	std::cout << "ClapTrap default constructor called" << std::endl;

	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0) {

	std::cout << "ClapTrap string constructor called" << std::endl;

	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src) {

	std::cout << "ClapTrap copy constructor called" << std::endl;

	*this = src;

	return ;
}

ClapTrap::~ClapTrap(void) {

	std::cout << "ClapTrap destructor called" << std::endl;

	return ;
}

std::string	ClapTrap::getName(void) const {

	return this->_name;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs) {

	std::cout << "ClapTrap copy assignment operator called" << std::endl;

	this->_name = rhs.getName();

	return *this;
}

std::ostream	&operator<<(std::ostream &o, ClapTrap const &rhs) {

	o << rhs.getName();

	return o;
}

void	ClapTrap::attack(const std::string &target) {

	if (this->_hitPoint == 0)
		std::cout << "ClapTrap " << *this << " can't attack " << target << " because he has no more Hit Point left !" << std::endl;
	else if ( this->_energyPoint == 0)
		std::cout << "ClapTrap " << *this << " can't attack " << target << " because he has no more Energy Point left !" << std::endl;
	else {

		this->_energyPoint--;
		std::cout << "ClapTrap " << *this << " attacks " << target << " causing " << this->_attackDamage << " points of damage !" << std::endl;
	}

	return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	if (this->_hitPoint > 0) {

		this->_hitPoint -= amount;
		if (this->_hitPoint < 0)
			this->_hitPoint = 0;

		std::cout << "ClapTrap " << *this << " take " << amount << " damage " << this->_hitPoint << " Hit Point left !" << std::endl;
	}
	else
		std::cout << "ClapTrap " << *this << " cannot be attacked because he has no more Hit Point left !" << std::endl;

	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (this->_hitPoint == 0)
		std::cout << "ClapTrap " << *this << " can't be repaired because he has no more Hit Point left !" << std::endl;
	else if ( this->_energyPoint == 0)
		std::cout << "ClapTrap " << *this << " can't be repaired because he has no more Energy Point left !" << std::endl;
	else {

		this->_energyPoint--;
		this->_hitPoint += amount;		
		std::cout << "ClapTrap " << *this << " repaired " << this->_hitPoint << " Hit Point left !" << std::endl;
	}

	return ;
}

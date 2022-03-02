/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:48:24 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/02 15:53:45 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {

	this->_name = "";
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	
	std::cout << "ScavTrap default constructor called" << std::endl;

	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) { 

	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap string constructor called" << std::endl;

	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap() {

	std::cout << "ScavTrap copy constructor called" << std::endl;

	*this = src;

	return ;
}

ScavTrap::~ScavTrap(void){

	std::cout << "ScavTrap destructor called" << std::endl;

	return ;
}

std::string	ScavTrap::getName(void) const {

	return this->_name;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {

	std::cout << "ScavTrap copy assignment operator called" << std::endl;

	if (&rhs != this)
	{
		this->_name = rhs.getName();
	}

	return *this;
}

std::ostream	&operator<<(std::ostream &o, ScavTrap const &rhs) {

	o << rhs.getName();

	return o;
}


void	ScavTrap::attack(const std::string &target) {

	if (this->_hitPoint == 0)
		std::cout << "ScavTrap " << *this << " can't attack " << target << " because he has no more Hit Point left !" << std::endl;
	else if ( this->_energyPoint == 0)
		std::cout << "ScavTrap " << *this << " can't attack " << target << " because he has no more Energy Point left !" << std::endl;
	else {

		this->_energyPoint--;
		std::cout << "ScavTrap " << *this << " attacks " << target << " causing " << this->_attackDamage << " points of damage !" << std::endl;
	}

	return ;
}

void	ScavTrap::guardGate(void) {

	std::cout << "ScavTrap " << *this  <<  " is now in Gate keeper mode" << std::endl;

	return ;
}

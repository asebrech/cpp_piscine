/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:48:24 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/13 21:36:06 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {

	this->setName("");
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setAttackDamage(20);

	std::cout << "ScavTrap default constructor called" << std::endl;

	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) { 

	this->setName(name);
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setAttackDamage(20);

	std::cout << "ScavTrap string constructor called" << std::endl;

	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src) {

	std::cout << "ScavTrap copy constructor called" << std::endl;

	*this = src;

	return ;
}

ScavTrap::~ScavTrap(void){

	std::cout << "ScavTrap destructor called" << std::endl;

	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {

	std::cout << "ScavTrap copy assignment operator called" << std::endl;

	this->setName(rhs.getName());

	return *this;
}

std::ostream	&operator<<(std::ostream &o, ScavTrap const &rhs) {

	o << rhs.getName();

	return o;
}


void	ScavTrap::attack(const std::string &target) {

	if (this->getHitPoint() == 0)
		std::cout << "ScavTrap " << *this << " can't attack " << target << " because he has no more Hit Point left !" << std::endl;
	else if ( this->getEnergyPoint() == 0)
		std::cout << "ScavTrap " << *this << " can't attack " << target << " because he has no more Energy Point left !" << std::endl;
	else {

		this->setEnergyPoint(this->getEnergyPoint() - 1);
		std::cout << "ScavTrap " << *this << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage !" << std::endl;
	}

	return ;
}

void	ScavTrap::guardGate(void) {

	std::cout << "ScavTrap " << this->getName()  <<  " is now in Gate keeper mode" << std::endl;

	return ;
}

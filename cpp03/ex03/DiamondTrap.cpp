/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:33:36 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/16 16:55:08 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap(), _name("") {

	this->_energyPoint = 50;
	std::cout << "DiamondTrap default constructor called" << std::endl;

	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name), _name(name) { 

	ClapTrap::_name += "_clap_name";
	this->_energyPoint = 50;

	std::cout << "DiamondTrap string constructor called" << std::endl;

	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) {

	std::cout << "DiamondTrap copy constructor called" << std::endl;

	*this = src;

	return ;
}

DiamondTrap::~DiamondTrap(void){

	std::cout << "DiamondTrap destructor called" << std::endl;

	return ;
}

std::string	DiamondTrap::getName(void) const {

	return this->_name;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs) {

	std::cout << "DiamondTrap copy assignment operator called" << std::endl;

	this->_name = rhs.getName();
	ClapTrap::_name = rhs.getName() + "_clap_name";

	return *this;
}

std::ostream	&operator<<(std::ostream &o, DiamondTrap const &rhs) {

	o << rhs.getName();

	return o;
}

void	DiamondTrap::whoAmI(void) const {

	std::cout << "I am the DiamondTrap " << *this << std::endl;
	std::cout << "And I inherit from the ClapTrap " << ClapTrap::_name << std::endl;

	return ;
}

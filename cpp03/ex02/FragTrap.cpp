/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:34:11 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/14 18:42:31 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {

	this->_name = "";
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap default constructor called" << std::endl;

	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) { 

	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap string constructor called" << std::endl;

	return ;
}

FragTrap::FragTrap(FragTrap const &src) {

	std::cout << "FragTrap copy constructor called" << std::endl;

	*this = src;

	return ;
}

FragTrap::~FragTrap(void){

	std::cout << "FragTrap destructor called" << std::endl;

	return ;
}

std::string	FragTrap::getName(void) const {

	return this->_name;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs) {

	std::cout << "FragTrap copy assignment operator called" << std::endl;

	this->_name = rhs.getName();

	return *this;
}

std::ostream	&operator<<(std::ostream &o, FragTrap const &rhs) {

	o << rhs.getName();

	return o;
}


void	FragTrap::attack(const std::string &target) {

	if (this->_hitPoint == 0)
		std::cout << "FragTrap " << *this << " can't attack " << target << " because he has no more Hit Point left !" << std::endl;
	else if ( this->_energyPoint == 0)
		std::cout << "FragTrap " << *this << " can't attack " << target << " because he has no more Energy Point left !" << std::endl;
	else {

		this->_energyPoint--;
		std::cout << "FragTrap " << *this << " attacks " << target << " causing " << this->_attackDamage << " points of damage !" << std::endl;
	}

	return ;
}

void	FragTrap::highFivesGuys(void) {

	std::cout << "FragTrap " << *this <<  " ヘ( ^o^)ノ＼(^_^ )" << std::endl;

	return ;
}

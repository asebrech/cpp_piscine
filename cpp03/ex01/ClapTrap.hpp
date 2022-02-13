/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:25:53 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/13 21:32:48 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <string>
# include <iostream>

class	ClapTrap {

public:

	ClapTrap(void);
	ClapTrap(std::string	name);
	ClapTrap(ClapTrap const	&src);
	~ClapTrap(void);

	ClapTrap	&operator=(ClapTrap const &rhs);
	std::string	getName(void) const;

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	int	getAttackDamage(void) const;

protected:

	void	setName(std::string name);
	int	getEnergyPoint(void) const;
	void	setEnergyPoint(int);
	int	getHitPoint(void) const;
	void	setHitPoint(int);
	void	setAttackDamage(int);

private:

	std::string	_name;
	int	_hitPoint;
	int	_energyPoint;
	int	_attackDamage;

};

std::ostream	&operator<<(std::ostream &o, ClapTrap const &rhs);

#endif

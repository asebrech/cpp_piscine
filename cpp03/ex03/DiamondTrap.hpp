/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:33:25 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/03 14:24:18 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

# include <string>
# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap {

public:

	DiamondTrap(void);
	DiamondTrap(std::string	name);
	DiamondTrap(DiamondTrap const	&src);
	virtual ~DiamondTrap(void);

	DiamondTrap	&operator=(DiamondTrap const &rhs);
	std::string	getName(void) const;

	using ScavTrap::attack;

	void	whoAmI(void) const;	

private:

	std::string	_name;
};

std::ostream	&operator<<(std::ostream &o, DiamondTrap const &rhs);

#endif

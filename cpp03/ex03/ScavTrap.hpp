/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:47:37 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/14 16:40:52 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap {

public:

	ScavTrap(void);
	ScavTrap(std::string	name);
	ScavTrap(ScavTrap const	&src);
	~ScavTrap(void);

	ScavTrap	&operator=(ScavTrap const &rhs);
	std::string	getName(void) const;

	void	attack(const std::string &target);

	void	guardGate(void);	
};

std::ostream	&operator<<(std::ostream &o, ScavTrap const &rhs);

#endif

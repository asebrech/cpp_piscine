/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:47:37 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/14 16:44:34 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap {

public:

	FragTrap(void);
	FragTrap(std::string	name);
	FragTrap(FragTrap const	&src);
	~FragTrap(void);

	FragTrap	&operator=(FragTrap const &rhs);
	std::string	getName(void) const;

	void	attack(const std::string &target);

	void	highFivesGuys(void);	
};

std::ostream	&operator<<(std::ostream &o, FragTrap const &rhs);

#endif

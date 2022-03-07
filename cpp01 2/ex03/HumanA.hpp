/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:06:32 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/01 16:02:46 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <string>
# include <iostream>
# include "Weapon.hpp"

class	HumanA {

	public:

		HumanA(std::string name, Weapon	&weapon);
		~HumanA(void);

		void	attack(void) const;

	private:

		std::string	_name;	
		Weapon	&_weapon;
};

#endif

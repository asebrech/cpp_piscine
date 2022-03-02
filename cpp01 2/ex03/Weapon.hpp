/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:53:15 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/01 16:02:54 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include	<string>

class	Weapon {

	public:

		Weapon(void);
		Weapon(std::string const &type);
		~Weapon(void);

		std::string const	&getType(void) const;
		void	setType(std::string const &type);

	private:

		std::string	_type;

};

#endif

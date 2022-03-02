/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:12:15 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/01 16:45:28 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>

# include "ICharacter.hpp"
# include "AMateria.hpp"

class	Character : public ICharacter
{
	public:

		Character(void);
		Character(Character & src);
		virtual	~Character(void);

		Character	& operator=(Character const & rhs);

		Character(std::string const & name);

		virtual std::string const & getName() const;

		AMateria	* getMateria_0(void) const;
		AMateria	* getMateria_1(void) const;
		AMateria	* getMateria_2(void) const;
		AMateria	* getMateria_3(void) const;

		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

	private:

		std::string	_name;
		AMateria	*_materias[4];
		int		_index;
		AMateria	*todelete[100];
};

#endif

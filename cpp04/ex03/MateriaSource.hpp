/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:06:33 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/01 14:35:42 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include <iostream>

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class	MateriaSource : public IMateriaSource
{
	public:

		MateriaSource(void);
		MateriaSource(MateriaSource & src);
		virtual	~MateriaSource(void);

		MateriaSource	& operator=(MateriaSource const & rhs);

		AMateria	*getMateria_0(void) const;
		AMateria	*getMateria_1(void) const;
		AMateria	*getMateria_2(void) const;
		AMateria	*getMateria_3(void) const;

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);

	private:
		AMateria	*_materias[4];
};

#endif

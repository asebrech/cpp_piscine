/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 16:30:02 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/28 16:10:19 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>

# include "ICharacter.hpp"

class	AMateria
{
	public:

		AMateria(void);
		AMateria(AMateria & src);
		virtual	~AMateria(void);

		AMateria	& operator=(AMateria const & rhs);

		AMateria(std::string const & type);

		std::string const 	& getType() const;

		virtual AMateria	* clone() const = 0; 
		virtual void		use(ICharacter& target);

	protected:

		std::string	_type;

};

#endif

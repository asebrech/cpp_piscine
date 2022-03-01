/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:02:24 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/28 17:03:13 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP 
# define CURE_HPP

# include "AMateria.hpp"

class	Cure : public AMateria
{
	public:

		Cure(void);
		Cure(Cure & src);
		virtual	~Cure(void);

		Cure	& operator=(Cure const & rhs);

		Cure(std::string const & type);

		virtual Cure	* clone() const; 
		virtual void		use(ICharacter& target);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:13:44 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/28 16:58:19 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP 
# define ICE_HPP

# include "AMateria.hpp"

class	Ice : public AMateria
{
	public:

		Ice(void);
		Ice(Ice & src);
		virtual	~Ice(void);

		Ice	& operator=(Ice const & rhs);

		Ice(std::string const & type);

		virtual Ice	* clone() const; 
		virtual void		use(ICharacter& target);
};

#endif

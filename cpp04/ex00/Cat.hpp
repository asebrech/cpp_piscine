/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:49:08 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/02 12:35:52 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include <string>
# include <iostream>

# include "Animal.hpp"

class	Cat : public Animal {

public:

	Cat(void);
	Cat(std::string	type);
	Cat(Cat const	&src);
	virtual ~Cat(void);

	Cat	&operator=(Cat const &rhs);

	virtual	void	makeSound(void) const;
};

std::ostream	&operator<<(std::ostream &o, Cat const &rhs);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:49:08 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/23 16:42:10 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include <string>
# include <iostream>

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal {

public:

	Cat(void);
	Cat(Cat const	&src);
	virtual ~Cat(void);

	Cat	&operator=(Cat const &rhs);

	std::string	getType(void) const;
	Brain	*getBrain(void) const;

	virtual	void	makeSound(void) const;

private:

	Brain	*_brain;

};

std::ostream	&operator<<(std::ostream &o, Cat const &rhs);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:49:08 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/23 17:25:14 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include <string>
# include <iostream>

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal {

public:

	Dog(void);
	Dog(Dog const	&src);
	virtual ~Dog(void);

	Dog	&operator=(Dog const &rhs);

	std::string	getType(void) const;

	Brain	*getBrain(void) const;

	virtual	void	makeSound(void) const;

private:

	Brain	*_brain;

};

std::ostream	&operator<<(std::ostream &o, Dog const &rhs);

#endif

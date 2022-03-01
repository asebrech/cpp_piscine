/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:32:20 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/24 16:35:05 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <string>
# include <iostream>

class	Animal {

public:

	Animal(void);
	Animal(Animal const	&src);
	virtual ~Animal(void);

	Animal	&operator=(Animal const &rhs);

	std::string	getType(void) const;

	virtual	void	makeSound(void) const = 0;

protected:

	std::string	_type;

};

std::ostream	&operator<<(std::ostream &o, Animal const &rhs);

#endif

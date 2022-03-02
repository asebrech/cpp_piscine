/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:43:35 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/02 12:37:12 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class	WrongAnimal {

public:

	WrongAnimal(void);
	WrongAnimal(std::string	type);
	WrongAnimal(WrongAnimal const	&src);
	~WrongAnimal(void);

	WrongAnimal	&operator=(WrongAnimal const &rhs);

	std::string const	& getType(void) const;

	void	makeSound(void) const;

protected:

	std::string	_type;

};

std::ostream	&operator<<(std::ostream &o, WrongAnimal const &rhs);

#endif

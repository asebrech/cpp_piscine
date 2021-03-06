/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:49:08 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/02 12:37:31 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

# include <string>
# include <iostream>

# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {

public:

	WrongCat(void);
	WrongCat(std::string	type);
	WrongCat(WrongCat const	&src);
	~WrongCat(void);

	WrongCat	&operator=(WrongCat const &rhs);

	void	makeSound(void) const;
};

std::ostream	&operator<<(std::ostream &o, WrongCat const &rhs);

#endif

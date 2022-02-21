/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:30:55 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/17 19:48:45 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <string>
# include <iostream>

class	Brain {

public:

	Brain(void);
	Brain(std::string	str);
	Brain(Brain const	&src);
	virtual ~Brain(void);

	Brain	&operator=(Brain const &rhs);

	std::string	*getIdeas(void) const;

protected:

	std::string	*_ideas;
};

std::ostream	&operator<<(std::ostream &o, Brain const &rhs);

#endif

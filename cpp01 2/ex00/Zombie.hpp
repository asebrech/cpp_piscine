/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:03:35 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/03 11:54:01 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <string>

class	Zombie {

public:

	Zombie(std::string str);
	~Zombie(void);

	void	announce(void) const;

private:

	std::string	name;

};

Zombie* newZombie( std::string name );

void randomChump( std::string name );

#endif

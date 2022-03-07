/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:03:35 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/03 13:08:57 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <string>

class	Zombie {

public:

	Zombie(void);

	Zombie(std::string str);
	~Zombie(void);

	void	announce(void) const;
	void	setName(std::string name);

private:

	std::string	name;

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:55:56 by asebrech          #+#    #+#             */
/*   Updated: 2022/01/31 11:44:09 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {

	Zombie	*newzombie= new Zombie[N];

	for (int i = 0; i < N; i++)
		newzombie[i] = Zombie(name);

	return newzombie;
}

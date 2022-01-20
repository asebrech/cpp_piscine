/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:06:35 by asebrech          #+#    #+#             */
/*   Updated: 2022/01/18 13:07:59 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <locale>

int	main(int ac, char **av)
{
	int	i = 1;
	std::locale loc;

	if (ac > 1) {

		while (i < ac) {

			for (int j = 0; av[i][j]; j++) {

				std::cout << std::toupper(av[i][j], loc); 
				
			}
			i++;
		}
		std::cout << std::endl; 
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}

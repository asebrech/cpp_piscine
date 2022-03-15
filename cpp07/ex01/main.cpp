/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:16:53 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/15 10:55:34 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp" 

int	main(void)
{
	char	str[] = "this is the way";

	std::cout << "Testing with char * :" << std::endl;
	iter(str, 15, &ft_print);
	std::cout << std::endl;

	std::cout << std::endl;

	std::cout << "Testing with int * :" << std::endl;
	int	tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	iter(tab, 10, &ft_print);
	std::cout << std::endl;

	return (0);
}

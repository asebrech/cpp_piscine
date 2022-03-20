/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:16:53 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/20 17:22:57 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp" 
#include <array>
#include <vector>

int	main(void)
{
	std::array<int, 5> myarray = {6, 16, 77, -34, 50};

	check_it(easyfind(myarray, 77), myarray.end());
	check_it(easyfind(myarray, 50), myarray.end());
	check_it(easyfind(myarray, 34), myarray.end());

	std::cout << std::endl;
	
	std::vector<int> myvector;

	myvector.push_back(42);
	myvector.push_back(117);
	myvector.push_back(21);

	check_it(easyfind(myvector, 42), myvector.end());
	check_it(easyfind(myvector, 117), myvector.end());
	check_it(easyfind(myvector, -21), myvector.end());

	return (0);
}

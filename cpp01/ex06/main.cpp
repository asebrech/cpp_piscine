/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:11:41 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/03 11:37:27 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int ac, char **av) {

	if (ac == 2) {

		Karen	karen;
		karen.karenfilter(av[1]);
	}
	else {
		std::cerr << "Karen only complain with one argument !"
			<< std::endl;
		return 1;
	}
	return 0;
}

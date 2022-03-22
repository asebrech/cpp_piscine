/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:16:53 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/23 00:04:25 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	randomNbr () { return (std::rand()%100); }

int	main(void)
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;

	std::vector<int>	vect(10);

	generate(vect.begin(), vect.end(), randomNbr);

	Span	test(10);

	test.addByIt(vect.begin(), vect.end());

	std::cout << test << std::endl;
	std::cout << "shortest : "  << test.shortestSpan() << std::endl;
	std::cout << "longest : " << test.longestSpan() << std::endl;

	std::cout << std::endl;

	std::cout << "testing with 20000 numbers" << std::endl;
	std::vector<int>	vect2(20000);

	generate(vect2.begin(), vect2.end(), randomNbr);

	Span	test2(20000);

	test2.addByIt(vect2.begin(), vect2.end());

	std::cout << "shortest : " << test2.shortestSpan() << std::endl;
	std::cout << "longest : " << test2.longestSpan() << std::endl;

	return (0);
}

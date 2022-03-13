/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:16:53 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/13 16:45:17 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp" 

Base	*generate(void)
{
	srand(time(NULL));

	switch (rand() % 3)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
	}

	return (nullptr);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Class A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Class B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Class C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		Base test = dynamic_cast<A &>(p);
		std::cout << "Class A" << std::endl;
	}
	catch (std::bad_cast &) {}
	try
	{
		Base test = dynamic_cast<B &>(p);
		std::cout << "Class B" << std::endl;
	}
	catch (std::bad_cast &) {}
	try
	{
		Base test = dynamic_cast<C &>(p);
		std::cout << "Class C" << std::endl;
	}
	catch (std::bad_cast &) {}
}

int	main(void)
{
	Base	*test = generate();

	std::cout << "Test with Pointer :" << std::endl;
	identify(test);

	std::cout << std::endl << "Test with Reference :" << std::endl;
	identify(*test);

	delete(test);	
	
	return (0);
}

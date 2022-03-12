/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:16:53 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/12 15:53:06 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <stdexcept>
#include <cmath>
//#include "Convert.hpp"

int	get_int(std::string const &str)
{
	int test = std::stoi(str);
	(void)test;
	size_t	idx = 0;
	double d = std::stod(str, &idx);

	if (idx < str.length() && str.at(idx) == 'f')
	{
		float f = std::stof(str);
		return (static_cast<int>(f));
	}

	return (static_cast<int>(d));
}

void	print_char(std::string const &str)
{
	char	c = static_cast<char>(get_int(str));

	if (std::isprint(c))
		std::cout << "char: '" << c << "'" <<std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void	print_int(std::string const &str)
{
	int	i = get_int(str);

	std::cout << "int: " << i << std::endl;
}

void	print_float(std::string const &str)
{
	float f = std::stof(str);

	std::cout << "float: " << f;

	if (std::roundf(f) == f)
		std::cout << ".0";

	std::cout << "f" << std::endl;
}

void	print_double(std::string const &str)
{
	double d = std::stod(str);

	std::cout << "double: " << d;

	if (std::round(d) == d)
		std::cout << ".0";

	std::cout << std::endl;
}

void	check_error(void (*fn)(std::string const &), std::string const &str, std::string const &type)
{
	try
	{
		fn(str);
	}
	catch (std::out_of_range &)
	{
		std::cout << type  << ": Non displayable" << std::endl;
	}
	catch (std::invalid_argument &)
	{
		std::cout << type  << ": impossible" << std::endl;
	}
}

int	ischar(std::string const &str)
{
	if (str.length() == 1 && !std::isdigit(str.at(0)))
	{
		std::cout << "char: '" << str.at(0) << "'" <<std::endl;
		std::cout << "int: " << static_cast<int>(str.at(0)) << std::endl;
		std::cout << "float: " << static_cast<float>(str.at(0)) << ".0f"  << std::endl;
		std::cout << "double: " << static_cast<double>(str.at(0)) << ".0" << std::endl;

		return (1);
	}

	return (0);
}

int	main(int ac, char **av)
{

	if (ac == 2)
	{
		std::string const	str(av[1]);
		if (!ischar(str))
		{
			check_error(&print_char, str, std::string("char"));
			check_error(&print_int, str, std::string("int"));
			check_error(&print_float, str, std::string("float"));
			check_error(&print_double, str, std::string("double"));
		}
	}
	else
	{
		std::cout << "convert need one argument" << std::endl;
	}

	return (0);
}

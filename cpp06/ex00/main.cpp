/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:16:53 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/14 10:09:58 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <stdexcept>

void	print_char(std::string const &str)
{
	std::stoi(str);
	double d = std::stod(str);
	char	c = -1;

	if (d >= std::numeric_limits<char>::min() && d <= std::numeric_limits<char>::max())
		c = static_cast<char>(d);

	if (std::isprint(c))
		std::cout << "char: '" << c << "'" <<std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void	print_int(std::string const &str)
{
	std::stoi(str);

	std::cout << "int: " << static_cast<int>(std::stod(str)) << std::endl;
}

void	print_float(std::string const &str)
{
	std::stof(str);

	std::cout << "float: " << static_cast<float>(std::stod(str)) << "f" << std::endl;
}

void	print_double(std::string const &str)
{
	double d = std::stod(str);

	std::cout << "double: " << d << std::endl;
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
		char c = str.at(0);

		std::cout << "char: '" << c << "'" <<std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << "f"  << std::endl;
		std::cout << "double: " << static_cast<double>(c) << std::endl;

		return (1);
	}

	return (0);
}

int	main(int ac, char **av)
{

	if (ac == 2)
	{
		std::string const	str(av[1]);
		std::cout << std::fixed << std::setprecision(1);
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

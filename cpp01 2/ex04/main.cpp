/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 21:15:09 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/03 13:51:01 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int	main(int ac, char **av) {

	if (ac == 4) {

		std::ifstream	ifs(av[1]);
		std::stringstream buffer;
		buffer << ifs.rdbuf();
		ifs.close();

		std::string	stream(buffer.str());
		if (stream.empty()) {
			std::cout << "Error" << std::endl << "wrong filename or empty file" << std::endl;
			return 1;
		}
		std::string	file(av[1]);
		std::string	needle(av[2]);
		std::string	replace(av[3]);

		std::size_t	found = stream.find(needle);
		while (found != std::string::npos) {

			stream.erase (found, needle.length());
			stream.insert (found, replace);
			found = stream.find(needle, found + 1);
		}
		file += ".replace";
		std::ofstream	ofs(file);
		ofs << stream;
		ofs.close();
	}
	else {
		std::cout << "Error" << std::endl;
		std::cout << "replace takes three parameters in the following order: a filename and two strings, s1 and s2" << std::endl;
		return 1;
	}
	return 0;
}

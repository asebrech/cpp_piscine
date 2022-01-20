/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iphone.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:07:10 by asebrech          #+#    #+#             */
/*   Updated: 2022/01/20 18:39:48 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iphone.hpp"

void	print_full_contact(Contact *contact, int a)
{
	std::cout << GRN "first name     : " BLU << contact[a - 1].getFname() << std::endl << std::endl;
	std::cout << GRN "last name      : " BLU  << contact[a - 1].getLname() << std::endl << std::endl;
	std::cout << GRN "nickname       : " BLU << contact[a - 1].getNname() << std::endl << std::endl;
	std::cout << GRN "phone number   : " BLU << contact[a - 1].getPhone() << std::endl << std::endl;
	std::cout << GRN "darkest secret : " BLU << contact[a - 1].getDark() << std::endl << std::endl;
	std::cout << RESET;
}

void	format(std::string str)
{
	char buffer[20];

  	std::size_t length = str.copy(buffer,10,0);
  	buffer[length]='\0';
	if (length == 10)
		buffer[length - 1] = '.';
	std::cout << std::setiosflags (std::ios::right);
 	std::cout << std::setw(10);
	std::cout << buffer;
}

int	print_contact(Contact *contact, int i) {

	int		j = 0;	
	static	int	a = 0;
	std::string	cmd;

	std::cout << CLEAR;
	std::cout << RED UNDER "iPhone" RESET << std::endl << std::endl;
	if (a) {
		std::cout << BLU "Choose a Contact between 1 and " << i << RESET << std::endl << std::endl; 
		a--;
	}
	while (j < i) {
		
		std::cout << RED << j + 1 << GRN " : ";
		format(contact[j].getFname()); std::cout << " | ";
		format(contact[j].getLname()); std::cout << " | ";
		format(contact[j].getNname());
		std::cout << std::endl << std::endl << RESET;
		j++;
	}
	std::getline(std::cin, cmd);
	if (cmd.length() == 1 && cmd.at(0) >= 49 && cmd.at(0) <= i + 49 - 1)
		return (int)cmd.at(0) - 48;
	else
		a++;
	return print_contact(contact, i);
}

void	iphone(Contact *contact) {	

	static int	i = 0;
	static int	a = 0;
	static int	b = 0;
	std::string	cmd;
	std::string	tmp;

	std::cout << CLEAR;
	std::cout << RED UNDER "iPhone" << std::endl << std::endl;
	if (a)	{
		print_full_contact(contact, a);
		a = 0;
	}	
	if (b) {
		std::cout << BLU "iPhone storage is full" << std::endl << "Would you like to buy some iCloud storage ?" << std::endl << std::endl;
		b--;
	}
	std::cout << GRN "ADD SEARCH or EXIT" RESET << std::endl << std::endl;
	std::getline(std::cin, cmd);
	if (cmd.compare("EXIT") == 0)
		exit(0);
	else if (cmd.compare("ADD") == 0 && i != 8) {

		std::cout << CLEAR;
		std::cout << RED UNDER "iPhone" << std::endl << std::endl << GRN "first name :" RESET << std::endl << std::endl;
		std::getline(std::cin, tmp);
		contact[i].setFname(tmp);

		std::cout << std::endl << GRN "last name :" RESET << std::endl << std::endl;
		std::getline(std::cin, tmp);
		contact[i].setLname(tmp);

		std::cout<< std::endl << GRN "nickname :" RESET << std::endl << std::endl;
		std::getline(std::cin, tmp);
		contact[i].setNname(tmp);

		std::cout << std::endl << GRN "phone number :" RESET << std::endl << std::endl;
		std::getline(std::cin, tmp);
		contact[i].setPhone(tmp);
		
		std::cout << std::endl << GRN "darkest secret :" RESET << std::endl << std::endl;
		std::getline(std::cin, tmp);
		contact[i].setDark(tmp);

		i++;
	}
	else if (cmd.compare("ADD") == 0 && i == 8)
		b++;
	else if (cmd.compare("SEARCH") == 0) {
		
		a = print_contact(contact, i);
	}
	iphone(contact);
}

int	main(void) {

	Contact contact[8];

	iphone(contact);

	return 0;
}

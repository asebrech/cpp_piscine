/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:54:43 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/03 13:58:35 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

#define	CALL_MEMBER_FN(object,ptrToMember) ((object)->*(ptrToMember))

Karen::Karen(void) {

	return ;
}

Karen::~Karen(void) {

	return ;
}

void	Karen::complain(std::string level) {

	typedef	void	(Karen::*KarenMemFn)(void);

	KarenMemFn	relou[] = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};


	
	for(int i = 0; i < 4; i++) {
 
		if (level.compare(Karen::lvl[i]) == 0)
			CALL_MEMBER_FN(this, relou[i]) ();
		/*	same as : (this->*relou[i])();		*/
	}
}

void	Karen::debug(void) {

	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for i my 7XL-double-cheese"
		"-triple-pickle-special-ketchup burger. I really do!"
		<< std::endl << std::endl;
}

void	Karen::info(void) {

	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money."
		" You didn’t put enough bacon in my burger! If you did,"
		" I wouldn’t be asking for more!"
		<< std::endl << std::endl;
}

void	Karen::warning(void) {

	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."
		" I’ve been coming for years whereas you started working"
		" here since last month."
		<< std::endl << std::endl;
}

void	Karen::error(void) {

	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to"
		" the manager now."
		<< std::endl << std::endl;
}

std::string Karen::lvl[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

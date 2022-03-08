/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:25:03 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/08 13:39:21 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP 
# define ROBOTOMY_REQUEST_FORM_HPP

# include <cstdlib>
# include <string>
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class	RobotomyRequestForm : public Form
{
	public:

		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm & src);
		virtual	~RobotomyRequestForm(void);

		RobotomyRequestForm	& operator=(RobotomyRequestForm const & rhs);

		std::string const	&getTarget(void) const;

	private:

		virtual void	beExecuted(void) const;

		RobotomyRequestForm(void);

		std::string	_target;
};

#endif

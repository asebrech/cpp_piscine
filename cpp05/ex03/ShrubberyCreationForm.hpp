/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:51:53 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/08 15:54:08 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP 
# define SHRUBBERY_CREATION_FORM_HPP

# include <string>
# include <iostream>
# include <stdexcept>
# include <fstream>
# include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	public:

		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm & src);
		virtual	~ShrubberyCreationForm(void);

		ShrubberyCreationForm	& operator=(ShrubberyCreationForm const & rhs);

		std::string const	&getTarget(void) const;

	private:

		virtual void	beExecuted(void) const;

		ShrubberyCreationForm(void);

		std::string	_target;
};

#endif

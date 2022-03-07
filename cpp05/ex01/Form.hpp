/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:00:14 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/07 20:33:02 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP 
# define FORM_HPP

# include <string>
# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class	Form
{
	public:

		Form(Form & src);
		virtual	~Form(void);

		Form	& operator=(Form const & rhs);

		Form(std::string const & name, int const gradeSign, int const gradeExec);

		std::string const 	& getName() const;
		bool	getForm() const;
		int	getGradeSign() const;
		int	getGradeExec() const;

		void	beSigned(Bureaucrat const &toto);

		class	GradeTooHighException : public std::exception
		{
		public:
			virtual const char *what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
		public:
			virtual const char *what() const throw();
		};

	private:

		Form(void);

		std::string	_name;
		bool	_form;
		int	_gradeSign;
		int	_gradeExec;
};

std::ostream	&operator<<(std::ostream &o, Form const &i);

#endif

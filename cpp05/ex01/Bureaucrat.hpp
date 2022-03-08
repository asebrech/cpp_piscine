/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:22:54 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/08 10:15:20 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <stdexcept>
# include "Form.hpp" 

class	Form;

class	Bureaucrat
{
	public:

		Bureaucrat(void);
		Bureaucrat(Bureaucrat & src);
		virtual	~Bureaucrat(void);

		Bureaucrat	& operator=(Bureaucrat const & rhs);

		Bureaucrat(std::string const & name, int const grade);

		std::string const 	& getName() const;
		int	getGrade() const;

		void	promote(void);
		void	demote(void);

		void	signForm(Form &form) const;

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

	protected:


		std::string	_name;
		int	_grade;
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i);

#endif

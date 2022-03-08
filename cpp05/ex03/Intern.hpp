/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:05:31 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/08 19:43:54 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include <iostream>
# include <stdexcept>
# include "Form.hpp" 
# include "ShrubberyCreationForm.hpp" 
# include "RobotomyRequestForm.hpp" 
# include "PresidentialPardonForm.hpp" 

class	Form;

class	Intern
{
	public:

		Intern(void);
		Intern(std::string const &name, std::string const &target);
		Intern(Intern & src);
		virtual	~Intern(void);

		Intern	& operator=(Intern const & rhs);

		Form	*makeForm(std::string const &name, std::string const &target);

		Form	*makeShrubbery(std::string const &target) const;
		Form	*makeRobotomy(std::string const &target) const;
		Form	*makePresidential(std::string const &target) const;

		class	InvalidFormException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		static std::string	forms[];
};

#endif

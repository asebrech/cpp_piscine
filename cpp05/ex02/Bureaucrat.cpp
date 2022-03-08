/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:26:30 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/08 19:51:29 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name (""), _grade(0)
{
	//std::cout << "Bureaucrat default constructor called" << std::endl;

	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat & src) : _name(""), _grade(0)
{
	//std::cout << "Bureaucrat copy constructor called" << std::endl;

	*this = src;

	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	//std::cout << "Bureaucrat destructor called" << std::endl;

	return ;
}

Bureaucrat	& Bureaucrat::operator=(Bureaucrat const & rhs) 
{
	//std::cout << "Bureaucrat copy assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_grade = rhs.getGrade();
	}

	return (*this);	
}

Bureaucrat::Bureaucrat(std::string const & name, int const grade) : _name(name)
{
	//std::cout << "Bureaucrat string constructor called" << std::endl;

	if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
		this->_grade = 0;
	}
	else if (grade <= 0)
	{
		throw Bureaucrat::GradeTooHighException();
		this->_grade = 0;
	}
	else
		this->_grade = grade;

	return ;
}

std::string const	& Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::demote(void)
{
	if ((this->_grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

void	Bureaucrat::promote(void)
{
	if ((this->_grade - 1) <= 0)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << this->_name << " couldn't sign " << form.getName() << " because of a grade too low" << std::endl;
	}
}

void	Bureaucrat::execute(Form &form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << this->_name << " couldn't execute " << form.getName() << " because of a grade too low" << std::endl;
	}
	catch (Form::FormNotSignedException &e)
	{
		std::cout << this->_name << " couldn't execute " << form.getName() << " because of a unsigned form" << std::endl;
	}
}

const char 	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error : grade too high");
}

const char 	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error : grade too low");
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat	const &i)
{
	o << i.getName() << " bureaucrat grade " << i.getGrade();

	return (o);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:10:18 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/08 12:28:05 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name (""), _form(false), _gradeSign(0), _gradeExec(0)
{
	//std::cout << "Form default constructor called" << std::endl;

	return ;
}

Form::Form(Form & src) : _name(""), _form(false), _gradeSign(0), _gradeExec(0)
{
	//std::cout << "Form copy constructor called" << std::endl;

	*this = src;

	return ;
}

Form::~Form(void)
{
	//std::cout << "Form destructor called" << std::endl;

	return ;
}

Form	& Form::operator=(Form const & rhs) 
{
	//std::cout << "Form copy assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_form = rhs.getForm();
		this->_gradeSign = rhs.getGradeSign();
		this->_gradeExec = rhs.getGradeExec();
	}

	return (*this);	
}

Form::Form(std::string const & name, int const gardeSign, int const gradeExec) : _name(name), _form(false)
{
	//std::cout << "Form string constructor called" << std::endl;

	if (gardeSign > 150)
	{
		throw Form::GradeTooLowException();
		this->_gradeSign = 0;
	}
	else if (gardeSign <= 0)
	{
		throw Form::GradeTooHighException();
		this->_gradeSign = 0;
	}
	else
		this->_gradeSign = gardeSign;

	if (gradeExec > 150)
	{
		throw Form::GradeTooLowException();
		this->_gradeExec = 0;
	}
	else if (gradeExec <= 0)
	{
		throw Form::GradeTooHighException();
		this->_gradeExec = 0;
	}
	else
		this->_gradeExec = gradeExec;

	return ;
}

std::string const	& Form::getName() const
{
	return (this->_name);
}

bool	Form::getForm() const
{
	return (this->_form);
}

int	Form::getGradeSign() const
{
	return (this->_gradeSign);
}

int	Form::getGradeExec() const
{
	return (this->_gradeExec);
}

void	Form::setName(std::string const &name)
{
	this->_name = name;
}

void	Form::setForm(bool form)
{
	this->_form = form;
}

void	Form::setGradeSign(int gradeSign)
{
	this->_gradeSign = gradeSign;
}

void	Form::setGradeExec(int gradeExec)
{
	this->_gradeExec = gradeExec;
}

const char 	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char 	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char 	*Form::FormNotSignedException::what() const throw()
{
	return ("Form is not signed");
}

void	Form::beSigned(Bureaucrat const &toto)
{
	if (toto.getGrade() <= this->_gradeSign)
		this->_form = true;
	else
		throw Form::GradeTooLowException();
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (this->_form)
	{
		if (executor.getGrade() <= this->_gradeExec)
			this->beExecuted();
		else
			throw Form::GradeTooLowException();
	}
	else
		throw Form::FormNotSignedException();
}

std::ostream	&operator<<(std::ostream &o, Form	const &i)
{
	o << "Form : " << i.getName() << " | Required to sign : " << i.getGradeSign()
		<< " | Required to execute : " << i.getGradeExec() << " | Status : ";
	if (i.getForm())
		o << "signed";
	else
		o << "unsigned";

	return (o);
}

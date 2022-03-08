/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:37:06 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/08 15:40:14 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include <string>
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	public:

		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm & src);
		virtual	~PresidentialPardonForm(void);

		PresidentialPardonForm	& operator=(PresidentialPardonForm const & rhs);

		std::string const	&getTarget(void) const;

	private:

		virtual void	beExecuted(void) const;

		PresidentialPardonForm(void);

		std::string	_target;
};

#endif

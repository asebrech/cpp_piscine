/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:43:14 by asebrech          #+#    #+#             */
/*   Updated: 2022/01/20 17:01:21 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <string>

class Contact {

public:

	Contact(void);
	~Contact(void);

	
	std::string	getFname(void) const;
	void		setFname(std::string str);

	std::string	getLname(void) const;
	void		setLname(std::string str);

	std::string	getNname(void) const;
	void		setNname(std::string str);

	std::string	getPhone(void) const;
	void		setPhone(std::string str);

	std::string	getDark(void) const;
	void		setDark(std::string str);
private:
	std::string	_fname;
	std::string	_lname;
	std::string	_nname;
	std::string	_phone;
	std::string	_dark;
};

#endif

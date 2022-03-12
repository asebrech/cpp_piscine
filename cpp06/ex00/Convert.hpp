/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:59:25 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/11 19:22:12 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>
# include <iostream>

class	Convert
{
	public:

		Convert(void);
		Convert(Convert & src);
		virtual	~Convert(void);

		Convert	& operator=(Convert const & rhs);

	private:

	enum	{ _float, _char };

	bool	_type[4];
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:54:59 by asebrech          #+#    #+#             */
/*   Updated: 2022/02/03 11:22:59 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>

class	Karen {

	public:

		Karen(void);
		~Karen(void);

		void	complain(std::string level);
		void	karenfilter(std::string level);

	private:

		static std::string	lvl[];

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif

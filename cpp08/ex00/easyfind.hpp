/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:54:56 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/20 17:12:59 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>

template <typename T>
typename T::iterator	easyfind(T &type, int const &nbr)
{
	typename T::iterator	it = std::find(type.begin(), type.end(), nbr);

	return(it);
}

template <typename T>
void	check_it(T it, T end)
{
	if (it != end)
		std::cout << "First occurrence founded : " << *it  << std::endl;
	else
		std::cout << "No occurence founded" << std::endl;
}

#endif

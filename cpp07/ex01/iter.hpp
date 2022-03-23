/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:18:56 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/23 17:07:45 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T *ptr, int len, void (*fn)(T const &))
{
	for (int i = 0; i < len; i++)
	{
		fn(ptr[i]);
	}
}

template <typename T>
void	ft_print(T arg)
{
	std::cout << arg;
}

#endif

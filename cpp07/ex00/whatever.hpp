/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:36:19 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/14 16:27:49 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T >
void	swap(T &x, T &y)
{
	T	tmp = x;

	x = y;
	y = tmp;
}

template <typename T >
T	min(T const &x, T const &y)
{
	return ((x<y) ? x : y);
}

template <typename T >
T	max(T const &x, T const &y)
{
	return ((x>y) ? x : y);
}

#endif

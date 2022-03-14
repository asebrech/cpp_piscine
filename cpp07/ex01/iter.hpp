/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:18:56 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/14 18:50:16 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void	iter(T *ptr, int len, void (*fn)(T *ptr))
{
	for (int i = 0; i < len; i++)
	{
		fn(ptr[i]);
	}
}

#endif

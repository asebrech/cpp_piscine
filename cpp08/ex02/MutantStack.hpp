/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:59:50 by asebrech          #+#    #+#             */
/*   Updated: 2022/04/19 15:35:02 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{
	public:

		MutantStack<T>(void) {}
		MutantStack<T>(MutantStack<T> const &src)
		{
			*this = src;
		}
		virtual ~MutantStack<T>(void) {}

		MutantStack<T>	&operator=(MutantStack<T> const &rhs)
		{
			if (this != &rhs)
			{
				std::stack<T>::operator=(rhs);
			}

			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin() { return std::stack<T>::c.begin(); }
		iterator	end() { return std::stack<T>::c.end(); }
};

#endif

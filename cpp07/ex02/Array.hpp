/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:08:28 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/23 13:29:37 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class	Array {

	public:

		Array<T>(void) : _array(NULL), _size(0) {}
		Array<T>(unsigned int n) : _array(new T[n]) , _size(n) {}
		Array<T>(Array<T> const &src) : _array(NULL), _size(0)
		{
			*this = src;
		}
		virtual ~Array<T>(void)
		{
			delete [] this->_array;
		}

		Array<T>	&operator=(Array<T> const &rhs)
		{
			if (this != &rhs)
			{
				delete [] this->_array;
				this->_size = rhs.size();
				this->_array = new T[this->_size];
				for (unsigned int i = 0; i < this->_size; i++)
					this->_array[i] = rhs[i];
			}

			return (*this);
		}

		T	&operator[](unsigned int const idx) const
		{
			if (idx >= this->_size)
				throw std::range_error("Error: Index");
			return (this->_array[idx]);
		}

		unsigned int	size(void) const
		{
			return (this->_size);
		}

	private:

		T	*_array;
		unsigned int	_size;
};

#endif

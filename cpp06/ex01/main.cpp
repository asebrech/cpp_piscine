/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:16:53 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/14 11:55:42 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp" 

uintptr_t	sterialize(data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<data *>(raw));
}

int	main(void)
{
	data	*test1 = new data;

	data	*test2 = deserialize(sterialize(test1)); 

	test1->data = "This is the way";

	std::cout << "test1 ptr : " << test1 << " | content : " << test1->data << std::endl;
	std::cout << "test2 ptr : " << test2 << " | content : " << test2->data  << std::endl;

	delete	test1;

	return (0);
}

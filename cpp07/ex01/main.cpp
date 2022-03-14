/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:16:53 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/14 18:46:12 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp" 
# include <iostream>

int	main(void)
{

	char	str[] = "this is the way";

	iter(str, 15, &std::toupper);

	std::cout << str << std::endl;

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:42:29 by asebrech          #+#    #+#             */
/*   Updated: 2022/03/13 16:24:18 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

# include <string>
# include <iostream>
# include <cstdlib>

class Base { public: virtual ~Base(void){} };

class A : public Base {};

class B : public Base {};

class C : public Base {};

#endif

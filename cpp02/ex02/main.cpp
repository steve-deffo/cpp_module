/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 13:43:32 by desteve           #+#    #+#             */
/*   Updated: 2023/06/29 13:43:34 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <bitset>

int main( void )
{
	Fixed a;
	Fixed b( 5.05f );
	Fixed c( 2 );

	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;

	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;

	std::cout << "b + c = " << Fixed( b + c ) << std::endl;
	std::cout << "b - c = " << Fixed( b - c ) << std::endl;
	std::cout << "c - b = " << Fixed( c - b ) << std::endl;
	std::cout << "b * c = " << Fixed( b * c ) << std::endl;
	std::cout << "b / c = " << Fixed( b / c ) << std::endl;
	std::cout << "c / b = " << Fixed( c / b ) << std::endl;

	std::cout << "max(b, c) = " << Fixed::max(b, c) << std::endl;
	std::cout << "min(b, c) = " << Fixed::min(b, c) << std::endl;

	return 0;
}
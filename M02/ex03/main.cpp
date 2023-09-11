/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegrand <tlegrand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 00:21:50 by tlegrand          #+#    #+#             */
/*   Updated: 2023/09/10 19:04:01 by tlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <bitset>

int main( void )
{
	Fixed c(7.5f);
	Fixed d(-2.75f);

	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "c + d is " << c + d << std::endl;
	std::cout << "c - d is " << std::endl << c - d << std::endl;
	std::cout << "c * d is " << c * d << std::endl;
	std::cout << "c / d is " << c / d << std::endl;
	std::cout << "min is " << Fixed::min( c, d ) << std::endl;
	
	std::cout << "c == d " << (c == d) << std::endl;
	std::cout << "c != d " << (c != d) << std::endl;
	std::cout << "c < d " << (c < d) << std::endl;
	std::cout << "c > d " << (c > d) << std::endl;
	std::cout << "c <= d " << (c <= d) << std::endl;
	std::cout << "c >= d " << (c >= d) << std::endl;

	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
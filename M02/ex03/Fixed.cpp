/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegrand <tlegrand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:06:22 by tlegrand          #+#    #+#             */
/*   Updated: 2023/09/12 15:15:18 by tlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>
#include <bitset>

const int	Fixed::_point = 8;


//	Constructor
Fixed::Fixed(void) : _rawbits(0) {};

Fixed::Fixed(const Fixed& F) {this->setRawBits(F.getRawBits());};

Fixed::Fixed(const int value) {this->setRawBits(value << this->_point);};

Fixed::Fixed(const float value) 
{
	this->setRawBits(static_cast<int>(roundf(value * (1 << this->_point))));
};

Fixed::~Fixed(void) {};


//	Operator overload
Fixed&	Fixed::operator=(const Fixed& F) 
{
	if (this == &F)
		return (*this);
	this->setRawBits(F.getRawBits());
	return (*this);
};

Fixed	Fixed::operator+(const Fixed& F) const
{
	Fixed	ret;
	
	ret.setRawBits(this->getRawBits() + F.getRawBits());
	return (ret);
};

Fixed	Fixed::operator-(const Fixed& F) const
{
	Fixed	ret;

	ret.setRawBits(this->getRawBits() + (~F.getRawBits() + 1));
	return (ret);
};

Fixed	Fixed::operator*(const Fixed& F) const
{
	Fixed	ret;
	
	ret.setRawBits((this->getRawBits() * F.getRawBits()) >> this->_point);
	return (ret);
};

Fixed	Fixed::operator/(const Fixed& F) const
{
	Fixed	ret;
	
	ret.setRawBits((this->getRawBits() << this->_point) / F.getRawBits());
	return (ret);
};

Fixed&	Fixed::operator++(void) 
{
	this->_rawbits += 1;
	return (*this);
};

Fixed	Fixed::operator++(int) 
{
	Fixed	tmp(*this);

	this->_rawbits += 1;
	return (tmp);
};

Fixed&	Fixed::operator--(void) 
{
	this->_rawbits -= 1;
	return (*this);
};

Fixed	Fixed::operator--(int) 
{
	Fixed	tmp(*this);

	this->_rawbits -= 1;
	return (tmp);
};


bool	Fixed::operator>(const Fixed& F) const 
{
	return (this->getRawBits() > F.getRawBits());
};

bool	Fixed::operator<(const Fixed& F) const 
{
	return (this->getRawBits() < F.getRawBits());
};

bool	Fixed::operator>=(const Fixed& F) const 
{
	return (this->getRawBits() >= F.getRawBits());
};

bool	Fixed::operator<=(const Fixed& F) const 
{
	return (this->getRawBits() <= F.getRawBits());
};

bool	Fixed::operator==(const Fixed& F) const 
{
	return (this->getRawBits() == F.getRawBits());
};

bool	Fixed::operator!=(const Fixed& F) const 
{
	return (this->getRawBits() != F.getRawBits());
};


//	Private member acces functions
int	Fixed::getRawBits(void) const {return(this->_rawbits);};

void	Fixed::setRawBits(int const raw) {this->_rawbits = raw;};


//	Public functions
int	Fixed::toInt(void) const
{
	return (this->_rawbits >> this->_point);
};

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_rawbits) / (1 << this->_point));
};

Fixed&	Fixed::min(Fixed& F1, Fixed& F2) 
{
	if (F1 < F2)
		return (F1);
	return (F2);
};

const Fixed&	Fixed::min(const Fixed& F1, const Fixed& F2) 
{
	if (F1 < F2)
		return (F1);
	return (F2);
};

Fixed&	Fixed::max(Fixed& F1, Fixed& F2) 
{
	if (F1 > F2)
		return (F1);
	return (F2);
};

const Fixed&	Fixed::max(const Fixed& F1, const Fixed& F2) 
{
	if (F1 > F2)
		return (F1);
	return (F2);
};

//	Other
std::ostream&	operator<<(std::ostream& os, const Fixed& F)
{
	os << F.toFloat();
	return (os);
};

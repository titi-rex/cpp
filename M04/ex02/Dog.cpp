/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegrand <tlegrand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:09:52 by tlegrand          #+#    #+#             */
/*   Updated: 2023/09/12 21:19:20 by tlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) 
{
	this->setType("Dog");
	this->_brain = new Brain();
	std::cout << "Dog default constructor" << std::endl;
};

Dog::Dog(const Dog& src) : Animal(src)
{
	std::cout << "Dog copy constructor" << std::endl;
};

Dog&	Dog::operator=(const Dog& src) 
{
	if (this == &src)
		return (*this);
	this->Animal::operator=(src);
	return (*this);
};

Dog::~Dog(void) 
{
	std::cout << "Dog destructor" << std::endl;
	delete	this->_brain;
};


void	Dog::makeSound(void) const 
{
	std::cout << "Bark bark bark! BARK BARK!" << std::endl;
};


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegrand <tlegrand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:07:19 by tlegrand          #+#    #+#             */
/*   Updated: 2023/11/14 19:16:46 by tlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const Animal* meta[] = {new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat()};


	for (int i=0; i<6; ++i)
		meta[i]->makeSound();
	for (int i=0; i<6; ++i)
	{
		delete meta[i];
		std::cout << "Animal " << i << " was deleted..." << std::endl;
	}
	Cat	out;
	{
		Cat tmp = out;
	}
	return (0);
}
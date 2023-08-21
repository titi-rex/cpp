/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegrand <tlegrand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 20:36:02 by tlegrand          #+#    #+#             */
/*   Updated: 2023/08/21 19:45:44 by tlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*horde;

	horde = new Zombie[N];
	for (int i = 0; i < N; ++i)
		new (&horde[i]) Zombie(name);
	return (horde);
}
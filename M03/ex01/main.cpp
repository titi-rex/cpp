/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegrand <tlegrand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:49:15 by tlegrand          #+#    #+#             */
/*   Updated: 2023/09/12 18:45:28 by tlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	scav1("irina");
	ClapTrap	clap("noemie");


	clap.attack("bob");
	scav1.attack("bob");
	return (1);
	
	scav1.setAd(15);
	ScavTrap	scav2(scav1);

	scav2.setName("Shedorus");
	scav1.attack("the wall");
	scav1.beRepaired(15);
	scav1.takeDamage(600);
	scav1.takeDamage(600);
	scav2.guardGate();
	scav2.guardGate();
	scav2.attack("bob");
	return (0);
}

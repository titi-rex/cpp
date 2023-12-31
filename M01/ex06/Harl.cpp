/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegrand <tlegrand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 22:34:03 by tlegrand          #+#    #+#             */
/*   Updated: 2023/09/20 15:26:12 by tlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(void) {std::cout << "Harl constructor called" << std::endl;};

Harl::~Harl(void) {std::cout << "Harl destructor called" << std::endl;};


void	Harl::_debug(void) const {std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;};
	
void	Harl::_info(void) const {std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;};
	
void	Harl::_warning(void) const {std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;};
	
void	Harl::_error(void) const {std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl; };

void	Harl::complain(int start) const
{
	std::string	str[4] = {"DEBUG", "INFO","WARNING", "ERROR"};
	hptr		func[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

	std::cout << "[ " << str[start] << " ]" << std::endl;
	(this->*func[start])();
};

void	Harl::filter(std::string level) const
{
	std::string	str[5] = {"DEBUG", "INFO","WARNING", "ERROR", "Probably complaining about insignificant problems"};
	int			n;
	
	n = -2;
	for (int i=0; i < 4; ++i)
	{
		if (level.compare(str[i]) == 0)
		{
			n = i;
			break ;
		}
	}
	while (n < 4 && n!= -1)
	{
		switch(n)
		{
			case 0:
				this->complain(0);
				break ;
			case 1:
				this->complain(1);
				break ;
			case 2:
				this->complain(2);
				break ;
			case 3:
				this->complain(3);
				break ;
			default:
				std::cout << "[ " << str[4] << " ]" << std::endl;
				break ;
		}
		++n;
	}
};
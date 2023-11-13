/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegrand <tlegrand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:17:45 by tlegrand          #+#    #+#             */
/*   Updated: 2023/11/06 10:56:36 by tlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char** arg)
{
	ScalarConverter	converter;

	if (ac != 2)
	{
		std::cerr << "Wrong number of arg" << std::endl;
		return (1);
	}
	converter.convert(arg[1]);
	return (0);	
}
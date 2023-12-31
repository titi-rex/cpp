/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegrand <tlegrand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:37:38 by tlegrand          #+#    #+#             */
/*   Updated: 2023/11/16 10:35:49 by tlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ITER_H__
# define _ITER_H__

template <typename T, typename V>
void	iter(T* a, V len, void f(T&))
{
	for (V i = 0; i < len; ++i)
		f(a[i]);
}

template<typename T>
void	print_T(T & a) {std::cout << a;};

#endif

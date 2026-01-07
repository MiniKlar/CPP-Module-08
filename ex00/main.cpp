/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 23:10:29 by lomont            #+#    #+#             */
/*   Updated: 2026/01/08 00:36:31 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main( void ) {
	try {
		std::vector<int, std::allocator<int> > test;
		for (size_t i = 0; i < 10; i++) {
			test.push_back(i);
		}
		std::cout << easyfind(test, 12) << std::endl;
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
};

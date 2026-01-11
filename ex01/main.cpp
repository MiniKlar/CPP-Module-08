/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:20:34 by lomont            #+#    #+#             */
/*   Updated: 2026/01/11 03:19:38 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main( void ){
	try {
		Span a(4);
		// a.addNumber(10);
		// a.addNumber(20);
		// a.addNumber(50);
		a.addNumberRandomnly();
		// for (std::list<int>::iterator it = a.begin(); it != a.end(); it++) {
		// 	std::cout << *it << std::endl;
		// }
		std::cout << a.shortestSpan() << std::endl;
		std::cout << a.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cerr << "You have exceeded the maximum numbers in the array, exiting program..." << std::endl;
		return (1);
	}
	return (0);
}

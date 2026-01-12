/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:20:34 by lomont            #+#    #+#             */
/*   Updated: 2026/01/11 19:03:49 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main( void ){
	try {
		int		shortestSpan;
		int		longestSpan;
		Span	span(4);

		span.addNumber(10);
		span.addNumber(20);
		span.addNumber(50);
		span.addNumber(50);

		// Wanna test my automatic number addition to the span? Uncomment the line below!
		//span.addNumberRandomnly();

		for (std::list<int>::iterator it = span.begin(); it != span.end(); it++) {
			std::cout << "Value = " << *it << std::endl;
		}

		shortestSpan = span.shortestSpan();
		longestSpan = span.longestSpan();

		std::cout << "Size of the Span: " << span.size() << std::endl;
		std::cout << "Shortest Span is: " << shortestSpan << std::endl;
		std::cout << "Longest Span is: " << longestSpan << std::endl;

		//Copy constructor & assignment test

		// Span	span1(span);
		// Span	span2 = span;

		//reversing original span to see deep copy
		// span.reverse();

		// for (std::list<int>::iterator it = span1.begin(); it != span1.end(); it++) {
		// 	std::cout << "Value span1 = " << *it << std::endl;
		// }

		// for (std::list<int>::iterator it = span2.begin(); it != span2.end(); it++) {
		// 	std::cout << "Value span2 = " << *it << std::endl;
		// }

		// for (std::list<int>::iterator it = span.begin(); it != span.end(); it++) {
		// 	std::cout << "Value original span = " << *it << std::endl;
		// }

	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:20:30 by lomont            #+#    #+#             */
/*   Updated: 2026/01/10 17:52:51 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <list>
#include <climits>
#include <cstdlib>
#include <ctime>

class Span : public std::list<int>
{
	private:
		unsigned int _maxNumbers;
	public:

		//Canonical form
		Span( void );
		Span( unsigned int n );
		Span( const Span& src );
		Span & operator=( const Span& other );
		~Span( void );

		//Member functions

		void	addNumber( int n );
		void	addNumberRandomnly( void );
		int		shortestSpan( void );
		int		longestSpan( void );
};

#endif

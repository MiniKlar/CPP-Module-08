/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:20:30 by lomont            #+#    #+#             */
/*   Updated: 2026/01/20 19:19:29 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <exception>
#include <stdexcept>
#include <climits>
#include <cstdlib>
#include <ctime>

class Span : public std::list<int>
{
	private:
		unsigned int _maxNumbers;
	public:
		class SpanNotFound : public std::exception
		{
			public:
				virtual const char* what( void ) const throw();
				virtual ~SpanNotFound( void ) throw();
		};
		class MaxSpanReached : public std::exception
		{
			public:
				virtual const char* what( void ) const throw();
				virtual ~MaxSpanReached( void ) throw();
		};

		//Canonical form
		Span( void );
		Span( double n );
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

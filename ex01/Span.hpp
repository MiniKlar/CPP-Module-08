/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:20:30 by lomont            #+#    #+#             */
/*   Updated: 2026/01/11 19:52:24 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <exception>
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

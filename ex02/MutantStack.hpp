/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:49:15 by lomont            #+#    #+#             */
/*   Updated: 2026/01/17 02:28:29 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef	MUTANTSTACK
#define MUTANTSTACK

#include <iostream>
#include <stack>
#include <list>
#include <algorithm>

template <class T>
class MutantStack : public std::stack<T>
{
	public:
		typedef std::stack<int>::container_type::iterator iterator;
		//canonical form

		MutantStack( void );
		MutantStack( MutantStack & src );
		MutantStack& operator=( MutantStack & other );
		~MutantStack( void );

		//member functions
		iterator	begin( void );
		iterator	end( void );
};

#include "MutantStack.tpp"

#endif

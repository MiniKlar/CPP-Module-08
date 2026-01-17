/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:49:17 by lomont            #+#    #+#             */
/*   Updated: 2026/01/17 02:40:42 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

//Canonical form

template <class T>
MutantStack<T>::MutantStack( void )
{
	std::cout << "MutantStack default constructor called" << std::endl;
	return ;
}

template <class T>
MutantStack<T>::MutantStack(MutantStack & src) : std::stack<T>()
{
	std::cout << "MutantStack Copy constructor called" << std::endl;
	this->c = src.c;
	return ;
}

template <class T>
MutantStack<T>& MutantStack<T>::operator=( MutantStack & other )
{
	std::cout << "MutantStack assignement operator called" << std::endl ;
	if (this != &other) {
		this->c = other.c;
	}
	return (*this);
}

template <class T>
MutantStack<T>::~MutantStack( void )
{
	std::cout << "MutantStack destructor called" << std::endl;
	return ;
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::begin( void ) {
	return ( this->c.begin() );
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::end( void ) {
	return ( this->c.end() ) ;
}

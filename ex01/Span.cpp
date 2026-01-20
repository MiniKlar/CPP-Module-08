/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:20:32 by lomont            #+#    #+#             */
/*   Updated: 2026/01/20 19:24:26 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//Exception definition

const char * Span::SpanNotFound::what( void ) const throw() {
	return ( "No span found, make sure to add, at least, 2 numbers." );
}

Span::SpanNotFound::~SpanNotFound( void ) throw() {
	return ;
}

const char * Span::MaxSpanReached::what( void ) const throw() {
	return ( "You have reached the Span's maximum capacity, error!" );
}

Span::MaxSpanReached::~MaxSpanReached( void ) throw() {
	return ;
}

//Canonical form

Span::Span( void ) : _maxNumbers(10)
{
	std::cout << "Default Span constructor called" << std::endl;
	return ;
}

Span::Span( double n ) {
	std::cout << "Specific Span constructor called" << std::endl;
	if (n < 0 || n > INT_MAX)
		throw std::out_of_range("You have triggered an Overflow, please check your main code");
	_maxNumbers = static_cast<unsigned int>(n);
	return ;
}

Span::Span(const Span& src) : std::list<int>(src) {
	std::cout << "Span Copy constructor called" << std::endl;
	this->_maxNumbers = src._maxNumbers;
	return ;
}

Span& Span::operator=(const Span& other) {
	std::cout << "Span assignment operator called" << std::endl;
	if (this != &other) {
		this->_maxNumbers = other._maxNumbers;
		this->assign(other.begin(), other.end());
	}
	return (*this);
}

Span::~Span( void )
{
	std::cout << "Span destructor called" << std::endl;
	return ;
}

//Member functions

void Span::addNumber( int n ) {
	if (this->size() == _maxNumbers)
		throw MaxSpanReached();
	else
		this->push_front(n);
	return ;
}

int Span::shortestSpan( void ) {
	int span;

	if (_maxNumbers < 2 || size() < 2)
		throw SpanNotFound();
	span = INT_MAX;
	this->sort();
	for (std::list<int>::reverse_iterator it = this->rbegin(); it != this->rend(); it++) {
		for (std::list<int>::iterator ite = this->begin(); ite != this->end(); ite++) {
			int result = *it - *ite;
			if (result < span && result > 0) {
				span = result;
			}
		}
	}
	return (span);
}

int Span::longestSpan( void ) {
	if (_maxNumbers < 2 || size() < 2)
		throw SpanNotFound();
	this->sort();
	return (*max_element(begin(), end()) - *min_element(begin(), end()));
}

void Span::addNumberRandomnly( void ) {
	int *ptr;

	ptr = new int[_maxNumbers];
	if (!ptr)
		return ;
	srand(time(NULL));
	for (size_t i = 0; i < _maxNumbers; i++) {
		ptr[i] = rand() % 20000;
	}
	this->assign(&ptr[0], &ptr[_maxNumbers]);
	delete[] ptr;
	return ;
}

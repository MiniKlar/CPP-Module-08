/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:20:32 by lomont            #+#    #+#             */
/*   Updated: 2026/01/11 03:17:42 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) : _maxNumbers(10)
{
	std::cout << "Default Span constructor called" << std::endl;
	return ;
}

Span::Span( unsigned int n ) : _maxNumbers(n) {
	std::cout << "Specific Span constructor called" << std::endl;
	return ;
}

Span::Span(const Span& src) : std::list<int>(src) {
	std::cout << "Copy constructor called" << std::endl;
	this->_maxNumbers = src._maxNumbers;
	//need to check if the copy constructor deep copied
	return ;
}

Span& Span::operator=(const Span& other) {
	if (this != &other) {
		this->_maxNumbers = other._maxNumbers;
	}
	//need to deep copy the list.
	return (*this);
}

//TODO implement correctly the list inheritance

Span::~Span( void )
{
	std::cout << "Span destructor called" << std::endl;
	return ;
}

void Span::addNumber( int n ) {
	if (this->size() == _maxNumbers)
		throw std::exception();
	else
		this->push_front(n);
	return ;
};

int Span::shortestSpan( void ) {
	int span = INT_MAX;
	if (_maxNumbers < 2) {
		throw (std::exception());
	}
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
	if (_maxNumbers < 2) {
		throw (std::exception());
	}
	this->sort();
	return (*(--this->end()) - *(this->begin()));
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

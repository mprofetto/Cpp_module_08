/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:29:19 by mprofett          #+#    #+#             */
/*   Updated: 2023/12/09 16:58:09 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

const char *Span::SpanIsFullException::what() const throw()
{
	return ("Span is Full");
}

const char *Span::InvalidIndexException::what() const throw()
{
	return ("Index too high");
}

const char *Span::SpanIsTooSmallException::what() const throw()
{
	return ("Span is too small for this");
}

Span::Span() : _size(0), _current(0)
{
	this->_vector = std::vector<long long int>(0);
	return;
}

Span::~Span()
{
	return;
}

Span::Span(unsigned int size) : _size(size), _current(0)
{
	this->_vector = std::vector<long long int>(size);
	return;
}

Span::Span(const Span &copy) :  _vector(copy.getVector()), _size(copy.getSize()), _current(copy.getCurrent())
{
	return;
}

unsigned int				Span::getSize() const
{
	return (this->_size);
}

unsigned int				Span::getCurrent() const
{
	return (this->_current);
}

std::vector<long long int>	Span::getVector() const
{
	return (this->_vector);
}

long long int				Span::operator[](const unsigned int index)
{
	if (index < this->getSize() && index <= this->getCurrent())
		return (static_cast<long long int>(this->_vector[index]));
	else
		throw InvalidIndexException();
}

Span						&Span::operator=(const Span &copy)
{
	this->_size = copy.getSize();
	this->_current = copy.getCurrent();
	this->_vector = copy.getVector();
	return (*this);
}

void						Span::addNumber(long long int nbr)
{
	if (this->getCurrent() < this->getSize())
		_vector[this->_current++] = nbr;
	else
		throw SpanIsFullException();
}

long long int				generate_ran_int(void)
{
	return (std::rand());
}

void						Span::fillSpan(unsigned int first, unsigned int last)
{
	srand((unsigned int)time(NULL));
	if (first > this->getSize() || last > this->getSize() || first > this->getCurrent())
		throw InvalidIndexException();
	else
	{
		std::generate(this->_vector.begin() + first, this->_vector.begin() + last + 1, generate_ran_int);
		if (last > this->getCurrent())
			this->_current = last;
	}
}

unsigned long long int	Span::shortestSpan(void) const
{
	std::vector<long long int>				test = this->getVector();
	std::vector<long long int>::iterator	it;
	long long int							result;
	long long int							temp;


	if (this->getSize() <= 1)
		throw SpanIsTooSmallException();
	std::sort(test.begin(), test.end());
	it = test.begin();
	temp = *it;
	result = *(it + 1) - *it;
	++it;
	while (it < test.end() && it + 1 < test.end())
	{
		if (*(it + 1) - *it < result)
			result = *(it + 1) - *it;
		++it;
	}
	return (result);
}

unsigned long long int	Span::longestSpan(void) const
{
	if (this->getSize() <= 1)
		throw SpanIsTooSmallException();
	return (*(std::max_element(this->_vector.begin(), this->_vector.end())) - *(std::min_element(this->_vector.begin(), this->_vector.end())));
}

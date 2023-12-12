/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:07:09 by mprofett          #+#    #+#             */
/*   Updated: 2023/12/09 16:59:22 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int	main(void)
{
	Span	a(3);

	a.addNumber(1);
	a.addNumber(10);
	a.addNumber(15123);

	std::cout << a[0] <<std::endl;
	std::cout << a[1] <<std::endl;
	std::cout << a[2] <<std::endl;
	std::cout << "Min span is: " << a.shortestSpan() << std::endl;
	std::cout << "Max span is: " << a.longestSpan() << std::endl;

	unsigned int	size = 10000000;
	Span	b(size);

	b.fillSpan(0, size - 1);
	std::cout << "Min span is: " << b.shortestSpan() << std::endl;
	std::cout << "Max span is: " << b.longestSpan() << std::endl;
	return (0);
}


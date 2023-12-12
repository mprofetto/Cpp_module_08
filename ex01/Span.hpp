/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:27:10 by mprofett          #+#    #+#             */
/*   Updated: 2023/12/09 16:48:06 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <stdexcept>
# include <cstdlib>
# include <ctime>
# include <algorithm>

class Span
{
	private:
		std::vector<long long int>	_vector;
		unsigned int				_size;
		unsigned int				_current;

	public:

		class SpanIsFullException : public std::exception
		{
			virtual const char *what() const throw();
		};

		class InvalidIndexException : public std::exception
		{
			virtual const char *what() const throw();
		};

		class SpanIsTooSmallException : public std::exception
		{
			virtual const char *what() const throw();
		};

		Span();
		~Span();
		Span(unsigned int size);
		Span(const Span &copy);

		Span						&operator=(const Span &copy);
		long long int				operator[](unsigned int index);
		unsigned int				getSize() const;
		unsigned int				getCurrent() const;
		std::vector<long long int>	getVector() const;
		void						addNumber(long long int nbr);
		void						fillSpan(unsigned int first, unsigned int last);
		unsigned long long int		shortestSpan(void) const;
		unsigned long long int		longestSpan(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:07:45 by mprofett          #+#    #+#             */
/*   Updated: 2023/12/09 12:04:52 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iterator>
# include <stdexcept>
# include <algorithm>

class NotInContainer : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("integer not in container");
		}
};

template<typename T, typename P>
typename T::iterator	easyfind(T &container, const P param)
{
	typename T::iterator	it;

	it = find(container.begin(), container.end(), param);
	if (it == container.end())
		throw NotInContainer();
	return (it);
}

#endif

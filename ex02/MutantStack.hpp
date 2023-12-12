/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 10:36:02 by mprofett          #+#    #+#             */
/*   Updated: 2023/12/12 12:03:41 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template<class T>
class MutantStack : public std::stack<T>
{
		public:

			typedef typename std::stack<T>::stack::container_type::iterator iterator;

			MutantStack(){return;}
			~MutantStack(){return;}
			MutantStack(const MutantStack &copy) : std::stack<T>(copy){return;}

			MutantStack		&operator=(const MutantStack &copy)
			{
				*this = copy;
			}

			iterator		begin(void)
			{
				return (this->c.begin());
			}

			iterator		end(void)
			{
				return (this->c.end());
			}
};

#endif

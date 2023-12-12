/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:07:09 by mprofett          #+#    #+#             */
/*   Updated: 2023/12/09 12:25:00 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>
#include <deque>

int	main(void)
{
	{
		std::list<int>				int_list;
		std::list<int>::iterator	list_it;
		int	i = -1;

		while (++i < 10)
			int_list.push_back(i);
		try
		{
			list_it = easyfind(int_list, 8);
			std::cout << *list_it << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		std::vector<unsigned int>			char_vector;
		std::vector<unsigned int>::iterator	vector_it;
		int	j = 0;

		while (j < 10)
			char_vector.push_back(j++);
		try
		{
			vector_it = easyfind(char_vector, 8);
			std::cout << *vector_it << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		std::deque<long int>			long_int_deque;
		std::deque<long int>::iterator	deque_it;
		long int	k = -1;

		while (++k < 10)
			char_vector.push_back(k);
		try
		{
			vector_it = easyfind(char_vector, 8);
			std::cout << *vector_it << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::list<int>				int_list;
		std::list<int>::iterator	list_it;
		int	i = -1;

		while (++i < 10)
			int_list.push_back(i);
		try
		{
			list_it = easyfind(int_list, -5);
			std::cout << *list_it << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		std::vector<unsigned int>			char_vector;
		std::vector<unsigned int>::iterator	vector_it;
		int	j = 0;

		while (j < 10)
			char_vector.push_back(j++);
		try
		{
			vector_it = easyfind(char_vector, 96);
			std::cout << *vector_it << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		std::deque<long int>			long_int_deque;
		std::deque<long int>::iterator	deque_it;
		long int	k = -1;

		while (++k < 10)
			char_vector.push_back(k);
		try
		{
			vector_it = easyfind(char_vector, 15);
			std::cout << *vector_it << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}

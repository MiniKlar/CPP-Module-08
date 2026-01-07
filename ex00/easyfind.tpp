/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 23:10:45 by lomont            #+#    #+#             */
/*   Updated: 2026/01/08 00:37:05 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template< class T >
int	easyfind(T vector, int i) {
	for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++) {
		if (*it == i)
			return (i);
	}
	//std::cout << "Size of the vector: " << vector.size() << std::endl;
	throw std::exception();
};

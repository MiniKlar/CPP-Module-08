/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 23:10:45 by lomont            #+#    #+#             */
/*   Updated: 2026/01/17 02:46:07 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template< class T >
int	easyfind(T vector, int i) {
	typename T::iterator it;

	it = std::find(vector.begin(), vector.end(), i);
	if (it == vector.end())
		throw std::exception();
	return (*it);
}

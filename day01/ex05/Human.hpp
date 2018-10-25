/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:51:11 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/03 15:18:35 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H
# include "Brain.hpp"

class Human
{
	public:
		Human();
//		~Human();

		std::string	identify() const;
		const Brain& getBrain() const;	

	private:
		const	Brain _brain;
};
#endif


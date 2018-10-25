/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 09:26:55 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/03 10:30:18 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_CLASS_HPP
# define PONY_CLASS_HPP

# include <iostream>

class Pony
{
private:
	std::string	tail;
	int			teeth;

public:
	Pony(std::string tail, int teeth);
	~Pony();
	
};


#endif
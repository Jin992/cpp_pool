/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 10:52:15 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/03 12:04:35 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
private:
	std::string name;
	std::string type;

public:
	Zombie(std::string name,std::string type);
	Zombie();
	~Zombie();

	void	announce() const;
	void	set_type(std::string type);
	void	set_name(std::string type);
	
};
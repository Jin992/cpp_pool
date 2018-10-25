/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 09:28:02 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/06 11:38:15 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PISCINE_CPP_SORCERER_HPP
#define PISCINE_CPP_SORCERER_HPP
#include <iostream>
#include "Victim.hpp"
class Sorcerer {
public:
    Sorcerer(std::string name, std::string title);

    Sorcerer(Sorcerer const &);

    Sorcerer &operator=(Sorcerer const &);

    ~Sorcerer();
    std::string introduce(std::string);
    std::string getName(void);
    std::string getTitle(void);
    void polymorph(Victim const &) const;
private:
    std::string _title;
    std::string _name;
};

std::ostream &operator<<(std::ostream &output, Sorcerer &sorcerer);
#endif 

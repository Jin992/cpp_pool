/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 10:03:11 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/06 11:52:10 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PISCINE_CPP_VICTIM_HPP
#define PISCINE_CPP_VICTIM_HPP

#include <iostream>

class Victim {
public:
    Victim(std::string);
    Victim(Victim const &);
    Victim &operator=(Victim const &);
    virtual ~Victim(void);
    void birth(void);
    void death(void);
    std::string introduce(void);
    virtual void getPolymorphed() const;
    void setName(std::string name);
    std::string getName(void) const;
private:
    std::string _name;
};

std::ostream &operator<<(std::ostream &output, Victim &victim);
#endif

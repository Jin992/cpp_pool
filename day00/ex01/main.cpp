/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 21:02:29 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/02 22:56:09 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

int main() {
    PhoneBook contacts[8];
    int i = 0;
    while (42) {
        std::string cmd;
        std::getline(std::cin, cmd);
        if (cmd.compare("EXIT") == 0) {
            break;
        } else if (cmd.compare("ADD") == 0) {
            if (i < PhoneBook::total) {
                contacts->add(contacts, i++);
            }
        } else if (cmd.compare("SEARCH") == 0) {
            contacts->display(contacts, i);
        }
    }
    return 0;
}

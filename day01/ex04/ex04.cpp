/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 12:30:45 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/03 13:10:22 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
    std::string originalString = "HI THIS IS BRAIN";
    std::string *pointerString = &originalString;
    std::string &referenceString = originalString;

    std::cout << "Pointer String : " << *pointerString << std::endl << "Reference String : " << referenceString
              << std::endl;

    return (0);
}
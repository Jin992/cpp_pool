/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex1.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 10:34:24 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/03 10:45:05 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void memoryLeak() {

    std::string *panthere = new std::string("String panthere");


    std::cout << *panthere << std::endl;

    delete panthere;

}
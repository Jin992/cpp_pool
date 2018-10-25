/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed4Losers.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 18:10:23 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/03 21:15:05 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed4Losers.hpp"

bool Sed4Losers::isAllGood(std::string s1, std::string s2) {
    if (!s1.empty() && !s2.empty()) {
        return true;
    }
    return false;
}

std::string Sed4Losers::readFileToString(std::string filename) {
    std::ifstream in(filename);
    if (in) {
        std::stringstream buffer;
        buffer << in.rdbuf();
        return buffer.str();
    }
    std::cout << "unable to read file: " + filename << std::endl;
    return "";
}

std::string Sed4Losers::replaceString(std::string &str, const std::string &rep, const std::string &with) {
    while (str.find(rep) != std::string::npos)
        str.replace(str.find(rep), rep.length(), with);
    return str;
}

void Sed4Losers::writeToFile(std::string filename, std::string content) {
    std::ofstream out(filename);
    if (out) {
        out << content;
    } else {
        std::cout << "unable to write to file: " + filename;
    }
    out.close();
}

void Sed4Losers::dispose() {
    delete this;
}


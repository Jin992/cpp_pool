/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 14:05:13 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/12 16:01:25 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <typeinfo>

template<typename T, typename U, typename F>
void iter(T arr[], U len, F (*f)(T)) {
    for (int i = 0; i < len; ++i) {
        (*f)(arr[i]);
    }
}

template<typename F>
void print(F a) {
    std::cout << a << std::endl;
}

int main(void) {
    int i[4] = {1, 2, 4, 5};
    char b[5] = {'a', 'b', 'c', 'd', '\0'};
    std::string s[5] = {"one", "two", "three", "four"};
    std::cout << "Test 1 --- iter<> with int" << std::endl;
    iter<int, int, void>(i, 4, print<int>);
    std::cout << "\nTest 2 --- iter<> with char" << std::endl;
    iter(b, 4, print<char>);
    std::cout << "\nTest 3 --- iter<> with string" << std::endl;
    iter(s, 4, print<std::string>);
}
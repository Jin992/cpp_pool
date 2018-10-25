/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 16:34:04 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/12 20:05:45 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

template<typename T>
class Array {
public:
    Array<T>(void);

    Array<T>(unsigned int);

    ~Array<T>();

    Array<T>(Array<T> const &src);

    Array<T> &operator=(Array<T> const &rhs);

    unsigned int size();

    T &operator[](int n);

    void *operator new(size_t t);

    class Limit: public std::exception {
    public:
        virtual ~Limit() throw();

        Limit();

        Limit(Limit const &src);

        Limit &operator=(Limit const &src);

        virtual const char *what() const throw();

    };

private:
    unsigned int _size;
    T *_array;
};

#include "Array.cpp"
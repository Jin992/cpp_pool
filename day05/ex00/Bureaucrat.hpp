/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 11:08:14 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/10 13:23:35 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PISCINE_CPP_BUREAUCRAT_HPP
#define PISCINE_CPP_BUREAUCRAT_HPP

#include <exception>
#include <iostream>

class Bureaucrat {
public:
    Bureaucrat(int, std::string) throw(GradeTooLowException, GradeTooHighException);

    Bureaucrat(Bureaucrat const &);

    Bureaucrat &operator=(Bureaucrat const &);

    virtual ~Bureaucrat() throw();

    int getGrade(void);

    std::string getName(void);

    void decreaseGrade() throw(GradeTooLowException);

    void increaseGrade() throw(GradeTooHighException);

    class GradeTooHighException : public std::exception {
    public:
        GradeTooHighException(void);

        GradeTooHighException(GradeTooHighException const &);

        GradeTooHighException &operator=(GradeTooHighException const &);

        virtual ~GradeTooHighException(void) throw();

        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        GradeTooLowException(void);

        GradeTooLowException(GradeTooLowException const &);

        GradeTooLowException &operator=(GradeTooLowException const &);

        virtual ~GradeTooLowException(void) throw();

        virtual const char *what() const throw();
    };

private:
    const std::string _name;
    int _grade;
};

std::ostream &operator<<(std::ostream &output, Bureaucrat &bureaucrat);
#endif 
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 11:10:06 by earteshc          #+#    #+#             */
/*   Updated: 2018/04/10 13:24:54 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade, std::string name) throw(GradeTooHighException, GradeTooLowException) : _name(name),
                                                                                                         _grade(grade) {
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj) : _name(obj._name), _grade(obj._grade) {

}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj) {
    (void)obj;
    return *this;
}

Bureaucrat::~Bureaucrat() throw() {

}

std::string Bureaucrat::getName() {
    return this->_name;
}

int Bureaucrat::getGrade() {
    return this->_grade;
}

void Bureaucrat::decreaseGrade() throw(GradeTooLowException) {
    this->_grade++;
    if (this->_grade > 150)
        throw GradeTooLowException();
}

void Bureaucrat::increaseGrade() throw(GradeTooHighException) {
    this->_grade--;
    if (this->_grade < 1)
        throw GradeTooHighException();
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &obj) {
    *this = obj;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &obj) {
    (void) obj;
    return *this;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Fatal error: Grade too high";
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &obj) {
    *this = obj;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &obj) {
    (void) obj;
    return *this;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Fatal error: Grade too low";
}

std::ostream &operator<<(std::ostream &output, Bureaucrat &bureaucrat) {
    output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
    return output;
}
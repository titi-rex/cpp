/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegrand <tlegrand@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:56:09 by tlegrand          #+#    #+#             */
/*   Updated: 2023/11/13 15:06:02 by tlegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("nameless"), _grade(150) {};

Bureaucrat::Bureaucrat(const Bureaucrat& src) : _name(src.getName())
{
	this->_setGrade(src.getGrade());
};

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& src) 
{
	if (this == &src)
		return (*this);
	_setGrade(src.getGrade());
	return (*this);
};

Bureaucrat::~Bureaucrat(void) {};

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {this->_setGrade(grade);};


const std::string&	Bureaucrat::getName(void) const { return (this->_name); };
int					Bureaucrat::getGrade(void) const { return (this->_grade); };

void	Bureaucrat::_setGrade(int grade) 
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException("Grade too high");
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException("Grade too low");
	this->_grade = grade;
};

void	Bureaucrat::incGrade(void) {this->_setGrade(this->getGrade() - 1);};
void	Bureaucrat::decGrade(void) {this->_setGrade(this->getGrade() + 1);};

void	Bureaucrat::signForm(Form& F)
{
	try
	{
		F.beSigned(*this);
		std::cout << this->getName() << " signed "<< F.getName() << std::endl;
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cout << this->_name << " couldn't sign " << F.getName() << " because " << e.what() << std::endl;
		throw;
	}
	catch(const Form::signedException& e)
	{
		std::cout << this->_name << " couldn't sign " << F.getName() << " because " << e.what() << std::endl;
	}
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& B)
{
	return (os << B.getName() << ", bureaucrat grade " << B.getGrade());
};

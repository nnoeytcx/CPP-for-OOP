/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ShrubberyCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 01:34:14 by tpoungla          #+#    #+#             */
/*   Updated: 2024/06/15 01:34:14 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{

}
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), _target(other._target)
{

}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this == &other)
		return (*this);
	AForm::operator=(other);
	_target = other._target;
	return (*this);
}
const char * ShrubberyCreationForm::CannotOpenfile::what() const throw(){
	return ("Cannot Open this file");
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::ofstream	outfile;
	std::string		filename;

    if (this->getSigned() == false)
        throw AForm::IsNotSignException();
    if (executor.getGrade() >= this->getExecGrade())
        throw AForm::GradeTooLowException();
    filename = this->_target+"_shrubbery";
	outfile.open(filename);
	if (!outfile.is_open())
		throw ShrubberyCreationForm::CannotOpenfile();
	outfile << "                     - - -" << std::endl;
	outfile << "                   -        -  -     --    -" << std::endl;
	outfile << "                -                 -         -  -" << std::endl;
	outfile << "                                -" << std::endl;
	outfile << "                               -                --" << std::endl;
    outfile << "               -          -            -              -" << std::endl;
	outfile << "               -            '-,        -               -" << std::endl;
	outfile << "               -              'b      *" << std::endl;
	outfile << "                -              '$    #-                --" << std::endl;
	outfile << "               -    -           $:   #:               -" << std::endl;
    outfile << "             --      -  --      *#  @):        -   - -" << std::endl;
	outfile << "                          -     :@,@):   ,-**:'   -" << std::endl;
	outfile << "              -      -,         :@@*: --**'      -   -" << std::endl;
	outfile << "                       '#o-    -:(@'-@*\"'  -" << std::endl;
	outfile << "               -  -       'bq,--:,@@*'   ,*      -  -" << std::endl;
    outfile << "                          ,p$q8,:@)'  -p*'      -" << std::endl;
	outfile << "                   -     '  - '@@Pp@@*'    -  -" << std::endl;
	outfile << "                    -  - --    Y7'.'     -  -" << std::endl;
	outfile << "                              :@):." << std::endl;
	outfile << "                             .:@:'." << std::endl;
	outfile << "                           .::(@:." << std::endl;
    // make a tree here
    std::cout << "Create a file <"<< this->_target <<"_shrubbery> in the working directory." << std::endl;
    //  Otherwise, informs that the robotomy failed.
}
const std::string ShrubberyCreationForm::getTarget(void) const
{
    return (this->_target);
}
std::ostream & operator<<(std::ostream &o, ShrubberyCreationForm const &i)
{
    o << "[Shrubbery] : (name : " << i.getTarget() << ") " ;
    o << "(sign status : " << i.getSigned() << ") " << std::endl;
    o << "sign req : " << i.getSignedGrade() << " exe req : " << i.getExecGrade() << std::endl;
	return (o);
}
#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter()
{

}
ScalarConverter::ScalarConverter(ScalarConverter &other)
{
    *this = other;
}
ScalarConverter& ScalarConverter::operator= (const ScalarConverter &other)
{
    if (this == &other)
		return (*this);
	return (*this);
}

bool	sp_Keyword(std::string const str)
{
	if (str == "nan" || str == "nanf" || str == "inf" || str == "inff" || str == "+inf" || str == "+inff" || str == "-inf" || str == "-inff") {
		return (true);
	}
	return (false);
}

std::string	modSTR(std::string const str)
{
	std::string res = str;
	if (str == "nan" || str == "nanf") {
		res = "nan";
	}
	else if (str == "inf" || str == "inff") {
		res = "inf";
	}
	else if (str == "+inf" || str == "+inff") {
		res = "+inf";
	}
	else if (str == "-inf" || str == "-inff") {
		res = "-inf";
	}
	return (res);
}

bool	isPlusMinus(std::string const str)
{
	if (str[0] == '+' || str[0] == '-') {
		return (true);
	}
	return (false);
}

void	printChar(std::string const str)
{
	if (sp_Keyword(str)) {
		throw ScalarConverter::OutofRangeException();
	}
	double	tmp = std::atof(str.c_str());
	if (tmp < CHAR_MIN || tmp > CHAR_MAX) {
		throw ScalarConverter::OutofRangeException();
	}
	char res = static_cast<char>(tmp);
	
	// char	res = static_cast<char>(std::atof(str.c_str()));
	if (!isascii(res) || !isdigit(str[0])) {
		throw ScalarConverter::OutofRangeException();
	}
	else if (!isprint(res)) {
		throw ScalarConverter::NonDisplayException();
	}
	else {
		std::cout << (int)res << std::endl;
		std::cout << "'" << res << "'" << std::endl;
	}
}

void	printInt(std::string const str)
{
	if (sp_Keyword(str)) {
		throw ScalarConverter::OutofRangeException();
	}
	else if (isPlusMinus(str) && isdigit(str[1])) {
		;
	}
	else if (!isdigit(str[0])) {
		throw ScalarConverter::OutofRangeException();
	}

	double	res = std::atof(str.c_str());

	if (res < INT_MIN || res > INT_MAX) {
		throw ScalarConverter::OutofRangeException();
	}
	int output = static_cast<int>(res);
	std::cout << output << std::endl;
}

void	printFloat(std::string const str)
{
	if (sp_Keyword(str)) {
		std::cout << modSTR(str) << 'f' << std::endl;
		return ;
	} else if (isPlusMinus(str) && isdigit(str[1])) {
		;
	} else if (!isdigit(str[0])) {
		throw ScalarConverter::OutofRangeException();
	}
	
	double	res = std::atof(str.c_str());
	float	output = static_cast<float>(res);
	res = static_cast<float>(res);
	std::cout << std::fixed << std::showpoint << std::setprecision(1);
	std::cout << output << 'f' << std::endl;
}

void	printDouble(std::string const str)
{
	if (sp_Keyword(str)) {
		std::cout << modSTR(str) << std::endl;
		return ;
	} else if (isPlusMinus(str) && isdigit(str[1])) {
		;
	} else if (!isdigit(str[0])) {
		throw ScalarConverter::OutofRangeException();
	}
	
	double	res = std::atof(str.c_str());
	std::cout << std::fixed << std::showpoint << std::setprecision(1);
	std::cout << res << std::endl;
}

void	ScalarConverter::convert(std::string const &str)
{
	try {
		std::cout << "char: ";
		printChar(str);
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		std::cout << "int: ";
		printInt(str);
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		std::cout << "float: ";
		printFloat(str);
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		std::cout << "double: ";
		printDouble(str);
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
}

// void ScalarConverter::convert(const char *str)
// {

// }
std::ostream &operator<< (std::ostream &o, const ScalarConverter &sc)
{
    // std::cout<<"char: "<<std::endl;
    // std::cout<<"int: "<<std::endl;
    // std::cout<<"float: "<<std::endl;
    // std::cout<<"double: "<<std::endl;
    static_cast<void>(sc);
	o << "Scalar Converter object";
	return (o);
}

const char *ScalarConverter::NonDisplayException::what() const throw()
{
	return ("Non displayable");
}

const char *ScalarConverter::OutofRangeException::what() const throw()
{
	return ("impossible");
}
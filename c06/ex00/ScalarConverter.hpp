#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
#include <cstdlib>
#include <exception>
#include <climits>
#include <iomanip>

class ScalarConverter {
    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter &other);
        ScalarConverter& operator= (const ScalarConverter &other);
        
    public:
        virtual ~ScalarConverter() = 0;

        static void convert(std::string const &str);

        class NonDisplayException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class OutofRangeException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<< (std::ostream &o, const ScalarConverter &sc);
#endif
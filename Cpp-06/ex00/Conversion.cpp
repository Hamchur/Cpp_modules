/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:58:58 by hamchur           #+#    #+#             */
/*   Updated: 2022/08/19 15:36:05 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Conversion.hpp"

Conversion::Conversion(): Counts(0), Dot(0), Float(0), ar("") 
{
    std::cout << "Conversion default constructor called" << std::endl;
}

Conversion::Conversion(std::string ar): Counts(0), Dot(0), Float(0)
{
    this->ar = ar;
}

Conversion::Conversion(const Conversion &source)
{
    std::cout << "Conversion Copy constructor called" << std::endl;
    (*this) = source;
}

Conversion &Conversion::operator = (Conversion const &other)
{
    std::cout << "Conversion Copy assignment operator called" << std::endl;
    this->Counts = other.Counts;
    this->Dot = other.Dot;
    this->Float = other.Float;
    this->ar = other.ar;
    return (*this);
}

Conversion::~Conversion()
{
    //std::cout << "Conversion destructor called" << std::endl;
}

int Conversion::Numeric(std::string ar)
{
    while (ar[Counts])
    {
        if (isdigit(ar[Counts]) || ar[Counts] == '.' || ar[Counts] == 'f' || ar[Counts] == '+' || ar[Counts] == '-')
        {
            if (ar[Counts] == '.')
                this->Dot = Counts;
            if (ar[Counts] == 'f')
                this->Float = 1;
            Counts++;
        }
        else
            break;
    }
    if ((size_t(Counts) == ar.size()))
        return 1;
    else
        return 0;
}

void Conversion::printChar()
{
    if (ar.size() == 1 && isalpha(ar[0]))
    {
        std::cout << "char: '" << ar << "'" << std::endl;
        i = (int)ar[0];
    }
    else if (!ar.compare("nan") || !ar.compare("nanf") || !ar.compare("nan") || !ar.compare("+inf") || !ar.compare("+inff") || !ar.compare("-inf") || !ar.compare("-inff"))
        std::cout << "char: impossible" << std::endl;
    else if (Numeric(ar))
    {
        num = std::stoi(ar);
        if (!isprint(num))
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;
    }
    else
        std::cout << "invalid arguments" << std::endl;
}

void Conversion::printInt()
{
    if (ar.size() == 1 && isalpha(ar[0]))
        std::cout << "int: " << i << std::endl;
    else if (!ar.compare("nan") || !ar.compare("nanf") || !ar.compare("nan") || !ar.compare("+inf") || !ar.compare("+inff") || !ar.compare("-inf") || !ar.compare("-inff"))
        std::cout << "int: impossible" << std::endl;
    else if (Numeric(ar))
        std::cout << "int: " << num << std::endl;
}

void Conversion::printFloat()
{
    if (ar.size() == 1 && isalpha(ar[0]))
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
    else if (!ar.compare("nan") || !ar.compare("nanf") || !ar.compare("nan") || !ar.compare("+inf") || !ar.compare("+inff") || !ar.compare("-inf") || !ar.compare("-inff"))
    {
        if (!ar.compare("nan") || !ar.compare("+inf") || !ar.compare("-inf"))
            std::cout << "float: " << ar << "f" << std::endl;
        else
            std::cout << "float: " << ar << std::endl;
    }
    else if (Numeric(ar))
    {
        if (this->Dot)
        {
            numf = std::stof(ar);
            std::cout << "float: " << std::fixed << std::setprecision(Counts - Dot - 1 - Float) << static_cast<float>(numf) << "f" << std::endl;
        }
        else
            std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(num) << "f" << std::endl;
    }
}

void Conversion::printDouble()
{
    if (ar.size() == 1 && isalpha(ar[0]))
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
    else if (!ar.compare("nan") || !ar.compare("nanf") || !ar.compare("nan") || !ar.compare("+inf") || !ar.compare("+inff") || !ar.compare("-inf") || !ar.compare("-inff"))
    {
        if (!ar.compare("nan") || !ar.compare("+inf") || !ar.compare("-inf"))
            std::cout << "double: " << ar << std::endl;
        else
            std::cout << "double: " << ar.erase(ar.size() - 1) << std::endl;
    }
    else if (Numeric(ar))
    {
        if (this->Dot)
        {
            numd = std::stod(ar);
            std::cout << "double: " << static_cast<double>(numd) << std::endl;
        }
        else
            std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(num) << std::endl;   
    }   
}
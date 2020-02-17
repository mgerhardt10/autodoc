#include <iostream>
#include <string>

using std::string;
using std::ostream;

#ifndef COMPLEX_CPP
#define COMPLEX_CPP

/**
  Complex number class (C++) 
*/
class Complex_Cpp {
private:
  double real;
  double imaginary;
public:
  /**
    Complex number default constructor
  */
  Complex_Cpp();
  /**
    Complex number parameterized constructor
  */
  Complex_Cpp(double real, double imaginary);
  /**
    Returns the real component of the complex number
  */
  double getReal() const;
  /**
    Returns the imaginary component of the complex number
  */
  double getImaginary() const;
  /**
    Sets the real component of the complex number
  */
  void setReal(double newReal);
  /**
    Sets the imaginary component of the complex number
  */
  void setImaginary(double newImaginary);
  /**
    Returns if the current complex number equals the Complex nmber c
  */
  bool equal(const Complex_Cpp &c) const;
  /**
    Returns the sum of the current complex number and the Complex nmber c
  */
  Complex_Cpp add(const Complex_Cpp &c) const;
  /**
    Returns the product of the current complex number and the Complex nmber c
  */
  Complex_Cpp multiply(const Complex_Cpp &c) const;
  /**
    Returns the complex number in the form of a + bi
  */
  void output(std::ostream &out) const;
};

#endif

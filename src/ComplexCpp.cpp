#include "ComplexCpp.h"

Complex_Cpp::Complex_Cpp() {
  setReal(1);
  setImaginary(1);
}

Complex_Cpp::Complex_Cpp(double real, double imaginary) {
  setReal(real);
  setImaginary(imaginary);
}

double Complex_Cpp::getReal() const {
  return real;
}

double Complex_Cpp::getImaginary() const {
  return imaginary;
}

void Complex_Cpp::setReal(double newReal) {
  real = newReal;
}

void Complex_Cpp::setImaginary(double newImaginary) {
  imaginary = newImaginary;
}

bool Complex_Cpp::equal(const Complex_Cpp &c) const {
  return real == c.getReal() && imaginary == c.getImaginary();
}

Complex_Cpp Complex_Cpp::add(const Complex_Cpp &c) const {
  Complex_Cpp a;
  a.setReal(real + c.getReal());
  a.setImaginary(imaginary + c.getImaginary());
  return a;
}

Complex_Cpp Complex_Cpp::multiply(const Complex_Cpp &c) const {
  Complex_Cpp m;
  m.setReal(c.getReal()*real - c.getImaginary()*imaginary);
  m.setImaginary(real*c.getImaginary() + imaginary*c.getReal());
  return m;
}

void Complex_Cpp::output(std::ostream &out) const {
  out << real << " + " << imaginary << "i" << std::endl;
}

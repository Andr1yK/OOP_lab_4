//
//  Vector.cpp
//  OOP_lab_4
//
//  Created by Andriy Kobetiak on 18.10.2022.
//

#include "Vector.hpp"

Vector::Vector()
  :
  vector(0),
  size(0) {};

Vector::Vector(size_t n)
  :
  vector(n),
  size(n) {};

Vector::Vector(std::vector<int32_t> v)
  :
  vector(v),
  size(v.size()) {};

Vector::Vector(const Vector& v)
  :
  vector(v.getData()),
  size(v.getSize()) {};

Vector::~Vector() {};

size_t Vector::getSize() const {
  return size;
}

std::vector<int32_t> Vector::getData() const {
  return vector;
}

void Vector::push(int32_t value) {
  vector.push_back(value);
  size++;
}

Vector& Vector::operator=(const Vector& other) {
  if (this!=&other)
  {
    vector = other.getData();
    size = other.getSize();
  }
  return *this;
}

int32_t& Vector::operator[] (size_t i) {
  return vector[i];
}

const int32_t& Vector::operator[] (size_t i) const {
  return vector[i];
}

std::ostream& operator<<(std::ostream &os, const Vector& v){
    for(unsigned i = 0; i < v.getSize(); i++){
        os << v.getData()[i] << " ";
    }

    return os;
}

std::istream& operator>>(std::istream& is, Vector& v) {
    int32_t value;
  
    is >> value;
    v.push(value);

    return is;
}

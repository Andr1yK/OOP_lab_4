//
//  Vector.hpp
//  OOP_lab_4
//
//  Created by Andriy Kobetiak on 18.10.2022.
//

#ifndef Vector_hpp
#define Vector_hpp

#include <vector>
#include <string>
#include <iostream>

class Vector {
private:
  std::vector<int32_t> vector;
  size_t size;

public:
  Vector();
  Vector(size_t n);
  Vector(std::vector<int32_t>);
  Vector(const Vector &v);
  ~Vector();

  size_t getSize() const;
  std::vector<int32_t> getData() const;
  
  void push(int32_t value);
  void display();
  
  Vector& operator=(const Vector& other);
  int32_t& operator[] (size_t i);
  const int32_t& operator[] (size_t i) const;

  friend std::istream& operator>>(std::istream& is, Vector& v);
  friend std::ostream& operator<<(std::ostream &os, const Vector& v);
};


#endif /* Vector_hpp */

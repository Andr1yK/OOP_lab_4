//
//  main.cpp
//  OOP_lab_4
//
//  Created by Andriy Kobetiak on 18.10.2022.
//

#include <iostream>
#include "Vector.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
  Vector v1;
  Vector v2 = Vector(3);
  

  cout << "Enter 3 values for Vector1: " << endl;
  for (size_t i = 0; i < 3; i++)
    cin >> v1;

  cout << endl;
  cout << "Vector1: " << endl;
  v1.display();
  
  cout << endl;
  cout << "Vector2: " << endl;
  v2.display();
  cout << endl;

  v2 += v1 * v1;

  cout << "Vector2 += Vector1 * Vector1: " << endl;
  v2.display();
  cout << endl;
  
  Vector v3 = Vector(v2);

  cout << "Vector3 - Vector1: " << endl << v3 - v1 << endl;
  
  Vector v4;
  
  v4 = v1;

  cout << endl;
  cout << "Vector4[0] (Vector4 = Vector1): " << endl << v4[0] << endl;

  return 0;
}

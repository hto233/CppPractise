#include <iostream>
#include <string>
#include <vector>
#include<iomanip>
// g++ test.cpp `pkg-config opencv --libs --cflags` -std=c++11 -pthread -o test

int main() {
  double a = 4.294967244;
  double b = 4294967295;
  //std::cout << "a=" << a << std::endl;
  //std::cout << "b=" << b << std::endl;
  std::cout << "a=" << std::fixed << a << std::endl;
  std::cout << "b=" << std::fixed << b << std::endl;
  std::cout << "a=" << std::fixed <<  std::setprecision(2) << a << std::endl; //保留小数后两位
  std::cout << "a=" << std::scientific << a << std::endl;
  return 0;
}

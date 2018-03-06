#include<iostream>

int main()
{
  const int a{10};
  int c{20};
  int d{30};
  const int* b{&a};
  std::cout<< *b <<" "<<b<< std::endl;
  //adding this line to see the difference
  b = &c;
  std::cout<< a <<" "<< b << " "<<*b <<std::endl;
  int* const  e{&c};
  e = &d ;
  std::cout<< d <<" "<< e << " "<<*e <<std::endl;
  return 0;
}

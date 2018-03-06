#include<iostream>

int main()
{
  int a{10};
  int* const b{&a};

  std::cout << a <<" " << b <<" "<<*b<<std::endl; //Adding this line to check
                                              //initial value of a and b

  (*b)++; //value of what "b" point at is increased ("a")
  a++; //here is "a" increased again

  std::cout << a <<" " << b <<" "<< *b << std::endl;
  return 0;
}

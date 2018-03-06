#include<iostream>

int main()
{
  char a{'a'};
  const char* name{"Amir Jahanshahi"};//name = Amir Jahanshahi
                                      //*name = A                   
  const char* p1{name}; //p1 is a char pointer 
  std::cout<<name<<" "<<*name<<std::endl;
  std::cout<< *p1<< *(p1 + 1) << *(p1+2) << std::endl;
  p1 = &a ; //p1 is string not address
  std::cout<< *p1<< *(p1 + 1) << *(p1+2) << std::endl;
  p1 = name;
  *p1 = 'b' ; //NO becouse the value of  b pointer is const  
              //and is the first char of name string(A)
  char* p2{name}; //not allowed because name string is const 
  return 0;
}

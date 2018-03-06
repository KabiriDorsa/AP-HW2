#include<iostream>
#include"Queue.h"

Queue::Queue(){
    std::cout<<"constructor is called" <<std::endl;

}


void Queue::show(){
  std::cout<< "queue: "
  for (size_t i{}; i<100 ; i++)
    std::cout<< input[i] <<" ";
  std::cout<<std::endl;
}
double Queue::enQueue(){


}

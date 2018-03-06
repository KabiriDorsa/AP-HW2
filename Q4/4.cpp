#include<iostream>

void s(int* , int* ); //swap function to use in selection sort

int main()
{
  size_t N{1}; 
  int* numbers{new int[N]}; //defining dinamic array
  std::cout<< "enter the numbers and enter 0 when finished" <<std::endl;
  for (size_t i{0} ; i<N ; i++){ 
    std::cin >> *(numbers+i) ; //getting the numbers from users
    if( *(numbers+i) !=0) //if 0 is entered finish getting numbers
      N++;
  }
  std::cout<< " sorted numbers:" <<std::endl;

  for (size_t j{0}; j<N-1 ;j++){
    int* min = &numbers[j];   //in every round setting the min value as start & defining min as pointer
    for (size_t z{j+1}; z<N ;z++) //checking with other numbers
      if( numbers[z] < *min )
	min = &numbers[z] ; //setting new value for min

    s(min ,&numbers[j]); //sending new min & previous to swap function
    
  }
  for (size_t i{}; i<N ; i++)  //displaying sorted numbers
    std::cout<<numbers[i]<<" ";
  std::cout<<std::endl;
  return 0 ;
}


void s(int* x, int* y ){
  int temperory = *x;   //defining temp for not loosing x value
  *x = *y;
  *y = temperory ;
}

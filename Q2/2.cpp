#include<iostream>
#include<string>
#include<fstream>


int main()
{
  
  std::string s{};
  std::ifstream ifile{"Error_find.txt"};
  ifile >> s;
  std::string v{"aeio y"};
  size_t N{1000};
  for (size_t i{0} ; i<N;){
    for (size_t j{0} ; j<5 ; j++){
      while( s[i] != v[j] ){
	i++;
      }
      std::cout<<s[i] <<std::endl;
    }
  }
}

#include<iostream>
#include<vector>
int main(){
  std::vector<int>finder={2,4,3,6,1,9};
  int sum=0;
  int product=1;
  for (int c = 0;c < finder.size(); c++){
    if(finder[c]%2 == 0){
      sum = sum + finder[c];
    }
    else if(finder[c]%2 != 0){
      product = finder[c] * product;
    }
  }
  std::cout<<"Sum of even number is: "<<sum<<"\n";
  std::cout<<"Product of odd numbers is: "<<product<<"\n";
  std::cout<<"End of the program. ";
}

#include <iostream>
using namespace std;

//decleration function
int fk(int x);

int main(){
  int result=0, n=8, r=5;

  result = fk(n) / (fk(r) * fk(n-r));
  cout << "\nThe result : " << result;
  //out put
  //56

  return 0;
}
//body of funtion
int fk(int x){
  int result=1;
  for (int i = 1; i <= x; i++){
    result *= i;
  }
  return result;
}
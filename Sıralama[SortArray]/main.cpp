#include <iostream>
using namespace std;

int main(){
  int arr[10]={2,10,4,1,9,5,7,6,3,8};
  int swap;

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if(arr[i]<arr[j]){
        swap = arr[i];
        arr[i] = arr[j];
        arr[j] = swap;
      }
    }
    
  }
  for (int i = 0; i < 10; i++)
  {
    cout << arr[i] << " ";
  }
  //out put 
  //1 2 3 4 5 6 7 8 9 10
  
  

  return 0;
}
#include <iostream>
using namespace std;

int main(){
  //for generate different random number 
  srand(time(0));
  //arrays
  int numbers[100];
  int frequency[6]={0,0,0,0,0,0};

  for (int i = 0; i <= 100; i++)
  {
    numbers[i] = rand() % 6 + 1;
    cout << numbers[i] << " ";
    //sayac hesaplama
    if(numbers[i]==1){frequency[0]++;}
    else if(numbers[i]==2){frequency[1]++;}
    else if(numbers[i]==3){frequency[2]++;}
    else if(numbers[i]==4){frequency[3]++;}
    else if(numbers[i]==5){frequency[4]++;}
    else if(numbers[i]==6){frequency[5]++;}
  }

  cout << endl;

  for (int j = 0; j < 6; j++){
    cout << j+1 << " number count : " << frequency[j]  << endl;
  }
  //example output
  //1 number count 13
  //2 number count 21 
  //3 number count 16 
  //4 number count 22 
  //5 number count 14 
  //6 number count 15 
  return 0;
}
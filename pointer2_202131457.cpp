#include <iostream>
 
using namespace std;
 
int main()
{ 
  int x;       //정수    
  int *p;      //포인터로 지정된 함수     
 
  p = &x;      // Read it, "assign the address of x to p"     
  cin>> x;         // put a value in x, we could also use *p here
  cin.ignore();
  cout<< *p <<"\n";   // Note the use of the * to get the value
  cin.get();
}

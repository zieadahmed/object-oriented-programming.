#include <iostream> 
#include <conio.h> 
using namespace std; 
class Counter 
{ 
public: 
 Counter() 
 { 
  cout << "Object is created" <<endl; 
 } 
 ~Counter() 
 {} 
 
}; 
int main() 
{ 
 Counter c; 
 return(0); // Destructor is called here. 
}
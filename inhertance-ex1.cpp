#include <iostream> 
using namespace std; 
class A 
{ 
public: 
 A(){ 
  cout << "This is A"; 
 } 
}; 
class B : public A 
{ 
public: 
 B() 
 { 
  cout << "This is B"; 
 } 
}; 
int main() 
{ 
 B b;
 return 0;
}
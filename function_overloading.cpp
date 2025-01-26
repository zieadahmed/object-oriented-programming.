#include <iostream> 
using namespace std; 
 
class Geeks 
{ 
public: 
 void func(int x) { 
  cout << "Value of x is: " << x << endl; 
 } 
 void func(double x) { 
  cout << "Value of x is: " << x << endl; 
 } 
 void func(int x, int y) { 
  cout << "Value of x is: " << x <<"Value of y is: "<<y<< endl; 
 } 
}; 
int main() { 
 Geeks g; 
 g.func(3); 
 g.func(2.3); 
 g.func(4,6); 
 return 0;
} 

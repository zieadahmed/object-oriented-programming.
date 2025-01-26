#include <iostream> 
#include <conio.h> 
using namespace std; 
class Counter 
{ 
private: 
 int a; 
 float b; 
public: 
 Counter() : a(0), b(0.0) 
 {} 
 Counter(int x) : a(x), b(0.0) 
 {} 
 Counter(float y) : a(0), b(y) 
 {} 
 Counter(int x, float y) : a(x), b(y) 
 {} 
 void print() 
 { 
  cout << a << ":" << b << endl; 
 } 
}; 
void main() 
{ 
 Counter c1; 
 Counter c2(2); 
 Counter c3(3.4f); 
 Counter c4(2, 3.4f); 
 c1.print(); 
 c2.print(); 
 c3.print(); 
 c4.print(); 
 _getch(); 
}
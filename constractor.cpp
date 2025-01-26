#include <iostream> 
#include <conio.h> 
using namespace std; 
class Counter 
{ 
private: 
 int x; 
public: 
 Counter() //Constructor 
 { 
  x = 0; 
 } 
 void inc_count() 
 { 
  x++; 
 } 
 int get_count() 
 { 
  return x; 
 } 
}; 
void main() 
{ 
 Counter c1, c2; 
 cout << c1.get_count(); //0 
 cout << c2.get_count(); //0 
 c1.inc_count(); 
 c2.inc_count(); 
 c2.inc_count(); 
 cout << c1.get_count(); //1 
 cout << c2.get_count(); //2 
 _getch(); 
}
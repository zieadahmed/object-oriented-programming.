#include <iostream> 
#include <conio.h> 
using namespace std; 
class X { 
public: 
 int i=0; 
 X() 
 { 
  i++; 
  cout << i << endl; 
 } 
}; 
void main() 
{ 
 X x1; // 1 
 X x2; // 1 
 _getch(); 
} ------------------------------------------------- 
#include <iostream> 
#include <conio.h> 
using namespace std; 
class X { 
public: 
 static int i; 
 X() 
 { 
  i++; 
  cout << i << endl; 
 } 
}; 
int X::i = 0; 
void main() 
{ 
 X x1; //1 
 X x2; //2 
 _getch(); 
}
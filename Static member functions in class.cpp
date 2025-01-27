#include <iostream> 
#include <conio.h> 
using namespace std; 
class X { 
public: 
 static void f() 
 { 
  cout << "Hello World" << endl; 
 } 
  
}; 
void main() 
{ 
 X x1;  
 x1.f(); //Hello World 
 X::f(); //Hello World 
 _getch(); 
} ------------------------------------------------- 
#include <iostream> 
#include <conio.h> 
using namespace std; 
class X { 
public: 
 void f() 
 { 
  cout << "Hello World" << endl; 
 } 
  
}; 
void main() 
{ 
 X x1;  
 x1.f(); //Hello World 
 X::f(); //Error 
 _getch(); 
}
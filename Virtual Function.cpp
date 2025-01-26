#include <iostream> 
using namespace std; 
#include <conio.h> 
class Base { 
public: 
 virtual void print() { 
  cout << "Base Class" << endl; 
 } 
}; 
 
class Derived : public Base { 
public: 
 void print() { 
  cout << "Derived Class" << endl; 
 } 
}; 
void main() { 
 
 Base x; 
 x.print(); // Base Class 
 
 Derived d; 
 d.print(); // Derived Class 
 
 Base *b = &d; 
  
 b->print(); // Derived Class  
 _getch(); 
}
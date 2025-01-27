#include <iostream> 
#include <conio.h> 
using namespace std; 
class ABC { 
public: 
 ABC() 
 { 
  cout << "Constructor "; 
 } 
 ~ABC() 
 { 
  cout << "Destructor "; 
 } 
}; 
void f() { 
  ABC obj; 
} 
void main() 
{ 
 f(); 
 cout << "End "; 
}  
void f() { 
 static ABC obj; 
} 
void main() 
{ 
 f(); 
 cout << "End "; 
}
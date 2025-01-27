#include <iostream> 
#include <conio.h> 
using namespace std; 
 
void counter() 
 { 
 int count = 0; 
 cout << count++; 
} 
void main() 
{ 
 for (int i =0; i<5; i++) 
 counter(); // 0 0 0 0 0 
 _getch(); 
} 
//////////////////////////////////////////////////
#include <iostream> 
#include <conio.h> 
using namespace std; 
 
void counter() 
{ 
 static int count = 0; 
 cout << count++; 
} 
void main() 
{ 
 for (int i =0; i<5; i++) 
 counter(); // 0 1 2 3 4  
 _getch(); 
} 

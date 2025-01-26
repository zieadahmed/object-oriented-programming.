#include <iostream> 
#include <conio.h> 
using namespace std; 
void starline(); 
void starline(char); 
void starline(char, int); 
void main(){ 
 starline(); 
 starline('$'); 
 starline('#', 30); 
 _getch(); 
} 
void starline() 
{ 
 for (int i = 0; i<45; i++) 
  cout << '*'; 
 cout << endl; 
} 
void starline(char x) 
{ 
 for (int i = 0; i<45; i++) 
  cout << x; 
 cout << endl; 
} 
void starline(char x, int n) 
{ 
 for (int i = 0; i < n; i++) 
  cout << x; 
 cout << endl; 
}
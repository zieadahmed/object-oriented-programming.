#include <iostream> 
#include <conio.h> 
using namespace std; 
void starline(); //function declaration (or prototype) 
void main() 
{ 
 starline(); //Call the function 
 cout << "Data type Rane" << endl; 
 starline(); //Call the function 
 cout   << "char -182 to 127" << endl 
  <<  "short -32,768 to 32,767" << endl 
  <<  "int system dependent" << endl 
  <<  "long -2,147,483,648 to 2,147,483,647" << endl; 
 starline(); //Call the function 
 _getch(); 
} 
// function definition 
void starline() //declarator 
{ 
 for (int j = 0; j<45; j++) 
  cout << '*'; 
 cout << endl; 
} 

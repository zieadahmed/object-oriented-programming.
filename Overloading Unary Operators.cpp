//program that contains a class called distance, contains two 
//int variables (feet and inches), and contains two constructors. one 
//to initialize variables with zeros and another to accept arguments 
//and pass them to object variables. The class also contains the 
//operator overloaded, used to multiply feet and inches with a minus sign. 
#include <iostream> 
#include <conio.h> 
using namespace std; 
class Distance { 
private: 
 int feet; 
 int inches; 
public: 
 Distance() { 
  feet = 0; 
  inches = 0; 
 } 
 Distance(int f, int i) { 
  feet = f; 
  inches = i; 
 } 
 void displayDistance() { 
  cout << feet << "|" << inches << endl; 
 } 
 void operator - () { 
  feet = -feet; 
  inches = -inches; 
 } 
}; 
int main() { 
 Distance D1(11, 10), D2(-5, 11); 
 -D1; 
 D1.displayDistance(); 
 -D2; 
 D2.displayDistance(); 
 _getch(); 
 return 0 ; //
}

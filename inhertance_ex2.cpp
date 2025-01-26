#include <iostream> 
#include <string> 
#include <conio.h> 
using namespace std; 
class Pet 
{ 
public: 
 string speak(){ 
  return "Pet"; 
 } 
}; 
class Cat : public Pet 
{ 
public: 
 string speak() { 
  return "Cat"; 
} 
 void fetch() { 
  string x = speak();   // x = Cat 
  string y = Pet::speak();     // y = Pet 
  cout << x << y; 
 } 
}; 
int main(){ 
 Cat c; 
 cout<< c.speak();  // calling speak of cat 
 c.fetch(); 
 _getch(); 
 return 0;
}
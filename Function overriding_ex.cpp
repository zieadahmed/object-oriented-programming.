#include<iostream>
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


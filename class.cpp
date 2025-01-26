//program that contains a class called smallobj; this 
//class contains one private data item and two public member 
//functions used to set and get private variable value.
#include <iostream> 
#include <conio.h> 
using namespace std; 
class smallobj  //specifier 
{ 
private: 
 int id; 
public: 
 void setdata(int x) 
 { 
  id = x; 
 } 
 void showdata() 
 { 
  cout << id << endl; 
 } 
}; 
void main() 
{ 
 smallobj s1, s2; 
 s1.setdata(1066); 
 s2.setdata(1776); 
 s1.showdata(); 
 s2.showdata(); 
 _getch(); 
}  
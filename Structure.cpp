#include <iostream> 
using namespace std; 
#include <conio.h> 
struct part 
{ 
 int modelnumber; 
 int partnumber; 
 float cost; 
}; 
void main() 
{ 
 part p1; 
part p2 = {6244, 373, 217.55F}; 
 p1.modelnumber = 6224; 
 p1.partnumber = 373; 
 p1.cost = 217.55f; 
 cout << p1.modelnumber << endl; 
 cout << p1.partnumber << endl; 
 cout << p1.cost << endl; 
 _getch(); 
} 

#include <iostream> 
using namespace std; 
#include <conio.h> 
enum days_of_week { Sun, Mon, Tue, Wed, Thu, Fri, Sat }; 
void main() { 
 days_of_week day1, day2; 
 day1 = Mon; 
 day2 = Thu; 
 int diff = day2 - day1; 
 cout << "Days between = " << diff << endl; 
 if (day1 < day2) 
  cout << "day1 comes before day2\n"; 
 _getch(); 
}
#include <iostream> 
using namespace std; 
class angle 
{ 
private: 
 int d; 
 int n; 
 int s; 
  
public: 
 angle() :d(0), n(0), s(0) {} 
 angle(int x, int y , int z):d(x), n(y),s(z) {} 
 angle operator+(angle x); 
 angle operator-(angle x); 
}; 
angle angle::operator+(angle x){ 
 int second = s + x.s; 
 int minutes = n + x.n; 
 int degree = d + x.d; 
 if (second >= 60) 
 { 
  second--; 
  minutes += 1; 
 } 
 if (minutes >= 60) 
 { 
  minutes--; 
  degree += 1; 
 } 
 return angle(second, minutes, degree); 
} 
angle angle::operator-(angle x){ 
 int second = s - x.s; 
 int minutes = n - x.n; 
 int degree = d - x.d;  
 return angle(second, minutes, degree); 
} 
int main(){ 
 angle a(1, 2, 3); 
 angle b(4, 5, 6); 
 angle sum,sub; 
 sum = a + b; 
 sub = a - b; 
 return 0;
} 

#include <iostream> 
#include <conio.h> 
using namespace std; 
class complex { 
private: 
 
 double real, img; 
public: 
 complex(double real = 0, double imag = 0); 
 complex operator+(const complex&)const; 
 void display(); 
}; 
complex::complex(double r, double i) 
{ 
 real = r; 
 img = i; 
} 
complex complex::operator+(const complex &c)const { 
 complex result; 
 result.real = (this->real + c.real); 
 result.img = (this->img + c.img); 
 return result; 
} 
void complex::display() { 
 cout << real << "+" << img << "i" <<endl; 
} 
void main() { 
 
 complex x(10, 5); 
 complex y(2, 4); 
 complex z = x + y; 
 z.display(); 
 _getch(); 
} 
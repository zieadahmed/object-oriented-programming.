//1)
 #include <iostream> 
#include <conio.h> 
using namespace std; 
namespace first 
{ 
 int val = 500; 
} 
int val = 100; 
using namespace first; 
void main() 
{ 
 int val = 200; 
 cout << val;  //200 
 cout << first::val; //500 
 _getch(); 
} 
//2) 
#include <iostream> 
#include <conio.h> 
using namespace std; 
namespace first 
{ 
 int val = 500; 
} 
int val = 100; 
using namespace first; 
void main() 
{ 
 //int val = 200; 
 cout << val; //Error 
 _getch(); 
}                                
 
//3)
 #include <iostream> 
#include <conio.h> 
using namespace std; 
namespace first 
{ 
 int val = 500; 
} 
//int val = 100; 
using namespace first; 
void main() 
{ 
 //int val = 200; 
 cout << val; //500 
 _getch(); 
} 
//4) 
 #include <iostream> 
#include <conio.h> 
using namespace std; 
namespace ns 
{ 
 class geek  
 { 
 public: 
  void display() 
  { 
   cout << "ns-geek-display" << endl; 
  } 
 
 }; 
} 
void main() 
{ 
 ns::geek obj; 
 obj.display(); // ns-geek-display 
 _getch(); 
} 
                        
//5)
 #include <iostream> 
#include <conio.h> 
using namespace std; 
namespace ns 
{ 
 class geek; 
} 
class ns::geek 
{ 
public: 
 void display() 
 { 
  cout << "ns-geek-display" << endl; 
 } 
}; 
void main() 
{ 
 ns::geek obj; 
 obj.display(); // ns-geek-display 
 _getch(); 
}                                    
 
//6)
 #include <iostream> 
#include <conio.h> 
using namespace std; 
namespace ns 
{ 
 void display(); 
 class geek; 
} 
void ns::display() { 
 cout << "ns-display" << endl; 
} 
class ns::geek 
{ 
public: 
 void display(); 
 
}; 
void ns::geek::display() 
{ 
 cout << "ns-geek-display" << endl; 
} 
void main() 
{ 
 ns::geek obj; 
 obj.display(); //ns-geek-display 
 
 ns::display();//ns-display 
 _getch(); 
} 
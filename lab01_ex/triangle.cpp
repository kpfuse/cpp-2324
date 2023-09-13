#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
   double a, b, c, s, p;
   cout << "a= ";  
   cin >> a;
   cout << "b= ";  
   cin >> b;
   cout << "c= ";  
   cin >> c;
   p = (a + b + c) / 2.0;
   s = sqrt(p * (p - a) * (p - b) * (p - c));
   cout << "s = " << s;
   return 0;
}

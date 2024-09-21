#include<iostream>
using namespace std;
main()
{
 int digit,a,b,c,d,e,f,g,h,sum;
 cout<<"Enter a number:";
 cin>>digit;
 a= digit%10;
 e=digit/10;
 f= e/10;
 b= e%10;
 g= f/10;
 c= f%10;
 d= g%10;
 h= g/10;
 sum= a+b+c+d;
 cout<<"The sum of the"<<digit<< "is"<< sum;
}
 
 


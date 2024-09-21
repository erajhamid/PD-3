#include<iostream>
using namespace std;
main()
{
 int age,movedHouse;
 float average;
 cout<<"Enter your age:";
 cin>>age;
 cout<<"Enter the number of houses you moved:";
 cin>>movedHouse;
 average= age/(movedHouse+1);
 cout<<"Average number of years lived in the same house is"<< average << "years";
}
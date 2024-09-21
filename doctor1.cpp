#include<iostream>
using namespace std;
main()
{
 int weight,num_of_days;
 string name;
 cout<<"Enter your name:";
 cin>>name;
 cout<<"Enter the weight you need to lose:";
 cin>>weight;
 num_of_days= weight*15;
 cout<<name <<"will  need"<<num_of_days<<" days to lose"<< weight<<"kg weight";
}

#include<iostream>
using namespace std;
main()
{
 int initial_vel,acc,time;
 float final_vel;
 cout<<"Enter the initial velocity:";
 cin>>initial_vel;
 cout<<"Enter the acceleration:";
 cin>>acc;
 cout<<"Enter the time:";
 cin>>time;
 final_vel=  (acc*time)+initial_vel;
 cout<<"The final velocity of the car is"<<final_vel;
}

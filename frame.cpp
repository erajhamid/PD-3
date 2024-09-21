#include<iostream>
using namespace std;
main()
{
 int frames_per_sec,num_of_min,num_of_frames;
 cout<<"Enter the number of frames per second:";
 cin>>frames_per_sec;
 cout<<"Enter the number of minutes:";
 cin>>num_of_min;
 num_of_frames= num_of_min*60*frames_per_sec;
 cout<<"The total number of frames are"<<num_of_frames;
}
 


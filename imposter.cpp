#include<iostream>
using namespace std;
main()
{
 float imposter_count,player_count,chance;
 cout<<"Enter the imposter count:";
 cin>>imposter_count;
 cout<<"Enter the player count:";
 cin>>player_count;
 chance= 100*(imposter_count/player_count);
 cout<<"The chances of being an imposter is"<<chance<<"%";
}

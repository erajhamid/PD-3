#include<iostream>
using namespace std;
main()
{
 string  movie;
 float adult_price,child_price,adult_sold,child_sold,charity_donation,total_collected,amount_after_donation;
 cout<<"Enter the name of the movie:";
 cin>>movie;
 cout<<"Enter the ticket price of adult:";
 cin>>adult_price;
 cout<<"Enter the ticket price of child:";
 cin>>child_price;
 cout<<"Enter the sold tickets of adult:";
 cin>>adult_sold;
 cout<<"Enter the sold  tickets of child:";
 cin>>child_sold;
 cout<<"Enter the amount you want to donated to charity:";
 cin>>charity_donation;
 total_collected= (adult_price*adult_sold)+(child_price*child_sold);
 amount_after_donation= total_collected-charity_donation;
 cout<<"The total amount after donation is:" <<amount_after_donation;
}
 
 


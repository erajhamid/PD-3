#include<iostream>
using namespace std;
main()
{
 float vegetable_price_per_kg,fruit_price_per_kg,total_earnings;
 int total_kg_vegetable,total_kg_fruit,rupees;
 cout<<"Enter the price of vegetable per kg:";
 cin>>vegetable_price_per_kg;
 cout<<"Enter the price of fruit per  kg:";
 cin>>fruit_price_per_kg;
 cout<<"Enter the total kilograms of vegetable:";
 cin>>total_kg_vegetable;
 cout<<"Enter the total kilograms of  fruit:";
 cin>>total_kg_fruit;
 total_earnings= (vegetable_price_per_kg*total_kg_vegetable)+(fruit_price_per_kg*total_kg_fruit);
 rupees= total_earnings*0.515;
 cout<<"The earnings of the harvest in rupees is:"<< rupees;
}
 
 


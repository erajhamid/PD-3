#include<iostream>
using namespace std;
main()
{
 int size_of_bag,bag_cost,area_covered_by_bag,fertilizer_cost_per_pound,cost_of_fertilizing_area;
 cout<<"Enter the size of the bag in pounds:";
 cin>>size_of_bag;
 cout<<"Enter the cost of the bag:";
 cin>>bag_cost;
 cout<<"Enter the arae covered by the bag:";
 cin>>area_covered_by_bag;
 fertilizer_cost_per_pound=( bag_cost/size_of_bag);
 cost_of_fertilizing_area= (bag_cost/area_covered_by_bag);
 cout<<"Cost  of fertilizer per pound is:"<<fertilizer_cost_per_pound<<"pounds"<<endl;
 cout<<"Cost of fertilizing per square feet:"<<cost_of_fertilizing_area<<"pounds";
}

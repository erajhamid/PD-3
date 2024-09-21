#include<iostream>
using namespace std;
main()
{
 float squareMetre,height,width,paint;
 cout<<"Enter the number of square metre you can paint:";
 cin>>squareMetre;
 cout<<"Enter the width of  single wall:";
 cin>>width;
 cout<<"Enter the height of single wall:";
 cin>>height;
 paint= squareMetre/(height*width);
 cout<<"Total number of walls you can paint is" << paint;
}
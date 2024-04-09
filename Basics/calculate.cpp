#include<iostream>
using namespace std;
int main()
{
    float length,breadth;
    float radius;
    cout<<"Enter the length of the rectangle";
    cin>>length;
    cout<<"Enter the breadth of the rectangle";
    cin>>breadth;
    cout<<"Area of the rectangle: "<<length*breadth<<endl;
    cout<<"Perimeter of the rectangle: "<<2*length+breadth<<endl;
    cout<<"Enter the radius of the circle";
    cin>>radius;
    float areaofcircle = 3.14*radius*radius;
    cout<<"Area of the circle: "<<areaofcircle<<endl;
    cout<<"circumference of the circle: "<<2*3.14*radius<<endl;



}
#include<iostream>
using namespace std ;
int  main (){
float x1,y1,x2,y2,x3,y3, slope1,slope2;
cout<<"first points";
cin>>x1>>y1;

cout<<"second points";
cin>>x2>>y2;
cout<<"third point";
cin>>x3>>y3;

slope1 =(y2-y1)/(x2-x1);
slope2 =(y3-y2)/(x3-x2);
if (slope1==slope2)
{
    cout<<"the points lie on the same line ";
    /* code */
}
else cout<<"the points are not on same line";


return 0;
}
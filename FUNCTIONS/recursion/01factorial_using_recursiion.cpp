#include<iostream>
using namespace std;
int fact(int n){


    //base case 
if (n>1) return n*fact(n-1); // recursive relation


}
int main (){

int n;
cin>>n;
cout<<"THE FACTORIAL OF n IS "<<fact(n);


    return 0;

}
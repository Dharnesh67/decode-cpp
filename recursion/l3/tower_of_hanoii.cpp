#include <iostream>
using namespace std; // source helper and destination
void hanoi(int n,char s,char h,char d){
    if(n==0) return;
    hanoi(n-1,s,d,h);  // these three will vary wuth every call go to copy
    // recursion 3 
    cout<<s<<"_>>_"<<d<<endl;  // SABSE NEECHE WALI KO direct destination pe
    hanoi(n-1,h,s,d); 
   
}
int main()
{
    int n;
    cout<<"number of plates is ";
    cin >> n;
    hanoi(n,'A','B','C');
    
}

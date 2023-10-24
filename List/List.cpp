#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
void display(list<int>&l){
    list<int>::iterator i;// iterator to travel through list
    for (i=l.begin();i!=l.end(); i++) { 
        cout<<*i<<" ";
    }
    cout<<endl;
}
int main(){
list<int>l;
l.push_back(10);
l.push_back(20);
l.push_back(30);
l.push_back(40);
l.push_back(50);
display(l);
return 0;
}
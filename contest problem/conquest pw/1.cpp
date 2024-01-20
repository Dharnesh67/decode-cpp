#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "1301";
    cout<<float(stoi(s.substr(0,2))+(stoi(s.substr(2))/100.0))<<endl;
}
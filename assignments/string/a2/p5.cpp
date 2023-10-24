#include <iostream>
#include <algorithm>
#include <vector>
#include<sstream>
using namespace std;
int main()
{
    string a;       // vowel substring 
    getline(cin, a);
    int n = a.length();
    stringstream ss(a);
    string temp ;
    vector<string>b;
    
    while(ss>>temp ){
        b.push_back(temp);
    }
    sort(b.begin(),b.end());
    int m = b.size();
    // for (int i = 0; i <n; i++)
    // {
    //     cout<<b[i]<<endl;
    // }
    cout<<b[m-1];
    
}
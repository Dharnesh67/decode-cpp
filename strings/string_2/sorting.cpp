#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    sort(s.begin(),s.end()); // sorting will occur on the basis of ascii value
    // sabseohle space print hoga
    cout<<s;
    
}
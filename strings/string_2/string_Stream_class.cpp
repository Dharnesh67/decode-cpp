#include <iostream>
#include <algorithm>
#include<string>
#include<sstream>
using namespace std; // sstring stream tab usee kkarte h jab alag line me print karwana ho 

int main()
{
    // 
    string s;
    getline(cin, s);
    stringstream ss (s);
    string temp;
    while (ss>>temp )
    {
        cout<<temp<<endl;
    }
    

   
}
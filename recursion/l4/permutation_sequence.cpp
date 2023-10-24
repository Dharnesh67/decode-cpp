// leet 60;
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
void permutation(vector<string>&v,string ans,string a){
    if(a=="") {
       v.push_back(ans);
        return;
    }
    for(int i =0;i<a.length();i++){
        char ch = a[i];
        string right =a.substr(i+1);
        string  left=a.substr(0,i);
        permutation(v,ans+ch,left+right);
    }
}
int main()
{ vector<string>v;
    string a = "123";
    permutation(v,"",a);
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    
}
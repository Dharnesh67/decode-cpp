#include <iostream>
#include<algorithm>
using namespace std;
void permutation(string ans,string a){
    if(a=="") {
        cout<<ans<<endl;
        return;
    }
    for(int i =0;i<a.length();i++){
        char ch = a[i];
        string right =a.substr(i+1);
        string  left=a.substr(0,i);
        permutation(ans+ch,left+right);
    }
}
int main()
{  
    string a = "abc";
    permutation("",a);
}
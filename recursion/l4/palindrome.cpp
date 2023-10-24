// #include <iostream>
// #include <vector>  // 
// using namespace std;
// void palindrome(string a,int i ,string b) 
// { 
//    if (i==-1)
//    { 
//       if(a==b) cout<<"yes";
//       else cout<<"no" ;
//     return;
//    }
//    palindrome(a,i-1 ,b+a[i]); 

// }
// int main()
// {
//   string a;
//   getline(cin,a);
//   string b="";
//   palindrome(a,a.size()-1,b);
 
// }
#include <iostream>
#include <vector>  // 
using namespace std;
void palindrome(string a,int i ,int j) 
{ 
   if (i==j)
   { 
    cout<<"yes";
    return;
   }
   if(a[i]!=a[j]) {cout<<"no"; return;}
   palindrome(a,i+1,j-1); 

}
int main()
{
  string a;
  getline(cin,a);
  palindrome(a,0,a.size()-1);
 
}

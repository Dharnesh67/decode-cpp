// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<climits>
// using namespace std;
// int main(){
// int x;
// cin>>x;
// int n =2;
// int count=0;
// while(n<x){
//     n=n<<1;
//     count++;
// }

// cout<<count;
// return 0;
// }
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
int x;
cin>>x;
int temp;
while(x!=0){
    temp=x;
    x=x&(x-1);
}
cout<<temp;
return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std; // mountain array
int main(){
    int c;
    cin>>c;
        int k = sqrt(c);
        // while(lo<=hi){
        //     long long mid = lo +(hi -lo)/2;
        //     if(mid*mid==c){
        //        k= mid;  // isse achha h sqrt(x) jo O(1) me kaam karega
        //        break;
        //     }
        //     else if(mid*mid>c) hi= mid-1;
        //     else lo = mid +1;
        //     k= mid;
        // }
        cout<<k;
    return 0;
}
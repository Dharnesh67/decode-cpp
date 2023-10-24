#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>a;
a={3, 9, 6, 7, 8, 4, 10};  // array in which two items are not placed 
int i =0;
int j =a.size()-1;
while(i<j){
    if(a[i]<a[i+1]) i++;
    if(a[j]>a[j-1]) j--;
    if(a[i]>a[i+1] && a[j]<a[j-1]){
        swap(a[i],a[j]);
        break;
    }
}
for (int k = 0; k <a.size(); k++)
{
  cout<< a[k]<<" ";
}



 return 0;
}
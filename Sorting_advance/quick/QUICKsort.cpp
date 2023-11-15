#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&a,int si ,int ei){
int pelement=a[si],count =0; // pivot or partion index
for (int i =si+1; i <=ei; i++)
{
    if(a[i]<=pelement) count++; 
}
int pindex=count+si;
swap(a[pindex],a[si]);
int i =si;
int j =ei;
while(i<pindex || j >pindex){
    if(a[i]<=pelement){
        i++;
    }
    if(a[j]>pelement){
        j--;
    }
    else if(a[i]>pelement && a[j]<=pelement){
        swap(a[i],a[j]);
        i++;
        j--;
    }
}
return pindex ;
}
void quicksort(vector<int>&a,int si,int ei){
    if(si>=ei) return;
int pi =partition(a,si,ei);
/// 4 1 3 2 5 7 8 6
quicksort(a,si,pi-1);
quicksort(a,pi+1,ei);
}
int main(){
vector<int>a;
a={5,1,8,2,7,6,3,4};
quicksort(a,0,a.size()-1);// sorting
for (int i = 0; i <a.size(); i++)
{
    cout<<a[i]<<" ";
}
 return 0;
}
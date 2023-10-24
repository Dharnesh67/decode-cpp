#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    bool cmp (pair<int ,int> &p1,pair<int ,int> &p2){
        // pair<int ,int> first->value,second->weight
        double ratio1=(p1.first*1.0)/(p1.second*1.0);
        double ratio2=(p2.first*1.0)/(p2.second*1.0);
        return ratio1>ratio2;
    }
    double fractionalknapsack(vector<int>&profit,vector<int>& weight,int n ,int W){
        /*
        TC == O(nlogn);
        space==sorting algo
        */ 
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({profit[i],weight[i]});
        }
        sort(v.begin(),v.end(),cmp);
        double p=0;
        for (int i = 0; i <n; i++)
        {
            if(v[i].second<=W){
                p+=v[i].first;
                W-=v[i].second;
            }
            else{
                p+=((v[i].first*1.0)/(v[i].second*1.0)*W);
                W=0;
                break;
            }
        }
        return p;
    }
 int main(){
vector<int>p={60,100,120};
vector<int>w={10,20,30};

int W=50;
int n=3;
cout<<fractionalknapsack(p,w,n,W);
return 0;
 }

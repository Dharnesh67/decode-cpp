#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 int mostFrequentEven(vector<int>& nums) {
    int n = nums.size();
    vector<int>num2;
    for(int i =0;i<n;i++){
        if(nums[i]%2==0){   //LEET 2404
            num2.push_back(nums[i]);
        }
        
    }
    sort(num2.begin(),num2.end());
    int m = num2.size();
    return num2[m/2];
    }

int main()
{
    vector<int> v; 
    v = {4,4,4,9,2,4};
    cout<<mostFrequentEven(v);
    return 0;
}

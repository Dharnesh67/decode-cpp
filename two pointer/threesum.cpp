#include <vector>
#include <algorithm>
using namespace std;
class ThreeSum {
public:
	std::vector<int> getTriplet(std::vector<int> nums, int target) {
		sort(nums.begin(),nums.end());
		for(int i =0;i<nums.size();i++){
			int j =i+1;
			int k =nums.size()-1;
			while(j<k){
			int sum=nums[i]+nums[j]+nums[k];
				if(sum==target) return {nums[i],nums[j],nums[k]};
				if(sum<target) j++;
				else k--;
			
			}
		}
		return {};
	}
};

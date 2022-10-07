// problem link : https://leetcode.com/problems/two-sum/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>hp;
        for(int i=0;i<nums.size();i++)
        {
            int need=target-nums[i];
            if(hp.find(need)!=hp.end())
            {
                int pos=hp[need];
                return {i,pos};
            }
            hp[nums[i]]=i;
        }
        return {-1,-1};
    }
};

int main() {
	int T;
	cin>>T;
	while(T--){
	    int n,target;
	    cin>>n>>target;
	    vector<int>nums;
	    for(int i=0;i<n;i++)
	    {
	      int num;
	      cin>>num;
	      nums.push_back(num);
	    }
	    Solution ob;
	    auto ans=ob.twoSum(nums,target);
	    for(auto &x : ans)cout<<x<<" ";
	    cout<<endl;
	}
	return 0;
}

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
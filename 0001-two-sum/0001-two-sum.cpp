class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>newarr;
        for(int i=0;i<nums.size();i++)
        {
            newarr.push_back({nums[i],i});
        }
        sort(newarr.begin(),newarr.end());
        int left=0,right=nums.size()-1;
        while(left<right)
        {
            int sum=newarr[left].first+newarr[right].first;
            if(sum==target)
            return {newarr[left].second,newarr[right].second};
            else if(sum>target)
            right--;
            else
            left++;
        }
        return {-1,-1};
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int threshold=nums.size()/2;
        unordered_map<int,int>mpp;
        for(int it:nums)
        {
            mpp[it]++;
            if(mpp[it]>threshold)
            return it;
        }
        return -1;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int threshold=nums.size()/2;
        unordered_map<int,int>frequency;
        for(int value:nums)
        {
            frequency[value]++;
            if(frequency[value]>threshold)
            return value;
        }
        return -1;

    }
};
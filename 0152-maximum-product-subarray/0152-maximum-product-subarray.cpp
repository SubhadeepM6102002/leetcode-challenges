class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long  pref=1,suff=1;
        long long maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(pref==0)
            pref=1;
            if(suff==0)
            suff=1;
            pref*=nums[i];
            suff*=nums[nums.size()-i-1];
            maxi=max(maxi,max(pref,suff));
        }
        return maxi;
    }
};
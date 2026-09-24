class Solution {
public:
bool isprime(int n)
{
    if(n<=1)
    return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
       return false;
    }
     return true;
}
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>>ans;
        for(int first=2;first<=n/2;first++)
        {
            if(isprime(first) && isprime(n-first))
            {
                ans.push_back({first,n-first});
               
            }
            
        }
        return ans;
    }
};
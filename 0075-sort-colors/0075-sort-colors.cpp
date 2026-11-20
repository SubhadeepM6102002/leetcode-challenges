class Solution {
public:
int partition(vector<int>&nums,int low,int high)
{
    int pivot=nums[high];
    int i=low-1;
    for(int j=low;j<high;j++)
    {
        if(nums[j]<=pivot)
        {
            i++;
            swap(nums[i],nums[j]);
        }
    }
    swap(nums[i+1],nums[high]);
    return i+1;
}
void quicksort(vector<int>&nums,int low,int high)
{
    if(low<high)
    {
        int partition_index=partition(nums,low,high);
        quicksort(nums,low,partition_index-1);
        quicksort(nums,partition_index+1,high);
    }
}
    void sortColors(vector<int>& nums) {
        quicksort(nums,0,nums.size()-1);

    }
};
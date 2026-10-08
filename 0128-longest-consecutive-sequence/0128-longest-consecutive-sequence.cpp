class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int longest=0;
        int lastsmaller=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]-1==lastsmaller)
           {
               count=count+1;
               lastsmaller=nums[i];
           }
           else if(lastsmaller!=nums[i])
           {
               count=1;
               lastsmaller=nums[i];
           }
           longest=max(longest,count);
        }
        return longest;
    }
};
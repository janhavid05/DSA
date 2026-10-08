class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>maps;
        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i];
            int needed=target-nums[i];
            if(maps.find(needed)!=maps.end())
            {
                return {maps[needed],i};
            }
            maps[num]=i;
        }
     return {-1,-1};
    }
};
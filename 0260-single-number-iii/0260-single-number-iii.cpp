class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       map<int,int>maps;
       for(int i=0;i<nums.size();i++)
       {
          maps[nums[i]]++;
       } 
       vector<int>ans;
       for(auto it:maps)
       {
         if(it.second==1)
         {
            ans.push_back(it.first);
         }
       }
    return ans;
    }
};
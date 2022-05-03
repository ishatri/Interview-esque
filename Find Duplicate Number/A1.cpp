// aprroach 1 includes the brute force approach where 2 loops are used to determine if the number already existed or not however this gives a Tle hence it is unadvisable to scrounge for.

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size(), c;
        for(int i =0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
          if(nums[j]==nums[i])
          {
              c= nums[i];
              return c;
          }
        }
        return -1;
    }
};

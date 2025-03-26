// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

// You must write an algorithm that runs in O(n) time.

class Solution {
  public:
      int longestConsecutive(vector<int>& nums) {
          if(nums.size()==0) return 0;
          sort(nums.begin(),nums.end());
          int cnt=0,longest=1,lastSmaller=INT_MIN;
          for(int i =0;i<nums.size();i++)
          {
              if(nums[i]-1==lastSmaller)
              {
                  cnt+=1;
                  lastSmaller=nums[i];
              }
              else if(lastSmaller!=nums[i])
              {
                  cnt=1;
                  lastSmaller=nums[i];
              }
              longest=max(longest,cnt);
          }
          return longest;
      }
  };
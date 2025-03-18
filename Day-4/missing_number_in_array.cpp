// Given an array nums containing n distinct numbers in the range [0, n], 
// return the only number in the range that is missing from the array.
class Solution {
  public:
      int missingNumber(vector<int>& nums) {
          int xor1 = 0, xor2 = 0;
          int n = nums.size();
          
          for (int i = 0; i < n; i++) {
              xor2 ^= nums[i];
              xor1 ^= i;
          }
          
          xor1 ^= n;  // Include 'n' in xor1
          return xor1 ^ xor2;
      }
  };
  
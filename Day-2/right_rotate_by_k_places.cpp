// Given an integer array nums, rotate the array to the right by k steps, 
// where k is non-negative.
// Example 1:
// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]

class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
            int n=nums.size();
            k=k%n;
             vector<int> temp(k);
             //putting in temp
            for(int i=n-k,j=0;i<n;i++,j++)
            {
                temp[j]=nums[i];
            }
            //shifting from rightmost
            for(int i =n-k-1;i>=0;i--)
            {
                nums[i+k]=nums[i];
            }
            //putting back temp in nums array
            for(int i =0;i<k;i++)
            {
                nums[i]=temp[i];
            }
           
        }
    };
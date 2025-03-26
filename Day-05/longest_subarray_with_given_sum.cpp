//Longest Subarray with Sum K
// Given an array arr[] containing integers and an integer k, your task is to find the length of the longest subarray where the sum of its elements is equal to the given value k. 
// If there is no subarray with sum equal to k, return 0.

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        map <long long,int> preSumMap;
        long long sum=0;
        int maxLen=0;
        for(int i =0;i<arr.size();i++)
        {
            sum+=arr[i];
            if(sum==k)
            {
                maxLen=max(maxLen,i+1);
            }
            long long rem=sum-k;
            if(preSumMap.find(rem)!=preSumMap.end())
            {
                int len=i-preSumMap[rem];
                maxLen=max(maxLen,len);
            }
            if(preSumMap.find(sum)==preSumMap.end())
            {
                preSumMap[sum]=i;
            }
        }
        return maxLen;
    }
    
};

// You are given a sorted array of integers and a target integer x. Your task is to find the lower bound of x in the array.
// The lower bound of x is the index of the first element that is greater than or equal to x. If no such element exists, return n (the size of the array).

class Solution {
  public:

    int findFloor(vector<int>& arr, int x) {
        // Your code here
        int low=0;
        int high =arr.size()-1;
        int ans=arr.size();
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]>=x)
            {
                ans=mid;
                high=mid -1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
    
};
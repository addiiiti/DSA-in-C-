class Solution {
    public:
      
      int getSecondSmallest(vector<int> &arr) {
          int smallest = arr[0];
          int ssmallest = INT_MAX;
  
          for (int i = 1; i < arr.size(); i++) {
              if (arr[i] < smallest) {
                  ssmallest = smallest;
                  smallest = arr[i];
              } 
              else if (arr[i] != smallest && arr[i] < ssmallest) {  
                  ssmallest = arr[i];
              }
          }
  
          return ssmallest;  
      }
  };
  
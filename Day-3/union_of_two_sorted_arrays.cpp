// Given two sorted arrays a[] and b[], where each array may contain duplicate elements , 
// the task is to return the elements in the union of the two arrays in sorted order.
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int n1 = a.size(), n2 = b.size();
        int i = 0, j = 0;
        vector<int> unionArr;
        
        while (i < n1 && j < n2) {
            if (a[i] < b[j]) {
                if (unionArr.empty() || unionArr.back() != a[i])
                    unionArr.push_back(a[i]);
                i++;
            } 
            else if (a[i] > b[j]) {
                if (unionArr.empty() || unionArr.back() != b[j])
                    unionArr.push_back(b[j]);
                j++;
            } 
            else {  // a[i] == b[j]
                if (unionArr.empty() || unionArr.back() != a[i])
                    unionArr.push_back(a[i]);
                i++;
                j++;
            }
        }

        while (i < n1) {
            if (unionArr.empty() || unionArr.back() != a[i])
                unionArr.push_back(a[i]);
            i++;
        }
        
        while (j < n2) {
            if (unionArr.empty() || unionArr.back() != b[j])
                unionArr.push_back(b[j]);
            j++;
        }

        return unionArr;
    }
};
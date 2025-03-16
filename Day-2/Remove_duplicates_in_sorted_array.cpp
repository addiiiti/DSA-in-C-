//  Given an integer array nums sorted in non-decreasing order, 
// remove the duplicates in-place such that each unique element appears only once. 
// The relative order of the elements should be kept the same. 
// Then return the number of unique elements in nums.

//  Consider the number of unique elements of nums to be k, to get accepted,
//  you need to do the following things:

//  Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
//  Return k.
// Time Complexity: 𝑂(𝑁log⁡𝑁) (due to set insertion).
#include <bits/stdc++.h>
using namespace std;


set<int> getUniqueElements(vector<int>& arr) {
    set<int> s;
    for (int i = 0; i < arr.size(); i++) {
        s.insert(arr[i]);
    }
    return s; 
}


int removeDuplicates(vector<int>& arr) {
    set<int> s = getUniqueElements(arr); 
    int index = 0;

    for (auto i : s) {
        arr[index++] = i;
    }

    return s.size();
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3};
    cout << removeDuplicates(arr) << endl;
    return 0;
}

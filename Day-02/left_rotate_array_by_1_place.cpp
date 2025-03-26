// Given an array 'arr' containing 'n' elements, rotate this array left once and return it.



// Rotating the array left by one means shifting all elements 
//by one place to the left and moving the first element to the last position in the array.

// optimal approach-
// time complexity-O(n)

vector<int> rotateArray(vector<int>& arr, int n) {
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
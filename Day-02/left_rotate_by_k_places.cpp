// Given an array 'arr' with 'n' elements, 
// the task is to rotate the array to the left by 'k' steps,
//  where 'k' is non-negative.
// Example:
// 'arr '= [1,2,3,4,5]
// 'k' = 1  rotated array = [2,3,4,5,1]
// 'k' = 2  rotated array = [3,4,5,1,2]
// 'k' = 3  rotated array = [4,5,1,2,3] and so on.

vector<int> rotateArray(vector<int>arr, int k) {
    k=k%arr.size();
    int n=arr.size();
    int temp[k];
    //for storing in temp upto k
    for(int i =0;i<k;i++)
    {
        temp[i]=arr[i];
    }
    //for shifting from k to n
    for(int i =k;i<n;i++)
    {
        arr[i-k]=arr[i];
    }
    //for putting back temp in array
    for(int i =n-k;i<n;i++)
    {
        arr[i]=temp[i-(n-k)];
    }
    //return the rotated array
    return arr;

}
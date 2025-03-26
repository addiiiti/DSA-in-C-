vector<int> findSecondLargest(int n, vector<int> &a) {
    
    int largest = a[0], secondLargest = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        } else if (a[i]<largest && a[i] > secondLargest) {
            secondLargest = a[i];
        }
    }
    return secondLargest;
}
//find the intersection of the two arrays
//optimal approach-Two pointers
//Time Complexity:O(n+m)
vector <int> findArrayIntersection(vector<int> &a,vector <int> &b)
{
  int n=a.size();
  int m=b.size();
  int i =0;
  int j =0;
  vector <int> ansArr;
  while(i<n && j<m)
  {
    if(a[i]<b[j])
    {
      i++;
    }
    else if(b[j]<a[i])
    {
      j++;
    }
    else
    {
      ansArr.push_back(a[i]);
      i++;
      j++;
    }
  }
  return ansArr;

}
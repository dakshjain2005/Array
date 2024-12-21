/*Given an array arr of only 0's and 1's. The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. Find the count of all the 0's.*/

// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int n = arr.size();
        int count = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                count ++;
            }
        }
        return count;
    }
};

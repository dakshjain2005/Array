/*Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array(In Place). In other words, arrange the elements into a sequence such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....
If there are multiple solutions, find the lexicographically smallest one.

Note: The given array is sorted in ascending order, and you don't need to return anything to change the original array.*/

void convertToWave(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i = 0; i < n; i++){
            if( i == n-1){
                break;
            }
            if( i % 2 == 0){
                swap(arr[i],arr[i+1]);
            }
        }
    }

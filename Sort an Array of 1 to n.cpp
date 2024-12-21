/*Given an array arr[] of size n consisting of distinct integers from 1 to n. Your task is to sort the array without using extra space
Challenge: Try to solve it using linear time complexity.*/

vector<int> sortArray(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        return arr;
    }

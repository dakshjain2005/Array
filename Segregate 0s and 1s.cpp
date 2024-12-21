/*Given an array arr consisting of only 0's and 1's in random order. Modify the array in-place to segregate 0s onto the left side and 1s onto the right side of the array.*/

void segregate0and1(vector<int> &arr) {
        // code here
        int n = arr.size();
        int x = 0;
        int y = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                x++;
            }
        }
        y = n - x; 
        //cout<<x<<" "<<y<<endl;
        if(x > 0){
            for(int i = 0; i < x; i++){
                arr[i] = 0;
            }
        }
        for(int i = x; i < n; i++){
            arr[i] = 1;
        }
        
    }
/*problem link
https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1?page=1&category=Arrays&difficulty=Easy&status=solved&sortBy=accuracy
*/ 

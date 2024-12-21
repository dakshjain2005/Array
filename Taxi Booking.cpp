int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time){
        int ans = INT_MAX;
        int temp = 0;
        for(int i = 0; i < N; i++){
            if(cur >= pos[i]){
                temp = (cur - pos[i])*time[i];
                if(temp < ans){
                    ans = temp;
                }
                
            }
            else if(cur < pos[i]){
                temp = (pos[i] - cur)*time[i];
                if(temp < ans){
                    ans = temp;;
                }
            }
        }
        return ans;
    }

class Solution {
  public:
    
    int LowerBound(vector<int> &arr, int m, int x){
        int low = 0, high = m - 1;
        int ans = m;
        
        while(low <= high){
            int mid = (low + high) / 2;
            
            if(arr[mid] >= x){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
    
    int rowWithMax1s(vector<vector<int>> &arr) {
        
        int n = arr.size();
        int m = arr[0].size();
        
        int cnt_max = 0;
        int index = -1;
        
        for(int i = 0; i < n; i++){
            
            int firstOneIndex = LowerBound(arr[i], m, 1);
            int cnt_ones = m - firstOneIndex;
            
            if(cnt_ones > cnt_max){
                cnt_max = cnt_ones;
                index = i;
            }
        }
        
        return index;
    }
};
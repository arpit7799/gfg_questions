class Solution {
  public:
  
    bool canAllocate(vector<int> &arr, int k, int maxPages){
        int students = 1;
        int pages = 0;
        
        for(int p : arr){
            if(pages + p > maxPages){
                students++;
                pages = p;
            }
            else{
                pages += p;
            }
        }
        
        return students <= k;
    }
  
    int findPages(vector<int> &arr, int k) {
        
        int n = arr.size();
        if(k > n) return -1;
        
        int low = *max_element(arr.begin(), arr.end());
        int high = 0;
        
        for(int p : arr) high += p;
        
        int ans = high;
        
        while(low <= high){
            int mid = low + (high - low) / 2;
            
            if(canAllocate(arr, k, mid)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        
        return ans;
    }
};
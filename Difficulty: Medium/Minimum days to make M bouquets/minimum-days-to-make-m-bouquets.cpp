class Solution {
  public:
    bool isValid(vector<int>& arr, long long mid, int k, int m){
        int n=arr.size();
        int cnt=0;
        int bouquets=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=mid){
                cnt++;
                if(cnt==k){
                    bouquets++;
                    cnt=0;
                }
            } else{
                cnt=0;
            }
        }
        return bouquets>=m;
    }


    int minDaysBloom(vector<int>& arr, int k, int m) {
        int n=arr.size();
        long long min=INT_MAX;
        long long max=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
            if(arr[i]<min){
                min=arr[i];
            }
        }
        long long  low=min;
        long long high=max;
        long long  ans=-1;
        while(low<=high){
            long long mid=low+(high-low)/2;
            bool isValidN=isValid(arr,mid,k,m);
            if(isValidN){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
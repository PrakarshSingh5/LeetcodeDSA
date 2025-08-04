class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int thres) {

            int n=arr.size();
            int sum=0;
            for(int i=0;i<k;i++){
                sum+=arr[i];
            }

            int  i=0;
            int j=k;
            int cnt=0;
            while(j<n){
                if((sum/k)>=thres){
                    
                   
                    cnt++;
                }
                sum+=arr[j];
                sum-=arr[i];
                i++;
                j++;


                //  cout<<sum<<" "<<i<<" "<<j<<" "<<endl;
            }
             if((sum/k)>=thres){
                    
                   
                    cnt++;
                }
            return cnt;
    }
};
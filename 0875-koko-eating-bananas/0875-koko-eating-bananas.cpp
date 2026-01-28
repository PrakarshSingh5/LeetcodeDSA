class Solution {
public:
    bool isEatBanana(vector<int>&piles, int x, int h){
        int sum=0;
        int cnt=0;
        for(int i=0;i<piles.size();i++){
           int val=ceil((piles[i]+x-1)/x);
           cnt+=val;
        }
        if(cnt>h){
            return false;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
            int n=piles.size();
            int j=0;
            
            for(auto it : piles){
                j=max(it, j);
            }
            int ans=j;
            int i=1;
            while(i<j){
                int mid=(i+j)/2;
                bool flag=isEatBanana(piles, mid, h);
                if(flag){
                    j=mid;
                }else {
                    i=mid+1;
                }
            }
            return i;
    }
};
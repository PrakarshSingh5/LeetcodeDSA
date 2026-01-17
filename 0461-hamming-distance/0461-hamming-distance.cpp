class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt=0;
            for(int i=0;i<32;i++){
                    int idx1 = x>>i & 1;
                    int idx2 = y>>i & 1;
                    if(idx1 != idx2){
                            cnt++;
                    }
            }
            return cnt;
    }   
};
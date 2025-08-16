class Solution {
public:
    vector<int> twoSum(vector<int>& num, int tar) {
        int i=0, j=num.size()-1;
        while(i<j){

            if((num[i]+num[j])==tar){
                return {i+1, j+1};
            }

            if(num[i]+num[j] < tar){
                i++;
            }else if(num[i]+num[j] > tar){
                j--;
            }
        }
        return {};
    }   
};
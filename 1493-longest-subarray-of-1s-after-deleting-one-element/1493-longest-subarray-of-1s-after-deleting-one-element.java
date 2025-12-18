class Solution {
    public int longestSubarray(int[] nums) {
        int n = nums.length;
        int si = 0, ei = 0, k = 1, ptr = 0, ans =0;
        while ( ei < n) {
            if (nums[ei] == 0) {
                if (k > 0) {
                    k--;
                    ptr = ei;

                } else {
                    ans = Math.max(ans,ei-si-1);
                    si= ptr+1;
                    ptr = ei;
                }
            }
            ei++;
        }

        System.out.println(ans+" "+ si +" "+ei);
       
        ans = Math.max(ans,ei-si-1);
        return ans;
    }
}
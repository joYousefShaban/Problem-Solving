// https://leetcode.com/problems/arithmetic-slices

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int ans=0,count =1;
        for(int i=2;i<A.size();i++){
            if(A[i]-A[i-1]==A[i-1]-A[i-2]){ans=ans+(count++);}
            else count=1;
        }
        return ans;
    }
};
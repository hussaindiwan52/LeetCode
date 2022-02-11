// https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>umap;
        umap[0]=1;
        int sum=0,count=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(umap[sum-k]!=0){
                count+=umap[sum-k];
            }
            umap[sum]++;
        }
        return count;
    }
};

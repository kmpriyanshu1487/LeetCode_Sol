class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int startIdx=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[startIdx]=nums[i];
                startIdx++;
            }
        }
        for(int i=startIdx;i<n;i++){
            nums[i]=0;
        }
    }
};
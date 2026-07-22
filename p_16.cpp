class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int closum= nums[0]+nums[1]+nums[2];
        int i=0;
        while(i<nums.size()-2){
            int j=i+1, k=nums.size()-1;
            while(j<k){
                int curr= nums[i]+nums[j]+nums[k];
                if(abs(curr-target)<abs(closum-target)){
                    closum=curr;
                }
                if(curr== target){
                    return target;
                }
                else if(curr<target){
                    j++;
                }
                else{
                    k--;
                }        
            }
            i++;
        }
        return closum;
    }
};
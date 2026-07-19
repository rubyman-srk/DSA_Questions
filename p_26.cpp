#include <algorithm>
#include <list>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0, u=1, j=1;
        int s=nums.size();
        while(j < s)
        {
            if(nums[j-1] == nums[j])
            {
                j++;
            }
            else
            {
                u++;
                nums[i+1] = nums[j];
                i++;
                j++;
            }
        }
        return u;
    }
};
class Solution {
public:
    int  longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0)return 0;
        if (nums.size() == 1)return 1;
        sort(nums.begin(), nums.end());
        set<int> counter;
        int max = 0 ;
        
        for (int i = 0; i < nums.size(); i++) {
            counter.insert(nums[i]);

            if (counter.size() > max) {
                max = counter.size();
            }
            if (i == nums.size()-1)return max;
            
            if (nums[i] - nums[i + 1] < -1 || nums[i] - nums[i + 1] > 1 && i < nums.size()) {
                counter.clear();
                
            }
            
            

           
        }
        return max;
    }
};
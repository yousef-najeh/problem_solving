class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if (nums.size() == 1)return false;
        unordered_map<int, int> index;
        bool result=false;
        
        for (int i = 0; i < nums.size(); i++) {

            if (index.find(nums[i]) != index.end()) {

                if (abs(index[nums[i]] - i) <= k) {
                    return  true;
                    
                }
                else {
                    result= false;
                    index.erase(nums[i]);
                    index[nums[i]] = i;
                }
            }
            else if (index.find(nums[i]) == index.end()) {
                index[nums[i]] = i;
            }

        }
        return result;;
    }
};
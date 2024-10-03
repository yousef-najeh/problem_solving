#include<iostream>  
#include<vector>
using namespace std;





class Solution {
public:
    int getMax(vector<int> candies) {
        int counter = 0;
        for (int i = 0; i < candies.size(); i++) {
            if (counter < candies[i]) {
                counter = candies[i];
            }
        }
        return counter;
    }
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = getMax(candies);
        vector<bool> results;
        for (int i = 0; i < candies.size(); i++) {
            if ((candies[i] + extraCandies) >= max) {
                results.push_back(true);
            }
            else {
                results.push_back(false);
            }
        }
        return results;
    }
};
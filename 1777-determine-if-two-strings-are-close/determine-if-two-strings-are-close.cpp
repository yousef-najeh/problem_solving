class Solution {
public:
    bool closeStrings(std::string word1, std::string word2) {
        if (word1.size() != word2.size()) return false;
        
        std::vector<int> counts1(26, 0), counts2(26, 0);
        std::set<char> set1, set2;
        
        for (char c : word1) {
            counts1[c - 'a']++;
            set1.insert(c);
        }
        
        for (char c : word2) {
            counts2[c - 'a']++;
            set2.insert(c);
        }
        
        // Sort the frequency counts
        std::sort(counts1.begin(), counts1.end());
        std::sort(counts2.begin(), counts2.end());
        
        // Check if both sets of characters and their frequency counts match
        return set1 == set2 && counts1 == counts2;
    }
};

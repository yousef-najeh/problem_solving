class Solution {
public:
    bool closeStrings(std::string word1, std::string word2) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        if (word1.size() != word2.size()) return false;
        vector<int> counts1(26, 0), counts2(26, 0);
        set<char> set1, set2;
        
        for (char c : word1) {
            counts1[c - 'a']++;
            set1.insert(c);
        }
        
        for (char c : word2) {
            counts2[c - 'a']++;
            set2.insert(c);
        }
        
        
        sort(counts1.begin(), counts1.end());
        sort(counts2.begin(), counts2.end());
        
       
        return set1 == set2 && counts1 == counts2;
    }
};

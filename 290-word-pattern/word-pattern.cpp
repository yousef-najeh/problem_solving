class Solution {
public:

    vector<string> tokinise(string temp) {
        std::stringstream ss(temp);
        string word;
        vector<string> result;

        while (ss >> word) {
            result.push_back(word);
        }
        return result;
    }

    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> charToWord;   
        unordered_map<string, char> wordToChar;   

        vector<string> words = tokinise(s);

        if (pattern.size() != words.size()) {
            return false;
        }

        for (int i = 0; i < pattern.size(); ++i) {
            char c = pattern[i];
            string word = words[i];

          
            if (charToWord.count(c)) {
                if (charToWord[c] != word) {
                    return false;
                }
            }
            else {
            
                if (wordToChar.count(word)) {
                    return false;
                }
               
                charToWord[c] = word;
                wordToChar[word] = c;
            }
        }

        return true;
    }
};
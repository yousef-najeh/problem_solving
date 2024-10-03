class Solution {
public:
	//PAHNAPLSIIGYIR
	string convert(string s, int numRows) {
		if (numRows == 1)return s;
		int midChar = numRows-2;
		int rowArrow=0;
		int colArrow = 0;
		int n =0;
		string toto;
		vector<vector<char>> result(numRows);
		int counter = 1;
		
		while (n<s.length()) {
			
			if (counter==1) {
				result[rowArrow++].push_back(s[n]);
				
				if (rowArrow == numRows-1)counter = 2;

			}
			else if (counter ==2) {
				result[rowArrow--].push_back(s[n]);

				if (rowArrow == 0)counter = 1;
			}

			n++;
		};
		for (int k = 0; k < numRows; k++) {
			for (char c : result[k]) {
				toto += c;
			}
		}
		
		return toto;
	}
	
};
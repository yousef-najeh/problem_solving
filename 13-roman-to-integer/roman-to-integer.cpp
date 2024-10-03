class Solution {
private:
    string Rdig = { 'I','V','X','L','C','D','M' };
     unsigned short value[7] = { 1,5,10,50,100,500,1000 };
     unsigned short result = 0;
public:
        inline unsigned short GetValue(char temp) {
        for ( unsigned short i = 0;Rdig[i]; i++) {
            if (temp == Rdig[i]) {
                return value[i];
            }
        }
        return 0;
    }
    int romanToInt(string s) {
        if (s.length() <= 0 || s.length() > 15)return 0;
        for ( unsigned short i = 0; s[i]; i++) {
            if (s[i] == 'I') {
                if (s[i + 1] == 'V') { 
                    result += GetValue('V') - GetValue('I');
                    i++;
                }
                else if (s[i + 1] == 'X') {
                    result += (GetValue('X') - GetValue('I'));
                     i++;
                }
                else {
                    result += GetValue(s[i]);
                }
            }
            else if (s[i] == 'X') {

                if (s[i + 1] == 'L') { 
                    result += GetValue('L') - GetValue(s[i]);
                    i++;
                }
                else if (s[i + 1] == 'C') { 
                    result += GetValue('C') - GetValue(s[i]);
                    i++;
                }
                else
                result += GetValue(s[i]);
            }
            else if (s[i] == 'C') {
                if (s[i + 1] == 'D') { 
                    result += GetValue('D') - GetValue(s[i]);
                    i++;
                }
                else if (s[i + 1] == 'M') { 
                    result += GetValue('M') - GetValue(s[i]);
                     i++;
                }
                else
                result += GetValue(s[i]);
            }
            else
            result += GetValue(s[i]);


        }
        return result;
    }
};
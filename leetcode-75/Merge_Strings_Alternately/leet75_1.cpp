using namespace std;
#include <iostream>
# include <string>
class Solution {
public:


    string mergeAlternately(string word1, string word2) {
        string result;
        int max_length = max(word1.length(), word2.length());
        int min_length = max(word1.length(), word2.length());

        for (int i = 0; i < min_length; i++) {
            result.push_back(word1[i]);
            result.push_back(word2[i]);
        }

        if (word1.length() > word2.length()) {
            result = result + word1.substr(min_length);
        }
        else {
            result = result + word2.substr(min_length);
        }
        return result; 
    }
};




// Notes 
// substr https://cplusplus.com/reference/string/string/substr/
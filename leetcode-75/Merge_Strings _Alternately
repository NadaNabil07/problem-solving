using namespace std; 
#include <iostream>
# include <vector>
// solution Idea : looping on the both words and them alternately in a vector [this will stop untill it finishes the minmum length]
// and to consider the case if the two strings did not have the same length , loop from the min to the max length on the max length string
// Notes - if you make the type of vector is char , be carful about the return as it is a string return function "string output (res.begin(), res.end());"
class Solution {
public:
    
    
    string mergeAlternately(string word1, string word2) {
        vector <char> res;
        
        int maxi;

        if (word1.length() > word2.length()) {
            maxi = word1.length();
        }
        if (word1.length() < word2.length()) {
            maxi = word2.length();
        }

        int mini = min(word1.length(), word2.length()); 
        for (int i = 0; i < mini; i++) {  
            res.push_back(word1[i]); 
            res.push_back(word2[i]);
        }

        for (int i = mini  ; i < maxi ; i++) {
            if (word1.length() == maxi) {
                res.push_back(word1[i]); 
            }
            else {
                res.push_back(word2[i]);
            }
                
        }
        string output (res.begin(), res.end());
        return output; 

    }
};


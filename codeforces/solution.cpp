// cf_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 
#include <string>

class Solution {
public :
    void Way_Too_Long_Words(int n) {
        string* arr = new string[n];
        string result; 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            if (arr[i].length() <= 10) {
                cout << arr[i] << endl;
            }

            if (arr[i].length() > 10) {
                result.push_back(arr[i][0]);
   
                result = result + to_string(arr[i].length() - 2);
                //result.push_back(arr[i].length()- 2+ '0');
                result.push_back(arr[i][arr[i].length() - 1]);
                cout << result << endl;
                result.clear();
            }
        }
        delete[] arr;
    }
   
};

int main()
{
    int n; 
    cin >> n;
    Solution sol; 
    sol.Way_Too_Long_Words(n);
   
}


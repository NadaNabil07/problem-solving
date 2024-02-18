// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// propblem link : https://codeforces.com/contest/231/problem/A

#include <iostream>
using namespace std; 
#include <vector> ; 
class solution {
public :
    int sol(int n) {
        int output = 0;
        while(n--) {
            int* arr = new int[3]; 
            int result = 0; 
            for (int i = 0; i < 3; i++) {
                cin >> arr[i]; 
            }
            for (int i = 0; i < 3; i++) {
                if (arr[i] == 1) {
                    result = result + 1; 
                }
                else {
                    result = result; 
                }
            }
            if (result >= 2) {
                output = output + 1; 
            }
            else {
                output = output; 
            }
            delete[]arr; 
            result = 0; 

        }

        return output; 
    }

};

int main()
{
    solution sol;
    int n; 
    cin >> n; 
    cout << sol.sol(n); 
}


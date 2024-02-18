#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class solution {
public:
    void sol(int n) {
        while (n--) {
            for (int s = 0; s < 3; s++) {
                
                char*  arr = new char [3];
                int x = 0;
                for (int i = 0; i < 3; i++) {
                    cin >> arr[i];
                }
                for (int i = 0; i < 3; i++) {
                    if (arr[i] == '?') {
                        x = x + 1; 
                    }
                }

                vector<char> vec;
                char y = 'A';
                for (int i = 0; i < 3; i++) {
                    vec.push_back(y);
                    y++;
                }

                for (int i = 0; i < 3; i++) {
                    if (x == 1) {
                        if (arr[i] != '?') {
                            auto it = find(vec.begin(), vec.end(), arr[i]);
                            if (it != vec.end()) {
                                vec.erase(it);
                            }
                        }
                    }
                    else {
                        break;
                    }
                }
                if (vec.size() == 1) {
                    cout << vec[0] << endl; 
                }
               
                vec.clear();
                delete [] arr ;
                x = 0;
                y = 0;
            }
        }
            

    }
};

int main()
{
    solution sol;
    int n;
    cin >> n;
    sol.sol(n);
    return 0;
}

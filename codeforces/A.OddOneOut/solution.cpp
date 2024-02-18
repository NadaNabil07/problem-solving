#include <iostream>
using namespace std; 
#include <vector> ; 
class solution {
public :
    void sol(int n) {
        while (n--) {
            int* arr = new int[3]; 
            for (int i = 0; i < 3; i++) {
                cin >> arr[i]; 
            }
            if (arr[0] == arr[1]) {
                cout << arr[2] << endl;
            }
            else if (arr[0] != arr[1]) {
                if (arr[0] != arr[2]) {
                    cout << arr[0] << endl ;
                }
                else {
                    cout << arr[1] <<endl;
                }
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
}


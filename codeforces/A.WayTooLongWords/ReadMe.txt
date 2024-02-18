problem link : https://codeforces.com/problemset/problem/71/A
Notes : result = result + to_string(arr[i].length() - 2); // runs correctly 
                //result.push_back(arr[i].length()- 2+ '0'); // wrong output 
for this as i create a string (result) , so it is not allowed to pushback any other dataType 
so we need casting (i used expicit casting ) to_string()

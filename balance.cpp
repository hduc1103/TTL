#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    
    vector<bool> res;

    for (int i = 0; i < n; ++i) {
        string s;
        getline(cin, s);
        
        stack<char> tmp;
        bool status = true;

        for (char ch : s) {
            switch (ch) {
                case '(': 
                case '[': 
                case '{':
                    tmp.push(ch);
                    break;
                case ')': 
                    if (tmp.empty() || tmp.top() != '(') status = false;
                    else tmp.pop();
                    break;
                case ']': 
                    if (tmp.empty() || tmp.top() != '[') status = false;
                    else tmp.pop();
                    break;
                case '}': 
                    if (tmp.empty() || tmp.top() != '{') status = false;
                    else tmp.pop();
                    break;
            }
            if (!status) break;
        }

        if (!tmp.empty()) status = false; 

        res.push_back(status);
    }
        for (bool result : res) {
        cout << (result ? "true" : "false") << endl;
    }

    return 0;
}

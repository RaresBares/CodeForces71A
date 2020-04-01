#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {

    int n = 0;
    cin >> n;
    if(n >= 0 && n <= 100) {
        vector<string> str;
        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            str.push_back(s);

        }
        for (vector<string>::iterator t = str.begin(); t != str.end(); ++t) {
            string s = *t;
            if (s.length() <= 10) {
                cout << s << "\n";
            } else {
                char f = s.front();
                basic_string<char> l = s.substr(s.length() - 1);
                int numb = (s.length() - 2);
                cout << f + to_string(numb) + l << "\n";
            }
        }
    }
    return 0;
}

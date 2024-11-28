#include <iostream>
#include <string>

using namespace std;

int find(const string& s) {
    size_t pos = -1;
    for (int i = 0; i < 3; ++i) {
        pos = s.find('.', pos + 1);
        if (pos == string::npos) {
            return -1;
        }
    }
    return pos;
}

string change(string& s) {
    for (size_t i = 3; i < s.length(); i += 4) {
        s[i] = '.';
    }
    return s;
}

int main() {
    string str;

    cout << "Enter string:" << endl;
    getline(cin, str);

    int third_dot_index = find(str);
    if (third_dot_index != -1)
        cout << "Index of third dot: " << third_dot_index << endl;
    else
        cout << "The string does not contain three dots." << endl;

    string modified_str = change(str);
    cout << "Modified string (result): " << modified_str << endl;

    return 0;
}
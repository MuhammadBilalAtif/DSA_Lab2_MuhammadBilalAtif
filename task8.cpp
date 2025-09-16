#include <iostream>
#include <string>
using namespace std;

int naivePatternSearch(const string& text, const string& pattern) {
    int n = text.size();
    int m = pattern.size();
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }
        if (j == m) {
            return i; 
        }
    }
    return -1;
}

int main() {
    string text, pattern;
    cout << "Enter text: ";
    getline(cin, text);

    cout << "Enter pattern: ";
    getline(cin, pattern);

    int result = naivePatternSearch(text, pattern);

    if (result == -1) {
        cout << "-1" << endl;
    } else {
        cout << "Pattern found at index: " << result << endl;
    }

    return 0;
}

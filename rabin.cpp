#include <iostream>
#include <string>
#include <cmath>
using namespace std;
const int prime = 101;
int calculateHash(const string& str, int start, int end) {
    int hashValue = 0;
    for (int i = start; i <= end; ++i) {
        hashValue += str[i] * pow(prime, i - start);
    }
    return hashValue;
}
void rabinKarp(const string& text, const string& pattern) {
    int textLength = text.length();
    int patternLength = pattern.length();
    int patternHash = calculateHash(pattern, 0, patternLength - 1);
    int textHash = calculateHash(text, 0, patternLength - 1);

    for (int i = 0; i <= textLength - patternLength; ++i) {
        if (patternHash == textHash) {
            bool match = true;
            for (int j = 0; j < patternLength; ++j) {
                if (text[i + j] != pattern[j]) {
                    match = false;
                    break;
                }
            }
            if (match) {
                cout << "Pattern found at index " << i << endl;
            }
        }
        if (i < textLength - patternLength) {
            textHash = (textHash - text[i] * pow(prime, 0)) * prime + text[i + patternLength];
        }
    }
}

int main() {
    string text, pattern;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the pattern: ";
    getline(cin, pattern);

    rabinKarp(text, pattern);

    return 0;
}

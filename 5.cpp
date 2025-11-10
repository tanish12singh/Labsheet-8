#include <iostream>
#include <cstring>
using namespace std;

int countWords(string str) {
    int count = 0;
    bool inWord = false;

    for (char c : str) {
        if (isspace(c))
            inWord = false;
        else if (!inWord) {
            inWord = true;
            count++;
        }
    }
    return count;
}

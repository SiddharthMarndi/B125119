#include <iostream>
using namespace std;

int main() {
    char sentence[100];
    cout << "Enter a sentence: ";
    cin.getline(sentence, 200);

    char *ptr = sentence;
    int upper=0, lower=0, space=0;

    while (*ptr != '.') {
        if (*ptr >= 'A' && *ptr <= 'Z') {
            upper++;
        } else if (*ptr >= 'a' && *ptr <= 'z') {
            lower++;
        } else if (*ptr == ' ') {
            space++;
        }
        ptr++;
    }

    cout << "Uppercase letters: " << upper<< endl;
    cout << "Lowercase letters: " << lower<< endl;
    cout << "Spaces: " << space<< endl;

    return 0;
}


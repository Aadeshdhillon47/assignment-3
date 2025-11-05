#include <iostream>
using namespace std;

int main() {
    char s[100];
    cout << "Enter string: ";
    cin >> s;
    char stack[100];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++)
        stack[++top] = s[i];

    cout << "Reversed: ";
    while (top != -1)
        cout << stack[top--];
}

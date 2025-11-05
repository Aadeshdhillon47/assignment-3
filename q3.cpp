#include <iostream>
using namespace std;

int main() {
    char exp[100], stack[100];
    int top = -1;
    cout << "Enter expression: ";
    cin >> exp;

    for (int i = 0; exp[i] != '\0'; i++) {
        char c = exp[i];
        if (c == '(') stack[++top] = c;
        else if (c == ')') {
            if (top == -1) { cout << "Not Balanced"; return 0; }
            top--;
        }
    }
    if (top == -1) cout << "Balanced";
    else cout << "Not Balanced";
}

#include <iostream>
using namespace std;

int main() {
    char exp[100];
    int stack[100], top = -1;

    cout << "Enter postfix (no spaces): ";
    cin >> exp;

    for (int i = 0; exp[i] != '\0'; i++) {
        char c = exp[i];
        if (c >= '0' && c <= '9') {
            stack[++top] = c - '0';
        } else {
            int b = stack[top--];
            int a = stack[top--];
            int res;

            if (c == '+') res = a + b;
            else if (c == '-') res = a - b;
            else if (c == '*') res = a * b;
            else if (c == '/') res = a / b;
            else res = 0;

            stack[++top] = res;
        }
    }

    cout << "Result: " << stack[top] << endl;
    return 0;
}

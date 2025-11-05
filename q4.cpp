#include <iostream>
using namespace std;

char stackArr[100];
int top = -1;

int prec(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    return 0;
}

void push(char c) { stackArr[++top] = c; }
char pop() { return stackArr[top--]; }
char peek() { return stackArr[top]; }

int main() {
    char infix[100];
    cout << "Enter infix: ";
    cin >> infix;

    cout << "Postfix: ";
    for (int i = 0; infix[i] != '\0'; i++) {
        char c = infix[i];
        if (isalnum(c)) cout << c;
        else if (c == '(') push(c);
        else if (c == ')') {
            while (top != -1 && peek() != '(')
                cout << pop();
            pop();
        } else {
            while (top != -1 && prec(peek()) >= prec(c))
                cout << pop();
            push(c);
        }
    }
    while (top != -1) cout << pop();
}

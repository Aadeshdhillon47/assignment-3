#include <iostream>
using namespace std;

#define MAX 100
int stackArr[MAX], top = -1;

void push() {
    if (top == MAX - 1) cout << "Stack full\n";
    else {
        int x; cout << "Enter value: "; cin >> x;
        stackArr[++top] = x;
    }
}

void pop() {
    if (top == -1) cout << "Stack empty\n";
    else cout << "Popped: " << stackArr[top--] << "\n";
}

void peek() {
    if (top == -1) cout << "Stack empty\n";
    else cout << "Top: " << stackArr[top] << "\n";
}

void display() {
    if (top == -1) cout << "Stack empty\n";
    else {
        cout << "Stack: ";
        for (int i = 0; i <= top; i++) cout << stackArr[i] << " ";
        cout << "\n";
    }
}

int main() {
    int ch;
    do {
        cout << "\n1.Push 2.Pop 3.Peek 4.Display 0.Exit: ";
        cin >> ch;
        if (ch == 1) push();
        else if (ch == 2) pop();
        else if (ch == 3) peek();
        else if (ch == 4) display();
    } while (ch != 0);
}

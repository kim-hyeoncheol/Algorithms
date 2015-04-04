#include <iostream>
#include <stack>
#include <cstring>
#include <ctype>

using namespace std;

const char	PLUS = '+';
const char	MINUS = '-';
const char	MUL = '*';
const char	DIV = '/';
const char	LEFT = '(';
const char	RIGHT = ')';

bool    isValid;
int     result;
char    infix[1024];

stack <int>		num;
stack <char>	op;

int getPriority(char ch) {
    switch (ch) {
        case PLUS:	// +
        case MINUS:	// -
            return 1;
        case MUL:	// *
        case DIV:	// /
            return 2;
        default:
            return 0;
    }
}

void evaluateStackTops() {
    int operand1, operand2;

    if (op.empty() || num.empty()) {
        isValid = false;
        return;
    }
    if (op.top() == LEFT) {
        op.pop();
        return;
    }
    if (num.size() < 2 || op.size() < 1) {
        isValid = false;
        return;
    }
    if (num.empty()) {
        isValid = false;
        return;
    }
    operand2 = num.top();
    num.pop();
    if (num.empty()) {
        isValid = false;
        return;
    }
    operand1 = num.top();
    num.pop();
    if (op.empty()) {
        isValid = false;
        return;
    }
    switch (op.top()) {
        case PLUS:
            num.push(operand1 + operand2);
            break;
        case MINUS:
            num.push(operand1 - operand2);
            break;
        case MUL:
            num.push(operand1 * operand2);
            break;
        case DIV:
            if (operand2 == 0) {
                isValid = false;
                return;
            }
            num.push(operand1 / operand2);
            break;
    }
    op.pop();
}

bool    isBalanced() {
    stack<char> left;

    for (int i = 0; i < strlen(infix); i++) {
        switch (infix[i]) {
            case LEFT:
                left.push(LEFT);
                break;
            case RIGHT:
                if (left.empty())    return false;
                left.pop();
                break;
        }
    }
    return left.empty();
}


int pos;

int evaluate() {
    stack <int>		num;
    stack <char>	op;

    char	ch;
    bool    isNum = false;
    int     cur;

    isdigit

    isValid = isBalanced();
    for (int i = pos; isValid && i < strlen(infix); i++) {
        ch = infix[i];
        if (ch >= '0' && ch <= '9') {
            cur = 0;
            while (ch >= '0' && ch <= '9') {
                cur = cur * 10 + ch -'0';
            }
            if (!isNum) isNum = true;
        }
        switch (ch) {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                break;
            case LEFT:
                if (isNum) {
                    isValid = false;
                    return 0;
                }
                op.push(ch);
                break;
            case RIGHT:
                if (isNum) {
                    num.push(cur);
                    isNum = false;
                    cur = 0;
                }
                while (!op.empty() && op.top() != LEFT) {
                    evaluateStackTops();
                }
                op.pop();
                break;
            case PLUS:
            case MINUS:
            case MUL:
            case DIV:
                if (isNum) {
                    num.push(cur);
                    isNum = false;
                    cur = 0;
                }
                if (!op.empty() && getPriority(op.top()) >= getPriority(ch)) {
                    evaluateStackTops();
                }
                op.push(ch);
                break;
        }
    }	// for
    if (!isValid)   return 0;

    if (isNum) num.push(cur);
    while (isValid && !op.empty()) evaluateStackTops();

    if (num.size() != 1 || op.size() != 0) {
        isValid = false;
        return 0;
    }
    return num.top();
}

int main(int argc, char *argv[]) {
    while (cin.getline(infix, 1024)) {
        cout << infix << " = ";
        break;
        result = evaluate();
        if (isValid) {
            cout << result << endl;
        } else {
            cout << "ROCK" << endl;
        }
        while (!op.empty()) op.pop();
        while (!num.empty()) num.pop();
    }
    return 0;
}   


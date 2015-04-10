/*
 * 1287 - 할 수 있다
 * https://www.acmicpc.net/problem/1287
 * Run Time : RunTime Error (긴 숫자 입력시 에러남.)
 */
#include <iostream>
#include <string>
#include <stack>

using namespace std;

stack<long long>  num;
stack<char> op;
long long   result;
string  infix;

void debug_print() {
    cout << "stack num" << endl;
    while (!num.empty()) {
        cout << num.top() << endl;
        num.pop();
    }
    cout << "stack op" << endl;
    while (!op.empty()) {
        cout << op.top() << endl;
        op.pop();
    }
}

bool is_balanced() {
    stack<char> paren;
    for (int i = 0; i < infix.size(); i++) {
        if (infix[i] == '(')    paren.push('(');
        else if (infix[i] == ')') {
            if (paren.empty()) return false;
            paren.pop();
        }
    }
    return paren.empty();
}

bool expr_top() {
    int lh, rh;
    if (op.size() < 1 || num.size() < 2)    return false;
    rh = num.top();
    num.pop();
    lh = num.top();
    num.pop();

    //cout << "expr_top : " << lh << op.top() << rh << endl;

    switch (op.top()) {
        case '+':
            num.push(lh + rh);
            break;
        case '-':
            num.push(lh - rh);
            break;
        case '*':
            num.push(lh * rh);
            break;
        case '/':
            if (rh == 0)    return false;
            num.push(lh / rh);
            break;
        default:
            return false;
    }
    op.pop();
    return true;
}

int get_priority(char ch) {
    switch (ch) {
        case '+':   return 1;
        case '-':   return 1;
        case '*':   return 2;
        case '/':   return 2;
        case '(':   return 0;
    }
    return 0;
}

bool is_numeric(char ch) {
    return (ch >= '0' && ch <= '9');
}

bool expr() {
    if (!is_balanced()) return false;

    int cur = 0;
    bool    is_prev_num = false;
    char    ch;

    for (int i = 0; i < infix.size(); i++) {
        ch = infix[i];
        //cout << ch << endl;
        if (is_numeric(ch)) {
            if (is_prev_num && cur == 0)    return false;
            cur = cur * 10 + infix[i] - '0';
            is_prev_num = true;
        } else {
            if (is_prev_num)    num.push(cur);

            switch (ch) {
                case '(':
                    if (is_prev_num) return false;
                    op.push(ch);
                    break;
                case ')':
                    if (!is_prev_num) return false;
                    while (!op.empty() && op.top() != '(') {
                        if (!expr_top())    return false;
                    }
                    if (op.top() != '(')    return false;
                    op.pop();
                    break;
                case '+':
                    if (!op.empty() && get_priority(op.top()) >= get_priority(ch)) {
                        if (!expr_top())    return false;
                    }
                    op.push(ch);
                    break;
                case '-':
                    if (!op.empty() && get_priority(op.top()) >= get_priority(ch)) {
                        if (!expr_top())    return false;
                    }
                    op.push(ch);
                    break;
                case '*':
                    if (!op.empty() && get_priority(op.top()) >= get_priority(ch)) {
                        if (!expr_top())    return false;
                    }
                    op.push(ch);
                    break;
                case '/':
                    if (!op.empty() && get_priority(op.top()) >= get_priority(ch)) {
                        if (!expr_top())    return false;
                    }
                    op.push(ch);
                    break;
                default:
                    return false;
            }

            cur = 0;
            is_prev_num = false;
        }
        //if (!num.empty())
            //cout << "cur top = " << num.top() << endl;
    }   // for
    
    if (is_prev_num)    num.push(cur);
    while (!op.empty()) {
        if (!expr_top())    return false;
    }
    //debug_print();
    if (!op.empty() || num.size() != 1) return false;
    result = num.top();
    num.pop();
    return true;
}   // expr();

void final() {
    while (!op.empty()) op.pop();
    while (!num.empty())    num.pop();
}

int main(int argc, char* argv[]) {
    while (cin >> infix) {
        //cout << infix << " = " << endl;
        if (expr()) cout << result << endl;
        else    cout << "ROCK" << endl;

        final();
    }
    return 0;
}


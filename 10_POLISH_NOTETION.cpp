#include <iostream>
#include <stack>
using namespace std;

int prec(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    if (c == '^') return 3;
    return 0;
}

string POLISH(string Q) {
    stack<char> S;
    S.push('(');
    Q += ')';
    string P = "";
    
    for (int i = 0; i < Q.length(); i++) {
        char c = Q[i];
        if (isalnum(c)) {
            P += c;
        } 
        else if (c == '(') {
            S.push(c);
        } 
        else if (c == ')') { 
            while (S.top() != '(') {
                P += S.top();
                S.pop();
            } 
            S.pop();
        } 
        else { 
            while (!S.empty() && prec(S.top()) >= prec(c)) {
                P += S.top();
                S.pop();
            }
            S.push(c);
        }
    }
    return P;
}

int main() {
    string Q;
    cout << "Enter infix: ";
    cin >> Q;
    cout << "Postfix: " << POLISH(Q) << endl;
    return 0;
}


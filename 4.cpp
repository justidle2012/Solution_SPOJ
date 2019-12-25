//ID:4
//Transform the Expression
//https://www.spoj.com/problems/ONP/
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    std::stack<std::string> operands;//操作字符
    std::stack<char> operators;//操作符
    int i, j;
    char ch;
    for (i=0; i<t; i++) {
        //清空栈
        while (false == operands.empty()) {
            operands.pop();
        }
        while (false == operators.empty()) {
            operators.pop();
        }

        string s;
        cin >> s;
        for (j=0; j<s.length(); j++) {
            ch = s.at(j);
            if ('('==ch) {
                //左跨号，不处理
            } else if (')'==ch) {
                //先弹再压2个
                std::string a, b;
                a = operands.top();
                operands.pop();
                b = operands.top();
                operands.pop();
                char op = operators.top();
                operators.pop();
                a = b+a+op;
                operands.push(a);
            } else if ('+'==ch || '-'==ch) {
                operators.push(ch);
            } else if ('*'==ch || '/'==ch || '^'==ch) {
                //先弹再压
                operators.push(ch);
            } else {
                //字符
                std::string a(1, ch);
                operands.push(a);
            }
        }

        //打印
        std::string ans = operands.top();
        operands.pop();
        cout << ans << endl;
    }

    return 0;
}
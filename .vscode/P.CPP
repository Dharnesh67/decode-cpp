// #include <iostream>
// #include <stack>
// using namespace std;

// bool isOperand(char ch) {
//     return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
// }

// bool isOperator(char ch) {
//     return ch == '+' || ch == '-' || ch == '*' || ch == '/';
// }

// int getPrecedence(char op) {
//     if (op == '+' || op == '-') {
//         return 1;
//     } else if (op == '*' || op == '/') {
//         return 2;
//     } else {
//         return 0;
//     }
// }

// string infixToPostfix(string infix) {
//     stack<char> stack;
//     string postfix = "";

//     for (char ch : infix) {
//         if (isOperand(ch)) {
//             postfix += ch;
//         } else if (isOperator(ch)) {
//             while (!stack.empty() && getPrecedence(stack.top()) >= getPrecedence(ch)) {
//                 postfix += stack.top();
//                 stack.pop();
//             }
//             stack.push(ch);
//         } else if (ch == '(') {
//             stack.push(ch);
//         } else if (ch == ')') {
//             while (!stack.empty() && stack.top() != '(') {
//                 postfix += stack.top();
//                 stack.pop();
//             }
//             if (!stack.empty() && stack.top() == '(') {
//                 stack.pop();
//             } else {
               
//             }
//         }
//     }

//     while (!stack.empty()) {
//         postfix += stack.top();
//         stack.pop();
//     }

//     return postfix;
// }

// int main() {
//     string infixExpression="(A+B-C)*(E/F)-(G-H/I)";

//     string postfixExpression = infixToPostfix(infixExpression);
//     cout << "Postfix expression: " << postfixExpression << endl;

//     return 0;
// }

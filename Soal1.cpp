#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    stack<int> stk;
    string command;
    int element;

    for (int i = 0; i < N; ++i) {
        cin >> command;
        if (command == "push") {
            cin >> element;
            stk.push(element);
        } else if (command == "pop") {
            if (!stk.empty()) {
                stk.pop();
            }
        }

        stack<int> temp = stk;
        while (!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
    }

    return 0;
}


#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> sequence(n);
    for (int i = 0; i < n; i++) {
        cin >> sequence[i];
    }

    stack<int> st;           // 스택 선언
    vector<char> operations; // 연산 기록
    int current = 1;         // 스택에 넣을 숫자 (1부터 시작)

    for (int i = 0; i < n; i++) {
        int target = sequence[i]; // 현재 만들어야 할 숫자

        // 스택에 target 숫자가 들어갈 때까지 push
        while (current <= target) {
            st.push(current);
            operations.push_back('+');
            current++;
        }

        // 스택의 최상단이 target이면 pop
        if (!st.empty() && st.top() == target) {
            st.pop();
            operations.push_back('-');
        } else {
            // 불가능한 경우
            cout << "NO" << endl;
            return 0;
        }
    }

    // 연산 결과 출력
    for (char op : operations) {
        cout << op << '\n';
    }

    return 0;
}

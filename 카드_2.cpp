#include <iostream>
#include <queue>
using namespace std;

int manageQ(int N) {
    queue<int> Q; 

    for (int i = 1; i <= N; i++) {
        Q.push(i);
    }

    while (Q.size() > 1) {
        Q.pop();  // 첫 번째 카드 버리기
        Q.push(Q.front());  // 두 번째 카드를 맨 뒤로 이동
        Q.pop();  // 두 번째 카드 제거
    }
    
    return Q.front();  // 마지막 남은 카드 반환
}

int main() {
    int N;
    cin >> N;
    cout << manageQ(N) << endl; 
    return 0;
}

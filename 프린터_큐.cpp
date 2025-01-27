#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int t; // 테스트 케이스 개수
    cin >> t;

    while (t--) {
        int n, m; // 문서의 개수와 목표 문서의 인덱스
        cin >> n >> m;

        queue<pair<int, int>> q;    // (문서 중요도, 인덱스) 저장
        priority_queue<int> pq;    // 중요도를 기준으로 내림차순 정렬

        for (int i = 0; i < n; i++) {
            int priority;
            cin >> priority;
            q.push({priority, i});
            pq.push(priority);
        }

        int count = 0; // 출력 순서

        while (!q.empty()) {
            int current_priority = q.front().first;
            int current_index = q.front().second;
            q.pop();

            // 현재 문서가 우선순위가 가장 높은 경우 출력
            if (current_priority == pq.top()) {
                pq.pop();
                count++;
                if (current_index == m) {
                    cout << count << '\n';
                    break;
                }
            } else {
                // 우선순위가 가장 높지 않으면 다시 큐의 뒤로 이동
                q.push({current_priority, current_index});
            }
        }
    }

    return 0;
}

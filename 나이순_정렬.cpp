#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// 원래 입력 순서를 유지하면서 나이순 정렬
bool compare(pair<int, pair<int, string>> a, pair<int, pair<int, string>> b) {
    if (a.first == b.first) 
        return a.second.first < b.second.first; // 원래 입력 순서 유지 (인덱스 비교)
    return a.first < b.first; // 나이 기준 정렬
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<pair<int, pair<int, string>>> people; // (나이, (입력순서, 이름))

    for (int i = 0; i < n; i++) {
        int age;
        string name;
        cin >> age >> name;
        people.push_back({age, {i, name}}); // 인덱스를 함께 저장
    }

    sort(people.begin(), people.end(), compare);

    for (auto& p : people) {
        cout << p.first << " " << p.second.second << '\n';
    }

    return 0;
}

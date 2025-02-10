//재귀적으로 n을 3으로 나누어서 푸는 방법



#include <iostream>
#include <vector>

using namespace std;

void drawStar(vector<vector<char>>& map, int x, int y, int size) {  //2차원 벡터 참조로 받음, (현재 x, 현재 y, 현재 크기)
    if (size == 1) {    // Base case
        map[x][y] = '*';
        return;
    }

    int newSize = size / 3;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (i == 1 && j == 1) continue; // 중앙은 비어야 함. (1, 1) 빼고 나머지는 다시 재귀 호출.
            drawStar(map, x + i * newSize, y + j * newSize, newSize);
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<vector<char>> map(n, vector<char>(n, ' '));  // 2차원 벡터 초기화
    drawStar(map, 0, 0, n);

    for (int i = 0; i < n; ++i) {   // Print the map
        for (int j = 0; j < n; ++j) {
            cout << map[i][j];
        }
        cout << '\n';
    }

    return 0;
}

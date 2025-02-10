//상하좌우 연결되어 있는지 확인해야하는 문제니까 뭘 써야하냐. --> dx, dy
//bfs 써야하는 이유 --> 연결되어 있는지 확인해야하니까
//bfs를 쓰려면 queue를 써야하는 이유 --> queue를 쓰면 먼저 들어온 것부터 나가기 때문에 연결되어 있는 것을 확인할 수 있음
//bfs를 쓰려면 visited를 써야하는 이유 --> 방문한 곳은 다시 방문하지 않기 위해서



#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};

void bfs(vector<vector<int>>& field, vector<vector<bool>>& visited, int x, int y, int m, int n) {
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = true;

    while (!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for (int i = 0; i < 4; ++i) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if (nx >= 0 && nx < m && ny >= 0 && ny < n && field[nx][ny] == 1 && !visited[nx][ny]) {
                q.push({nx, ny});
                visited[nx][ny] = true;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int m, n, k;
        cin >> m >> n >> k;

        vector<vector<int>> field(m, vector<int>(n, 0)); //2차원 벡터 초기화
        vector<vector<bool>> visited(m, vector<bool>(n, false)); //2차원 벡터 초기화 방문 여부 boolian으로

        for (int i = 0; i < k; ++i) {
            int x, y;
            cin >> x >> y;
            field[x][y] = 1;
        }

        int count = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (field[i][j] == 1 && !visited[i][j]) {
                    bfs(field, visited, i, j, m, n);
                    ++count;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}

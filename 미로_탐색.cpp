// 최소 경로를 출력해야하는 문제는 DFS보다는 BFS가 더 적절하다.
// 왜냐면 DFS는 방문할 수 있는 모든 곳을 계속 방문함. 그러다보니 최소 경로를 찾을 수 없음.

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// 상하좌우
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int bfs(vector<vector<int>>& maze, int n, int m) {
    queue<pair<int, int>> q;    //BFS Queue
    vector<vector<bool>> visited(n, vector<bool>(m, false));    // 방문 여부
    q.push({0, 0}); //시작 (0,0)
    visited[0][0] = true;   //방문처리리

    while (!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

    // (N-1, M-1)에 도달한 경우에는 거리를 반환한다.
        if (x == n-1 && y == m-1){
            return maze[x][y];
        }

        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            // 범위 안, 이동 가능, 방문하지 않은 경우
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && maze[nx][ny] == 1 && !visited[nx][ny]){
                visited[nx][ny] = true; //방문처리
                maze[nx][ny] = maze[x][y] +1 ;  //이전 거리 + 1
                q.push({nx, ny});       // 다음 위치를 큐에 추가
            }
        }
    }

}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> maze(n, vector<int>(m));  // 미로 입력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char cell;
            cin >> cell;
            maze[i][j] = cell - '0';  // Char -> int 변환
        }
    }

    cout << bfs(maze, n, m) << endl;  // 최소 거리 출력

    return 0;
}

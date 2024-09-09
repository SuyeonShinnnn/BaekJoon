// 단지번호붙이기
#include <iostream>
#include <queue>
using namespace std;

class BFS{
private:
    int n;
    int** map;
    int** visited;
    int count;
    int distX[4] = {1, -1, 0, 0};
    int distY[4] = {0, 0, 1, -1};
    queue<pair<int, int>> q;
    priority_queue<int, vector<int>, greater<int>> block;
public:
    BFS(int n){
        this->n = n;
        map = new int*[n];
        visited = new int*[n];

        for(int i = 0; i < n; i++){
            map[i] = new int[n];
            visited[i] = new int[n];
        }
    }
    void setMap(){
        string tmp;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            for(int j = 0; j < n; j++){
                map[i][j] = tmp[j] - '0';
            }
        }
    }
    int startMap(int a, int b){
        count = 0;

        count++;
        q.push(make_pair(a, b));
        visited[a][b] = 1;
    

        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;

            q.pop();

            // 상하좌우 중 한 곳으로 이동
            for(int i = 0; i < 4; i++){
                int nextX = x + distX[i];
                int nextY = y + distY[i];

                // 이동한 쪽이 배열 범위를 벗어나지 않고
                // 길이 있으면서 방문하지 않은 곳
                if((nextX >= 0 && nextX < n) && (nextY >= 0 && nextY < n)
                && !visited[nextX][nextY] && map[nextX][nextY] == 1){
                    count++;
                    visited[nextX][nextY] = 1;
                    q.push(make_pair(nextX, nextY));
                }
            }
        }
        return count;
    }
    void runMap(){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(map[i][j] == 1 && !visited[i][j]){
                    block.push(startMap(i, j));
                }
            }
        }
    }
    void printInfo(){
        cout << block.size() << endl;
        
        while(!block.empty()){
            cout << block.top() << endl;
            block.pop();
        }
    }
   
};
int main(){
    int n;
    cin >> n;

    BFS bfs(n);
    bfs.setMap();
    bfs.runMap();
    bfs.printInfo();
}
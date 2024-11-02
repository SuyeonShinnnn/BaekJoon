// 그림

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

class BFS{
private:
    int n, m;
    int** picture;
    int** visited;
    queue<pair<int, int>> q;
    vector<int> countList;
    int moveX[4] = {1, -1, 0, 0};
    int moveY[4] = {0, 0, 1, -1};

public:
    BFS(int n, int m){
        this->n = n; this->m = m;

        picture = new int*[n];
        visited = new int*[n];

        for(int i = 0; i < n; i++){
            picture[i] = new int[m];
            visited[i] = new int[m];
        }
    }
    void drawPicture(){
        for(int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> picture[i][j];
                visited[i][j] = 0;
            }
        }
    }
    void searchPicture(){
        for(int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if(picture[i][j] && !visited[i][j])
                    startBFS(i, j);
            }
        }
    }
    void startBFS(int s, int u){
        visited[s][u] = 1;
        q.push(make_pair(s, u));

        int count = 0;

        while(!q.empty()){
            count++;

            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            for(int i = 0; i < 4; i++){
                int newX = x + moveX[i];
                int newY = y + moveY[i];

                if(newX >= 0 && newY >= 0 && newX < n && newY < m && picture[newX][newY] && !visited[newX][newY]){
                    visited[newX][newY] = 1;
                    q.push(make_pair(newX, newY));
                }
            }
        }
        countList.push_back(count);
    }
    void printCount(){
        sort(countList.begin(), countList.end());

        cout << countList.size() << "\n";

        if(!countList.size()){
            cout << 0 << endl;
        }
        else {
            cout << countList.back() << endl;
        }
    }
};

int main(){
    int n, m;
    cin >> n >> m;
    
    BFS bfs(n, m);
    bfs.drawPicture();
    bfs.searchPicture();
    bfs.printCount();
}
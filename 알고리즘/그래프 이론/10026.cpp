// 적록색약
#include <iostream>
#include <queue>
using namespace std;

class BFS{
private:
    int n;
    char** picture;
    int** visited;
    queue<pair<int, int>> q;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    int count = 0;
public:
    BFS(int n){
        this->n = n;
        picture = new char*[n];
        visited = new int*[n];
        for(int i = 0; i < n; i++){
            picture[i] = new char[n];
            visited[i] = new int[n];
        }
    }
    void drawPicture(){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> picture[i][j];
            }
        }
    }
    void searchArea(){

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(!visited[i][j]){
                    visitArea(i, j, picture[i][j]);
                    count++;
                }
            }
        }
    }
    void searchForColorWeakness(){
        count = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(picture[i][j] == 'R'){
                    picture[i][j] = 'G';
                }
                visited[i][j] = 0;
            }
        }
        
        searchArea();
    }
    void visitArea(int x, int y, char rgb){
        q.push(make_pair(x, y));

        while(!q.empty()){

            x = q.front().first;
            y = q.front().second;
            q.pop();

            for(int i = 0; i < 4; i++){
                int nextX = x + dx[i];
                int nextY = y + dy[i];

                if(nextX >=0 && nextX < n && nextY >=0 && nextY < n
                && !visited[nextX][nextY] && rgb == picture[nextX][nextY]){
                    visited[nextX][nextY] = 1;
                    q.push(make_pair(nextX, nextY));
                }
            }
        }
    }
    void printCount(){
        cout << count << " ";
    }
};
int main(){
    int n;
    cin >> n;

    BFS bfs(n);
    bfs.drawPicture();
    bfs.searchArea();
    bfs.printCount();

    bfs.searchForColorWeakness();
    bfs.printCount();
}
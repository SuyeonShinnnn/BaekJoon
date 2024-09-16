// 연결 요소의 개수
#include <iostream>
#include <queue>
using namespace std;

class BFS{
private:
    int n, m;
    int** adjMat;
    int* visited;
    int count = 0;
    queue<int> q;
public:
    BFS(int n, int m){
        this->n = n; this->m = m;
        adjMat = new int*[n];
        visited = new int[n];
        for(int i = 0; i < n; i++){
            adjMat[i] = new int[n];
        }
    }
    void setBFS(){
        int u, v;
        for(int i = 0; i < m; i++){
            cin >> u >> v;
            adjMat[u - 1][v - 1] = 1;
            adjMat[v - 1][u - 1] = 1;
        }
    }
    void runGraph(){
        for(int i = 0; i < n; i++){
            if(!visited[i]){
                visitNode(i);
                count++;
            }
        }
        cout << count << endl;
    }
    void visitNode(int u){
        visited[u];
        q.push(u);

        while(!q.empty()){
            u = q.front();
            q.pop();

            for(int i = 0; i < n; i++){
                if(adjMat[u][i] && !visited[i]){
                    q.push(i);
                    visited[i] = 1;
                }
            }
        }
    }
};
int main(){
    int n, m;
    cin >> n >> m;

    BFS bfs(n, m);
    bfs.setBFS();
    bfs.runGraph();
}
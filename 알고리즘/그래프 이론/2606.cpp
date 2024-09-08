#include <iostream>
#include <queue>
using namespace std;

class BFS{
private:
    int v;
    int** adjMat;
    int* visited;
    int count;
    queue<int> q;
public:
    BFS(int v){
        this->v = v;
        this->count = 0;
        adjMat = new int*[v];
        visited = new int[v];
        for(int i = 0; i < v; i++)
            adjMat[i] = new int[v];
    }
    void insertEdge(int start, int end){
        adjMat[start - 1][end - 1] = 1;
        adjMat[end - 1][start - 1] = 1;
    }
    void visitVertex(int v){
        count++;
        visited[v - 1] = 1;
        q.push(v - 1);

        while(!q.empty()){
            v = q.front();
            q.pop();

            for(int w = 0; w < this->v; w++){
                if(adjMat[v][w] && !visited[w]){
                    count++;
                    visited[w] = 1;
                    q.push(w);
                }
            }
        }
    }
    int getCount(){ return count; }
};
int main(){
    int v, n;
    cin >> v >> n;

    BFS bfs(v);

    int a, b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        bfs.insertEdge(a, b);
    }
    bfs.visitVertex(1);
    cout << bfs.getCount() << endl;
}
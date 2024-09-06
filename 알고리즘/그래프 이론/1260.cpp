// DFS와 BFS

#include <iostream>
#include <queue>
using namespace std;

#define TRUE 1
#define FALSE 0

class DFS{
    int n; // 정점 개수
    int** adjMat;
    int* visited;
public:
    DFS(int n) { 
        this->n = n; // 정점 초기화
        adjMat = new int*[n]; // 인접 행렬 동적 할당
        visited = new int[n]; // 방문 노드 동적 할당
        for(int i = 0; i < n; i++){
            adjMat[i] = new int[n];
        }
    }
    void init(int numOfV){
        // 배열 초기화
        for(int r = 0; r < numOfV; r++){
            visited[r] = FALSE;
            for(int c = 0; c < numOfV; c++)
                adjMat[r][c] = 0;
        }
    }
    void insertEdge(int start, int end){
        if(start >= this->n || end >= this->n){
            return;
        }
        // 간선이 있는 노드 1로 초기화
        this->adjMat[start][end] = 1;
        this->adjMat[end][start] = 1;
    }
    void dfsMat(int v){
        // 시작 정점 TRUE
        visited[v] = TRUE; 
        
        // 시작 정점 출력
        cout << v << " ";

        // 노드 수만큼 반복
        for(int w = 0; w < this->n; w++)
            if(adjMat[v][w] && !visited[w]) // 간선이 존재하고 해당 노드를 방문하지 않았을 때
                // 해당 노드 방문
                dfsMat(w);
    }
};
class BFS{
    queue<int> q;
    int n;
    int** adjMat;
    int* visited;
public:
    BFS(int n) { 
        this->n = n;
        adjMat = new int*[n];
        visited = new int[n];
        for(int i = 0; i < n; i++){
            adjMat[i] = new int[n];
        }
    }
    void init(int numOfV){
        for(int r = 0; r < numOfV; r++){
            visited[r] = FALSE;
            for(int c = 0; c < numOfV; c++)
                adjMat[r][c] = 0;
        }
    }
    void insertEdge(int start, int end){
        if(start >= this->n || end >= this->n){
            return;
        }
        this->adjMat[start][end] = 1;
        this->adjMat[end][start] = 1;
    }
    void bfsMat(int v){
        // 시작 정점 TRUE
        visited[v] = TRUE;
        
        // 시작 정점 출력
        cout << v << " ";

        // 시작 정점 큐에 push
        q.push(v);

        // 큐가 빌때까지
        while(!q.empty()){
            // 큐의 맨 앞 원소를 정점으로 초기화하고 pop
            v = q.front();
            q.pop();

            // 노드 개수만큼 반복
            for(int w = 0; w < n; w++){
                // 간선이 존재하고 해당 노드를 방문하지 않았을 때
                if(adjMat[v][w] && !visited[w]){
                    // 노드 방문, 출력, 큐에 push
                    visited[w] = TRUE;
                    cout << w << " ";
                    q.push(w);
                }
            }
        }
    }
};
int main(){
    int n, m, v;
    cin >> n >> m >> v;

    DFS dfs(n + 1);
    dfs.init(n + 1);

    BFS bfs(n + 1);
    bfs.init(n + 1);

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;

        dfs.insertEdge(a, b);
        bfs.insertEdge(a, b);
    }
    dfs.dfsMat(v);
    cout << "\n";
    bfs.bfsMat(v);
}
//숫자 카드
#include <iostream>
#include <set>
using namespace std;

int main(){
    int n, m;
    cin >> n;

    // 상근이 카드에 있는 숫자 카드의 수
    // 집합에 넣기
    set<int> s;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        s.insert(a);
    }

    // 상근이 카드에 있는 숫자 개수
    int initSize = s.size();

    cin >> m;

    // 같은 숫자가 있는지 체크할 배열
    int* check = new int[m];

    // M 카드이 숫자를 집합에 넣어보기
    // 상근이 카드의 숫자와 M 카드의 숫자가 같으면 집합 크기가 커지지 않음
    for(int i = 0; i < m; i++){
        int a;
        cin >> a;
        s.insert(a);

        // 같은 숫자가 있음
        if(s.size() == initSize){
            check[i] = 1;
        }
        // 같은 숫자가 없음
        // 집합에 숫자가 하나 추가 됐기 때문에 iniSize를 다시 초기화
        else{
            check[i] = 0;
            initSize = s.size();
        }
    }

    for(int i = 0; i < m; i++)
        cout << check[i] << ' ';
    cout << endl;
}
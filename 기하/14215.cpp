#include <iostream>
#include <algorithm>
using namespace std;

class Triangle{
    int line[3];
public:
    Triangle(){}
    Triangle(int line[]){
        for(int i = 0; i < 3; i++)
            this->line[i] = line[i];
    }
    bool isTriangle(){
        //길이 순서대로 정렬
        sort(line, line + 3);

        //제일 긴 변이 나머지 두 변의 길이보다 작으면 삼각형이다
        if((line[0] + line[1]) > line[2])
            return true;
        else return false;
    }
    void makeTriangle(){
        //둘레를 가장 크게 만들 수 있는 방법은
        //제일 긴 변이 나머지 변의 합보다 1작게 만드는 것
        line[2] = line[0] + line[1] - 1;
    }
    void print(){
        //둘레 합 
        cout << line[0] + line[1] + line[2] << endl;
    }
};
int main(){
    int line[3];
    for(int i = 0; i < 3; i++)
        cin >> line[i];

    Triangle t = Triangle(line);

    if(!t.isTriangle())
        t.makeTriangle();

    t.print();
}
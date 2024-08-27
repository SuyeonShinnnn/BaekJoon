// 나이순 정렬
#include <iostream>
#include <algorithm>
using namespace std;

class Info{
    int age;
    string name;
    int order;
public:
    Info(){}
    Info(int age, string name, int order){
        this->age = age;
        this->name = name;
        this->order = order;
    }
    int getAge(){ return age; }
    int getOrder() { return order; }
    void print(){
        cout << age << " " << name << endl;
    }
};
bool compare(Info a, Info b){
    if(a.getAge() == b.getAge())
        return a.getOrder() < b.getOrder();
    else
        return a.getAge() < b.getAge();
}
int main(){
    int n;
    cin >> n;

    Info info[n];
    int count = 0;
    for(int i = 0; i < n; i++){
        int age;
        string name;
        cin >> age >> name;

        info[i] = Info(age, name, count++);
    }
    sort(info, info + n, compare);

    for(int i = 0; i < n; i++)
        info[i].print();
}
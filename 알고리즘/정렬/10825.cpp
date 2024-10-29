#include <iostream>
#include <algorithm>
using namespace std;

class Student{
private:
    string name;
    int kor;
    int eng;
    int math;
public:
    Student() {}
    Student(string name, int kor, int eng, int math){
        this->name = name;
        this->kor = kor;
        this->eng = eng;
        this->math = math;
    }
    string getName(){ return name; }
    int getKor(){ return kor; }
    int getEng(){ return eng; }
    int getMath(){ return math; }
    void printName(){
        cout << this->name << "\n";
    }
};
bool compare(Student a, Student b){
    int aKor = a.getKor(), bKor = b.getKor();
    int aEng = a.getEng(), bEng = b.getEng();
    int aMath = a.getMath(), bMath = b.getMath();
    string aName = a.getName(), bName = b.getName();
    
    if(aKor != bKor){
        return aKor > bKor;
    }
    else if(aEng != bEng){
        return aEng < bEng;
    }
    else if(aMath != bMath){
        return aMath > bMath;
    }
    else{
        return aName < bName;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    Student s[n];    

    for(int i = 0; i < n; i++){
        string name;
        int kor, eng, math;
        cin >> name >> kor >> eng >> math;

        s[i] = Student(name, kor, eng, math);
    }
    sort(s, s + n, compare);

    for(int i = 0; i < n; i++){
        s[i].printName();
    }
}   
#include <iostream>
using namespace std;

void cToJava(string variable)
{
    for(int i = 0; i < variable.length(); i++)
    {
        if(variable[i] == '_')//'_'가 있을 때
        {
            variable[i + 1] = toupper(variable[i + 1]);//'_' 뒤에 있는 알파벳을 대문자로 변경
            for(int j = i; j < variable.length() - 1; j++)//'_'를 없애고 뒤에 문자를 한 칸씩 앞당기기
            {
                variable[j] = variable[j + 1];
            }
            variable.resize(variable.length() - 1);//사이즈 1줄이기 
        }
    }
    cout << variable << endl;
}
void javaToC(string variable)
{
    for(int i = 0; i < variable.length(); i++)
    {
        if(variable[i] >= 'A' && variable[i] <= 'Z')//대문자 알파벳이 있을 때
        {
            variable[i] = tolower(variable[i]);//대문자를 소문자로 변환
            variable.resize(variable.length() + 1);//'_'를 포함시켜야 하기 때문에 string 사이즈 1늘리기

            for(int j = variable.length() - 1; j > i; j--)//한 칸씩 뒤로 당기기
            {
                variable[j] = variable[j - 1];
            } 
            variable[i] = '_'; //대문자 알파벳이 있던 곳에 '_' 추가 
        }
    }
    cout << variable << endl;
}
bool isError(string variable)
{
    int count = 0;
     for(int i = 0; i < variable.length(); i++)//대문자 체크
     {
        if(isupper(variable[i]))
            {
                count = 1;
                break;
            }
     }
        
    int index = variable.find('_');

    if(variable[0] == '_' || isupper(variable[0]))//시작이 '_'거나 대문자일때
        return true;
    else if(variable[variable.length() - 1] == '_')//끝이 '_'일때
        return true;
    else if(count == 1 && variable.find('_') != string::npos)//대문자와 '_' 둘 다 있을 때
        return true;
    else if(index != -1 && (variable[index + 1] == '_'))//'_'가 연속으로 있을 때
        return true;
    else
        return false;
}
int main()
{
    string variable;
    cin >> variable;

    if(isError(variable))
        cout << "Error!" << endl;
    else if(variable.find('_') != string::npos)//'_'가 있을 때
        cToJava(variable);
    else
        javaToC(variable);
}
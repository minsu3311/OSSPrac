#include <iostream>
using namespace std;

int main() {
    string name;
    string id;
    string id2;
    string grade;
    string school;

    
    cout << "이름을 입력하세요: ";
    cin >> name;

    cout << "학번을 입력하세요: ";
    cin >> id;

    cout << "학과을 입력하세요: ";
    cin >> id2;

    cout << "학교을 입력하세요: ";
    cin >> school;

    cout << "학년을 입력하세요: ";
    cin >> grade;

    cout << "\n<출력>" << endl;
    cout << "이름: " << name << endl;
    cout << "학번: " << id << endl;
    cout << "학과: " << id2 << endl;
    cout << "학교: " << school << endl;
    cout << "학년: " << grade << endl;

    return 0;
}
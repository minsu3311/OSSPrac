#include <iostream>
using namespace std;

int main() {
    string name;
    string id;
    string id2;
    cout << "이름을 입력하세요: ";
    cin >> name;

    cout << "학번을 입력하세요: ";
    cin >> id;

    cout << "학과을 입력하세요: ";
    cin >> id2;

    cout << "\n<출력>" << endl;
    cout << "이름: " << name << endl;
    cout << "학번: " << id << endl;
    cout << "학과: " << id2 << endl;

    return 0;
}
#include <iostream>
#include<typeinfo>
using namespace std;

int main() {
    char three_char = '9';
    cout<<typeid(three_char).name()<<endl;
    int three_int = three_char - '0';
    cout<<typeid(three_int).name()<<endl;
    cout<<three_int;
    // int result = three_int + 1;
    // cout << three_char << " + 1 is " << result << endl;
    return 0;
}

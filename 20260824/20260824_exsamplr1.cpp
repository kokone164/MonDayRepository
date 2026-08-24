#include <iostream>
using namespace std;

int main(void) 
{
    int a = 0;
    int* p = &a;//aのアドレス受け取り

    cout << "aの初期値: " << a << endl;
    
    *p = 10;//受け取ったアドレスの場所にある数字を上書き

    cout << "aの変更後の値: " << a << endl;

    return 0;
}
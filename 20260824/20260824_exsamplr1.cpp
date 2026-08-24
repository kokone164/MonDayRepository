#include <iostream>
using namespace std;

int main(void) 
{
    //T:変数
    int a = 0;
    //T:ポインター変数から変数aのアドレスを取得
    int* p = &a;//aのアドレス受け取り
    //T:変数aの中身を表示
    cout << "aの初期値: " << a << endl;
    //T:ポインター変数pから変数aを変更
    *p = 10;//受け取ったアドレスの場所にある数字を上書き

    cout << "aの変更後の値: " << a << endl;

    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //変数宣言
    int answer = -1;      
    int question;         
    int count = 0;        
    //乱数の初期化
    srand((unsigned int)time(nullptr));
    //ランダムな数字を設定
    question = rand() % 101;

    cout << "数字当てゲーム" << endl;
    cout << "0～100までの数字を当ててください。" << endl;
    //ゲームループ
    while (question != answer)
    {
        //ラウンド数カウント
        count++;
        //入力チェック
        while (true)
        {
            cout << "0～100の数字を入力してください：" << endl;
            cin >> answer;

            if (answer < 0 || answer > 100)//入力を間違えてたら
            {
                cout << "入力に誤りがあります。再入力してください。" << endl;
            }
            else//あってたら
            {
                break;
            }
        }
        //ヒント
        if (question > answer)//正解より小さかったら
        {
            cout << "もっと大きい数字です。" << endl;
        }
        else if (question < answer)//正解より大きかったら
        {
            cout << "もっと小さい数字です。" << endl;
        }
    }
    //正解を表示
    cout << endl;
    cout << "おめでとうございます！正解です！" << endl;
    cout << "正解：" << answer << endl;
    cout << count << "回目で当てることができました。" << endl;

    return 0;
}
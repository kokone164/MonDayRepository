#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //変数宣言
    int player;         
    int cpu;            
    int result;         
    int i;
    int win = 0;        
    int lose = 0;       
    int draw = 0;       
    //乱数の初期化
    srand((unsigned int)time(nullptr));

    cout << "じゃんけんゲームを開始します。" << endl;
    //ゲームループ
    for ( i = 0; i < 5; i++)
    {
        //ラウンド数表示
        cout << endl;
        cout << "-------- " << i + 1 << "回戦 --------" << endl;
        //入力チェック
        while (true)
        {
            cout << "0：グー　1：チョキ　2：パー" << endl;
            cout << "プレイヤーの手を入力してください：" << endl;

            cin >> player;

            if (player >= 0 && player <= 2)//入力が正しかったら
            {
                break;
            }

            cout << "入力に誤りがあります。再入力してください。" << endl;
        }
        //CPUの手を決める
        cpu = rand() % 3;
        //プレイヤーの手を表示
        switch (player)
        {
        case 0:
            cout << "PLAYER：グー" << endl;
            break;

        case 1:
            cout << "PLAYER：チョキ" << endl;
            break;

        case 2:
            cout << "PLAYER：パー" << endl;
            break;
        }

        //CPUの手を表示
        switch (cpu)
        {
        case 0:
            cout << "CPU：グー" << endl;
            break;

        case 1:
            cout << "CPU：チョキ" << endl;
            break;

        case 2:
            cout << "CPU：パー" << endl;
            break;
        }

        //プレイヤーの手からCPUの手を引く
        result = player - cpu;
        //勝敗の判定
        if (result == -1 || result == 2)//勝ち
        {
            cout << "PLAYER WIN!" << endl;
            win++;
        }
        else if (result == 0)//引き分け
        {
            cout << "DRAW" << endl;
            draw++;
        }
        else//負け
        {
            cout << "CPU WIN!" << endl;
            lose++;
        }
    }

    //結果を表示
    cout << endl;
    cout << "==============================" << endl;
    cout << "5回勝負終了！" << endl;
    cout << win << "勝 "
        << draw << "分 "
        << lose << "敗" << endl;
    cout << "==============================" << endl;

    return 0;
}
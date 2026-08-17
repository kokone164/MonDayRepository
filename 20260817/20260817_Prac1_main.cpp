#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260817_Prac1_header.h"

using namespace std;

//定数
const int PITING_MIN = 0;
const int PITING_MAX = 3;
const int PROBABILITY = 4;
const int STRIKE_COUNT = 3;
const int BALL_COUNT = 4;
const int OUT_COUNT = 3;
const int HIT_COUNT = 4;

int main(void)
{
    //変数
    int ply, emy;
    int prod;
    int Strike = 0;
    int Ball = 0;
    int Out = 0;
    int Hit = 0;
    //乱数の初期化
    srand((unsigned int)time(NULL));
    //ゲーム説明
    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;

    while (Out < OUT_COUNT && Hit < HIT_COUNT)
    {
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート "
            << "1:カーブ "
            << "2:スライダー "
            << "3:シンカー"
            << endl;
        //入力チェック
        while (true)
        {
            cin >> ply;

            if (PITING_MIN > ply || PITING_MAX < ply)
            {
                cout << "入力に誤りがあります。"
                    << "再度入力してください。"
                    << endl;
            }
            else
            {
                break;
            }
        }

        //投げた球の表示
        PitingType(ply);

        //敵がどう打ったか
        emy = rand() % PROBABILITY;

        //確率
        prod = rand() % PROBABILITY;
        //打てなかったとき
        if (ply != emy)
        {
            //25％の確率で
            if (prod == 0)
            {
                cout << "ボール！" << endl;
                Ball++;
            }
            //75%の確率で
            else
            {
                cout << "ストライク！！" << endl;
                Strike++;
            }
        }
        //打てたとき
        else
        {
            //ストライクとボールのカウントをリセット
            Strike = 0;
            Ball = 0;
            //25％の確率で
            if (prod == 1)
            {
                cout << "OUT!!!" << endl;
                Out++;
            }
            else//75%の確率で
            {
                cout << "HIT!!" << endl;
                Hit++;
            }
        }
        //３ストライクもしくはフォアボールのとき
        if (Strike >= STRIKE_COUNT || Ball >= BALL_COUNT)
        {
            if (Strike >= STRIKE_COUNT)
            {
                Out++;
            }
            else
            {
                Hit++;
            }

            Strike = 0;
            Ball = 0;
        }
        //現時点の結果
        cout << "B:" << Ball << endl;
        cout << "S:" << Strike << endl;
        cout << "O:" << Out << endl;
        cout << "Runner:" << Hit << endl;

    } 

    //勝敗
    Result(Out);

    return 0;
}
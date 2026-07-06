#pragma once

//定数
const int HEALNUM = 20;
const int MIN = 1;
const int MAX = 2;

//関数プロトタイプ宣言

///<summary>
///回復関数
/// </summary>
void Heal(int& hpNum);

/// <summary>
/// 入力チェック
/// </summary>
/// <param name="min">最小値(Yes)</param>
/// <param name="max">最大値(No)</param>
/// <returns>入力した値</returns>
int InputCheck(int min, int max);
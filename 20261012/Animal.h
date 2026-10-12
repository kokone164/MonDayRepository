#pragma once
#include<string>
class Animal
{
private:
	std::string name;
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="name"></param>
	Animal(std::string name);

	std::string GetName();

	//子クラスでも再定義できるメソッド
	/// <summary>
	/// 鳴く
	/// </summary>
	virtual void Speak();	//仮想関数virtual
};


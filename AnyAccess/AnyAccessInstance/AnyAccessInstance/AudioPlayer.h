#pragma once
#include<iostream>
using namespace std;
// 그냥 Audio객체
class CAudioPlayer
{
public:

	CAudioPlayer()
	{
	}

	~CAudioPlayer()
	{
	}

	void play(char* name) { cout << name << "을 플레이 합니다" << endl; }

};


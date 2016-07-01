#pragma once
#include "Game.h"
#include<iostream>
using namespace std;

//CGame 클래스를 상속받아서 부모의 메소드를 가져와서 CLog객체에 접근
class CGameObject :
	public CGame
{
public:

	CGameObject()
	{
	}

	~CGameObject()
	{
	}

	void logDisplay()
	{
		// CGame객체를 상속받아서 새로운 CGame객체가 만들어진다.
		// 정적 전역변수와는 별개다.
		// 그냥 새로운 객체에 새로운 로그객체를 가져온것.
		cout << "0" << getLog().getLog() << endl;

		// 정적전역 객체를 가져오는 메소드로 호출
		cout << "1" << instance().getLog().getLog() << endl;

		// 이렇게 하면 원본 객체를 가져올 수 있다..
		cout << "2" << CGame::instance().getLog().getLog() << endl;
	}

};


#pragma once
#include "Game.h"
#include<iostream>
using namespace std;

//CGame Ŭ������ ��ӹ޾Ƽ� �θ��� �޼ҵ带 �����ͼ� CLog��ü�� ����
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
		// CGame��ü�� ��ӹ޾Ƽ� ���ο� CGame��ü�� ���������.
		// ���� ���������ʹ� ������.
		// �׳� ���ο� ��ü�� ���ο� �αװ�ü�� �����°�.
		cout << "0" << getLog().getLog() << endl;

		// �������� ��ü�� �������� �޼ҵ�� ȣ��
		cout << "1" << instance().getLog().getLog() << endl;

		// �̷��� �ϸ� ���� ��ü�� ������ �� �ִ�..
		cout << "2" << CGame::instance().getLog().getLog() << endl;
	}

};


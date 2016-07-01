#pragma once
#include<assert.h>
#include<iostream>
using namespace std;


class CFileSystem
{
	// 인스턴스가 생성되어있는지 여부
	static bool m_instantiated;
	int m_num;
public:

	CFileSystem(int code):m_num(code)
	{
		// assert의 괄호안에 true가 들어가면 아무것도 하지 않지만 false가 들어가면 프로그램을 중단시킨다.
		// 버그가 다른 곳으로 나가는 것을 원천 봉쇄한다.
		assert(!m_instantiated);
		// 인스턴스가 처음 만들어졌을때 인스턴스 생성여부를 true로 주어서 다음에 인스턴스를 또 만들려고 하면
		// assert에 걸려서 프로그램을 강제 종료 시킨다.
		m_instantiated = true;
	}

	~CFileSystem()
	{
		// 인스턴스를 삭제하면 다시 인스턴스를 생성할 수 있도록 false로 초기화
		m_instantiated = false;
	}

	void print()
	{
		cout << "이 객체의 코드는 : " << m_num << endl;
	}

};
// 정적변수 초기화 (초기화 상태에서는 아직 인스턴스가 생성되지 않았으므로 false로 초기화 시켜준다.)
bool CFileSystem::m_instantiated = false;

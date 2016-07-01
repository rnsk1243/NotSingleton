#pragma once
#include<assert.h>
#include<iostream>
using namespace std;


class CFileSystem
{
	// �ν��Ͻ��� �����Ǿ��ִ��� ����
	static bool m_instantiated;
	int m_num;
public:

	CFileSystem(int code):m_num(code)
	{
		// assert�� ��ȣ�ȿ� true�� ���� �ƹ��͵� ���� ������ false�� ���� ���α׷��� �ߴܽ�Ų��.
		// ���װ� �ٸ� ������ ������ ���� ��õ �����Ѵ�.
		assert(!m_instantiated);
		// �ν��Ͻ��� ó�� ����������� �ν��Ͻ� �������θ� true�� �־ ������ �ν��Ͻ��� �� ������� �ϸ�
		// assert�� �ɷ��� ���α׷��� ���� ���� ��Ų��.
		m_instantiated = true;
	}

	~CFileSystem()
	{
		// �ν��Ͻ��� �����ϸ� �ٽ� �ν��Ͻ��� ������ �� �ֵ��� false�� �ʱ�ȭ
		m_instantiated = false;
	}

	void print()
	{
		cout << "�� ��ü�� �ڵ�� : " << m_num << endl;
	}

};
// �������� �ʱ�ȭ (�ʱ�ȭ ���¿����� ���� �ν��Ͻ��� �������� �ʾ����Ƿ� false�� �ʱ�ȭ �����ش�.)
bool CFileSystem::m_instantiated = false;

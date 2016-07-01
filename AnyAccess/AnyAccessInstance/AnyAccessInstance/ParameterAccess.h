#pragma once
#include"Game.h"
class CParameterAccess
{
public:

	CParameterAccess()
	{
	}

	~CParameterAccess()
	{
	}
	
	void setLogDisplay(CGame& game, char* log)
	{
		// �̷��� �ϸ� �Ķ���Ϳ� game ��ü�� �����ͼ� �׳� ���°Ŷ� �ִ��� ����.
		// ������ ������ ��
		game.getLog().write(log);
		cout << game.getLog().getLog() << endl;
	}

	void getLogDisplay(CGame& game)
	{
		// ���� ����
		cout << game.getLog().getLog() << endl;
	}



};

/*
void setLogDisplay(CGame& game, char* log)
{
// �̷��� �ϸ� ��(game.getLog())�� �����ϰ� �Ǿ� ���� ���簡 �̷������ ���� ���ο� CLog ��ü�� ���������.
// g_log��� CLog��ü�� ��� ������ ����� �ű⿡ game.getLog()���� ���� ��
CLog g_log = game.getLog();
g_log.write(log);
cout << g_log.getLog() << endl;
}

void getLogDisplay(CGame& game)
{
// �̰͵� ���� ��������.
CLog g_log = game.getLog();
cout << g_log.getLog() << endl;
}
=============================================
void setLogDisplay(CGame& game, char* log)
{
// �̷��� �ϸ� �Ķ���Ϳ� game ��ü�� �����ͼ� �׳� ���°Ŷ� �ִ��� ����.
// ������ ������ ��
game.getLog().write(log);
cout << game.getLog().getLog() << endl;
}

void getLogDisplay(CGame& game)
{
// ���� ����
cout << game.getLog().getLog() << endl;
}
============================================
void setLogDisplay(CGame& game, char* log)
{
// �Ķ���ͷ� CGame& game��ü�� �����´�. 
// &game.getLog() �̷��� �Ͽ� CLog��ü�� �ּ�(����)�� �����ͼ� g_log�� �ִ´�.
CLog* g_log = &game.getLog();
// �ּ�(����)���� �޼ҵ带 ȣ���Ѵ�.
// �̷��� �ϸ� ������ ����ϰ� �ȴ�.
g_log->write(log);
cout << g_log->getLog() << endl;
}

void getLogDisplay(CGame& game)
{
CLog* g_log = &game.getLog();
cout << g_log->getLog() << endl;
}
*/
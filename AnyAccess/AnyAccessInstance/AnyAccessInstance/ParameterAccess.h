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
		// 이렇게 하면 파라미터에 game 객체를 가져와서 그냥 쓰는거라서 있던거 쓴다.
		// 원본을 가져다 씀
		game.getLog().write(log);
		cout << game.getLog().getLog() << endl;
	}

	void getLogDisplay(CGame& game)
	{
		// 위와 동일
		cout << game.getLog().getLog() << endl;
	}



};

/*
void setLogDisplay(CGame& game, char* log)
{
// 이렇게 하면 값(game.getLog())을 복사하게 되어 깊은 복사가 이루어져서 완전 새로운 CLog 객체가 만들어진다.
// g_log라는 CLog객체를 담는 변수를 만들고 거기에 game.getLog()값을 넣은 것
CLog g_log = game.getLog();
g_log.write(log);
cout << g_log.getLog() << endl;
}

void getLogDisplay(CGame& game)
{
// 이것도 위와 마찬가지.
CLog g_log = game.getLog();
cout << g_log.getLog() << endl;
}
=============================================
void setLogDisplay(CGame& game, char* log)
{
// 이렇게 하면 파라미터에 game 객체를 가져와서 그냥 쓰는거라서 있던거 쓴다.
// 원본을 가져다 씀
game.getLog().write(log);
cout << game.getLog().getLog() << endl;
}

void getLogDisplay(CGame& game)
{
// 위와 동일
cout << game.getLog().getLog() << endl;
}
============================================
void setLogDisplay(CGame& game, char* log)
{
// 파라미터로 CGame& game객체를 가져온다. 
// &game.getLog() 이렇게 하여 CLog객체의 주소(원본)를 가져와서 g_log에 넣는다.
CLog* g_log = &game.getLog();
// 주소(원본)에서 메소드를 호출한다.
// 이렇게 하면 원본을 사용하게 된다.
g_log->write(log);
cout << g_log->getLog() << endl;
}

void getLogDisplay(CGame& game)
{
CLog* g_log = &game.getLog();
cout << g_log->getLog() << endl;
}
*/
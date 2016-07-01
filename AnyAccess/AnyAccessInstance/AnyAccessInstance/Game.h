#pragma once
#include"AudioPlayer.h"
#include"FileSystem.h"
#include"Log.h"

// 이미 전역인 객체로부터 얻기
class CGame
{
	// 전역 객체를 담을 변수
	static CGame m_instance;
	// CLog객체의 주소를 담을 변수
	CLog* m_log;
	CFileSystem* m_fileSystem;
	CAudioPlayer* m_audioPlayer;
protected:

public:
	// 전역 변수가 
	CGame()
	{
		cout << "CGame() 생성자 호출" << endl;
		m_log = new CLog();
		m_fileSystem = new CFileSystem();
		m_audioPlayer = new CAudioPlayer();
	}

	~CGame()
	{
	}
	// 전역변수 가져오는 메소드 (주소가 아닌 원본 CGame객체를 가져온다)
	static CGame& instance() { return m_instance; }
	// m_log 변수가 주소를 담는 변수이므로 여기에 *을 붙이면 주소가 아닌 CLog객체를 가져오므로
	// getLog()메소드는 CLog객체를 가져옵니다.
	CLog& getLog() { return *m_log; }
	CFileSystem& getFileSystem() { return *m_fileSystem; }
	CAudioPlayer& getAudioPlayer() { return *m_audioPlayer; }

};
// 전역인 객체(m_instance)가 main()메소드보다 먼저 호출된다.
CGame CGame::m_instance = CGame(); // <- 여기에 ;를 붙이지 않으면 void main()함수에서 ;void main() 이렇게 void 앞에 ;을 붙여야 한다.

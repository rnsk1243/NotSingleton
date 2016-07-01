#pragma once
#include"AudioPlayer.h"
#include"FileSystem.h"
#include"Log.h"

// �̹� ������ ��ü�κ��� ���
class CGame
{
	// ���� ��ü�� ���� ����
	static CGame m_instance;
	// CLog��ü�� �ּҸ� ���� ����
	CLog* m_log;
	CFileSystem* m_fileSystem;
	CAudioPlayer* m_audioPlayer;
protected:

public:
	// ���� ������ 
	CGame()
	{
		cout << "CGame() ������ ȣ��" << endl;
		m_log = new CLog();
		m_fileSystem = new CFileSystem();
		m_audioPlayer = new CAudioPlayer();
	}

	~CGame()
	{
	}
	// �������� �������� �޼ҵ� (�ּҰ� �ƴ� ���� CGame��ü�� �����´�)
	static CGame& instance() { return m_instance; }
	// m_log ������ �ּҸ� ��� �����̹Ƿ� ���⿡ *�� ���̸� �ּҰ� �ƴ� CLog��ü�� �������Ƿ�
	// getLog()�޼ҵ�� CLog��ü�� �����ɴϴ�.
	CLog& getLog() { return *m_log; }
	CFileSystem& getFileSystem() { return *m_fileSystem; }
	CAudioPlayer& getAudioPlayer() { return *m_audioPlayer; }

};
// ������ ��ü(m_instance)�� main()�޼ҵ庸�� ���� ȣ��ȴ�.
CGame CGame::m_instance = CGame(); // <- ���⿡ ;�� ������ ������ void main()�Լ����� ;void main() �̷��� void �տ� ;�� �ٿ��� �Ѵ�.

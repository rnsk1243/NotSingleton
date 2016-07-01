#pragma once
// 그냥 Log객체
class CLog
{
	char* m_log;
public:

	CLog():m_log("log가 없습니다.")
	{
	}

	~CLog()
	{
	}
	
	void write(char* log) { m_log = log; }
	char* getLog() { return m_log; }

};


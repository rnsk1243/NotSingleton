#pragma once
// �׳� Log��ü
class CLog
{
	char* m_log;
public:

	CLog():m_log("log�� �����ϴ�.")
	{
	}

	~CLog()
	{
	}
	
	void write(char* log) { m_log = log; }
	char* getLog() { return m_log; }

};


//#include"Game.h"
#include"GameObject.h"
#include"ParameterAccess.h"

// ���������� �ǵ��� ���ϴ°� �̻����̴�.

void main()
{
	// ���� ���� ������ ��ü�� ��� �ξ��⶧���� ��ü�� �����ʿ����.
	// ���� ���� ������ ���θ޼ҵ庸�� ���� ȣ��Ǿ� �ʱ�ȭ�� ������ �Ҿ����ȴ�.
	// CGame CGame::m_instance = CGame(); �̰� �������� �ʱ�ȭ�Ǵ� �κ� (���θ޼ҵ庸�� ���� ȣ���.)

	// ���� ������ �������� instance()�޼ҵ带 ȣ���Ͽ� CGame��ü�� ������ 
	// ������ CGame��ü���� AudioPlayer��ü�� �������� getAudioPlayer()�޼ҵ带 ȣ���ϰ� 
	// CAudioPlayer��ü���� play();�޼ҵ带 ȣ���Ѵ�.
	CGame::instance().getAudioPlayer().play("�ڻ󹫻�");

	//CGame game;

	// CGameŬ������ ��ӹ��� CGameObjectŬ������ ����� CGame��ü�� ���� �� ����
	// ���������� ���� �ϳ��� ������ CGameŬ���� ��ü�� �� ���������.(������ 2�� ȣ���)
	CGameObject GO;

	// �Ķ���͸� �̿��Ͽ� ��ü�� �������� ����� Ŀ�ø��� �����Ͽ� ���������� ���ϴ�.
	CParameterAccess PA;
	//m_instance
	PA.setLogDisplay(CGame::instance(), "���Ľù�!!");

	PA.getLogDisplay(CGame::instance());
	GO.logDisplay();

}
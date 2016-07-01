//#include"Game.h"
#include"GameObject.h"
#include"ParameterAccess.h"

// 전역변수는 되도록 피하는게 이상적이다.

void main()
{
	// 정적 전역 변수에 객체를 담아 두었기때문에 객체를 만들필요없다.
	// 정적 전역 변수는 메인메소드보다 먼저 호출되어 초기화된 변수를 불어오면된다.
	// CGame CGame::m_instance = CGame(); 이게 정적변수 초기화되는 부분 (메인메소드보다 먼저 호출됨.)

	// 정적 변수를 가져오는 instance()메소드를 호출하여 CGame객체를 가져옴 
	// 가져온 CGame객체에서 AudioPlayer객체를 가져오는 getAudioPlayer()메소드를 호출하고 
	// CAudioPlayer객체에서 play();메소드를 호출한다.
	CGame::instance().getAudioPlayer().play("자상무색");

	//CGame game;

	// CGame클래스를 상속받은 CGameObject클래스를 만들면 CGame객체를 새로 또 만들어서
	// 정적전역에 담긴것 하나랑 별개로 CGame클래스 객체가 또 만들어진다.(생성자 2번 호출됨)
	CGameObject GO;

	// 파라미터를 이용하여 객체를 가져오는 방법은 커플링을 방지하여 유지보수에 편하다.
	CParameterAccess PA;
	//m_instance
	PA.setLogDisplay(CGame::instance(), "스파시바!!");

	PA.getLogDisplay(CGame::instance());
	GO.logDisplay();

}
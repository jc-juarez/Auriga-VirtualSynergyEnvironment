// *************************************
// Auriga Virtual Synergy Environment
// 'main.cxx'
// Author: Juan Carlos Juárez
// Contact: jc.juarezgarcia@outlook.com
// *************************************

#include "ofMain.h"
#include "AurigaVse.h"
#include "Constants.h"

int main()
{
	ofGLWindowSettings windowSettings;
	windowSettings.setSize(auriga::Numerics::c_WindowWidth, auriga::Numerics::c_WindowHeight);
	windowSettings.windowMode = OF_WINDOW;

	std::shared_ptr<ofAppBaseWindow> window = ofCreateWindow(windowSettings);

	ofRunApp(window, std::make_shared<auriga::AurigaVse>());
	ofRunMainLoop();
}

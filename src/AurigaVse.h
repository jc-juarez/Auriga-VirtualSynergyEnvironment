// *************************************
// Auriga Virtual Synergy Environment
// 'AurigaVse.h'
// Author: Juan Carlos Juárez
// Contact: jc.juarezgarcia@outlook.com
// *************************************

#pragma once

#include <vector>
#include <cstdlib>
#include <ctime>
#include "ofMain.h"
#include "models/Particle.h"

namespace auriga {

class AurigaVse : public ofBaseApp {

public:

	void setup();
	void update();
	void draw();
	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

private:

	UInt16 m_WindowWidth;
	UInt16 m_WindowHeight;

	std::vector<Particle> m_Particles;

	std::vector<Point> m_Points;

};

}

// *************************************
// Auriga Virtual Synergy Environment
// 'AurigaVse.cxx'
// Author: Juan Carlos Juárez
// Contact: jc.juarezgarcia@outlook.com
// *************************************

#include "AurigaVse.h"
#include "windows.h"

namespace auriga {

	//--------------------------------------------------------------
	void AurigaVse::setup() {

		std::srand(static_cast<unsigned int>(std::time(nullptr)));

		m_WindowWidth = ofGetWindowWidth();
		m_WindowHeight = ofGetWindowHeight();

		constexpr UInt8 numberOfParticles = 1;

		for (UInt8 index = 0; index < numberOfParticles; ++index) {
			m_Particles.emplace_back(Particle(5, 200, 200, 0.2, 0.4, 0.2, -0.1));
		}

	}

	//--------------------------------------------------------------
	void AurigaVse::update() {

		//Sleep(1000);

		printf("Update\n");

		Particle& particle = m_Particles.front();

		particle.UpdatePosition();

		Point point;
		point.x = particle.GetPositionX();
		point.y = particle.GetPositionY();

		m_Points.emplace_back(point);

	}

	//--------------------------------------------------------------
	void AurigaVse::draw() {


		printf("Hello\n");

		ofSetColor(255, 0, 0); // Set the drawing color to red

		Particle& particle = m_Particles.front();

		printf("Value in x: %u\n", particle.GetPositionX());
		printf("Value in y: %u\n", particle.GetPositionY());

		ofDrawCircle(particle.GetPositionX(), particle.GetPositionY(), particle.GetRadius());

		
		// Draw a circle at (x: 300, y: 300) with a radius of 50 pixels
		for (const Point& point : m_Points)
		{
			ofDrawCircle(point.x, point.y, 1);
		}

	}

	//--------------------------------------------------------------
	void AurigaVse::keyPressed(int key) {

	}

	//--------------------------------------------------------------
	void AurigaVse::keyReleased(int key) {

	}

	//--------------------------------------------------------------
	void AurigaVse::mouseMoved(int x, int y) {

	}

	//--------------------------------------------------------------
	void AurigaVse::mouseDragged(int x, int y, int button) {

	}

	//--------------------------------------------------------------
	void AurigaVse::mousePressed(int x, int y, int button) {

	}

	//--------------------------------------------------------------
	void AurigaVse::mouseReleased(int x, int y, int button) {

	}

	//--------------------------------------------------------------
	void AurigaVse::mouseEntered(int x, int y) {

	}

	//--------------------------------------------------------------
	void AurigaVse::mouseExited(int x, int y) {

	}

	//--------------------------------------------------------------
	void AurigaVse::windowResized(int w, int h) {

	}

	//--------------------------------------------------------------
	void AurigaVse::gotMessage(ofMessage msg) {

	}

	//--------------------------------------------------------------
	void AurigaVse::dragEvent(ofDragInfo dragInfo) {

	}

}

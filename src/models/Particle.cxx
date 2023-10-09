// *************************************
// Auriga Virtual Synergy Environment
// 'Particle.cxx'
// Author: Juan Carlos Juárez
// Contact: jc.juarezgarcia@outlook.com
// *************************************

#include "ofMain.h"
#include "Particle.h"

namespace auriga {

Particle::Particle(
	UInt16 p_Radius,
	Double p_PositionX,
	Double p_PositionY,
	Double p_MainVelocityX,
	Double p_MainVelocityY,
	Double p_PrimeVelocityX,
	Double p_PrimeVelocityY)
	: m_Radius(p_Radius),
	  m_PositionX(p_PositionX),
	  m_PositionY(p_PositionY),
	  m_MainVelocityX(p_MainVelocityX),
	  m_MainVelocityY(p_MainVelocityY),
	  m_PrimeVelocityX(p_PrimeVelocityX),
	  m_PrimeVelocityY(p_PrimeVelocityY)
{}

void Particle::UpdatePosition()
{
	// Here we're using Perlin noise to get a smooth random value
	float noiseFactor = ofRandom(0, 0.7);

	// We use the noise factor to modify the prime velocities
	Double deltaX = m_PrimeVelocityX * noiseFactor;
	Double deltaY = m_PrimeVelocityY * noiseFactor;

	m_PrimeVelocityX *= 1.001;
	m_PrimeVelocityY *= 1.001;

	m_PositionX += m_MainVelocityX + m_PrimeVelocityX;
	m_PositionY += m_MainVelocityY + m_PrimeVelocityY;

	std::cout << m_PrimeVelocityX << std::endl;
	std::cout << m_PrimeVelocityY << std::endl;

	// Reset prime velocities for the next frame, or apply some decay factor
	//m_PrimeVelocityX *= 0.999;
	//m_PrimeVelocityY *= 0.999;
}

UInt16 Particle::GetRadius() const
{
	return m_Radius;
}

UInt16 Particle::GetPositionX() const
{
	return m_PositionX;
}

UInt16 Particle::GetPositionY() const
{
	return m_PositionY;
}

}
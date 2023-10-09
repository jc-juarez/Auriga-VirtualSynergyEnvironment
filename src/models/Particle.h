// *************************************
// Auriga Virtual Synergy Environment
// 'Particle.h'
// Author: Juan Carlos Juárez
// Contact: jc.juarezgarcia@outlook.com
// *************************************

#pragma once

#include "../Constants.h"

namespace auriga {

struct Point
{
	UInt16 x;
	UInt16 y;
};

class Particle {

public:

	//
	// Constructor.
	// Logic for initial placement heuristics and lifecycle management
	// is provided by the ParticleEngine for each particle derived type.
	//
	Particle(
		UInt16 p_Radius,
		Double p_PositionX,
		Double p_PositionY,
		Double p_MainVelocityX,
		Double p_MainVelocityY,
		Double p_PrimeVelocityX,
		Double p_PrimeVelocityY);

public:

	//
	// Computes and updates the next position of the particle based on its configured rates of change.
	//
	void UpdatePosition();

	//
	// Retrieves the radius for the particle.
	//
	UInt16 GetRadius() const;

	//
	// Retrieves the position in X for the particle.
	//
	UInt16 GetPositionX() const;

	//
	// Retrieves the position in Y for the particle.
	//
	UInt16 GetPositionY() const;

private:

	//
	// Radius for the particle.
	//
	UInt16 m_Radius;

	//
	// Position in X for the particle. Updated per ParticleEngine refresh.
	//
	Double m_PositionX;

	//
	// Position in Y for the particle. Updated per ParticleEngine refresh.
	//
	Double m_PositionY;

	//
	// Rate of change in X for the main velocity vector per ParticleEngine refresh.
	//
	Double m_MainVelocityX;

	//
	// Rate of change in Y for the main velocity vector per ParticleEngine refresh.
	//
	Double m_MainVelocityY;

	//
	// Rate of change in X for the prime velocity vector per ParticleEngine refresh.
	// This rate of change is added on top of the main velocity vector for rotational direction.
	//
	Double m_PrimeVelocityX;

	//
	// Rate of change in Y for the prime velocity vector per ParticleEngine refresh.
	// This rate of change is added on top of the main velocity vector for rotational direction.
	//
	Double m_PrimeVelocityY;

};

}
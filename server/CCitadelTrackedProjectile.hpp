#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x820
// Has VTable
class CCitadelTrackedProjectile : public CCitadelProjectile
{
public:
	GameTime_t m_flTrackingStartTime; // 0x7f8	
	float m_flTrackingDampingCoefficient; // 0x7fc	
	float m_flTrackingSpeed; // 0x800	
	float m_flTrackingDuration; // 0x804	
	GameTime_t m_flTrackingWindowStart; // 0x808	
	GameTime_t m_flTrackingWindowEnd; // 0x80c	
	float m_flTrackingStopDuration; // 0x810	
	Vector m_vLastValidPosition; // 0x814	
};


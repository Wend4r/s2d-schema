#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x828
// Has VTable
class CCitadelTrackedProjectile : public CCitadelProjectile
{
public:
	GameTime_t m_flTrackingStartTime; // 0x800	
	float m_flTrackingDampingCoefficient; // 0x804	
	float m_flTrackingSpeed; // 0x808	
	float m_flTrackingDuration; // 0x80c	
	GameTime_t m_flTrackingWindowStart; // 0x810	
	GameTime_t m_flTrackingWindowEnd; // 0x814	
	float m_flTrackingStopDuration; // 0x818	
	Vector m_vLastValidPosition; // 0x81c	
};


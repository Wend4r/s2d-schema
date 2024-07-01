#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
// Has VTable
class CAI_MotorTransition : public CAI_Component
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x8]; // 0x40
public:
	AIMotorTransitionState_t m_nTransitionState; // 0x48	
	Vector m_vNavLinkStartPos; // 0x4c	
	GameTime_t m_flNavLinkFaceStartTime; // 0x58	
	bool m_bTransitionAnimgraphHasTicked; // 0x5c	
};


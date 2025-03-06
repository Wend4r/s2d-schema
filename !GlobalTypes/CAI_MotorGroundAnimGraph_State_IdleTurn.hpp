#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x48
// Has VTable
// Has Trivial Destructor
class CAI_MotorGroundAnimGraph_State_IdleTurn : public CAI_MotorGroundAnimGraph_State
{
public:
	int32_t m_eType; // 0x20	
	Vector m_vOriginalTargetFacingPosition; // 0x24	
	Vector m_vTargetFacingPosition; // 0x30	
	float m_flOriginalAngleDelta; // 0x3c	
	float m_flTurnSpeed; // 0x40	
	bool m_bWasBlockIdleTurnTagActive; // 0x44	
	bool m_bWasBlockIdleTagActive; // 0x45	
};


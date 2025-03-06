#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x208
// Has VTable
class CAI_FacingServices : public CAI_Component
{
public:
	CAI_InterestTarget m_pEntityFacingRequests[8]; // 0x40	
	AI_ScheduleFacingTargetPriority_t m_eScheduleFacingRequestPriority; // 0x1e0	
	AI_Strafing_t m_strafingRequests[6]; // 0x1e1	
	bool m_pEnableForceFacing[2]; // 0x1e7	
	uint8_t m_nEntityFacingLockCount; // 0x1e9	
private:
	[[maybe_unused]] uint8_t __pad01ea[0x6]; // 0x1ea
public:
	CUtlVector< ChoreoEntityFacing_t > m_vecChoreoEntityFacings; // 0x1f0	
};


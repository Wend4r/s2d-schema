#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct NPCAILODDesc_t
{
public:
	int32_t m_nMaxNPCs; // 0x0	
	float m_flMinRange; // 0x4	
	bool m_bSensing; // 0x8	
	bool m_bSensingUseExactEyePosition; // 0x9	
	bool m_bDecisionMaking; // 0xa	
	bool m_bUseLocalNavigator; // 0xb	
	bool m_bUseAdvancedLocomotion; // 0xc	
	bool m_bEnableFootSweeps; // 0xd	
	bool m_bDetailedLookTargets; // 0xe	
	bool m_bShouldPlayFootstepSounds; // 0xf	
	bool m_bRagdollEnabled; // 0x10	
	bool m_bEnableFlinching; // 0x11	
	bool m_bEnableWarnNPCsOfIncomingFire; // 0x12	
	bool m_bEnableBlinking; // 0x13	
};


#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9a0
// Has VTable
// 
// MNetworkVarNames "float m_flInitialRadius"
// MNetworkVarNames "float m_flEndRadius"
// MNetworkVarNames "float m_flProgress"
// MNetworkVarNames "float m_flCaptureTime"
// MNetworkVarNames "EHANDLE m_hUnlockPrereq"
// MNetworkVarNames "bool m_bAvailable"
// MNetworkVarNames "bool m_bIsBeingCaptured"
// MNetworkVarNames "bool m_bIsBeingBlocked"
class CCitadelControlPointTrigger : public C_BaseTrigger
{
public:
	// MNetworkEnable
	float m_flInitialRadius; // 0x948	
	// MNetworkEnable
	float m_flEndRadius; // 0x94c	
	// MNetworkEnable
	float m_flProgress; // 0x950	
	// MNetworkEnable
	float m_flCaptureTime; // 0x954	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hUnlockPrereq; // 0x958	
	// MNetworkEnable
	bool m_bAvailable; // 0x95c	
	// MNetworkEnable
	bool m_bIsBeingCaptured; // 0x95d	
	// MNetworkEnable
	bool m_bIsBeingBlocked; // 0x95e	
private:
	[[maybe_unused]] uint8_t __pad095f[0x9]; // 0x95f
public:
	GameTime_t m_flLastTouchedTime; // 0x968	
	Vector m_vecBeamTarget; // 0x96c	
	Vector m_vecBeamStart; // 0x978	
	ParticleIndex_t m_nFXProgressBeam; // 0x984	
	CUtlSymbolLarge m_strUnlockPrereq; // 0x988	
	CUtlSymbolLarge m_strBeamStart; // 0x990	
	CUtlSymbolLarge m_strBeamTarget; // 0x998	
};


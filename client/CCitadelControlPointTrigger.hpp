#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x870
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
	float m_flInitialRadius; // 0x818	
	// MNetworkEnable
	float m_flEndRadius; // 0x81c	
	// MNetworkEnable
	float m_flProgress; // 0x820	
	// MNetworkEnable
	float m_flCaptureTime; // 0x824	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hUnlockPrereq; // 0x828	
	// MNetworkEnable
	bool m_bAvailable; // 0x82c	
	// MNetworkEnable
	bool m_bIsBeingCaptured; // 0x82d	
	// MNetworkEnable
	bool m_bIsBeingBlocked; // 0x82e	
private:
	[[maybe_unused]] uint8_t __pad082f[0x9]; // 0x82f
public:
	GameTime_t m_flLastTouchedTime; // 0x838	
	Vector m_vecBeamTarget; // 0x83c	
	Vector m_vecBeamStart; // 0x848	
	ParticleIndex_t m_nFXProgressBeam; // 0x854	
	CUtlSymbolLarge m_strUnlockPrereq; // 0x858	
	CUtlSymbolLarge m_strBeamStart; // 0x860	
	CUtlSymbolLarge m_strBeamTarget; // 0x868	
};


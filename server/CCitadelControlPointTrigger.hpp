#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9e8
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
class CCitadelControlPointTrigger : public CTriggerMultiple
{
public:
	CEntityIOOutput m_OnFullyCaptured; // 0x940	
	CEntityIOOutput m_OnBecomeCapturable; // 0x968	
	// MNetworkEnable
	float m_flInitialRadius; // 0x990	
	// MNetworkEnable
	float m_flEndRadius; // 0x994	
	// MNetworkEnable
	float m_flProgress; // 0x998	
	// MNetworkEnable
	float m_flCaptureTime; // 0x99c	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hUnlockPrereq; // 0x9a0	
	// MNetworkEnable
	bool m_bAvailable; // 0x9a4	
	// MNetworkEnable
	bool m_bIsBeingCaptured; // 0x9a5	
	// MNetworkEnable
	bool m_bIsBeingBlocked; // 0x9a6	
private:
	[[maybe_unused]] uint8_t __pad09a7[0x9]; // 0x9a7
public:
	GameTime_t m_flLastTouchedTime; // 0x9b0	
	Vector m_vecBeamTarget; // 0x9b4	
	Vector m_vecBeamStart; // 0x9c0	
	ParticleIndex_t m_nFXProgressBeam; // 0x9cc	
	CUtlSymbolLarge m_strUnlockPrereq; // 0x9d0	
	CUtlSymbolLarge m_strBeamStart; // 0x9d8	
	CUtlSymbolLarge m_strBeamTarget; // 0x9e0	
};


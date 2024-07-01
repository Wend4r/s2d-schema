#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9d8
// Has VTable
// 
// MNetworkVarNames "bool m_bTestOcclusion"
class CTriggerLook : public CTriggerOnce
{
public:
	CHandle< CBaseEntity > m_hLookTarget; // 0x940	
	float m_flFieldOfView; // 0x944	
	float m_flLookTime; // 0x948	
	float m_flLookTimeTotal; // 0x94c	
	GameTime_t m_flLookTimeLast; // 0x950	
	float m_flTimeoutDuration; // 0x954	
	bool m_bTimeoutFired; // 0x958	
	bool m_bIsLooking; // 0x959	
	bool m_b2DFOV; // 0x95a	
	bool m_bUseVelocity; // 0x95b	
	// MNetworkEnable
	bool m_bTestOcclusion; // 0x95c	
private:
	[[maybe_unused]] uint8_t __pad095d[0x3]; // 0x95d
public:
	CEntityIOOutput m_OnTimeout; // 0x960	
	CEntityIOOutput m_OnStartLook; // 0x988	
	CEntityIOOutput m_OnEndLook; // 0x9b0	
	
	// Datamap fields:
	// void CTriggerLookTimeoutThink; // 0x0
};


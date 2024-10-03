#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9e0
// Has VTable
// 
// MNetworkVarNames "bool m_bTestOcclusion"
class CTriggerLook : public CTriggerOnce
{
public:
	CHandle< CBaseEntity > m_hLookTarget; // 0x948	
	float m_flFieldOfView; // 0x94c	
	float m_flLookTime; // 0x950	
	float m_flLookTimeTotal; // 0x954	
	GameTime_t m_flLookTimeLast; // 0x958	
	float m_flTimeoutDuration; // 0x95c	
	bool m_bTimeoutFired; // 0x960	
	bool m_bIsLooking; // 0x961	
	bool m_b2DFOV; // 0x962	
	bool m_bUseVelocity; // 0x963	
	// MNetworkEnable
	bool m_bTestOcclusion; // 0x964	
private:
	[[maybe_unused]] uint8_t __pad0965[0x3]; // 0x965
public:
	CEntityIOOutput m_OnTimeout; // 0x968	
	CEntityIOOutput m_OnStartLook; // 0x990	
	CEntityIOOutput m_OnEndLook; // 0x9b8	
	
	// Datamap fields:
	// void CTriggerLookTimeoutThink; // 0x0
};


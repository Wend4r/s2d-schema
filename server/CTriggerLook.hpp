#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa20
// Has VTable
// 
// MNetworkVarNames "bool m_bTestOcclusion"
class CTriggerLook : public CTriggerOnce
{
public:
	CHandle< CBaseEntity > m_hLookTarget; // 0x988	
	float m_flFieldOfView; // 0x98c	
	float m_flLookTime; // 0x990	
	float m_flLookTimeTotal; // 0x994	
	GameTime_t m_flLookTimeLast; // 0x998	
	float m_flTimeoutDuration; // 0x99c	
	bool m_bTimeoutFired; // 0x9a0	
	bool m_bIsLooking; // 0x9a1	
	bool m_b2DFOV; // 0x9a2	
	bool m_bUseVelocity; // 0x9a3	
	// MNetworkEnable
	bool m_bTestOcclusion; // 0x9a4	
private:
	[[maybe_unused]] uint8_t __pad09a5[0x3]; // 0x9a5
public:
	CEntityIOOutput m_OnTimeout; // 0x9a8	
	CEntityIOOutput m_OnStartLook; // 0x9d0	
	CEntityIOOutput m_OnEndLook; // 0x9f8	
	
	// Datamap fields:
	// void CTriggerLookTimeoutThink; // 0x0
};


#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9a0
// Has VTable
// 
// MNetworkVarNames "bool m_bTestOcclusion"
class CTriggerLook : public CTriggerOnce
{
public:
	CHandle< CBaseEntity > m_hLookTarget; // 0x908	
	float m_flFieldOfView; // 0x90c	
	float m_flLookTime; // 0x910	
	float m_flLookTimeTotal; // 0x914	
	GameTime_t m_flLookTimeLast; // 0x918	
	float m_flTimeoutDuration; // 0x91c	
	bool m_bTimeoutFired; // 0x920	
	bool m_bIsLooking; // 0x921	
	bool m_b2DFOV; // 0x922	
	bool m_bUseVelocity; // 0x923	
	// MNetworkEnable
	bool m_bTestOcclusion; // 0x924	
private:
	[[maybe_unused]] uint8_t __pad0925[0x3]; // 0x925
public:
	CEntityIOOutput m_OnTimeout; // 0x928	
	CEntityIOOutput m_OnStartLook; // 0x950	
	CEntityIOOutput m_OnEndLook; // 0x978	
	
	// Datamap fields:
	// void CTriggerLookTimeoutThink; // 0x0
};


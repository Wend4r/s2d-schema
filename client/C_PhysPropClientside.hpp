#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcb0
// Has VTable
class C_PhysPropClientside : public C_BreakableProp
{
public:
	GameTime_t m_flTouchDelta; // 0xc88	
	GameTime_t m_fDeathTime; // 0xc8c	
	Vector m_vecDamagePosition; // 0xc90	
	Vector m_vecDamageDirection; // 0xc9c	
	DamageTypes_t m_nDamageType; // 0xca8	
	
	// Datamap fields:
	// float m_impactEnergyScale; // 0xbf8
	// bool forcemotiondisabled; // 0x7fffffff
	// bool phys_start_asleep; // 0x7fffffff
	// float fademaxdist; // 0x7fffffff
	// float fademindist; // 0x7fffffff
	// float fadescale; // 0x7fffffff
	// float scale; // 0x7fffffff
	// const char * skin; // 0x7fffffff
};


#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1068
// Has VTable
class C_PhysPropClientside : public C_BreakableProp
{
public:
	GameTime_t m_flTouchDelta; // 0x1040	
	GameTime_t m_fDeathTime; // 0x1044	
	float m_inertiaScale; // 0x1048	
	Vector m_vecDamagePosition; // 0x104c	
	Vector m_vecDamageDirection; // 0x1058	
	int32_t m_nDamageType; // 0x1064	
	
	// Datamap fields:
	// float m_impactEnergyScale; // 0xfc8
	// bool forcemotiondisabled; // 0x7fffffff
	// bool phys_start_asleep; // 0x7fffffff
	// float fademaxdist; // 0x7fffffff
	// float fademindist; // 0x7fffffff
	// float fadescale; // 0x7fffffff
	// float scale; // 0x7fffffff
	// const char * skin; // 0x7fffffff
};


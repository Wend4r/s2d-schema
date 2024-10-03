#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1130
// Has VTable
class C_PhysPropClientside : public C_BreakableProp
{
public:
	GameTime_t m_flTouchDelta; // 0x1108	
	GameTime_t m_fDeathTime; // 0x110c	
	float m_inertiaScale; // 0x1110	
	Vector m_vecDamagePosition; // 0x1114	
	Vector m_vecDamageDirection; // 0x1120	
	DamageTypes_t m_nDamageType; // 0x112c	
	
	// Datamap fields:
	// float m_impactEnergyScale; // 0x1078
	// bool forcemotiondisabled; // 0x7fffffff
	// bool phys_start_asleep; // 0x7fffffff
	// float fademaxdist; // 0x7fffffff
	// float fademindist; // 0x7fffffff
	// float fadescale; // 0x7fffffff
	// float scale; // 0x7fffffff
	// const char * skin; // 0x7fffffff
};


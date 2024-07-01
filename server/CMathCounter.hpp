#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5b8
// Has VTable
class CMathCounter : public CLogicalEntity
{
public:
	float m_flMin; // 0x4b8	
	float m_flMax; // 0x4bc	
	bool m_bHitMin; // 0x4c0	
	bool m_bHitMax; // 0x4c1	
	bool m_bDisabled; // 0x4c2	
private:
	[[maybe_unused]] uint8_t __pad04c3[0x5]; // 0x4c3
public:
	CEntityOutputTemplate< float32 > m_OutValue; // 0x4c8	
	CEntityOutputTemplate< float32 > m_OnGetValue; // 0x4f0	
	CEntityIOOutput m_OnHitMin; // 0x518	
	CEntityIOOutput m_OnHitMax; // 0x540	
	CEntityIOOutput m_OnChangedFromMin; // 0x568	
	CEntityIOOutput m_OnChangedFromMax; // 0x590	
	
	// Datamap fields:
	// float InputAdd; // 0x0
	// float InputDivide; // 0x0
	// float InputMultiply; // 0x0
	// float InputSetValue; // 0x0
	// float InputSetValueNoFire; // 0x0
	// float InputSubtract; // 0x0
	// float InputSetHitMax; // 0x0
	// float InputSetHitMin; // 0x0
	// void InputGetValue; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// int32_t startvalue; // 0x7fffffff
};


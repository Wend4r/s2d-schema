#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x958
// Has VTable
class CTriggerProximity : public CBaseTrigger
{
public:
	CHandle< CBaseEntity > m_hMeasureTarget; // 0x918	
private:
	[[maybe_unused]] uint8_t __pad091c[0x4]; // 0x91c
public:
	CUtlSymbolLarge m_iszMeasureTarget; // 0x920	
	float m_fRadius; // 0x928	
	int32_t m_nTouchers; // 0x92c	
	CEntityOutputTemplate< float32 > m_NearestEntityDistance; // 0x930	
	
	// Datamap fields:
	// void CTriggerProximityMeasureThink; // 0x0
};


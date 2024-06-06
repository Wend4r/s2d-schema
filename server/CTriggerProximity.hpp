#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x920
// Has VTable
class CTriggerProximity : public CBaseTrigger
{
public:
	CHandle< CBaseEntity > m_hMeasureTarget; // 0x8e0	
private:
	[[maybe_unused]] uint8_t __pad08e4[0x4]; // 0x8e4
public:
	CUtlSymbolLarge m_iszMeasureTarget; // 0x8e8	
	float m_fRadius; // 0x8f0	
	int32_t m_nTouchers; // 0x8f4	
	CEntityOutputTemplate< float32 > m_NearestEntityDistance; // 0x8f8	
	
	// Datamap fields:
	// void CTriggerProximityMeasureThink; // 0x0
};


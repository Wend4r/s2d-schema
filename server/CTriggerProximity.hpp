#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x978
// Has VTable
class CTriggerProximity : public CBaseTrigger
{
public:
	CHandle< CBaseEntity > m_hMeasureTarget; // 0x938	
private:
	[[maybe_unused]] uint8_t __pad093c[0x4]; // 0x93c
public:
	CUtlSymbolLarge m_iszMeasureTarget; // 0x940	
	float m_fRadius; // 0x948	
	int32_t m_nTouchers; // 0x94c	
	CEntityOutputTemplate< float32 > m_NearestEntityDistance; // 0x950	
	
	// Datamap fields:
	// void CTriggerProximityMeasureThink; // 0x0
};


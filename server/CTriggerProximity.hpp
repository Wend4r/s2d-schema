#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9a0
// Has VTable
class CTriggerProximity : public CBaseTrigger
{
public:
	CHandle< CBaseEntity > m_hMeasureTarget; // 0x960	
private:
	[[maybe_unused]] uint8_t __pad0964[0x4]; // 0x964
public:
	CUtlSymbolLarge m_iszMeasureTarget; // 0x968	
	float m_fRadius; // 0x970	
	int32_t m_nTouchers; // 0x974	
	CEntityOutputTemplate< float32 > m_NearestEntityDistance; // 0x978	
	
	// Datamap fields:
	// void CTriggerProximityMeasureThink; // 0x0
};


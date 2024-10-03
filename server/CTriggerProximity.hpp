#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x960
// Has VTable
class CTriggerProximity : public CBaseTrigger
{
public:
	CHandle< CBaseEntity > m_hMeasureTarget; // 0x920	
private:
	[[maybe_unused]] uint8_t __pad0924[0x4]; // 0x924
public:
	CUtlSymbolLarge m_iszMeasureTarget; // 0x928	
	float m_fRadius; // 0x930	
	int32_t m_nTouchers; // 0x934	
	CEntityOutputTemplate< float32 > m_NearestEntityDistance; // 0x938	
	
	// Datamap fields:
	// void CTriggerProximityMeasureThink; // 0x0
};


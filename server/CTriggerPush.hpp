#pragma once

#include <cstdint>

struct CPathSimple;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x958
// Has VTable
class CTriggerPush : public CBaseTrigger
{
public:
	QAngle m_angPushEntitySpace; // 0x920	
	Vector m_vecPushDirEntitySpace; // 0x92c	
	bool m_bTriggerOnStartTouch; // 0x938	
	bool m_bUsePathSimple; // 0x939	
private:
	[[maybe_unused]] uint8_t __pad093a[0x6]; // 0x93a
public:
	CUtlSymbolLarge m_iszPathSimpleName; // 0x940	
	CPathSimple* m_PathSimple; // 0x948	
	uint32_t m_splinePushType; // 0x950	
	
	// Datamap fields:
	// Vector InputSetPushDirection; // 0x0
	// float InputSetPushSpeed; // 0x0
};


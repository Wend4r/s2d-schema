#pragma once

#include <cstdint>

struct CPathSimple;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x918
// Has VTable
class CTriggerPush : public CBaseTrigger
{
public:
	QAngle m_angPushEntitySpace; // 0x8e0	
	Vector m_vecPushDirEntitySpace; // 0x8ec	
	bool m_bTriggerOnStartTouch; // 0x8f8	
	bool m_bUsePathSimple; // 0x8f9	
private:
	[[maybe_unused]] uint8_t __pad08fa[0x6]; // 0x8fa
public:
	CUtlSymbolLarge m_iszPathSimpleName; // 0x900	
	CPathSimple* m_PathSimple; // 0x908	
	uint32_t m_splinePushType; // 0x910	
	
	// Datamap fields:
	// Vector InputSetPushDirection; // 0x0
	// float InputSetPushSpeed; // 0x0
};


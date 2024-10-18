#pragma once

#include <cstdint>

struct CPathSimple;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x998
// Has VTable
class CTriggerPush : public CBaseTrigger
{
public:
	QAngle m_angPushEntitySpace; // 0x960	
	Vector m_vecPushDirEntitySpace; // 0x96c	
	bool m_bTriggerOnStartTouch; // 0x978	
	bool m_bUsePathSimple; // 0x979	
private:
	[[maybe_unused]] uint8_t __pad097a[0x6]; // 0x97a
public:
	CUtlSymbolLarge m_iszPathSimpleName; // 0x980	
	CPathSimple* m_PathSimple; // 0x988	
	uint32_t m_splinePushType; // 0x990	
	
	// Datamap fields:
	// Vector InputSetPushDirection; // 0x0
	// float InputSetPushSpeed; // 0x0
};


#pragma once

#include <cstdint>

struct CPathSimple;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x950
// Has VTable
class CTriggerPush : public CBaseTrigger
{
public:
	QAngle m_angPushEntitySpace; // 0x918	
	Vector m_vecPushDirEntitySpace; // 0x924	
	bool m_bTriggerOnStartTouch; // 0x930	
	bool m_bUsePathSimple; // 0x931	
private:
	[[maybe_unused]] uint8_t __pad0932[0x6]; // 0x932
public:
	CUtlSymbolLarge m_iszPathSimpleName; // 0x938	
	CPathSimple* m_PathSimple; // 0x940	
	uint32_t m_splinePushType; // 0x948	
	
	// Datamap fields:
	// Vector InputSetPushDirection; // 0x0
	// float InputSetPushSpeed; // 0x0
};


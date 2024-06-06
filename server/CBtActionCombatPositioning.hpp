#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb0
// Has VTable
class CBtActionCombatPositioning : public CBtNode
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x10]; // 0x58
public:
	CUtlString m_szSensorInputKey; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad0070[0x10]; // 0x70
public:
	CUtlString m_szIsAttackingKey; // 0x80	
	CountdownTimer m_ActionTimer; // 0x88	
	bool m_bCrouching; // 0xa0	
};


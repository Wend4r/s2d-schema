#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x38
// 
// MGetKV3ClassDefaults
struct PulseScriptedSequenceData_t
{
public:
	int32_t m_nActorID; // 0x0	
	CUtlString m_szPreIdleSequence; // 0x8	
	CUtlString m_szEntrySequence; // 0x10	
	CUtlString m_szSequence; // 0x18	
	CUtlString m_szExitSequence; // 0x20	
	ScriptedMoveTo_t m_nMoveTo; // 0x28	
	MovementGait_t m_nMoveToGait; // 0x2c	
private:
	[[maybe_unused]] uint8_t __pad002d[0x3]; // 0x2d
public:
	ScriptedHeldWeaponBehavior_t m_nHeldWeaponBehavior; // 0x30	
	bool m_bLoopPreIdleSequence; // 0x34	
	bool m_bLoopActionSequence; // 0x35	
	bool m_bLoopPostIdleSequence; // 0x36	
	bool m_bIgnoreLookAt; // 0x37	
};


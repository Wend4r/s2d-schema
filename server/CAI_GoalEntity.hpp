#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
class CAI_GoalEntity : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b8[0x8]; // 0x4b8
public:
	CUtlSymbolLarge m_iszActor; // 0x4c0	
	CUtlSymbolLarge m_iszGoal; // 0x4c8	
	bool m_fStartActive; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d1[0x3]; // 0x4d1
public:
	CAI_GoalEntity::SearchType_t m_SearchType; // 0x4d4	
	CUtlSymbolLarge m_iszConceptModifiers; // 0x4d8	
	CUtlVector< CHandle< CAI_BaseNPC > > m_actors; // 0x4e0	
	CHandle< CBaseEntity > m_hGoalEntity; // 0x4f8	
	uint32_t m_flags; // 0x4fc	
	
	// Datamap fields:
	// void CAI_GoalEntityDelayedRefresh; // 0x0
	// void InputActivate; // 0x0
	// void InputUpdateActors; // 0x0
	// void InputDeactivate; // 0x0
};


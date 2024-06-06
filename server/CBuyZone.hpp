#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8e8
// Has VTable
class CBuyZone : public CBaseTrigger
{
public:
	int32_t m_LegacyTeamNum; // 0x8e0	
	
	// Datamap fields:
	// void InputSetTeam_TerroristOnly; // 0x0
	// void InputSetTeam_CTOnly; // 0x0
	// void InputSetTeam_AllTeams; // 0x0
	// void InputSetTeam_None; // 0x0
};


#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
class CLogicDistanceAutosave : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszTargetEntity; // 0x4e0	
	float m_flDistanceToPlayer; // 0x4e8	
	bool m_bForceNewLevelUnit; // 0x4ec	
	bool m_bCheckCough; // 0x4ed	
	bool m_bThinkDangerous; // 0x4ee	
private:
	[[maybe_unused]] uint8_t __pad04ef[0x1]; // 0x4ef
public:
	float m_flDangerousTime; // 0x4f0	
	
	// Datamap fields:
	// void InputSave; // 0x0
	// float InputSaveDangerous; // 0x0
	// void CLogicDistanceAutosaveSaveThink; // 0x0
};


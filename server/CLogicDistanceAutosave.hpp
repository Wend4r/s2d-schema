#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CLogicDistanceAutosave : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszTargetEntity; // 0x4b8	
	float m_flDistanceToPlayer; // 0x4c0	
	bool m_bForceNewLevelUnit; // 0x4c4	
	bool m_bCheckCough; // 0x4c5	
	bool m_bThinkDangerous; // 0x4c6	
private:
	[[maybe_unused]] uint8_t __pad04c7[0x1]; // 0x4c7
public:
	float m_flDangerousTime; // 0x4c8	
	
	// Datamap fields:
	// void InputSave; // 0x0
	// float InputSaveDangerous; // 0x0
	// void CLogicDistanceAutosaveSaveThink; // 0x0
};


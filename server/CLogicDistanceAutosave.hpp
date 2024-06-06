#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class CLogicDistanceAutosave : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszTargetEntity; // 0x4c0	
	float m_flDistanceToPlayer; // 0x4c8	
	bool m_bForceNewLevelUnit; // 0x4cc	
	bool m_bCheckCough; // 0x4cd	
	bool m_bThinkDangerous; // 0x4ce	
private:
	[[maybe_unused]] uint8_t __pad04cf[0x1]; // 0x4cf
public:
	float m_flDangerousTime; // 0x4d0	
	
	// Datamap fields:
	// void InputSave; // 0x0
	// float InputSaveDangerous; // 0x0
	// void CLogicDistanceAutosaveSaveThink; // 0x0
};


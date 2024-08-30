#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
class CLogicAutosave : public CLogicalEntity
{
public:
	bool m_bForceNewLevelUnit; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
public:
	int32_t m_minHitPoints; // 0x4dc	
	int32_t m_minHitPointsToCommit; // 0x4e0	
	
	// Datamap fields:
	// void InputSave; // 0x0
	// float InputSaveDangerous; // 0x0
	// int32_t InputSetMinHitpointsThreshold; // 0x0
};


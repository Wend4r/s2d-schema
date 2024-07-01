#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
class CLogicAutosave : public CLogicalEntity
{
public:
	bool m_bForceNewLevelUnit; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04b9[0x3]; // 0x4b9
public:
	int32_t m_minHitPoints; // 0x4bc	
	int32_t m_minHitPointsToCommit; // 0x4c0	
	
	// Datamap fields:
	// void InputSave; // 0x0
	// float InputSaveDangerous; // 0x0
	// int32_t InputSetMinHitpointsThreshold; // 0x0
};


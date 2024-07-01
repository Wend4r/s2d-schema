#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
class CLogicMeasureMovement : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_strMeasureTarget; // 0x4b8	
	CUtlSymbolLarge m_strMeasureReference; // 0x4c0	
	CUtlSymbolLarge m_strTargetReference; // 0x4c8	
	CHandle< CBaseEntity > m_hMeasureTarget; // 0x4d0	
	CHandle< CBaseEntity > m_hMeasureReference; // 0x4d4	
	CHandle< CBaseEntity > m_hTarget; // 0x4d8	
	CHandle< CBaseEntity > m_hTargetReference; // 0x4dc	
	float m_flScale; // 0x4e0	
	int32_t m_nMeasureType; // 0x4e4	
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetMeasureTarget; // 0x0
	// CUtlSymbolLarge InputSetMeasureReference; // 0x0
	// CUtlSymbolLarge InputSetTarget; // 0x0
	// CUtlSymbolLarge InputSetTargetReference; // 0x0
	// float InputSetTargetScale; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void CLogicMeasureMovementMeasureThink; // 0x0
};


#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
class CLogicMeasureMovement : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_strMeasureTarget; // 0x4d8	
	CUtlSymbolLarge m_strMeasureReference; // 0x4e0	
	CUtlSymbolLarge m_strTargetReference; // 0x4e8	
	CHandle< CBaseEntity > m_hMeasureTarget; // 0x4f0	
	CHandle< CBaseEntity > m_hMeasureReference; // 0x4f4	
	CHandle< CBaseEntity > m_hTarget; // 0x4f8	
	CHandle< CBaseEntity > m_hTargetReference; // 0x4fc	
	float m_flScale; // 0x500	
	int32_t m_nMeasureType; // 0x504	
	
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


#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x730
// Has VTable
class CFuncBrush : public CBaseModelEntity
{
public:
	BrushSolidities_e m_iSolidity; // 0x710	
	int32_t m_iDisabled; // 0x714	
	bool m_bSolidBsp; // 0x718	
private:
	[[maybe_unused]] uint8_t __pad0719[0x7]; // 0x719
public:
	CUtlSymbolLarge m_iszExcludedClass; // 0x720	
	bool m_bInvertExclusion; // 0x728	
	bool m_bScriptedMovement; // 0x729	
	
	// Datamap fields:
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetExcluded; // 0x0
	// bool InputSetInvert; // 0x0
	// void InputSetSolid; // 0x0
	// void InputSetNonsolid; // 0x0
};


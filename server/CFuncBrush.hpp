#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x770
// Has VTable
class CFuncBrush : public CBaseModelEntity
{
public:
	BrushSolidities_e m_iSolidity; // 0x750	
	int32_t m_iDisabled; // 0x754	
	bool m_bSolidBsp; // 0x758	
private:
	[[maybe_unused]] uint8_t __pad0759[0x7]; // 0x759
public:
	CUtlSymbolLarge m_iszExcludedClass; // 0x760	
	bool m_bInvertExclusion; // 0x768	
	bool m_bScriptedMovement; // 0x769	
	
	// Datamap fields:
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetExcluded; // 0x0
	// bool InputSetInvert; // 0x0
	// void InputSetSolid; // 0x0
	// void InputSetNonsolid; // 0x0
};


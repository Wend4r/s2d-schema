#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
class CEnvInstructorVRHint : public CPointEntity
{
public:
	CUtlSymbolLarge m_iszName; // 0x4c0	
	CUtlSymbolLarge m_iszHintTargetEntity; // 0x4c8	
	int32_t m_iTimeout; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d4[0x4]; // 0x4d4
public:
	CUtlSymbolLarge m_iszCaption; // 0x4d8	
	CUtlSymbolLarge m_iszStartSound; // 0x4e0	
	int32_t m_iLayoutFileType; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	CUtlSymbolLarge m_iszCustomLayoutFile; // 0x4f0	
	int32_t m_iAttachType; // 0x4f8	
	float m_flHeightOffset; // 0x4fc	
	
	// Datamap fields:
	// CUtlSymbolLarge InputShowHint; // 0x0
	// void InputEndHint; // 0x0
};


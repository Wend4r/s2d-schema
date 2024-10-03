#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
class CEnvInstructorVRHint : public CPointEntity
{
public:
	CUtlSymbolLarge m_iszName; // 0x4e0	
	CUtlSymbolLarge m_iszHintTargetEntity; // 0x4e8	
	int32_t m_iTimeout; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f4[0x4]; // 0x4f4
public:
	CUtlSymbolLarge m_iszCaption; // 0x4f8	
	CUtlSymbolLarge m_iszStartSound; // 0x500	
	int32_t m_iLayoutFileType; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad050c[0x4]; // 0x50c
public:
	CUtlSymbolLarge m_iszCustomLayoutFile; // 0x510	
	int32_t m_iAttachType; // 0x518	
	float m_flHeightOffset; // 0x51c	
	
	// Datamap fields:
	// CUtlSymbolLarge InputShowHint; // 0x0
	// void InputEndHint; // 0x0
};


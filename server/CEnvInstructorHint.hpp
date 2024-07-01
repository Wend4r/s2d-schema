#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
class CEnvInstructorHint : public CPointEntity
{
public:
	CUtlSymbolLarge m_iszName; // 0x4b8	
	CUtlSymbolLarge m_iszReplace_Key; // 0x4c0	
	CUtlSymbolLarge m_iszHintTargetEntity; // 0x4c8	
	int32_t m_iTimeout; // 0x4d0	
	int32_t m_iDisplayLimit; // 0x4d4	
	CUtlSymbolLarge m_iszIcon_Onscreen; // 0x4d8	
	CUtlSymbolLarge m_iszIcon_Offscreen; // 0x4e0	
	CUtlSymbolLarge m_iszCaption; // 0x4e8	
	CUtlSymbolLarge m_iszActivatorCaption; // 0x4f0	
	Color m_Color; // 0x4f8	
	float m_fIconOffset; // 0x4fc	
	float m_fRange; // 0x500	
	uint8_t m_iPulseOption; // 0x504	
	uint8_t m_iAlphaOption; // 0x505	
	uint8_t m_iShakeOption; // 0x506	
	bool m_bStatic; // 0x507	
	bool m_bNoOffscreen; // 0x508	
	bool m_bForceCaption; // 0x509	
private:
	[[maybe_unused]] uint8_t __pad050a[0x2]; // 0x50a
public:
	int32_t m_iInstanceType; // 0x50c	
	bool m_bSuppressRest; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0511[0x7]; // 0x511
public:
	CUtlSymbolLarge m_iszBinding; // 0x518	
	bool m_bAllowNoDrawTarget; // 0x520	
	bool m_bAutoStart; // 0x521	
	bool m_bLocalPlayerOnly; // 0x522	
	
	// Datamap fields:
	// CUtlSymbolLarge InputShowHint; // 0x0
	// void InputEndHint; // 0x0
};


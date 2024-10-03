#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x588
// Has VTable
class CNavLinkAreaEntity : public CPointEntity
{
public:
	float m_flWidth; // 0x4e0	
	Vector m_vLocatorOffset; // 0x4e4	
	QAngle m_qLocatorAnglesOffset; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04fc[0x4]; // 0x4fc
public:
	CUtlSymbolLarge m_strMovementForward; // 0x500	
	CUtlSymbolLarge m_strMovementReverse; // 0x508	
	int32_t m_nNavLinkIdForward; // 0x510	
	int32_t m_nNavLinkIdReverse; // 0x514	
	bool m_bEnabled; // 0x518	
private:
	[[maybe_unused]] uint8_t __pad0519[0x7]; // 0x519
public:
	CUtlSymbolLarge m_strFilterName; // 0x520	
	CHandle< CBaseFilter > m_hFilter; // 0x528	
private:
	[[maybe_unused]] uint8_t __pad052c[0x4]; // 0x52c
public:
	CEntityIOOutput m_OnNavLinkStart; // 0x530	
	CEntityIOOutput m_OnNavLinkFinish; // 0x558	
	bool m_bIsTerminus; // 0x580	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};


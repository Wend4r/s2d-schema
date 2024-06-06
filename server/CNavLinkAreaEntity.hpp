#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x568
// Has VTable
class CNavLinkAreaEntity : public CPointEntity
{
public:
	float m_flWidth; // 0x4c0	
	Vector m_vLocatorOffset; // 0x4c4	
	QAngle m_qLocatorAnglesOffset; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04dc[0x4]; // 0x4dc
public:
	CUtlSymbolLarge m_strMovementForward; // 0x4e0	
	CUtlSymbolLarge m_strMovementReverse; // 0x4e8	
	int32_t m_nNavLinkIdForward; // 0x4f0	
	int32_t m_nNavLinkIdReverse; // 0x4f4	
	bool m_bEnabled; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04f9[0x7]; // 0x4f9
public:
	CUtlSymbolLarge m_strFilterName; // 0x500	
	CHandle< CBaseFilter > m_hFilter; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad050c[0x4]; // 0x50c
public:
	CEntityIOOutput m_OnNavLinkStart; // 0x510	
	CEntityIOOutput m_OnNavLinkFinish; // 0x538	
	bool m_bIsTerminus; // 0x560	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};


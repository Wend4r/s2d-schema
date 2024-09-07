#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x640
// Has VTable
class CNavLinkAreaEntity : public CPointEntity
{
public:
	float m_flWidth; // 0x4d8	
	Vector m_vLocatorOffset; // 0x4dc	
	QAngle m_qLocatorAnglesOffset; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04f4[0x4]; // 0x4f4
public:
	CUtlSymbolLarge m_strMovementForward; // 0x4f8	
	CUtlSymbolLarge m_strMovementReverse; // 0x500	
	int32_t m_nNavLinkIdForward; // 0x508	
	int32_t m_nNavLinkIdReverse; // 0x50c	
	bool m_bEnabled; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0511[0x7]; // 0x511
public:
	CUtlSymbolLarge m_strFilterName; // 0x518	
	CHandle< CBaseFilter > m_hFilter; // 0x520	
private:
	[[maybe_unused]] uint8_t __pad0524[0x4]; // 0x524
public:
	CUtlVectorFixedGrowable< CHandle< CAI_BaseNPC >, 6 > m_vecNpcUsers; // 0x528	
	CUtlSymbolLarge m_szListenForAnimTag; // 0x558	
	bool m_bIsListeningForAnimTag; // 0x560	
private:
	[[maybe_unused]] uint8_t __pad0561[0xf]; // 0x561
public:
	CEntityIOOutput m_OnAnimTagFired; // 0x570	
	CEntityIOOutput m_OnAnimTagStart; // 0x598	
	CEntityIOOutput m_OnAnimTagEnd; // 0x5c0	
	CEntityIOOutput m_OnNavLinkStart; // 0x5e8	
	CEntityIOOutput m_OnNavLinkFinish; // 0x610	
	bool m_bIsTerminus; // 0x638	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};


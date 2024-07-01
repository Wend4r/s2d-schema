#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x620
// Has VTable
class CNavLinkAreaEntity : public CPointEntity
{
public:
	float m_flWidth; // 0x4b8	
	Vector m_vLocatorOffset; // 0x4bc	
	QAngle m_qLocatorAnglesOffset; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04d4[0x4]; // 0x4d4
public:
	CUtlSymbolLarge m_strMovementForward; // 0x4d8	
	CUtlSymbolLarge m_strMovementReverse; // 0x4e0	
	int32_t m_nNavLinkIdForward; // 0x4e8	
	int32_t m_nNavLinkIdReverse; // 0x4ec	
	bool m_bEnabled; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f1[0x7]; // 0x4f1
public:
	CUtlSymbolLarge m_strFilterName; // 0x4f8	
	CHandle< CBaseFilter > m_hFilter; // 0x500	
private:
	[[maybe_unused]] uint8_t __pad0504[0x4]; // 0x504
public:
	CUtlVectorFixedGrowable< CHandle< CAI_BaseNPC >, 6 > m_vecNpcUsers; // 0x508	
	CUtlSymbolLarge m_szListenForAnimTag; // 0x538	
	bool m_bIsListeningForAnimTag; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0541[0xf]; // 0x541
public:
	CEntityIOOutput m_OnAnimTagFired; // 0x550	
	CEntityIOOutput m_OnAnimTagStart; // 0x578	
	CEntityIOOutput m_OnAnimTagEnd; // 0x5a0	
	CEntityIOOutput m_OnNavLinkStart; // 0x5c8	
	CEntityIOOutput m_OnNavLinkFinish; // 0x5f0	
	bool m_bIsTerminus; // 0x618	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};


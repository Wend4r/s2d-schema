#pragma once

#include <cstdint>

struct CPathKeyFrame;
// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0x510
// Has VTable
class CPathKeyFrame : public CLogicalEntity
{
public:
	Vector m_Origin; // 0x4b8	
	QAngle m_Angles; // 0x4c4	
	Quaternion m_qAngle; // 0x4d0	
	CUtlSymbolLarge m_iNextKey; // 0x4e0	
	float m_flNextTime; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	CPathKeyFrame* m_pNextKey; // 0x4f0	
	CPathKeyFrame* m_pPrevKey; // 0x4f8	
	float m_flMoveSpeed; // 0x500	
};


#pragma once

#include <cstdint>

struct CPathKeyFrame;
// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0x520
// Has VTable
class CPathKeyFrame : public CLogicalEntity
{
public:
	Vector m_Origin; // 0x4c0	
	QAngle m_Angles; // 0x4cc	
private:
	[[maybe_unused]] uint8_t __pad04d8[0x8]; // 0x4d8
public:
	Quaternion m_qAngle; // 0x4e0	
	CUtlSymbolLarge m_iNextKey; // 0x4f0	
	float m_flNextTime; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04fc[0x4]; // 0x4fc
public:
	CPathKeyFrame* m_pNextKey; // 0x500	
	CPathKeyFrame* m_pPrevKey; // 0x508	
	float m_flMoveSpeed; // 0x510	
};


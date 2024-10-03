#pragma once

#include <cstdint>

struct CPathKeyFrame;
// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0x540
// Has VTable
class CPathKeyFrame : public CLogicalEntity
{
public:
	Vector m_Origin; // 0x4e0	
	QAngle m_Angles; // 0x4ec	
private:
	[[maybe_unused]] uint8_t __pad04f8[0x8]; // 0x4f8
public:
	Quaternion m_qAngle; // 0x500	
	CUtlSymbolLarge m_iNextKey; // 0x510	
	float m_flNextTime; // 0x518	
private:
	[[maybe_unused]] uint8_t __pad051c[0x4]; // 0x51c
public:
	CPathKeyFrame* m_pNextKey; // 0x520	
	CPathKeyFrame* m_pPrevKey; // 0x528	
	float m_flMoveSpeed; // 0x530	
};


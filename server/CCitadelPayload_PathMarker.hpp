#pragma once

#include <cstdint>

struct CCitadelPayload_PathMarker;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CCitadelPayload_PathMarker : public CPointEntity
{
public:
	int32_t m_iLane; // 0x4b8	
	bool m_bStart; // 0x4bc	
	bool m_bRollBackToHere; // 0x4bd	
private:
	[[maybe_unused]] uint8_t __pad04be[0x2]; // 0x4be
public:
	float m_flDistFromPrev; // 0x4c0	
	float m_flProgressAlongTotalPath; // 0x4c4	
	CCitadelPayload_PathMarker* m_pPrevious; // 0x4c8	
};


#pragma once

#include <cstdint>

struct ShotID_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x190
// Has VTable
// Is Abstract
class CCitadel_Modifier_BaseBulletPreRollProc : public CCitadel_Modifier_BaseEventProc
{
public:
	ShotID_t m_nSuppressProcShotID; // 0x170	
private:
	[[maybe_unused]] uint8_t __pad0174[0x4]; // 0x174
public:
	CUtlVector< BulletID_t > m_vecProcdBulletIDs; // 0x178	
};


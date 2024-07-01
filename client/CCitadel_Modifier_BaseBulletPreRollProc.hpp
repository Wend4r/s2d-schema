#pragma once

#include <cstdint>

struct ShotID_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x188
// Has VTable
// Is Abstract
class CCitadel_Modifier_BaseBulletPreRollProc : public CCitadel_Modifier_BaseEventProc
{
public:
	ShotID_t m_nSuppressProcShotID; // 0x168	
private:
	[[maybe_unused]] uint8_t __pad016c[0x4]; // 0x16c
public:
	CUtlVector< BulletID_t > m_vecProcdBulletIDs; // 0x170	
};


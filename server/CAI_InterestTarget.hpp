#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x34
// Has Trivial Destructor
class CAI_InterestTarget
{
public:
	CHandle< CBaseEntity > m_hTarget; // 0x0	
	Vector m_vPosition; // 0x4	
	Vector m_vDirection; // 0x10	
	bool m_bDiscardOutsideViewcone; // 0x1c	
private:
	[[maybe_unused]] uint8_t __pad001d[0x3]; // 0x1d
public:
	ChoreoLookAtMode_t m_nLookAtMode; // 0x20	
	ChoreoLookAtSpeed_t m_nLookAtSpeed; // 0x24	
	CAI_InterestTarget::Type_t m_eType; // 0x28	
	WorldGroupId_t m_nWorldGroupId; // 0x2c	
	GameTime_t m_flEndTime; // 0x30	
};


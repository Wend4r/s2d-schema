#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x38
// Has VTable
class CSmartGoal_Door : public INavSmartGoal
{
public:
	CHandle< CBaseEntity > m_hDoor; // 0x10	
	CHandle< CBaseEntity > m_hPathCornerGoalPostDoor; // 0x14	
	Vector m_vGoalPostDoor; // 0x18	
	MoveType_t m_PrevMoveType; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0025[0x3]; // 0x25
public:
	float m_flDoorSpeed; // 0x28	
	bool m_bUseAnimatedInteraction; // 0x2c	
	bool m_bOpenAway; // 0x2d	
private:
	[[maybe_unused]] uint8_t __pad002e[0x2]; // 0x2e
public:
	int32_t m_nState; // 0x30	
};


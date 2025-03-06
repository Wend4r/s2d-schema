#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x530
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
class CPointOrient : public C_BaseEntity
{
public:
	CUtlSymbolLarge m_iszSpawnTargetName; // 0x510	
	CHandle< C_BaseEntity > m_hTarget; // 0x518	
	bool m_bActive; // 0x51c	
private:
	[[maybe_unused]] uint8_t __pad051d[0x3]; // 0x51d
public:
	PointOrientGoalDirectionType_t m_nGoalDirection; // 0x520	
	PointOrientConstraint_t m_nConstraint; // 0x524	
	float m_flMaxTurnRate; // 0x528	
	GameTime_t m_flLastGameTime; // 0x52c	
	
	// Datamap fields:
	// bool InputSetActive; // 0x0
	// CUtlSymbolLarge InputSetTarget; // 0x0
	// void CPointOrientReorientThink; // 0x0
};


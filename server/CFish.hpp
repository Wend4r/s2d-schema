#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa60
// Has VTable
// 
// MNetworkIncludeByName "m_nModelIndex"
// MNetworkIncludeByName "m_lifeState"
// MNetworkVarNames "float32 m_x"
// MNetworkVarNames "float32 m_y"
// MNetworkVarNames "float32 m_z"
// MNetworkVarNames "float32 m_angle"
// MNetworkVarNames "Vector m_poolOrigin"
// MNetworkVarNames "float32 m_waterLevel"
class CFish : public CBaseAnimGraph
{
public:
	CHandle< CFishPool > m_pool; // 0x958	
	uint32_t m_id; // 0x95c	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_x"
	float m_x; // 0x960	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_y"
	float m_y; // 0x964	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_z"
	float m_z; // 0x968	
	// MNetworkEnable
	// MNetworkSerializer "angle_normalize_positive"
	// MNetworkBitCount "7"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	// MNetworkEncodeFlags "1"
	float m_angle; // 0x96c	
	float m_angleChange; // 0x970	
	Vector m_forward; // 0x974	
	Vector m_perp; // 0x980	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_poolOrigin; // 0x98c	
	// MNetworkEnable
	float m_waterLevel; // 0x998	
	float m_speed; // 0x99c	
	float m_desiredSpeed; // 0x9a0	
	float m_calmSpeed; // 0x9a4	
	float m_panicSpeed; // 0x9a8	
	float m_avoidRange; // 0x9ac	
	CountdownTimer m_turnTimer; // 0x9b0	
	bool m_turnClockwise; // 0x9c8	
private:
	[[maybe_unused]] uint8_t __pad09c9[0x7]; // 0x9c9
public:
	CountdownTimer m_goTimer; // 0x9d0	
	CountdownTimer m_moveTimer; // 0x9e8	
	CountdownTimer m_panicTimer; // 0xa00	
	CountdownTimer m_disperseTimer; // 0xa18	
	CountdownTimer m_proximityTimer; // 0xa30	
	CUtlVector< CFish* > m_visible; // 0xa48	
};


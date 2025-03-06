#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb98
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
	CHandle< CFishPool > m_pool; // 0xa90	
	uint32_t m_id; // 0xa94	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_x"
	float m_x; // 0xa98	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_y"
	float m_y; // 0xa9c	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_z"
	float m_z; // 0xaa0	
	// MNetworkEnable
	// MNetworkSerializer "angle_normalize_positive"
	// MNetworkBitCount "7"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	// MNetworkEncodeFlags "1"
	float m_angle; // 0xaa4	
	float m_angleChange; // 0xaa8	
	Vector m_forward; // 0xaac	
	Vector m_perp; // 0xab8	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_poolOrigin; // 0xac4	
	// MNetworkEnable
	float m_waterLevel; // 0xad0	
	float m_speed; // 0xad4	
	float m_desiredSpeed; // 0xad8	
	float m_calmSpeed; // 0xadc	
	float m_panicSpeed; // 0xae0	
	float m_avoidRange; // 0xae4	
	CountdownTimer m_turnTimer; // 0xae8	
	bool m_turnClockwise; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b01[0x7]; // 0xb01
public:
	CountdownTimer m_goTimer; // 0xb08	
	CountdownTimer m_moveTimer; // 0xb20	
	CountdownTimer m_panicTimer; // 0xb38	
	CountdownTimer m_disperseTimer; // 0xb50	
	CountdownTimer m_proximityTimer; // 0xb68	
	CUtlVector< CFish* > m_visible; // 0xb80	
};


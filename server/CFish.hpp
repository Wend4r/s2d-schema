#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xab0
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
	CHandle< CFishPool > m_pool; // 0x9a8	
	uint32_t m_id; // 0x9ac	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_x"
	float m_x; // 0x9b0	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_y"
	float m_y; // 0x9b4	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_z"
	float m_z; // 0x9b8	
	// MNetworkEnable
	// MNetworkSerializer "angle_normalize_positive"
	// MNetworkBitCount "7"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	// MNetworkEncodeFlags "1"
	float m_angle; // 0x9bc	
	float m_angleChange; // 0x9c0	
	Vector m_forward; // 0x9c4	
	Vector m_perp; // 0x9d0	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_poolOrigin; // 0x9dc	
	// MNetworkEnable
	float m_waterLevel; // 0x9e8	
	float m_speed; // 0x9ec	
	float m_desiredSpeed; // 0x9f0	
	float m_calmSpeed; // 0x9f4	
	float m_panicSpeed; // 0x9f8	
	float m_avoidRange; // 0x9fc	
	CountdownTimer m_turnTimer; // 0xa00	
	bool m_turnClockwise; // 0xa18	
private:
	[[maybe_unused]] uint8_t __pad0a19[0x7]; // 0xa19
public:
	CountdownTimer m_goTimer; // 0xa20	
	CountdownTimer m_moveTimer; // 0xa38	
	CountdownTimer m_panicTimer; // 0xa50	
	CountdownTimer m_disperseTimer; // 0xa68	
	CountdownTimer m_proximityTimer; // 0xa80	
	CUtlVector< CFish* > m_visible; // 0xa98	
};


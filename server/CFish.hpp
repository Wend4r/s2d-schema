#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa68
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
	CHandle< CFishPool > m_pool; // 0x960	
	uint32_t m_id; // 0x964	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_x"
	float m_x; // 0x968	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_y"
	float m_y; // 0x96c	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_z"
	float m_z; // 0x970	
	// MNetworkEnable
	// MNetworkSerializer "angle_normalize_positive"
	// MNetworkBitCount "7"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	// MNetworkEncodeFlags "1"
	float m_angle; // 0x974	
	float m_angleChange; // 0x978	
	Vector m_forward; // 0x97c	
	Vector m_perp; // 0x988	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_poolOrigin; // 0x994	
	// MNetworkEnable
	float m_waterLevel; // 0x9a0	
	float m_speed; // 0x9a4	
	float m_desiredSpeed; // 0x9a8	
	float m_calmSpeed; // 0x9ac	
	float m_panicSpeed; // 0x9b0	
	float m_avoidRange; // 0x9b4	
	CountdownTimer m_turnTimer; // 0x9b8	
	bool m_turnClockwise; // 0x9d0	
private:
	[[maybe_unused]] uint8_t __pad09d1[0x7]; // 0x9d1
public:
	CountdownTimer m_goTimer; // 0x9d8	
	CountdownTimer m_moveTimer; // 0x9f0	
	CountdownTimer m_panicTimer; // 0xa08	
	CountdownTimer m_disperseTimer; // 0xa20	
	CountdownTimer m_proximityTimer; // 0xa38	
	CUtlVector< CFish* > m_visible; // 0xa50	
};


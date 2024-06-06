#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9f0
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
	CHandle< CFishPool > m_pool; // 0x8e8	
	uint32_t m_id; // 0x8ec	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_x"
	float m_x; // 0x8f0	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_y"
	float m_y; // 0x8f4	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_z"
	float m_z; // 0x8f8	
	// MNetworkEnable
	// MNetworkSerializer "angle_normalize_positive"
	// MNetworkBitCount "7"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	// MNetworkEncodeFlags "1"
	float m_angle; // 0x8fc	
	float m_angleChange; // 0x900	
	Vector m_forward; // 0x904	
	Vector m_perp; // 0x910	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_poolOrigin; // 0x91c	
	// MNetworkEnable
	float m_waterLevel; // 0x928	
	float m_speed; // 0x92c	
	float m_desiredSpeed; // 0x930	
	float m_calmSpeed; // 0x934	
	float m_panicSpeed; // 0x938	
	float m_avoidRange; // 0x93c	
	CountdownTimer m_turnTimer; // 0x940	
	bool m_turnClockwise; // 0x958	
private:
	[[maybe_unused]] uint8_t __pad0959[0x7]; // 0x959
public:
	CountdownTimer m_goTimer; // 0x960	
	CountdownTimer m_moveTimer; // 0x978	
	CountdownTimer m_panicTimer; // 0x990	
	CountdownTimer m_disperseTimer; // 0x9a8	
	CountdownTimer m_proximityTimer; // 0x9c0	
	CUtlVector< CFish* > m_visible; // 0x9d8	
};


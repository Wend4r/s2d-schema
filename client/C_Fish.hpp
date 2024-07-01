#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb60
// Has VTable
// 
// MNetworkIncludeByName "m_nModelIndex"
// MNetworkIncludeByName "m_lifeState"
// MNetworkVarNames "Vector m_poolOrigin"
// MNetworkVarNames "float32 m_waterLevel"
// MNetworkVarNames "float32 m_x"
// MNetworkVarNames "float32 m_y"
// MNetworkVarNames "float32 m_z"
// MNetworkVarNames "float32 m_angle"
class C_Fish : public CBaseAnimGraph
{
public:
	Vector m_pos; // 0xa70	
	Vector m_vel; // 0xa7c	
	QAngle m_angles; // 0xa88	
	int32_t m_localLifeState; // 0xa94	
	float m_deathDepth; // 0xa98	
	float m_deathAngle; // 0xa9c	
	float m_buoyancy; // 0xaa0	
private:
	[[maybe_unused]] uint8_t __pad0aa4[0x4]; // 0xaa4
public:
	// -> m_duration - 0xab0
	// -> m_timestamp - 0xab4
	// -> m_timescale - 0xab8
	// -> m_nWorldGroupId - 0xabc
	CountdownTimer m_wiggleTimer; // 0xaa8	
	float m_wigglePhase; // 0xac0	
	float m_wiggleRate; // 0xac4	
	Vector m_actualPos; // 0xac8	
	QAngle m_actualAngles; // 0xad4	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_poolOrigin; // 0xae0	
	// MNetworkEnable
	float m_waterLevel; // 0xaec	
	bool m_gotUpdate; // 0xaf0	
private:
	[[maybe_unused]] uint8_t __pad0af1[0x3]; // 0xaf1
public:
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_x"
	// MNetworkChangeCallback "OnPosChanged"
	float m_x; // 0xaf4	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_y"
	// MNetworkChangeCallback "OnPosChanged"
	float m_y; // 0xaf8	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_z"
	// MNetworkChangeCallback "OnPosChanged"
	float m_z; // 0xafc	
	// MNetworkEnable
	// MNetworkSerializer "angle_normalize_positive"
	// MNetworkBitCount "7"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkChangeCallback "OnAngChanged"
	float m_angle; // 0xb00	
	float m_errorHistory[20]; // 0xb04	
	int32_t m_errorHistoryIndex; // 0xb54	
	int32_t m_errorHistoryCount; // 0xb58	
	float m_averageError; // 0xb5c	
};


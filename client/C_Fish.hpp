#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xbf0
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
	Vector m_pos; // 0xb00	
	Vector m_vel; // 0xb0c	
	QAngle m_angles; // 0xb18	
	int32_t m_localLifeState; // 0xb24	
	float m_deathDepth; // 0xb28	
	float m_deathAngle; // 0xb2c	
	float m_buoyancy; // 0xb30	
private:
	[[maybe_unused]] uint8_t __pad0b34[0x4]; // 0xb34
public:
	// -> m_duration - 0xb40
	// -> m_timestamp - 0xb44
	// -> m_timescale - 0xb48
	// -> m_nWorldGroupId - 0xb4c
	CountdownTimer m_wiggleTimer; // 0xb38	
	float m_wigglePhase; // 0xb50	
	float m_wiggleRate; // 0xb54	
	Vector m_actualPos; // 0xb58	
	QAngle m_actualAngles; // 0xb64	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_poolOrigin; // 0xb70	
	// MNetworkEnable
	float m_waterLevel; // 0xb7c	
	bool m_gotUpdate; // 0xb80	
private:
	[[maybe_unused]] uint8_t __pad0b81[0x3]; // 0xb81
public:
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_x"
	// MNetworkChangeCallback "OnPosChanged"
	float m_x; // 0xb84	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_y"
	// MNetworkChangeCallback "OnPosChanged"
	float m_y; // 0xb88	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_z"
	// MNetworkChangeCallback "OnPosChanged"
	float m_z; // 0xb8c	
	// MNetworkEnable
	// MNetworkSerializer "angle_normalize_positive"
	// MNetworkBitCount "7"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkChangeCallback "OnAngChanged"
	float m_angle; // 0xb90	
	float m_errorHistory[20]; // 0xb94	
	int32_t m_errorHistoryIndex; // 0xbe4	
	int32_t m_errorHistoryCount; // 0xbe8	
	float m_averageError; // 0xbec	
};


#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xfc0
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
	Vector m_pos; // 0xed0	
	Vector m_vel; // 0xedc	
	QAngle m_angles; // 0xee8	
	int32_t m_localLifeState; // 0xef4	
	float m_deathDepth; // 0xef8	
	float m_deathAngle; // 0xefc	
	float m_buoyancy; // 0xf00	
private:
	[[maybe_unused]] uint8_t __pad0f04[0x4]; // 0xf04
public:
	CountdownTimer m_wiggleTimer; // 0xf08	
	float m_wigglePhase; // 0xf20	
	float m_wiggleRate; // 0xf24	
	Vector m_actualPos; // 0xf28	
	QAngle m_actualAngles; // 0xf34	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_poolOrigin; // 0xf40	
	// MNetworkEnable
	float m_waterLevel; // 0xf4c	
	bool m_gotUpdate; // 0xf50	
private:
	[[maybe_unused]] uint8_t __pad0f51[0x3]; // 0xf51
public:
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_x"
	// MNetworkChangeCallback "OnPosChanged"
	float m_x; // 0xf54	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_y"
	// MNetworkChangeCallback "OnPosChanged"
	float m_y; // 0xf58	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_z"
	// MNetworkChangeCallback "OnPosChanged"
	float m_z; // 0xf5c	
	// MNetworkEnable
	// MNetworkSerializer "angle_normalize_positive"
	// MNetworkBitCount "7"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkChangeCallback "OnAngChanged"
	float m_angle; // 0xf60	
	float m_errorHistory[20]; // 0xf64	
	int32_t m_errorHistoryIndex; // 0xfb4	
	int32_t m_errorHistoryCount; // 0xfb8	
	float m_averageError; // 0xfbc	
};


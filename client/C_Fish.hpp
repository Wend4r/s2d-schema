#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1070
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
	Vector m_pos; // 0xf80	
	Vector m_vel; // 0xf8c	
	QAngle m_angles; // 0xf98	
	int32_t m_localLifeState; // 0xfa4	
	float m_deathDepth; // 0xfa8	
	float m_deathAngle; // 0xfac	
	float m_buoyancy; // 0xfb0	
private:
	[[maybe_unused]] uint8_t __pad0fb4[0x4]; // 0xfb4
public:
	CountdownTimer m_wiggleTimer; // 0xfb8	
	float m_wigglePhase; // 0xfd0	
	float m_wiggleRate; // 0xfd4	
	Vector m_actualPos; // 0xfd8	
	QAngle m_actualAngles; // 0xfe4	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_poolOrigin; // 0xff0	
	// MNetworkEnable
	float m_waterLevel; // 0xffc	
	bool m_gotUpdate; // 0x1000	
private:
	[[maybe_unused]] uint8_t __pad1001[0x3]; // 0x1001
public:
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_x"
	// MNetworkChangeCallback "OnPosChanged"
	float m_x; // 0x1004	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_y"
	// MNetworkChangeCallback "OnPosChanged"
	float m_y; // 0x1008	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_z"
	// MNetworkChangeCallback "OnPosChanged"
	float m_z; // 0x100c	
	// MNetworkEnable
	// MNetworkSerializer "angle_normalize_positive"
	// MNetworkBitCount "7"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkChangeCallback "OnAngChanged"
	float m_angle; // 0x1010	
	float m_errorHistory[20]; // 0x1014	
	int32_t m_errorHistoryIndex; // 0x1064	
	int32_t m_errorHistoryCount; // 0x1068	
	float m_averageError; // 0x106c	
};


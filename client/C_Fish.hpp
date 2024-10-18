#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1078
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
	Vector m_pos; // 0xf88	
	Vector m_vel; // 0xf94	
	QAngle m_angles; // 0xfa0	
	int32_t m_localLifeState; // 0xfac	
	float m_deathDepth; // 0xfb0	
	float m_deathAngle; // 0xfb4	
	float m_buoyancy; // 0xfb8	
private:
	[[maybe_unused]] uint8_t __pad0fbc[0x4]; // 0xfbc
public:
	CountdownTimer m_wiggleTimer; // 0xfc0	
	float m_wigglePhase; // 0xfd8	
	float m_wiggleRate; // 0xfdc	
	Vector m_actualPos; // 0xfe0	
	QAngle m_actualAngles; // 0xfec	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_poolOrigin; // 0xff8	
	// MNetworkEnable
	float m_waterLevel; // 0x1004	
	bool m_gotUpdate; // 0x1008	
private:
	[[maybe_unused]] uint8_t __pad1009[0x3]; // 0x1009
public:
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_x"
	// MNetworkChangeCallback "OnPosChanged"
	float m_x; // 0x100c	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_y"
	// MNetworkChangeCallback "OnPosChanged"
	float m_y; // 0x1010	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_z"
	// MNetworkChangeCallback "OnPosChanged"
	float m_z; // 0x1014	
	// MNetworkEnable
	// MNetworkSerializer "angle_normalize_positive"
	// MNetworkBitCount "7"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkChangeCallback "OnAngChanged"
	float m_angle; // 0x1018	
	float m_errorHistory[20]; // 0x101c	
	int32_t m_errorHistoryIndex; // 0x106c	
	int32_t m_errorHistoryCount; // 0x1070	
	float m_averageError; // 0x1074	
};


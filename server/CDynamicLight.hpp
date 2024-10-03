#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x768
// Has VTable
// 
// MNetworkVarNames "uint8 m_Flags"
// MNetworkVarNames "uint8 m_LightStyle"
// MNetworkVarNames "float32 m_Radius"
// MNetworkVarNames "int32 m_Exponent"
// MNetworkVarNames "float32 m_InnerAngle"
// MNetworkVarNames "float32 m_OuterAngle"
// MNetworkVarNames "float32 m_SpotRadius"
class CDynamicLight : public CBaseModelEntity
{
public:
	uint8_t m_ActualFlags; // 0x750	
	// MNetworkEnable
	uint8_t m_Flags; // 0x751	
	// MNetworkEnable
	uint8_t m_LightStyle; // 0x752	
	bool m_On; // 0x753	
	// MNetworkEnable
	float m_Radius; // 0x754	
	// MNetworkEnable
	int32_t m_Exponent; // 0x758	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	float m_InnerAngle; // 0x75c	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	float m_OuterAngle; // 0x760	
	// MNetworkEnable
	float m_SpotRadius; // 0x764	
	
	// Datamap fields:
	// void CDynamicLightDynamicLightThink; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputToggle; // 0x0
	// Color _light; // 0x7fffffff
	// float pitch; // 0x7fffffff
	// int32_t spawnflags; // 0x7fffffff
};


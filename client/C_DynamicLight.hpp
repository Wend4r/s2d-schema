#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd50
// Has VTable
// 
// MNetworkVarNames "uint8 m_Flags"
// MNetworkVarNames "uint8 m_LightStyle"
// MNetworkVarNames "float32 m_Radius"
// MNetworkVarNames "int32 m_Exponent"
// MNetworkVarNames "float32 m_InnerAngle"
// MNetworkVarNames "float32 m_OuterAngle"
// MNetworkVarNames "float32 m_SpotRadius"
class C_DynamicLight : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	uint8_t m_Flags; // 0xd28	
	// MNetworkEnable
	uint8_t m_LightStyle; // 0xd29	
private:
	[[maybe_unused]] uint8_t __pad0d2a[0x2]; // 0xd2a
public:
	// MNetworkEnable
	float m_Radius; // 0xd2c	
	// MNetworkEnable
	int32_t m_Exponent; // 0xd30	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	float m_InnerAngle; // 0xd34	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	float m_OuterAngle; // 0xd38	
	// MNetworkEnable
	float m_SpotRadius; // 0xd3c	
};


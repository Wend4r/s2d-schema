#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x118
// Has VTable
class CBuoyancyHelper
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlStringToken m_nFluidType; // 0x18	
	float m_flFluidDensity; // 0x1c	
	float m_flNeutrallyBuoyantGravity; // 0x20	
	float m_flNeutrallyBuoyantLinearDamping; // 0x24	
	float m_flNeutrallyBuoyantAngularDamping; // 0x28	
	bool m_bNeutrallyBuoyant; // 0x2c	
private:
	[[maybe_unused]] uint8_t __pad002d[0x3]; // 0x2d
public:
	CUtlVector< float32 > m_vecFractionOfWheelSubmergedForWheelFriction; // 0x30	
	CUtlVector< float32 > m_vecWheelFrictionScales; // 0x48	
	CUtlVector< float32 > m_vecFractionOfWheelSubmergedForWheelDrag; // 0x60	
	CUtlVector< float32 > m_vecWheelDrag; // 0x78	
	
	// Datamap fields:
	// void m_pController; // 0x8
};


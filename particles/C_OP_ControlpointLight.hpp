#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x6c0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ControlpointLight : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "initial color bias"
	float m_flScale; // 0x1b8	
private:
	[[maybe_unused]] uint8_t __pad01bc[0x484]; // 0x1bc
public:
	// MPropertyFriendlyName "light 1 control point"
	int32_t m_nControlPoint1; // 0x640	
	// MPropertyFriendlyName "light 2 control point"
	int32_t m_nControlPoint2; // 0x644	
	// MPropertyFriendlyName "light 3 control point"
	int32_t m_nControlPoint3; // 0x648	
	// MPropertyFriendlyName "light 4 control point"
	int32_t m_nControlPoint4; // 0x64c	
	// MPropertyFriendlyName "light 1 control point offset"
	Vector m_vecCPOffset1; // 0x650	
	// MPropertyFriendlyName "light 2 control point offset"
	Vector m_vecCPOffset2; // 0x65c	
	// MPropertyFriendlyName "light 3 control point offset"
	Vector m_vecCPOffset3; // 0x668	
	// MPropertyFriendlyName "light 4 control point offset"
	Vector m_vecCPOffset4; // 0x674	
	// MPropertyFriendlyName "light 1 50% distance"
	float m_LightFiftyDist1; // 0x680	
	// MPropertyFriendlyName "light 1 0% distance"
	float m_LightZeroDist1; // 0x684	
	// MPropertyFriendlyName "light 2 50% distance"
	float m_LightFiftyDist2; // 0x688	
	// MPropertyFriendlyName "light 2 0% distance"
	float m_LightZeroDist2; // 0x68c	
	// MPropertyFriendlyName "light 3 50% distance"
	float m_LightFiftyDist3; // 0x690	
	// MPropertyFriendlyName "light 3 0% distance"
	float m_LightZeroDist3; // 0x694	
	// MPropertyFriendlyName "light 4 50% distance"
	float m_LightFiftyDist4; // 0x698	
	// MPropertyFriendlyName "light 4 0% distance"
	float m_LightZeroDist4; // 0x69c	
	// MPropertyFriendlyName "light 1 color"
	Color m_LightColor1; // 0x6a0	
	// MPropertyFriendlyName "light 2 color"
	Color m_LightColor2; // 0x6a4	
	// MPropertyFriendlyName "light 3 color"
	Color m_LightColor3; // 0x6a8	
	// MPropertyFriendlyName "light 4 color"
	Color m_LightColor4; // 0x6ac	
	// MPropertyFriendlyName "light 1 type 0=point 1=spot"
	bool m_bLightType1; // 0x6b0	
	// MPropertyFriendlyName "light 2 type 0=point 1=spot"
	bool m_bLightType2; // 0x6b1	
	// MPropertyFriendlyName "light 3 type 0=point 1=spot"
	bool m_bLightType3; // 0x6b2	
	// MPropertyFriendlyName "light 4 type 0=point 1=spot"
	bool m_bLightType4; // 0x6b3	
	// MPropertyFriendlyName "light 1 dynamic light"
	bool m_bLightDynamic1; // 0x6b4	
	// MPropertyFriendlyName "light 2 dynamic light"
	bool m_bLightDynamic2; // 0x6b5	
	// MPropertyFriendlyName "light 3 dynamic light"
	bool m_bLightDynamic3; // 0x6b6	
	// MPropertyFriendlyName "light 4 dynamic light"
	bool m_bLightDynamic4; // 0x6b7	
	// MPropertyFriendlyName "compute normals from control points"
	bool m_bUseNormal; // 0x6b8	
	// MPropertyFriendlyName "half-lambert normals"
	bool m_bUseHLambert; // 0x6b9	
private:
	[[maybe_unused]] uint8_t __pad06ba[0x4]; // 0x6ba
public:
	// MPropertyFriendlyName "clamp minimum light value to initial color"
	bool m_bClampLowerRange; // 0x6be	
	// MPropertyFriendlyName "clamp maximum light value to initial color"
	bool m_bClampUpperRange; // 0x6bf	
};


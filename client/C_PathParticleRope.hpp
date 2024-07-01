#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x640
// Has VTable
// 
// MNetworkVarNames "float m_flParticleSpacing"
// MNetworkVarNames "float m_flSlack"
// MNetworkVarNames "float m_flRadius"
// MNetworkVarNames "Color m_ColorTint"
// MNetworkVarNames "int m_nEffectState"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iEffectIndex"
// MNetworkVarNames "Vector m_PathNodes_Position"
// MNetworkVarNames "Vector m_PathNodes_TangentIn"
// MNetworkVarNames "Vector m_PathNodes_TangentOut"
// MNetworkVarNames "Vector m_PathNodes_Color"
// MNetworkVarNames "bool m_PathNodes_PinEnabled"
// MNetworkVarNames "float m_PathNodes_RadiusScale"
class C_PathParticleRope : public C_BaseEntity
{
public:
	bool m_bStartActive; // 0x538	
private:
	[[maybe_unused]] uint8_t __pad0539[0x3]; // 0x539
public:
	float m_flMaxSimulationTime; // 0x53c	
	CUtlSymbolLarge m_iszEffectName; // 0x540	
	CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // 0x548	
	// MNetworkEnable
	float m_flParticleSpacing; // 0x560	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flSlack; // 0x564	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flRadius; // 0x568	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	Color m_ColorTint; // 0x56c	
	// MNetworkEnable
	// MNetworkChangeCallback "effectStateChanged"
	int32_t m_nEffectState; // 0x570	
private:
	[[maybe_unused]] uint8_t __pad0574[0x4]; // 0x574
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x578	
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_Position; // 0x580	
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentIn; // 0x598	
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentOut; // 0x5b0	
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_Color; // 0x5c8	
	// MNetworkEnable
	// MNetworkChangeCallback "pinStateChanged"
	C_NetworkUtlVectorBase< bool > m_PathNodes_PinEnabled; // 0x5e0	
	// MNetworkEnable
	C_NetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale; // 0x5f8	
	
	// Datamap fields:
	// CUtlSymbolLarge pathNodes; // 0x7fffffff
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputStopEndCap; // 0x0
	// void InputDestroy; // 0x0
	// CUtlSymbolLarge InputDisablePin; // 0x0
	// float InputSetRadius; // 0x0
	// float InputSetSlack; // 0x0
};


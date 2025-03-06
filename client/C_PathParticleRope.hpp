#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x620
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
private:
	[[maybe_unused]] uint8_t __pad0510[0x8]; // 0x510
public:
	bool m_bStartActive; // 0x518	
private:
	[[maybe_unused]] uint8_t __pad0519[0x3]; // 0x519
public:
	float m_flMaxSimulationTime; // 0x51c	
	CUtlSymbolLarge m_iszEffectName; // 0x520	
	CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // 0x528	
	// MNetworkEnable
	float m_flParticleSpacing; // 0x540	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flSlack; // 0x544	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flRadius; // 0x548	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	Color m_ColorTint; // 0x54c	
	// MNetworkEnable
	// MNetworkChangeCallback "effectStateChanged"
	int32_t m_nEffectState; // 0x550	
private:
	[[maybe_unused]] uint8_t __pad0554[0x4]; // 0x554
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x558	
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_Position; // 0x560	
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentIn; // 0x578	
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentOut; // 0x590	
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_Color; // 0x5a8	
	// MNetworkEnable
	// MNetworkChangeCallback "pinStateChanged"
	C_NetworkUtlVectorBase< bool > m_PathNodes_PinEnabled; // 0x5c0	
	// MNetworkEnable
	C_NetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale; // 0x5d8	
	
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


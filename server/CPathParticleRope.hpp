#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x598
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
class CPathParticleRope : public CBaseEntity
{
public:
	bool m_bStartActive; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04b9[0x3]; // 0x4b9
public:
	float m_flMaxSimulationTime; // 0x4bc	
	CUtlSymbolLarge m_iszEffectName; // 0x4c0	
	CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // 0x4c8	
	// MNetworkEnable
	float m_flParticleSpacing; // 0x4e0	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flSlack; // 0x4e4	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flRadius; // 0x4e8	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	Color m_ColorTint; // 0x4ec	
	// MNetworkEnable
	// MNetworkChangeCallback "effectStateChanged"
	int32_t m_nEffectState; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f4[0x4]; // 0x4f4
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x4f8	
	// MNetworkEnable
	CNetworkUtlVectorBase< Vector > m_PathNodes_Position; // 0x500	
	// MNetworkEnable
	CNetworkUtlVectorBase< Vector > m_PathNodes_TangentIn; // 0x518	
	// MNetworkEnable
	CNetworkUtlVectorBase< Vector > m_PathNodes_TangentOut; // 0x530	
	// MNetworkEnable
	CNetworkUtlVectorBase< Vector > m_PathNodes_Color; // 0x548	
	// MNetworkEnable
	// MNetworkChangeCallback "pinStateChanged"
	CNetworkUtlVectorBase< bool > m_PathNodes_PinEnabled; // 0x560	
	// MNetworkEnable
	CNetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale; // 0x578	
	
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


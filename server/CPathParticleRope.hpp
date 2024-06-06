#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5a0
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
	bool m_bStartActive; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	float m_flMaxSimulationTime; // 0x4c4	
	CUtlSymbolLarge m_iszEffectName; // 0x4c8	
	CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // 0x4d0	
	// MNetworkEnable
	float m_flParticleSpacing; // 0x4e8	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flSlack; // 0x4ec	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flRadius; // 0x4f0	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	Color m_ColorTint; // 0x4f4	
	// MNetworkEnable
	// MNetworkChangeCallback "effectStateChanged"
	int32_t m_nEffectState; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04fc[0x4]; // 0x4fc
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x500	
	// MNetworkEnable
	CNetworkUtlVectorBase< Vector > m_PathNodes_Position; // 0x508	
	// MNetworkEnable
	CNetworkUtlVectorBase< Vector > m_PathNodes_TangentIn; // 0x520	
	// MNetworkEnable
	CNetworkUtlVectorBase< Vector > m_PathNodes_TangentOut; // 0x538	
	// MNetworkEnable
	CNetworkUtlVectorBase< Vector > m_PathNodes_Color; // 0x550	
	// MNetworkEnable
	// MNetworkChangeCallback "pinStateChanged"
	CNetworkUtlVectorBase< bool > m_PathNodes_PinEnabled; // 0x568	
	// MNetworkEnable
	CNetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale; // 0x580	
	
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


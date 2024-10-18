#pragma once

#include <cstdint>

struct C_AttributeContainer;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16f8
// Has VTable
// 
// MNetworkVarNames "bool m_jumpedThisFrame"
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_leader"
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
class C_Chicken : public C_DynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad1228[0x8]; // 0x1228
public:
	CHandle< CBaseAnimGraph > m_hHolidayHatAddon; // 0x1230	
	// MNetworkEnable
	// MNetworkChangeCallback "OnJumpedChanged"
	bool m_jumpedThisFrame; // 0x1234	
private:
	[[maybe_unused]] uint8_t __pad1235[0x3]; // 0x1235
public:
	// MNetworkEnable
	CHandle< C_CSPlayerPawn > m_leader; // 0x1238	
private:
	[[maybe_unused]] uint8_t __pad123c[0x4]; // 0x123c
public:
	// MNetworkEnable
	C_AttributeContainer m_AttributeManager; // 0x1240	
	bool m_bAttributesInitialized; // 0x16e8	
private:
	[[maybe_unused]] uint8_t __pad16e9[0x3]; // 0x16e9
public:
	ParticleIndex_t m_hWaterWakeParticles; // 0x16ec	
	bool m_bIsPreviewModel; // 0x16f0	
};


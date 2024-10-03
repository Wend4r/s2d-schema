#pragma once

#include <cstdint>

struct C_AttributeContainer;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16f0
// Has VTable
// 
// MNetworkVarNames "bool m_jumpedThisFrame"
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_leader"
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
class C_Chicken : public C_DynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad1220[0x8]; // 0x1220
public:
	CHandle< CBaseAnimGraph > m_hHolidayHatAddon; // 0x1228	
	// MNetworkEnable
	// MNetworkChangeCallback "OnJumpedChanged"
	bool m_jumpedThisFrame; // 0x122c	
private:
	[[maybe_unused]] uint8_t __pad122d[0x3]; // 0x122d
public:
	// MNetworkEnable
	CHandle< C_CSPlayerPawn > m_leader; // 0x1230	
private:
	[[maybe_unused]] uint8_t __pad1234[0x4]; // 0x1234
public:
	// MNetworkEnable
	C_AttributeContainer m_AttributeManager; // 0x1238	
	bool m_bAttributesInitialized; // 0x16e0	
private:
	[[maybe_unused]] uint8_t __pad16e1[0x3]; // 0x16e1
public:
	ParticleIndex_t m_hWaterWakeParticles; // 0x16e4	
	bool m_bIsPreviewModel; // 0x16e8	
};


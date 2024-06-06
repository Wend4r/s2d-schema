#pragma once

#include <cstdint>

struct C_AttributeContainer;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1628
// Has VTable
// 
// MNetworkVarNames "bool m_jumpedThisFrame"
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_leader"
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
class C_Chicken : public C_DynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad1158[0x8]; // 0x1158
public:
	CHandle< CBaseAnimGraph > m_hHolidayHatAddon; // 0x1160	
	// MNetworkEnable
	// MNetworkChangeCallback "OnJumpedChanged"
	bool m_jumpedThisFrame; // 0x1164	
private:
	[[maybe_unused]] uint8_t __pad1165[0x3]; // 0x1165
public:
	// MNetworkEnable
	CHandle< C_CSPlayerPawn > m_leader; // 0x1168	
private:
	[[maybe_unused]] uint8_t __pad116c[0x4]; // 0x116c
public:
	// MNetworkEnable
	// -> m_Item - 0x11c0
	// -> m_iExternalItemProviderRegisteredToken - 0x1608
	// -> m_ullRegisteredAsItemID - 0x1610
	C_AttributeContainer m_AttributeManager; // 0x1170	
	bool m_bAttributesInitialized; // 0x1618	
private:
	[[maybe_unused]] uint8_t __pad1619[0x3]; // 0x1619
public:
	ParticleIndex_t m_hWaterWakeParticles; // 0x161c	
	bool m_bIsPreviewModel; // 0x1620	
};


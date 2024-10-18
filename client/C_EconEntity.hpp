#pragma once

#include <cstdint>

struct C_AttributeContainer;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1668
// Has VTable
// 
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
// MNetworkVarNames "uint32 m_OriginalOwnerXuidLow"
// MNetworkVarNames "uint32 m_OriginalOwnerXuidHigh"
// MNetworkVarNames "int m_nFallbackPaintKit"
// MNetworkVarNames "int m_nFallbackSeed"
// MNetworkVarNames "float m_flFallbackWear"
// MNetworkVarNames "int m_nFallbackStatTrak"
class C_EconEntity : public C_BaseFlex
{
private:
	[[maybe_unused]] uint8_t __pad1120[0x10]; // 0x1120
public:
	float m_flFlexDelayTime; // 0x1130	
private:
	[[maybe_unused]] uint8_t __pad1134[0x4]; // 0x1134
public:
	float32* m_flFlexDelayedWeight; // 0x1138	
	bool m_bAttributesInitialized; // 0x1140	
private:
	[[maybe_unused]] uint8_t __pad1141[0x7]; // 0x1141
public:
	// MNetworkEnable
	C_AttributeContainer m_AttributeManager; // 0x1148	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidLow; // 0x15f0	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidHigh; // 0x15f4	
	// MNetworkEnable
	int32_t m_nFallbackPaintKit; // 0x15f8	
	// MNetworkEnable
	int32_t m_nFallbackSeed; // 0x15fc	
	// MNetworkEnable
	float m_flFallbackWear; // 0x1600	
	// MNetworkEnable
	int32_t m_nFallbackStatTrak; // 0x1604	
	bool m_bClientside; // 0x1608	
	bool m_bParticleSystemsCreated; // 0x1609	
private:
	[[maybe_unused]] uint8_t __pad160a[0x6]; // 0x160a
public:
	CUtlVector< int32 > m_vecAttachedParticles; // 0x1610	
	CHandle< CBaseAnimGraph > m_hViewmodelAttachment; // 0x1628	
	int32_t m_iOldTeam; // 0x162c	
	bool m_bAttachmentDirty; // 0x1630	
private:
	[[maybe_unused]] uint8_t __pad1631[0x3]; // 0x1631
public:
	int32_t m_nUnloadedModelIndex; // 0x1634	
	int32_t m_iNumOwnerValidationRetries; // 0x1638	
private:
	[[maybe_unused]] uint8_t __pad163c[0xc]; // 0x163c
public:
	CHandle< C_BaseEntity > m_hOldProvidee; // 0x1648	
private:
	[[maybe_unused]] uint8_t __pad164c[0x4]; // 0x164c
public:
	CUtlVector< C_EconEntity::AttachedModelData_t > m_vecAttachedModels; // 0x1650	
};


#pragma once

#include <cstdint>

struct C_AttributeContainer;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15b0
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
	[[maybe_unused]] uint8_t __pad1068[0x10]; // 0x1068
public:
	float m_flFlexDelayTime; // 0x1078	
private:
	[[maybe_unused]] uint8_t __pad107c[0x4]; // 0x107c
public:
	float32* m_flFlexDelayedWeight; // 0x1080	
	bool m_bAttributesInitialized; // 0x1088	
private:
	[[maybe_unused]] uint8_t __pad1089[0x7]; // 0x1089
public:
	// MNetworkEnable
	// -> m_Item - 0x10e0
	// -> m_iExternalItemProviderRegisteredToken - 0x1528
	// -> m_ullRegisteredAsItemID - 0x1530
	C_AttributeContainer m_AttributeManager; // 0x1090	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidLow; // 0x1538	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidHigh; // 0x153c	
	// MNetworkEnable
	int32_t m_nFallbackPaintKit; // 0x1540	
	// MNetworkEnable
	int32_t m_nFallbackSeed; // 0x1544	
	// MNetworkEnable
	float m_flFallbackWear; // 0x1548	
	// MNetworkEnable
	int32_t m_nFallbackStatTrak; // 0x154c	
	bool m_bClientside; // 0x1550	
	bool m_bParticleSystemsCreated; // 0x1551	
private:
	[[maybe_unused]] uint8_t __pad1552[0x6]; // 0x1552
public:
	CUtlVector< int32 > m_vecAttachedParticles; // 0x1558	
	CHandle< CBaseAnimGraph > m_hViewmodelAttachment; // 0x1570	
	int32_t m_iOldTeam; // 0x1574	
	bool m_bAttachmentDirty; // 0x1578	
private:
	[[maybe_unused]] uint8_t __pad1579[0x3]; // 0x1579
public:
	int32_t m_nUnloadedModelIndex; // 0x157c	
	int32_t m_iNumOwnerValidationRetries; // 0x1580	
private:
	[[maybe_unused]] uint8_t __pad1584[0xc]; // 0x1584
public:
	CHandle< C_BaseEntity > m_hOldProvidee; // 0x1590	
private:
	[[maybe_unused]] uint8_t __pad1594[0x4]; // 0x1594
public:
	CUtlVector< C_EconEntity::AttachedModelData_t > m_vecAttachedModels; // 0x1598	
};


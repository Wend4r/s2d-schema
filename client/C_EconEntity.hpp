#pragma once

#include <cstdint>

struct C_AttributeContainer;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1660
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
	[[maybe_unused]] uint8_t __pad1118[0x10]; // 0x1118
public:
	float m_flFlexDelayTime; // 0x1128	
private:
	[[maybe_unused]] uint8_t __pad112c[0x4]; // 0x112c
public:
	float32* m_flFlexDelayedWeight; // 0x1130	
	bool m_bAttributesInitialized; // 0x1138	
private:
	[[maybe_unused]] uint8_t __pad1139[0x7]; // 0x1139
public:
	// MNetworkEnable
	C_AttributeContainer m_AttributeManager; // 0x1140	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidLow; // 0x15e8	
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidHigh; // 0x15ec	
	// MNetworkEnable
	int32_t m_nFallbackPaintKit; // 0x15f0	
	// MNetworkEnable
	int32_t m_nFallbackSeed; // 0x15f4	
	// MNetworkEnable
	float m_flFallbackWear; // 0x15f8	
	// MNetworkEnable
	int32_t m_nFallbackStatTrak; // 0x15fc	
	bool m_bClientside; // 0x1600	
	bool m_bParticleSystemsCreated; // 0x1601	
private:
	[[maybe_unused]] uint8_t __pad1602[0x6]; // 0x1602
public:
	CUtlVector< int32 > m_vecAttachedParticles; // 0x1608	
	CHandle< CBaseAnimGraph > m_hViewmodelAttachment; // 0x1620	
	int32_t m_iOldTeam; // 0x1624	
	bool m_bAttachmentDirty; // 0x1628	
private:
	[[maybe_unused]] uint8_t __pad1629[0x3]; // 0x1629
public:
	int32_t m_nUnloadedModelIndex; // 0x162c	
	int32_t m_iNumOwnerValidationRetries; // 0x1630	
private:
	[[maybe_unused]] uint8_t __pad1634[0xc]; // 0x1634
public:
	CHandle< C_BaseEntity > m_hOldProvidee; // 0x1640	
private:
	[[maybe_unused]] uint8_t __pad1644[0x4]; // 0x1644
public:
	CUtlVector< C_EconEntity::AttachedModelData_t > m_vecAttachedModels; // 0x1648	
};


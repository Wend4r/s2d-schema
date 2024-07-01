#pragma once

#include <cstdint>

struct CAttributeContainer;
struct style_index_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xda8
// Has VTable
// 
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
class C_EconEntity : public C_BaseFlex
{
private:
	[[maybe_unused]] uint8_t __pad0c08[0x10]; // 0xc08
public:
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0xc18	
	bool m_bClientside; // 0xd58	
private:
	[[maybe_unused]] uint8_t __pad0d59[0x3]; // 0xd59
public:
	EconEntityParticleDisableMode_t m_nDisableMode; // 0xd5c	
	bool m_bParticleSystemsCreated; // 0xd60	
	bool m_bForceDestroyAttachedParticlesImmediately; // 0xd61	
private:
	[[maybe_unused]] uint8_t __pad0d62[0x6]; // 0xd62
public:
	CUtlVector< C_EconEntity::AttachedParticleInfo_t > m_vecAttachedParticles; // 0xd68	
	CHandle< CBaseAnimGraph > m_hViewmodelAttachment; // 0xd80	
	int32_t m_iOldTeam; // 0xd84	
	bool m_bAttachmentDirty; // 0xd88	
	style_index_t m_iOldStyle; // 0xd89	
private:
	[[maybe_unused]] uint8_t __pad0d8a[0x2]; // 0xd8a
public:
	CHandle< C_BaseEntity > m_hOldProvidee; // 0xd8c	
	CUtlVector< C_EconEntity::AttachedModelData_t > m_vecAttachedModels; // 0xd90	
};


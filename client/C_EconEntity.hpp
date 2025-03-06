#pragma once

#include <cstdint>

struct CAttributeContainer;
struct style_index_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe50
// Has VTable
// 
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
class C_EconEntity : public C_BaseFlex
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x10]; // 0xc98
public:
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0xca8	
	bool m_bClientside; // 0xe00	
private:
	[[maybe_unused]] uint8_t __pad0e01[0x3]; // 0xe01
public:
	EconEntityParticleDisableMode_t m_nDisableMode; // 0xe04	
	bool m_bParticleSystemsCreated; // 0xe08	
	bool m_bForceDestroyAttachedParticlesImmediately; // 0xe09	
private:
	[[maybe_unused]] uint8_t __pad0e0a[0x6]; // 0xe0a
public:
	CUtlVector< C_EconEntity::AttachedParticleInfo_t > m_vecAttachedParticles; // 0xe10	
	CHandle< CBaseAnimGraph > m_hViewmodelAttachment; // 0xe28	
	int32_t m_iOldTeam; // 0xe2c	
	bool m_bAttachmentDirty; // 0xe30	
	style_index_t m_iOldStyle; // 0xe31	
private:
	[[maybe_unused]] uint8_t __pad0e32[0x2]; // 0xe32
public:
	CHandle< C_BaseEntity > m_hOldProvidee; // 0xe34	
	CUtlVector< C_EconEntity::AttachedModelData_t > m_vecAttachedModels; // 0xe38	
};


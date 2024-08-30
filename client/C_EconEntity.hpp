#pragma once

#include <cstdint>

struct CAttributeContainer;
struct style_index_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdc8
// Has VTable
// 
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
class C_EconEntity : public C_BaseFlex
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x10]; // 0xc28
public:
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0xc38	
	bool m_bClientside; // 0xd78	
private:
	[[maybe_unused]] uint8_t __pad0d79[0x3]; // 0xd79
public:
	EconEntityParticleDisableMode_t m_nDisableMode; // 0xd7c	
	bool m_bParticleSystemsCreated; // 0xd80	
	bool m_bForceDestroyAttachedParticlesImmediately; // 0xd81	
private:
	[[maybe_unused]] uint8_t __pad0d82[0x6]; // 0xd82
public:
	CUtlVector< C_EconEntity::AttachedParticleInfo_t > m_vecAttachedParticles; // 0xd88	
	CHandle< CBaseAnimGraph > m_hViewmodelAttachment; // 0xda0	
	int32_t m_iOldTeam; // 0xda4	
	bool m_bAttachmentDirty; // 0xda8	
	style_index_t m_iOldStyle; // 0xda9	
private:
	[[maybe_unused]] uint8_t __pad0daa[0x2]; // 0xdaa
public:
	CHandle< C_BaseEntity > m_hOldProvidee; // 0xdac	
	CUtlVector< C_EconEntity::AttachedModelData_t > m_vecAttachedModels; // 0xdb0	
};


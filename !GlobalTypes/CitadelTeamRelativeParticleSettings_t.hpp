#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1e0
// 
// MModelGameData
// MFgdHelper
// MGetKV3ClassDefaults
struct CitadelTeamRelativeParticleSettings_t
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strFriendlyParticle; // 0x0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strEnemyParticle; // 0xe0	
	bool m_bUseConfig; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c1[0x7]; // 0x1c1
public:
	// MPropertySuppressExpr "!m_bUseConfig"
	CUtlString m_strConfigName; // 0x1c8	
	// MPropertySuppressExpr "m_bUseConfig"
	ParticleAttachment_t m_AttachmentType; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
public:
	// MPropertySuppressExpr "m_bUseConfig || ( m_AttachmentType != PATTACH_POINT && m_AttachmentType != PATTACH_POINT_FOLLOW )"
	// MPropertyCustomFGDType "model_attachment"
	CUtlString m_strAttachmentName; // 0x1d8	
};


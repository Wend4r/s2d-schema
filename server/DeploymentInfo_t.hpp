#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1e0
// 
// MGetKV3ClassDefaults
struct DeploymentInfo_t
{
public:
	bool m_bRequiresUpNormal; // 0x0	
	bool m_bGroundCheck; // 0x1	
	bool m_bPlaceFlat; // 0x2	
	bool m_bPointTrace; // 0x3	
	bool m_bCheckPlayerFit; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_previewModel; // 0x8	
	// MPropertyDescription "CP0=caster origin, CP1=deploy target position, CP2=caster's ability_cast"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_previewParticle; // 0xe8	
	CUtlString m_strExraBodygroup; // 0x1c8	
	CUtlString m_strPreviewClass; // 0x1d0	
	float m_flPreviewModelScale; // 0x1d8	
	float m_flGroundCheckHeightOffset; // 0x1dc	
};


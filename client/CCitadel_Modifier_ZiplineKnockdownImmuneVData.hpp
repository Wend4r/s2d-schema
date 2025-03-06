#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ZiplineKnockdownImmuneVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineEnemyKnockdownProtectionParticle; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSelfKnockdownProtectionParticle; // 0x738	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineKnockdownProtectionStatusParticle; // 0x818	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineKnockdownProtectionStatusEnemyParticle; // 0x8f8	
};


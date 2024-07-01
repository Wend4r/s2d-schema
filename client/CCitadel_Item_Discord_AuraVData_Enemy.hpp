#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_Discord_AuraVData_Enemy : public CCitadelModifierAuraVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strAreaEffectEnemy; // 0x620	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strAreaEffectFriendly; // 0x700	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strAreaEffectSelf; // 0x7e0	
};


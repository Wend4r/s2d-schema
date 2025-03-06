#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x940
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_Discord_AuraVData_Enemy : public CCitadelModifierAuraVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strAreaEffectEnemy; // 0x6a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strAreaEffectFriendly; // 0x780	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strAreaEffectSelf; // 0x860	
};


#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x318
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_BreakablePropPickupVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyStartGroup "Visuals"
	// MPropertyFriendlyName "Spawn Particle"
	// MPropertyDescription "Spawn Particle"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_spawnParticle; // 0x28	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_gainedParticle; // 0x108	
	// MPropertyFriendlyName "Spawn Particle Color"
	// MPropertyDescription "Spawn Particle Color"
	Color m_Color; // 0x1e8	
private:
	[[maybe_unused]] uint8_t __pad01ec[0x4]; // 0x1ec
public:
	// MPropertyDescription "Model"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hModel; // 0x1f0	
	// MPropertyFriendlyName "Material group"
	// MPropertyDescription "Which material group of the model should be used?"
	// MPropertyAttributeEditor "VDataModelMaterialGroup( m_hModel )"
	CUtlString m_sDefaultMaterialGroupName; // 0x2d0	
	// MPropertyDescription "Show On Minimap"
	bool m_bShowOnMinimap; // 0x2d8	
	bool m_bIsPermanentPickup; // 0x2d9	
private:
	[[maybe_unused]] uint8_t __pad02da[0x2]; // 0x2da
public:
	int32_t m_iTempParticleSheetIndex; // 0x2dc	
	float m_flParticleRadius; // 0x2e0	
private:
	[[maybe_unused]] uint8_t __pad02e4[0x4]; // 0x2e4
public:
	// MPropertyGroupName "Audio"
	// MPropertyDescription "Pickup Sound"
	CSoundEventName m_sPickupSound; // 0x2e8	
	// MPropertyGroupName "Audio"
	// MPropertyDescription "Spawn Sound"
	CSoundEventName m_sSpawnSound; // 0x2f8	
	// MPropertyDescription "Pickup Radius"
	float m_flPickupRadius; // 0x308	
	// MPropertyDescription "Pickup Expiration Duration"
	float m_flPickupExpirationDuration; // 0x30c	
	// MPropertyDescription "Pickup Name Loc String"
	CUtlString m_sNameLocString; // 0x310	
};


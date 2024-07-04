#pragma once

#include <cstdint>

struct CModifierLevelFloat;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x628
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierVData_BaseAura : public CCitadelModifierVData
{
public:
	eAuraShapeType m_eAuraShapeType; // 0x5f0	
	// MPropertySuppressExpr "m_eAuraShapeType != k_eAuraShapeTypeSphere"
	CModifierLevelFloat m_flAuraRadius; // 0x5f4	
	// MPropertySuppressExpr "m_eAuraShapeType != k_eAuraShapeTypeEntityBased"
	CModifierLevelFloat m_flAuraEntityBoundsScale; // 0x604	
	int32_t m_nAmbientParticleRadiusControlPoint; // 0x614	
	// MPropertyDescription "Aura - Modifier to Apply"
	// MPropertyFriendlyName "Modifier Provided By Aura"
	CEmbeddedSubclass< CBaseModifier > m_modifierProvidedByAura; // 0x618	
};


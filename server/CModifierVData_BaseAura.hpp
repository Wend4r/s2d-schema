#pragma once

#include <cstdint>

struct CModifierLevelFloat;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x630
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierVData_BaseAura : public CCitadelModifierVData
{
public:
	eAuraShapeType m_eAuraShapeType; // 0x5f8	
	// MPropertySuppressExpr "m_eAuraShapeType != k_eAuraShapeTypeSphere"
	CModifierLevelFloat m_flAuraRadius; // 0x5fc	
	// MPropertySuppressExpr "m_eAuraShapeType != k_eAuraShapeTypeEntityBased"
	CModifierLevelFloat m_flAuraEntityBoundsScale; // 0x60c	
	int32_t m_nAmbientParticleRadiusControlPoint; // 0x61c	
	// MPropertyDescription "Aura - Modifier to Apply"
	// MPropertyFriendlyName "Modifier Provided By Aura"
	CEmbeddedSubclass< CBaseModifier > m_modifierProvidedByAura; // 0x620	
};


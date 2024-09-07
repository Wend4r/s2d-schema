#pragma once

#include <cstdint>

struct CModifierLevelFloat;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1d8
// 
// MGetKV3ClassDefaults
struct ModifierScriptValue_t
{
public:
	EModifierValue m_eModifierValue; // 0x0	
	EModifierScriptVariantType m_eType; // 0x4	
	// MPropertySuppressExpr "m_eType != MODIFIER_SCRIPT_VARIANT_MODIFIER_FLOAT"
	CModifierLevelFloat m_value; // 0x8	
	// MPropertySuppressExpr "m_eType != MODIFIER_SCRIPT_VARIANT_MODEL"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelValue; // 0x18	
	// MPropertySuppressExpr "m_eType != MODIFIER_SCRIPT_VARIANT_PARTICLE"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sParticleValue; // 0xf8	
};


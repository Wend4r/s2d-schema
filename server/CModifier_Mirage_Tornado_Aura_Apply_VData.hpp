#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x688
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Mirage_Tornado_Aura_Apply_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TossModifier; // 0x658	
	CEmbeddedSubclass< CCitadelModifier > m_LiftModifier; // 0x668	
	CSoundEventName m_strHitConfirmSound; // 0x678	
};


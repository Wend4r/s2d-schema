#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x688
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_RespawnCreditVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Respawn Settings"
	ERejuvenatorRespawnMechanic m_eRespawnMechanic; // 0x658	
	// MPropertySuppressExpr "m_eRespawnMechanic != RejuvenatorRespawnMechanic_FixedDelay"
	// MPropertyDescription "Respawn time is set to this fixed duration after dying."
	float m_flRespawnDelay; // 0x65c	
	// MPropertyStartGroup "Buff Values"
	float m_flBonusClipSize; // 0x660	
	float m_flBonusFirerate; // 0x664	
	float m_flBonusHealth; // 0x668	
	float m_flBonusMoveSpeedMeterPerSecond; // 0x66c	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sExpireSound; // 0x670	
	// MPropertyStartGroup "UI Messages"
	int32_t m_iMaxMessages; // 0x680	
	float m_flMessageInterval; // 0x684	
};


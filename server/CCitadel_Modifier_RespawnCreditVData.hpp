#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x620
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_RespawnCreditVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Respawn Settings"
	ERejuvenatorRespawnMechanic m_eRespawnMechanic; // 0x5f0	
	// MPropertySuppressExpr "m_eRespawnMechanic != RejuvenatorRespawnMechanic_FixedDelay"
	// MPropertyDescription "Respawn time is set to this fixed duration after dying."
	float m_flRespawnDelay; // 0x5f4	
	// MPropertySuppressExpr "m_eRespawnMechanic != RejuvenatorRespawnMechanic_PercentOfNormal"
	// MPropertyDescription "Respawn time is set to this percent (0-1) of the normal respawn time."
	float m_flPercentOfNormalRespawn; // 0x5f8	
	// MPropertyStartGroup "Buff Values"
	float m_flBonusClipSize; // 0x5fc	
	float m_flBonusFirerate; // 0x600	
	float m_flBonusHealth; // 0x604	
	float m_flBonusMoveSpeedMeterPerSecond; // 0x608	
private:
	[[maybe_unused]] uint8_t __pad060c[0x4]; // 0x60c
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sExpireSound; // 0x610	
};


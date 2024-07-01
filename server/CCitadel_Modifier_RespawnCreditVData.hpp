#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x610
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_RespawnCreditVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Respawn Settings"
	ERejuvenatorRespawnMechanic m_eRespawnMechanic; // 0x5e0	
	// MPropertySuppressExpr "m_eRespawnMechanic != RejuvenatorRespawnMechanic_FixedDelay"
	// MPropertyDescription "Respawn time is set to this fixed duration after dying."
	float m_flRespawnDelay; // 0x5e4	
	// MPropertySuppressExpr "m_eRespawnMechanic != RejuvenatorRespawnMechanic_PercentOfNormal"
	// MPropertyDescription "Respawn time is set to this percent (0-1) of the normal respawn time."
	float m_flPercentOfNormalRespawn; // 0x5e8	
	// MPropertyStartGroup "Buff Values"
	float m_flBonusClipSize; // 0x5ec	
	float m_flBonusFirerate; // 0x5f0	
	float m_flBonusHealth; // 0x5f4	
	float m_flBonusMoveSpeedMeterPerSecond; // 0x5f8	
private:
	[[maybe_unused]] uint8_t __pad05fc[0x4]; // 0x5fc
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sExpireSound; // 0x600	
};


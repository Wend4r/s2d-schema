#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xca8
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flDiveStateStartTime"
// MNetworkVarNames "EShivDiveState m_eDiveState"
// MNetworkVarNames "CHandle< CCitadelPlayerPawn> m_hPossessed"
class CCitadel_Ability_Shiv_Dive : public CCitadelBaseShivAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flDiveStateStartTime; // 0xc28	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	EShivDiveState m_eDiveState; // 0xc2c	
private:
	[[maybe_unused]] uint8_t __pad0c30[0x70]; // 0xc30
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< C_CitadelPlayerPawn > m_hPossessed; // 0xca0	
};


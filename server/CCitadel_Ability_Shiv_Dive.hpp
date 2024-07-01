#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb28
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
	GameTime_t m_flDiveStateStartTime; // 0xaa8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	EShivDiveState m_eDiveState; // 0xaac	
private:
	[[maybe_unused]] uint8_t __pad0ab0[0x70]; // 0xab0
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< CCitadelPlayerPawn > m_hPossessed; // 0xb20	
};


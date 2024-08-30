#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe28
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "GameTime_t m_flLandedTime"
// MNetworkVarNames "bool m_bLanded"
// MNetworkVarNames "bool m_bFalling"
// MNetworkVarNames "bool m_bInStoneForm"
// MNetworkVarNames "float m_flStartHeight"
class CCitadel_Ability_Tengu_StoneForm : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x1c0]; // 0xc50
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flStartTime; // 0xe10	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flLandedTime; // 0xe14	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bLanded; // 0xe18	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bFalling; // 0xe19	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bInStoneForm; // 0xe1a	
private:
	[[maybe_unused]] uint8_t __pad0e1b[0x1]; // 0xe1b
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	float m_flStartHeight; // 0xe1c	
	ParticleIndex_t m_nStoneFormEffect; // 0xe20	
};


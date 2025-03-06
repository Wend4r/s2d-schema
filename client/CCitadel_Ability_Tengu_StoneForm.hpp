#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe30
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
	[[maybe_unused]] uint8_t __pad0c50[0x1c8]; // 0xc50
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flStartTime; // 0xe18	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLandedTime; // 0xe1c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bLanded; // 0xe20	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bFalling; // 0xe21	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInStoneForm; // 0xe22	
private:
	[[maybe_unused]] uint8_t __pad0e23[0x1]; // 0xe23
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flStartHeight; // 0xe24	
	ParticleIndex_t m_nStoneFormEffect; // 0xe28	
};


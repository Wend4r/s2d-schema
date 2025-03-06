#pragma once

#include <cstdint>

struct CGameSceneNode;
struct CNetworkVarChainer;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x78
// Has VTable
class CBodyComponent : public CEntityComponent
{
public:
	CGameSceneNode* m_pSceneNode; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0010[0x38]; // 0x10
public:
	CNetworkVarChainer __m_pChainEntity; // 0x48	
};


#pragma once

#include <cstdint>

struct CGameSceneNode;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MNetworkVarNames "CGameSceneNode m_sceneNode"
class CBodyComponentPoint : public CBodyComponent
{
private:
	[[maybe_unused]] uint8_t __pad0078[0x8]; // 0x78
public:
	// MNetworkEnable
	CGameSceneNode m_sceneNode; // 0x80	
};


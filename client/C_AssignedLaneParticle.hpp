#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x830
// Has VTable
// 
// MNetworkIncludeByName "m_iTeamNum"
// MNetworkVarNames "int m_iLane"
class C_AssignedLaneParticle : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0808[0x20]; // 0x808
public:
	// MNetworkEnable
	int32_t m_iLane; // 0x828	
};


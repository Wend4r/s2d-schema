#pragma once

#include <cstdint>

struct HullFlags_t;
struct HintNodeData;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x538
// Has VTable
class CNodeEnt : public CServerOnlyPointEntity
{
public:
	bool m_bDontDropNode; // 0x4e0	
	HullFlags_t m_HullForceFlags; // 0x4e1	
private:
	[[maybe_unused]] uint8_t __pad04eb[0x5]; // 0x4eb
public:
	HintNodeData m_NodeData; // 0x4f0	
	
	// Datamap fields:
	// void m_pKeyValuesCopy; // 0x530
};


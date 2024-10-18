#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7d0
// Has VTable
class CMarkupVolumeTagged : public CMarkupVolume
{
private:
	[[maybe_unused]] uint8_t __pad0798[0x30]; // 0x798
public:
	bool m_bIsGroup; // 0x7c8	
	bool m_bGroupByPrefab; // 0x7c9	
	bool m_bGroupByVolume; // 0x7ca	
	bool m_bGroupOtherGroups; // 0x7cb	
	bool m_bIsInGroup; // 0x7cc	
	
	// Datamap fields:
	// void m_GroupNames; // 0x798
	// void m_Tags; // 0x7b0
};


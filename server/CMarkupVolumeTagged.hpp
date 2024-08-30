#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7a8
// Has VTable
class CMarkupVolumeTagged : public CMarkupVolume
{
private:
	[[maybe_unused]] uint8_t __pad0770[0x30]; // 0x770
public:
	bool m_bIsGroup; // 0x7a0	
	bool m_bGroupByPrefab; // 0x7a1	
	bool m_bGroupByVolume; // 0x7a2	
	bool m_bGroupOtherGroups; // 0x7a3	
	bool m_bIsInGroup; // 0x7a4	
	
	// Datamap fields:
	// void m_GroupNames; // 0x770
	// void m_Tags; // 0x788
};


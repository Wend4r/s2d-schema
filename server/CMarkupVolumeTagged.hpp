#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x790
// Has VTable
class CMarkupVolumeTagged : public CMarkupVolume
{
private:
	[[maybe_unused]] uint8_t __pad0758[0x30]; // 0x758
public:
	bool m_bIsGroup; // 0x788	
	bool m_bGroupByPrefab; // 0x789	
	bool m_bGroupByVolume; // 0x78a	
	bool m_bGroupOtherGroups; // 0x78b	
	bool m_bIsInGroup; // 0x78c	
	
	// Datamap fields:
	// void m_GroupNames; // 0x758
	// void m_Tags; // 0x770
};


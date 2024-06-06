#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x750
// Has VTable
class CMarkupVolumeTagged : public CMarkupVolume
{
private:
	[[maybe_unused]] uint8_t __pad0718[0x30]; // 0x718
public:
	bool m_bIsGroup; // 0x748	
	bool m_bGroupByPrefab; // 0x749	
	bool m_bGroupByVolume; // 0x74a	
	bool m_bGroupOtherGroups; // 0x74b	
	bool m_bIsInGroup; // 0x74c	
	
	// Datamap fields:
	// void m_GroupNames; // 0x718
	// void m_Tags; // 0x730
};


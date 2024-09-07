#pragma once

#include <cstdint>

struct HSequence;
struct GameTime_t;
struct SceneEventId_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has Trivial Destructor
class CSceneEventInfo
{
public:
	int32_t m_iLayer; // 0x0	
	int32_t m_iPriority; // 0x4	
	HSequence m_hSequence; // 0x8	
	float m_flWeight; // 0xc	
	bool m_bHasArrived; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	int32_t m_nType; // 0x14	
	GameTime_t m_flNext; // 0x18	
	bool m_bIsGesture; // 0x1c	
	bool m_bShouldRemove; // 0x1d	
private:
	[[maybe_unused]] uint8_t __pad001e[0x26]; // 0x1e
public:
	CHandle< CBaseEntity > m_hTarget; // 0x44	
	SceneEventId_t m_nSceneEventId; // 0x48	
	bool m_bClientSide; // 0x4c	
	bool m_bStarted; // 0x4d	
};


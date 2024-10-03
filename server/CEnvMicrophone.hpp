#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6a0
// Has VTable
class CEnvMicrophone : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x3]; // 0x4e1
public:
	CHandle< CBaseEntity > m_hMeasureTarget; // 0x4e4	
	SoundTypes_t m_nSoundType; // 0x4e8	
	SoundFlags_t m_nSoundFlags; // 0x4ea	
	float m_flSensitivity; // 0x4ec	
	float m_flSmoothFactor; // 0x4f0	
	float m_flMaxRange; // 0x4f4	
	CUtlSymbolLarge m_iszSpeakerName; // 0x4f8	
	CHandle< CBaseEntity > m_hSpeaker; // 0x500	
	bool m_bAvoidFeedback; // 0x504	
private:
	[[maybe_unused]] uint8_t __pad0505[0x3]; // 0x505
public:
	int32_t m_iSpeakerDSPPreset; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad050c[0x4]; // 0x50c
public:
	CUtlSymbolLarge m_iszListenFilter; // 0x510	
	CHandle< CBaseFilter > m_hListenFilter; // 0x518	
private:
	[[maybe_unused]] uint8_t __pad051c[0x4]; // 0x51c
public:
	CEntityOutputTemplate< float32 > m_SoundLevel; // 0x520	
	CEntityIOOutput m_OnRoutedSound; // 0x548	
	CEntityIOOutput m_OnHeardSound; // 0x570	
	char m_szLastSound[256]; // 0x598	
	int32_t m_iLastRoutedFrame; // 0x698	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CUtlSymbolLarge InputSetSpeakerName; // 0x0
};


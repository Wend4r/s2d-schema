#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x680
// Has VTable
class CEnvMicrophone : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	CHandle< CBaseEntity > m_hMeasureTarget; // 0x4c4	
	SoundTypes_t m_nSoundType; // 0x4c8	
	SoundFlags_t m_nSoundFlags; // 0x4ca	
	float m_flSensitivity; // 0x4cc	
	float m_flSmoothFactor; // 0x4d0	
	float m_flMaxRange; // 0x4d4	
	CUtlSymbolLarge m_iszSpeakerName; // 0x4d8	
	CHandle< CBaseEntity > m_hSpeaker; // 0x4e0	
	bool m_bAvoidFeedback; // 0x4e4	
private:
	[[maybe_unused]] uint8_t __pad04e5[0x3]; // 0x4e5
public:
	int32_t m_iSpeakerDSPPreset; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	CUtlSymbolLarge m_iszListenFilter; // 0x4f0	
	CHandle< CBaseFilter > m_hListenFilter; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04fc[0x4]; // 0x4fc
public:
	CEntityOutputTemplate< float32 > m_SoundLevel; // 0x500	
	CEntityIOOutput m_OnRoutedSound; // 0x528	
	CEntityIOOutput m_OnHeardSound; // 0x550	
	char m_szLastSound[256]; // 0x578	
	int32_t m_iLastRoutedFrame; // 0x678	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CUtlSymbolLarge InputSetSpeakerName; // 0x0
};


#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x678
// Has VTable
class CEnvMicrophone : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04b9[0x3]; // 0x4b9
public:
	CHandle< CBaseEntity > m_hMeasureTarget; // 0x4bc	
	SoundTypes_t m_nSoundType; // 0x4c0	
	SoundFlags_t m_nSoundFlags; // 0x4c2	
	float m_flSensitivity; // 0x4c4	
	float m_flSmoothFactor; // 0x4c8	
	float m_flMaxRange; // 0x4cc	
	CUtlSymbolLarge m_iszSpeakerName; // 0x4d0	
	CHandle< CBaseEntity > m_hSpeaker; // 0x4d8	
	bool m_bAvoidFeedback; // 0x4dc	
private:
	[[maybe_unused]] uint8_t __pad04dd[0x3]; // 0x4dd
public:
	int32_t m_iSpeakerDSPPreset; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e4[0x4]; // 0x4e4
public:
	CUtlSymbolLarge m_iszListenFilter; // 0x4e8	
	CHandle< CBaseFilter > m_hListenFilter; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f4[0x4]; // 0x4f4
public:
	CEntityOutputTemplate< float32 > m_SoundLevel; // 0x4f8	
	CEntityIOOutput m_OnRoutedSound; // 0x520	
	CEntityIOOutput m_OnHeardSound; // 0x548	
	char m_szLastSound[256]; // 0x570	
	int32_t m_iLastRoutedFrame; // 0x670	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// CUtlSymbolLarge InputSetSpeakerName; // 0x0
};


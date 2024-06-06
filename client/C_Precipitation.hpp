#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd20
// Has VTable
class C_Precipitation : public C_BaseTrigger
{
public:
	float m_flDensity; // 0xcd0	
private:
	[[maybe_unused]] uint8_t __pad0cd4[0xc]; // 0xcd4
public:
	float m_flParticleInnerDist; // 0xce0	
private:
	[[maybe_unused]] uint8_t __pad0ce4[0x4]; // 0xce4
public:
	char* m_pParticleDef; // 0xce8	
private:
	[[maybe_unused]] uint8_t __pad0cf0[0x20]; // 0xcf0
public:
	TimedEvent m_tParticlePrecipTraceTimer[1]; // 0xd10	
	bool m_bActiveParticlePrecipEmitter[1]; // 0xd18	
	bool m_bParticlePrecipInitialized; // 0xd19	
	bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0xd1a	
private:
	[[maybe_unused]] uint8_t __pad0d1b[0x1]; // 0xd1b
public:
	int32_t m_nAvailableSheetSequencesMaxIndex; // 0xd1c	
};


#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x998
// Has VTable
class C_Precipitation : public C_BaseTrigger
{
public:
	float m_flDensity; // 0x948	
private:
	[[maybe_unused]] uint8_t __pad094c[0xc]; // 0x94c
public:
	float m_flParticleInnerDist; // 0x958	
private:
	[[maybe_unused]] uint8_t __pad095c[0x4]; // 0x95c
public:
	char* m_pParticleDef; // 0x960	
private:
	[[maybe_unused]] uint8_t __pad0968[0x20]; // 0x968
public:
	TimedEvent m_tParticlePrecipTraceTimer[1]; // 0x988	
	bool m_bActiveParticlePrecipEmitter[1]; // 0x990	
	bool m_bParticlePrecipInitialized; // 0x991	
	bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0x992	
private:
	[[maybe_unused]] uint8_t __pad0993[0x1]; // 0x993
public:
	int32_t m_nAvailableSheetSequencesMaxIndex; // 0x994	
};


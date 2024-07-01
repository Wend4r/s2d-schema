#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x868
// Has VTable
class C_Precipitation : public C_BaseTrigger
{
public:
	float m_flDensity; // 0x818	
private:
	[[maybe_unused]] uint8_t __pad081c[0xc]; // 0x81c
public:
	float m_flParticleInnerDist; // 0x828	
private:
	[[maybe_unused]] uint8_t __pad082c[0x4]; // 0x82c
public:
	char* m_pParticleDef; // 0x830	
private:
	[[maybe_unused]] uint8_t __pad0838[0x20]; // 0x838
public:
	TimedEvent m_tParticlePrecipTraceTimer[1]; // 0x858	
	bool m_bActiveParticlePrecipEmitter[1]; // 0x860	
	bool m_bParticlePrecipInitialized; // 0x861	
	bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0x862	
private:
	[[maybe_unused]] uint8_t __pad0863[0x1]; // 0x863
public:
	int32_t m_nAvailableSheetSequencesMaxIndex; // 0x864	
};


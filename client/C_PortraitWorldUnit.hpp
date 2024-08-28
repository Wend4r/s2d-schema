#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct HeroID_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe90
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
class C_PortraitWorldUnit : public C_BaseCombatCharacter
{
public:
	bool m_bSuppressIntroEffects; // 0xc90	
	bool m_bIsAlternateLoadout; // 0xc91	
	bool m_bSpawnBackgroundModels; // 0xc92	
	bool m_bDeferredPortrait; // 0xc93	
	bool m_bShowParticleAssetModifiers; // 0xc94	
	bool m_bIgnorePortraitInfo; // 0xc95	
	bool m_bFlyingCourier; // 0xc96	
private:
	[[maybe_unused]] uint8_t __pad0c97[0x1]; // 0xc97
public:
	int32_t m_nEffigyStatusEffect; // 0xc98	
private:
	[[maybe_unused]] uint8_t __pad0c9c[0x4]; // 0xc9c
public:
	CUtlSymbolLarge m_effigySequenceName; // 0xca0	
	float m_flStartingAnimationCycle; // 0xca8	
	float m_flRareLoadoutAnimChance; // 0xcac	
private:
	[[maybe_unused]] uint8_t __pad0cb0[0x10]; // 0xcb0
public:
	CitadelPortraitEnvironmentType_t m_environment; // 0xcc0	
	StartupBehavior_t m_nStartupBehavior; // 0xcc4	
private:
	[[maybe_unused]] uint8_t __pad0cc8[0x170]; // 0xcc8
public:
	CUtlSymbolLarge m_cameraName; // 0xe38	
private:
	[[maybe_unused]] uint8_t __pad0e40[0x30]; // 0xe40
public:
	ParticleIndex_t m_nPortraitParticle; // 0xe70	
	ParticleIndex_t m_nAmbientParticle; // 0xe74	
	int32_t m_nCourierType; // 0xe78	
	HeroID_t m_heroID; // 0xe7c	
	CUtlSymbolLarge m_heroAnimGraphEnumName; // 0xe80	
	CUtlSymbolLarge m_heroShopAnimGraphEnumName; // 0xe88	
	
	// Datamap fields:
	// uint32_t heroid; // 0x7fffffff
	// bool skip_pet_spawn; // 0x7fffffff
	// int32_t model_index; // 0x7fffffff
	// bool StartDisabled; // 0x7fffffff
};


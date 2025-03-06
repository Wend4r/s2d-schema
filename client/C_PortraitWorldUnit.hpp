#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct HeroID_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf28
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
class C_PortraitWorldUnit : public C_BaseCombatCharacter
{
public:
	bool m_bSuppressIntroEffects; // 0xd20	
	bool m_bIsAlternateLoadout; // 0xd21	
	bool m_bSpawnBackgroundModels; // 0xd22	
	bool m_bDeferredPortrait; // 0xd23	
	bool m_bShowParticleAssetModifiers; // 0xd24	
	bool m_bIgnorePortraitInfo; // 0xd25	
	bool m_bFlyingCourier; // 0xd26	
private:
	[[maybe_unused]] uint8_t __pad0d27[0x1]; // 0xd27
public:
	int32_t m_nEffigyStatusEffect; // 0xd28	
private:
	[[maybe_unused]] uint8_t __pad0d2c[0x4]; // 0xd2c
public:
	CUtlSymbolLarge m_effigySequenceName; // 0xd30	
	CUtlSymbolLarge m_BodyGroup; // 0xd38	
	float m_flStartingAnimationCycle; // 0xd40	
	float m_flRareLoadoutAnimChance; // 0xd44	
private:
	[[maybe_unused]] uint8_t __pad0d48[0x10]; // 0xd48
public:
	CitadelPortraitEnvironmentType_t m_environment; // 0xd58	
	StartupBehavior_t m_nStartupBehavior; // 0xd5c	
private:
	[[maybe_unused]] uint8_t __pad0d60[0x170]; // 0xd60
public:
	CUtlSymbolLarge m_cameraName; // 0xed0	
private:
	[[maybe_unused]] uint8_t __pad0ed8[0x30]; // 0xed8
public:
	ParticleIndex_t m_nPortraitParticle; // 0xf08	
	ParticleIndex_t m_nAmbientParticle; // 0xf0c	
	int32_t m_nCourierType; // 0xf10	
	HeroID_t m_heroID; // 0xf14	
	CUtlSymbolLarge m_heroAnimGraphEnumName; // 0xf18	
	CUtlSymbolLarge m_heroShopAnimGraphEnumName; // 0xf20	
	
	// Datamap fields:
	// uint32_t heroid; // 0x7fffffff
	// bool skip_pet_spawn; // 0x7fffffff
	// int32_t model_index; // 0x7fffffff
	// bool StartDisabled; // 0x7fffffff
};


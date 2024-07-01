#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8a0
// Has VTable
class CFuncShatterglass : public CBaseModelEntity
{
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hGlassMaterialDamaged; // 0x748	
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hGlassMaterialUndamaged; // 0x750	
	matrix3x4_t m_matPanelTransform; // 0x758	
	matrix3x4_t m_matPanelTransformWsTemp; // 0x788	
	CUtlVector< uint32 > m_vecShatterGlassShards; // 0x7b8	
	Vector2D m_PanelSize; // 0x7d0	
	Vector m_vecPanelNormalWs; // 0x7d8	
	int32_t m_nNumShardsEverCreated; // 0x7e4	
	GameTime_t m_flLastShatterSoundEmitTime; // 0x7e8	
	GameTime_t m_flLastCleanupTime; // 0x7ec	
	GameTime_t m_flInitAtTime; // 0x7f0	
	float m_flGlassThickness; // 0x7f4	
	float m_flSpawnInvulnerability; // 0x7f8	
	bool m_bBreakSilent; // 0x7fc	
	bool m_bBreakShardless; // 0x7fd	
	bool m_bBroken; // 0x7fe	
	bool m_bHasRateLimitedShards; // 0x7ff	
	bool m_bGlassNavIgnore; // 0x800	
	bool m_bGlassInFrame; // 0x801	
	bool m_bStartBroken; // 0x802	
	uint8_t m_iInitialDamageType; // 0x803	
private:
	[[maybe_unused]] uint8_t __pad0804[0x4]; // 0x804
public:
	CUtlSymbolLarge m_szDamagePositioningEntityName01; // 0x808	
	CUtlSymbolLarge m_szDamagePositioningEntityName02; // 0x810	
	CUtlSymbolLarge m_szDamagePositioningEntityName03; // 0x818	
	CUtlSymbolLarge m_szDamagePositioningEntityName04; // 0x820	
	CUtlVector< Vector > m_vInitialDamagePositions; // 0x828	
	CUtlVector< Vector > m_vExtraDamagePositions; // 0x840	
	CUtlVector< Vector2D > m_vInitialPanelVertices; // 0x858	
	CEntityIOOutput m_OnBroken; // 0x870	
	uint8_t m_iSurfaceType; // 0x898	
	
	// Datamap fields:
	// void CFuncShatterglassGlassThink; // 0x0
	// void InputHit; // 0x0
	// void InputShatter; // 0x0
	// void InputRestore; // 0x0
};


#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x888
// Has VTable
class CFuncShatterglass : public CBaseModelEntity
{
public:
	matrix3x4_t m_matPanelTransform; // 0x748	
	matrix3x4_t m_matPanelTransformWsTemp; // 0x778	
	CUtlVector< uint32 > m_vecShatterGlassShards; // 0x7a8	
	Vector2D m_PanelSize; // 0x7c0	
	GameTime_t m_flLastShatterSoundEmitTime; // 0x7c8	
	GameTime_t m_flLastCleanupTime; // 0x7cc	
	GameTime_t m_flInitAtTime; // 0x7d0	
	float m_flGlassThickness; // 0x7d4	
	float m_flSpawnInvulnerability; // 0x7d8	
	bool m_bBreakSilent; // 0x7dc	
	bool m_bBreakShardless; // 0x7dd	
	bool m_bBroken; // 0x7de	
	bool m_bGlassNavIgnore; // 0x7df	
	bool m_bGlassInFrame; // 0x7e0	
	bool m_bStartBroken; // 0x7e1	
	uint8_t m_iInitialDamageType; // 0x7e2	
private:
	[[maybe_unused]] uint8_t __pad07e3[0x5]; // 0x7e3
public:
	CUtlSymbolLarge m_szDamagePositioningEntityName01; // 0x7e8	
	CUtlSymbolLarge m_szDamagePositioningEntityName02; // 0x7f0	
	CUtlSymbolLarge m_szDamagePositioningEntityName03; // 0x7f8	
	CUtlSymbolLarge m_szDamagePositioningEntityName04; // 0x800	
	CUtlVector< Vector > m_vInitialDamagePositions; // 0x808	
	CUtlVector< Vector > m_vExtraDamagePositions; // 0x820	
	CUtlVector< Vector4D > m_vInitialPanelVertices; // 0x838	
	CEntityIOOutput m_OnBroken; // 0x850	
	uint8_t m_iSurfaceType; // 0x878	
private:
	[[maybe_unused]] uint8_t __pad0879[0x7]; // 0x879
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialDamageBase; // 0x880	
	
	// Datamap fields:
	// void CFuncShatterglassGlassThink; // 0x0
	// void InputHit; // 0x0
	// void InputShatter; // 0x0
	// void InputRestore; // 0x0
};


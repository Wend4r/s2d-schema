#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8d0
// Has VTable
class CFuncShatterglass : public CBaseModelEntity
{
public:
	matrix3x4_t m_matPanelTransform; // 0x790	
	matrix3x4_t m_matPanelTransformWsTemp; // 0x7c0	
	CUtlVector< uint32 > m_vecShatterGlassShards; // 0x7f0	
	Vector2D m_PanelSize; // 0x808	
	GameTime_t m_flLastShatterSoundEmitTime; // 0x810	
	GameTime_t m_flLastCleanupTime; // 0x814	
	GameTime_t m_flInitAtTime; // 0x818	
	float m_flGlassThickness; // 0x81c	
	float m_flSpawnInvulnerability; // 0x820	
	bool m_bBreakSilent; // 0x824	
	bool m_bBreakShardless; // 0x825	
	bool m_bBroken; // 0x826	
	bool m_bGlassNavIgnore; // 0x827	
	bool m_bGlassInFrame; // 0x828	
	bool m_bStartBroken; // 0x829	
	uint8_t m_iInitialDamageType; // 0x82a	
private:
	[[maybe_unused]] uint8_t __pad082b[0x5]; // 0x82b
public:
	CUtlSymbolLarge m_szDamagePositioningEntityName01; // 0x830	
	CUtlSymbolLarge m_szDamagePositioningEntityName02; // 0x838	
	CUtlSymbolLarge m_szDamagePositioningEntityName03; // 0x840	
	CUtlSymbolLarge m_szDamagePositioningEntityName04; // 0x848	
	CUtlVector< Vector > m_vInitialDamagePositions; // 0x850	
	CUtlVector< Vector > m_vExtraDamagePositions; // 0x868	
	CUtlVector< Vector4D > m_vInitialPanelVertices; // 0x880	
	CEntityIOOutput m_OnBroken; // 0x898	
	uint8_t m_iSurfaceType; // 0x8c0	
private:
	[[maybe_unused]] uint8_t __pad08c1[0x7]; // 0x8c1
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialDamageBase; // 0x8c8	
	
	// Datamap fields:
	// void CFuncShatterglassGlassThink; // 0x0
	// void InputHit; // 0x0
	// void InputShatter; // 0x0
	// void InputRestore; // 0x0
};


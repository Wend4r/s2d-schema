#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x890
// Has VTable
class CFuncShatterglass : public CBaseModelEntity
{
public:
	matrix3x4_t m_matPanelTransform; // 0x750	
	matrix3x4_t m_matPanelTransformWsTemp; // 0x780	
	CUtlVector< uint32 > m_vecShatterGlassShards; // 0x7b0	
	Vector2D m_PanelSize; // 0x7c8	
	GameTime_t m_flLastShatterSoundEmitTime; // 0x7d0	
	GameTime_t m_flLastCleanupTime; // 0x7d4	
	GameTime_t m_flInitAtTime; // 0x7d8	
	float m_flGlassThickness; // 0x7dc	
	float m_flSpawnInvulnerability; // 0x7e0	
	bool m_bBreakSilent; // 0x7e4	
	bool m_bBreakShardless; // 0x7e5	
	bool m_bBroken; // 0x7e6	
	bool m_bGlassNavIgnore; // 0x7e7	
	bool m_bGlassInFrame; // 0x7e8	
	bool m_bStartBroken; // 0x7e9	
	uint8_t m_iInitialDamageType; // 0x7ea	
private:
	[[maybe_unused]] uint8_t __pad07eb[0x5]; // 0x7eb
public:
	CUtlSymbolLarge m_szDamagePositioningEntityName01; // 0x7f0	
	CUtlSymbolLarge m_szDamagePositioningEntityName02; // 0x7f8	
	CUtlSymbolLarge m_szDamagePositioningEntityName03; // 0x800	
	CUtlSymbolLarge m_szDamagePositioningEntityName04; // 0x808	
	CUtlVector< Vector > m_vInitialDamagePositions; // 0x810	
	CUtlVector< Vector > m_vExtraDamagePositions; // 0x828	
	CUtlVector< Vector4D > m_vInitialPanelVertices; // 0x840	
	CEntityIOOutput m_OnBroken; // 0x858	
	uint8_t m_iSurfaceType; // 0x880	
private:
	[[maybe_unused]] uint8_t __pad0881[0x7]; // 0x881
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialDamageBase; // 0x888	
	
	// Datamap fields:
	// void CFuncShatterglassGlassThink; // 0x0
	// void InputHit; // 0x0
	// void InputShatter; // 0x0
	// void InputRestore; // 0x0
};


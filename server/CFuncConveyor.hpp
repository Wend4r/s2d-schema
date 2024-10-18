#pragma once

#include <cstdint>

struct GameTick_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7e0
// Has VTable
// 
// MNetworkIncludeByName "m_fFlags"
// MNetworkOverride "m_fFlags CBaseEntity"
// MNetworkOverride "m_vecX CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_vecY CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_vecZ CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_angRotation CGameSceneNode"
// MNetworkVarNames "Vector m_vecMoveDirEntitySpace"
// MNetworkVarNames "float32 m_flTargetSpeed"
// MNetworkVarNames "GameTick_t m_nTransitionStartTick"
// MNetworkVarNames "int m_nTransitionDurationTicks"
// MNetworkVarNames "float32 m_flTransitionStartSpeed"
// MNetworkVarNames "EHANDLE m_hConveyorModels"
class CFuncConveyor : public CBaseModelEntity
{
public:
	CUtlSymbolLarge m_szConveyorModels; // 0x790	
	float m_flTransitionDurationSeconds; // 0x798	
	QAngle m_angMoveEntitySpace; // 0x79c	
	// MNetworkEnable
	Vector m_vecMoveDirEntitySpace; // 0x7a8	
	// MNetworkEnable
	float m_flTargetSpeed; // 0x7b4	
	// MNetworkEnable
	GameTick_t m_nTransitionStartTick; // 0x7b8	
	// MNetworkEnable
	int32_t m_nTransitionDurationTicks; // 0x7bc	
	// MNetworkEnable
	float m_flTransitionStartSpeed; // 0x7c0	
private:
	[[maybe_unused]] uint8_t __pad07c4[0x4]; // 0x7c4
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hConveyorModels; // 0x7c8	
	
	// Datamap fields:
	// void InputToggleDirection; // 0x0
	// float InputSetSpeed; // 0x0
	// float InputSetTransitionDuration; // 0x0
};


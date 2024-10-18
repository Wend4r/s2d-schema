#pragma once

#include <cstdint>

struct GameTick_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd70
// Has VTable
// 
// MNetworkIncludeByName "m_fFlags"
// MNetworkOverride "m_fFlags C_BaseEntity"
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
class C_FuncConveyor : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0d28[0x8]; // 0xd28
public:
	// MNetworkEnable
	Vector m_vecMoveDirEntitySpace; // 0xd30	
	// MNetworkEnable
	float m_flTargetSpeed; // 0xd3c	
	// MNetworkEnable
	GameTick_t m_nTransitionStartTick; // 0xd40	
	// MNetworkEnable
	int32_t m_nTransitionDurationTicks; // 0xd44	
	// MNetworkEnable
	float m_flTransitionStartSpeed; // 0xd48	
private:
	[[maybe_unused]] uint8_t __pad0d4c[0x4]; // 0xd4c
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hConveyorModels; // 0xd50	
	float m_flCurrentConveyorOffset; // 0xd68	
	float m_flCurrentConveyorSpeed; // 0xd6c	
};


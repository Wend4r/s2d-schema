#pragma once

#include <cstdint>

struct GameTick_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd10
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
	[[maybe_unused]] uint8_t __pad0cc8[0x8]; // 0xcc8
public:
	// MNetworkEnable
	Vector m_vecMoveDirEntitySpace; // 0xcd0	
	// MNetworkEnable
	float m_flTargetSpeed; // 0xcdc	
	// MNetworkEnable
	GameTick_t m_nTransitionStartTick; // 0xce0	
	// MNetworkEnable
	int32_t m_nTransitionDurationTicks; // 0xce4	
	// MNetworkEnable
	float m_flTransitionStartSpeed; // 0xce8	
private:
	[[maybe_unused]] uint8_t __pad0cec[0x4]; // 0xcec
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hConveyorModels; // 0xcf0	
	float m_flCurrentConveyorOffset; // 0xd08	
	float m_flCurrentConveyorSpeed; // 0xd0c	
};


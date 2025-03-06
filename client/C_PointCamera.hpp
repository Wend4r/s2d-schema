#pragma once

#include <cstdint>

struct C_PointCamera;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x570
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "float m_FOV"
// MNetworkVarNames "float m_Resolution"
// MNetworkVarNames "bool m_bFogEnable"
// MNetworkVarNames "Color m_FogColor"
// MNetworkVarNames "float m_flFogStart"
// MNetworkVarNames "float m_flFogEnd"
// MNetworkVarNames "float m_flFogMaxDensity"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "bool m_bUseScreenAspectRatio"
// MNetworkVarNames "float m_flAspectRatio"
// MNetworkVarNames "bool m_bNoSky"
// MNetworkVarNames "float m_fBrightness"
// MNetworkVarNames "float m_flZFar"
// MNetworkVarNames "float m_flZNear"
// MNetworkVarNames "bool m_bCanHLTVUse"
// MNetworkVarNames "bool m_bAlignWithParent"
// MNetworkVarNames "bool m_bDofEnabled"
// MNetworkVarNames "float m_flDofNearBlurry"
// MNetworkVarNames "float m_flDofNearCrisp"
// MNetworkVarNames "float m_flDofFarCrisp"
// MNetworkVarNames "float m_flDofFarBlurry"
// MNetworkVarNames "float m_flDofTiltToGround"
class C_PointCamera : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_FOV; // 0x510	
	// MNetworkEnable
	float m_Resolution; // 0x514	
	// MNetworkEnable
	bool m_bFogEnable; // 0x518	
	// MNetworkEnable
	Color m_FogColor; // 0x519	
private:
	[[maybe_unused]] uint8_t __pad051d[0x3]; // 0x51d
public:
	// MNetworkEnable
	float m_flFogStart; // 0x520	
	// MNetworkEnable
	float m_flFogEnd; // 0x524	
	// MNetworkEnable
	float m_flFogMaxDensity; // 0x528	
	// MNetworkEnable
	bool m_bActive; // 0x52c	
	// MNetworkEnable
	bool m_bUseScreenAspectRatio; // 0x52d	
private:
	[[maybe_unused]] uint8_t __pad052e[0x2]; // 0x52e
public:
	// MNetworkEnable
	float m_flAspectRatio; // 0x530	
	// MNetworkEnable
	bool m_bNoSky; // 0x534	
private:
	[[maybe_unused]] uint8_t __pad0535[0x3]; // 0x535
public:
	// MNetworkEnable
	float m_fBrightness; // 0x538	
	// MNetworkEnable
	float m_flZFar; // 0x53c	
	// MNetworkEnable
	float m_flZNear; // 0x540	
	// MNetworkEnable
	bool m_bCanHLTVUse; // 0x544	
	// MNetworkEnable
	bool m_bAlignWithParent; // 0x545	
	// MNetworkEnable
	bool m_bDofEnabled; // 0x546	
private:
	[[maybe_unused]] uint8_t __pad0547[0x1]; // 0x547
public:
	// MNetworkEnable
	float m_flDofNearBlurry; // 0x548	
	// MNetworkEnable
	float m_flDofNearCrisp; // 0x54c	
	// MNetworkEnable
	float m_flDofFarCrisp; // 0x550	
	// MNetworkEnable
	float m_flDofFarBlurry; // 0x554	
	// MNetworkEnable
	float m_flDofTiltToGround; // 0x558	
	float m_TargetFOV; // 0x55c	
	float m_DegreesPerSecond; // 0x560	
	bool m_bIsOn; // 0x564	
private:
	[[maybe_unused]] uint8_t __pad0565[0x3]; // 0x565
public:
	C_PointCamera* m_pNext; // 0x568	
	
	// Datamap fields:
	// CUtlSymbolLarge InputChangeFOV; // 0x0
	// void InputSetOnAndTurnOthersOff; // 0x0
	// void InputSetOn; // 0x0
	// void InputSetOff; // 0x0
	// void InputForceActive; // 0x0
	// void InputForceInactive; // 0x0
	// void InputEnableDOF; // 0x0
	// void InputDisableDOF; // 0x0
	// float InputSetDOFNearBlurry; // 0x0
	// float InputSetDOFNearCrisp; // 0x0
	// float InputSetDOFFarCrisp; // 0x0
	// float InputSetDOFFarBlurry; // 0x0
	// float InputSetDOFTiltToGround; // 0x0
};


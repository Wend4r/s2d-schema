#pragma once

#include <cstdint>

struct C_PointCamera;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5c8
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
	float m_FOV; // 0x568	
	// MNetworkEnable
	float m_Resolution; // 0x56c	
	// MNetworkEnable
	bool m_bFogEnable; // 0x570	
	// MNetworkEnable
	Color m_FogColor; // 0x571	
private:
	[[maybe_unused]] uint8_t __pad0575[0x3]; // 0x575
public:
	// MNetworkEnable
	float m_flFogStart; // 0x578	
	// MNetworkEnable
	float m_flFogEnd; // 0x57c	
	// MNetworkEnable
	float m_flFogMaxDensity; // 0x580	
	// MNetworkEnable
	bool m_bActive; // 0x584	
	// MNetworkEnable
	bool m_bUseScreenAspectRatio; // 0x585	
private:
	[[maybe_unused]] uint8_t __pad0586[0x2]; // 0x586
public:
	// MNetworkEnable
	float m_flAspectRatio; // 0x588	
	// MNetworkEnable
	bool m_bNoSky; // 0x58c	
private:
	[[maybe_unused]] uint8_t __pad058d[0x3]; // 0x58d
public:
	// MNetworkEnable
	float m_fBrightness; // 0x590	
	// MNetworkEnable
	float m_flZFar; // 0x594	
	// MNetworkEnable
	float m_flZNear; // 0x598	
	// MNetworkEnable
	bool m_bCanHLTVUse; // 0x59c	
	// MNetworkEnable
	bool m_bAlignWithParent; // 0x59d	
	// MNetworkEnable
	bool m_bDofEnabled; // 0x59e	
private:
	[[maybe_unused]] uint8_t __pad059f[0x1]; // 0x59f
public:
	// MNetworkEnable
	float m_flDofNearBlurry; // 0x5a0	
	// MNetworkEnable
	float m_flDofNearCrisp; // 0x5a4	
	// MNetworkEnable
	float m_flDofFarCrisp; // 0x5a8	
	// MNetworkEnable
	float m_flDofFarBlurry; // 0x5ac	
	// MNetworkEnable
	float m_flDofTiltToGround; // 0x5b0	
	float m_TargetFOV; // 0x5b4	
	float m_DegreesPerSecond; // 0x5b8	
	bool m_bIsOn; // 0x5bc	
private:
	[[maybe_unused]] uint8_t __pad05bd[0x3]; // 0x5bd
public:
	C_PointCamera* m_pNext; // 0x5c0	
	
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


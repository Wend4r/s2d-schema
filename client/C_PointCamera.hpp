#pragma once

#include <cstdint>

struct C_PointCamera;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x598
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
	float m_FOV; // 0x538	
	// MNetworkEnable
	float m_Resolution; // 0x53c	
	// MNetworkEnable
	bool m_bFogEnable; // 0x540	
	// MNetworkEnable
	Color m_FogColor; // 0x541	
private:
	[[maybe_unused]] uint8_t __pad0545[0x3]; // 0x545
public:
	// MNetworkEnable
	float m_flFogStart; // 0x548	
	// MNetworkEnable
	float m_flFogEnd; // 0x54c	
	// MNetworkEnable
	float m_flFogMaxDensity; // 0x550	
	// MNetworkEnable
	bool m_bActive; // 0x554	
	// MNetworkEnable
	bool m_bUseScreenAspectRatio; // 0x555	
private:
	[[maybe_unused]] uint8_t __pad0556[0x2]; // 0x556
public:
	// MNetworkEnable
	float m_flAspectRatio; // 0x558	
	// MNetworkEnable
	bool m_bNoSky; // 0x55c	
private:
	[[maybe_unused]] uint8_t __pad055d[0x3]; // 0x55d
public:
	// MNetworkEnable
	float m_fBrightness; // 0x560	
	// MNetworkEnable
	float m_flZFar; // 0x564	
	// MNetworkEnable
	float m_flZNear; // 0x568	
	// MNetworkEnable
	bool m_bCanHLTVUse; // 0x56c	
	// MNetworkEnable
	bool m_bDofEnabled; // 0x56d	
private:
	[[maybe_unused]] uint8_t __pad056e[0x2]; // 0x56e
public:
	// MNetworkEnable
	float m_flDofNearBlurry; // 0x570	
	// MNetworkEnable
	float m_flDofNearCrisp; // 0x574	
	// MNetworkEnable
	float m_flDofFarCrisp; // 0x578	
	// MNetworkEnable
	float m_flDofFarBlurry; // 0x57c	
	// MNetworkEnable
	float m_flDofTiltToGround; // 0x580	
	float m_TargetFOV; // 0x584	
	float m_DegreesPerSecond; // 0x588	
	bool m_bIsOn; // 0x58c	
private:
	[[maybe_unused]] uint8_t __pad058d[0x3]; // 0x58d
public:
	C_PointCamera* m_pNext; // 0x590	
	
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


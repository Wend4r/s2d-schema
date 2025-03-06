#pragma once

#include <cstdint>

struct CNetworkVarChainer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb8
// Has VTable
class CRenderComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
public:
	CNetworkVarChainer __m_pChainEntity; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0038[0x18]; // 0x38
public:
	bool m_bIsRenderingWithViewModels; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0051[0x3]; // 0x51
public:
	uint32_t m_nSplitscreenFlags; // 0x54	
private:
	[[maybe_unused]] uint8_t __pad0058[0x8]; // 0x58
public:
	bool m_bEnableRendering; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0061[0x4f]; // 0x61
public:
	bool m_bInterpolationReadyToDraw; // 0xb0	
};


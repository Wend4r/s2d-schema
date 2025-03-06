#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2e0
// Has VTable
class CCitadelPlayerPawn_GraphController2 : public CAnimGraphControllerBase
{
private:
	[[maybe_unused]] uint8_t __pad0080[0x30]; // 0x80
public:
	CAnimGraph2ParamRef< float32 > m_flForwardSpeed; // 0xb0	
	CAnimGraph2ParamRef< float32 > m_flLookHeading; // 0xc8	
	CAnimGraph2ParamRef< float32 > m_flLookPitch; // 0xe0	
	CAnimGraph2ParamRef< float32 > m_flMoveSpeed; // 0xf8	
	CAnimGraph2ParamRef< float32 > m_flStrafeSpeed; // 0x110	
	CAnimGraph2ParamRef< float32 > m_flVerticalSpeed; // 0x128	
	CAnimGraph2ParamOptionalRef< Vector > m_vLocomotionFacing; // 0x140	
	CAnimGraph2ParamOptionalRef< Vector > m_vLookTarget; // 0x158	
	CAnimGraph2ParamRef< CGlobalSymbol > m_HeroActionSource; // 0x170	
	CAnimGraph2ParamRef< CGlobalSymbol > m_HeroAction; // 0x190	
	CAnimGraph2ParamRef< CGlobalSymbol > m_HeroState; // 0x1b0	
	CAnimGraph2ParamRef< CGlobalSymbol > m_BaseAction; // 0x1d0	
	CAnimGraph2ParamRef< CGlobalSymbol > m_BaseState; // 0x1f0	
	CAnimGraph2ParamRef< CGlobalSymbol > m_FlinchType; // 0x210	
	CAnimGraph2ParamRef< float32 > m_CrouchFraction; // 0x230	
	CAnimGraph2ParamRef< CGlobalSymbol > m_MoveType; // 0x248	
	CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_CornerLean; // 0x268	
private:
	[[maybe_unused]] uint8_t __pad0288[0x28]; // 0x288
public:
	bool m_bInGraphParamUpdateFlow; // 0x2b0	
};


#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf98
// Has VTable
class C_ViewmodelAttachmentModel : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0f88[0x8]; // 0xf88
public:
	bool m_bShouldFrontFaceCullLeftHanded; // 0xf90	
	bool m_bCreatedLeftHanded; // 0xf91	
};


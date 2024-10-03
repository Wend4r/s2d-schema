#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf90
// Has VTable
class C_ViewmodelAttachmentModel : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0f80[0x8]; // 0xf80
public:
	bool m_bShouldFrontFaceCullLeftHanded; // 0xf88	
	bool m_bCreatedLeftHanded; // 0xf89	
};


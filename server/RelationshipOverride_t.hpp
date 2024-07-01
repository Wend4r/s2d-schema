#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has Trivial Destructor
struct RelationshipOverride_t : public Relationship_t
{
public:
	CHandle< CBaseEntity > entity; // 0x8	
	Class_T classType; // 0xc	
};


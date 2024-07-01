#pragma once

#include <cstdint>

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x620
// 
// MGetKV3ClassDefaults
struct PhysFeModelDesc_t
{
public:
	CUtlVector< uint32 > m_CtrlHash; // 0x0	
	CUtlVector< CUtlString > m_CtrlName; // 0x18	
	uint32_t m_nStaticNodeFlags; // 0x30	
	uint32_t m_nDynamicNodeFlags; // 0x34	
	float m_flLocalForce; // 0x38	
	float m_flLocalRotation; // 0x3c	
	uint16_t m_nNodeCount; // 0x40	
	uint16_t m_nStaticNodes; // 0x42	
	uint16_t m_nRotLockStaticNodes; // 0x44	
	uint16_t m_nFirstPositionDrivenNode; // 0x46	
	uint16_t m_nSimdTriCount1; // 0x48	
	uint16_t m_nSimdTriCount2; // 0x4a	
	uint16_t m_nSimdQuadCount1; // 0x4c	
	uint16_t m_nSimdQuadCount2; // 0x4e	
	uint16_t m_nQuadCount1; // 0x50	
	uint16_t m_nQuadCount2; // 0x52	
	uint16_t m_nTreeDepth; // 0x54	
	uint16_t m_nNodeBaseJiggleboneDependsCount; // 0x56	
	uint16_t m_nRopeCount; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad005a[0x6]; // 0x5a
public:
	CUtlVector< uint16 > m_Ropes; // 0x60	
	CUtlVector< FeNodeBase_t > m_NodeBases; // 0x78	
	CUtlVector< FeSimdNodeBase_t > m_SimdNodeBases; // 0x90	
	CUtlVector< FeQuad_t > m_Quads; // 0xa8	
	CUtlVector< FeSimdQuad_t > m_SimdQuads; // 0xc0	
	CUtlVector< FeSimdTri_t > m_SimdTris; // 0xd8	
	CUtlVector< FeSimdRodConstraint_t > m_SimdRods; // 0xf0	
	CUtlVector< FeSimdRodConstraintAnim_t > m_SimdRodsAnim; // 0x108	
	CUtlVector< CTransform > m_InitPose; // 0x120	
	CUtlVector< FeRodConstraint_t > m_Rods; // 0x138	
	CUtlVector< FeTwistConstraint_t > m_Twists; // 0x150	
	CUtlVector< FeAxialEdgeBend_t > m_AxialEdges; // 0x168	
	CUtlVector< float32 > m_NodeInvMasses; // 0x180	
	CUtlVector< FeCtrlOffset_t > m_CtrlOffsets; // 0x198	
	CUtlVector< FeCtrlOsOffset_t > m_CtrlOsOffsets; // 0x1b0	
	CUtlVector< FeFollowNode_t > m_FollowNodes; // 0x1c8	
	CUtlVector< FeCollisionPlane_t > m_CollisionPlanes; // 0x1e0	
	CUtlVector< FeNodeIntegrator_t > m_NodeIntegrator; // 0x1f8	
	CUtlVector< FeSpringIntegrator_t > m_SpringIntegrator; // 0x210	
	CUtlVector< FeSimdSpringIntegrator_t > m_SimdSpringIntegrator; // 0x228	
	CUtlVector< FeWorldCollisionParams_t > m_WorldCollisionParams; // 0x240	
	CUtlVector< float32 > m_LegacyStretchForce; // 0x258	
	CUtlVector< float32 > m_NodeCollisionRadii; // 0x270	
	CUtlVector< float32 > m_DynNodeFriction; // 0x288	
	CUtlVector< float32 > m_LocalRotation; // 0x2a0	
	CUtlVector< float32 > m_LocalForce; // 0x2b8	
	CUtlVector< FeTaperedCapsuleStretch_t > m_TaperedCapsuleStretches; // 0x2d0	
	CUtlVector< FeTaperedCapsuleRigid_t > m_TaperedCapsuleRigids; // 0x2e8	
	CUtlVector< FeSphereRigid_t > m_SphereRigids; // 0x300	
	CUtlVector< uint16 > m_WorldCollisionNodes; // 0x318	
	CUtlVector< uint16 > m_TreeParents; // 0x330	
	CUtlVector< uint16 > m_TreeCollisionMasks; // 0x348	
	CUtlVector< FeTreeChildren_t > m_TreeChildren; // 0x360	
	CUtlVector< uint16 > m_FreeNodes; // 0x378	
	CUtlVector< FeFitMatrix_t > m_FitMatrices; // 0x390	
	CUtlVector< FeFitWeight_t > m_FitWeights; // 0x3a8	
	CUtlVector< FeNodeReverseOffset_t > m_ReverseOffsets; // 0x3c0	
	CUtlVector< FeAnimStrayRadius_t > m_AnimStrayRadii; // 0x3d8	
	CUtlVector< FeSimdAnimStrayRadius_t > m_SimdAnimStrayRadii; // 0x3f0	
	CUtlVector< FeKelagerBend2_t > m_KelagerBends; // 0x408	
	CUtlVector< FeCtrlSoftOffset_t > m_CtrlSoftOffsets; // 0x420	
	CUtlVector< CFeIndexedJiggleBone > m_JiggleBones; // 0x438	
	CUtlVector< uint16 > m_SourceElems; // 0x450	
	CUtlVector< uint32 > m_GoalDampedSpringIntegrators; // 0x468	
	CUtlVector< FeTri_t > m_Tris; // 0x480	
	uint16_t m_nTriCount1; // 0x498	
	uint16_t m_nTriCount2; // 0x49a	
	uint8_t m_nReservedUint8; // 0x49c	
	uint8_t m_nExtraPressureIterations; // 0x49d	
	uint8_t m_nExtraGoalIterations; // 0x49e	
	uint8_t m_nExtraIterations; // 0x49f	
	CUtlVector< FeBoxRigid_t > m_BoxRigids; // 0x4a0	
	CUtlVector< uint8 > m_DynNodeVertexSet; // 0x4b8	
	CUtlVector< uint32 > m_VertexSetNames; // 0x4d0	
	CUtlVector< FeRigidColliderIndices_t > m_RigidColliderPriorities; // 0x4e8	
	CUtlVector< FeMorphLayerDepr_t > m_MorphLayers; // 0x500	
	CUtlVector< uint8 > m_MorphSetData; // 0x518	
	CUtlVector< FeVertexMapDesc_t > m_VertexMaps; // 0x530	
	CUtlVector< uint8 > m_VertexMapValues; // 0x548	
	CUtlVector< FeEffectDesc_t > m_Effects; // 0x560	
	CUtlVector< FeCtrlOffset_t > m_LockToParent; // 0x578	
	CUtlVector< uint16 > m_LockToGoal; // 0x590	
	CUtlVector< int16 > m_SkelParents; // 0x5a8	
	CUtlVector< FeNodeWindBase_t > m_DynNodeWindBases; // 0x5c0	
	float m_flInternalPressure; // 0x5d8	
	float m_flDefaultTimeDilation; // 0x5dc	
	float m_flWindage; // 0x5e0	
	float m_flWindDrag; // 0x5e4	
	float m_flDefaultSurfaceStretch; // 0x5e8	
	float m_flDefaultThreadStretch; // 0x5ec	
	float m_flDefaultGravityScale; // 0x5f0	
	float m_flDefaultVelAirDrag; // 0x5f4	
	float m_flDefaultExpAirDrag; // 0x5f8	
	float m_flDefaultVelQuadAirDrag; // 0x5fc	
	float m_flDefaultExpQuadAirDrag; // 0x600	
	float m_flRodVelocitySmoothRate; // 0x604	
	float m_flQuadVelocitySmoothRate; // 0x608	
	float m_flAddWorldCollisionRadius; // 0x60c	
	float m_flDefaultVolumetricSolveAmount; // 0x610	
	float m_flMotionSmoothCDT; // 0x614	
	uint16_t m_nRodVelocitySmoothIterations; // 0x618	
	uint16_t m_nQuadVelocitySmoothIterations; // 0x61a	
};


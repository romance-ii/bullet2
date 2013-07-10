#ifndef GPU_RIGIDBODY_INTERNAL_DATA_H
#define GPU_RIGIDBODY_INTERNAL_DATA_H

#include "Bullet3OpenCL/Initialize/b3OpenCLUtils.h"
#include "Bullet3OpenCL/ParallelPrimitives/b3OpenCLArray.h"
#include "Bullet3Common/b3Vector3.h"

struct	GpuRigidBodyDemoInternalData
{
	
	cl_kernel	m_copyTransformsToVBOKernel;

	b3OpenCLArray<b3Vector4>*	m_instancePosOrnColor;

	class b3GpuRigidBodyPipeline* m_rigidBodyPipeline;

	class b3GpuNarrowPhase* m_np;
	class b3GpuSapBroadphase* m_bp;
	class b3DynamicBvhBroadphase* m_broadphaseDbvt;

	b3Vector3 m_pickPivotInA;
	b3Vector3 m_pickPivotInB;
	float m_pickDistance;
	int m_pickBody;
	int	m_pickConstraint;
	
	int m_pickFixedBody;
	int m_pickGraphicsShapeIndex;
	int m_pickGraphicsShapeInstance;

	GpuRigidBodyDemoInternalData()
		:m_instancePosOrnColor(0),
		m_copyTransformsToVBOKernel(0),	m_rigidBodyPipeline(0),
		m_np(0),
		m_bp(0),
		m_broadphaseDbvt(0),
		m_pickConstraint(-1),
		m_pickFixedBody(-1),
		m_pickGraphicsShapeIndex(-1),
		m_pickGraphicsShapeInstance(-1),
		m_pickBody(-1)

	{
	}
};

#endif//GPU_RIGIDBODY_INTERNAL_DATA_H


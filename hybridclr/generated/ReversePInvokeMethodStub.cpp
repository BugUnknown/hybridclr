#include "../metadata/ReversePInvokeMethodStub.h"
#include "../metadata/MetadataModule.h"

#include "vm/ScopedThreadAttacher.h"

namespace hybridclr
{
namespace metadata
{

	//!!!{{CODE

	int32_t __ReversePInvokeMethod_0()
	{
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
        const MethodInfo* method = MetadataModule::GetMethodInfoByReversePInvokeWrapperIndex(0);
        typedef int32_t (*Callback)(const MethodInfo*);
		return ((Callback)(method->methodPointerCallByInterp))(method);
	}

	int32_t __ReversePInvokeMethod_1(intptr_t __arg0)
	{
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
        const MethodInfo* method = MetadataModule::GetMethodInfoByReversePInvokeWrapperIndex(1);
        typedef int32_t (*Callback)(intptr_t, const MethodInfo*);
		return ((Callback)(method->methodPointerCallByInterp))(__arg0, method);
	}

	int32_t __ReversePInvokeMethod_2(intptr_t __arg0)
	{
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
        const MethodInfo* method = MetadataModule::GetMethodInfoByReversePInvokeWrapperIndex(2);
        typedef int32_t (*Callback)(intptr_t, const MethodInfo*);
		return ((Callback)(method->methodPointerCallByInterp))(__arg0, method);
	}

	int32_t __ReversePInvokeMethod_3(intptr_t __arg0)
	{
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
        const MethodInfo* method = MetadataModule::GetMethodInfoByReversePInvokeWrapperIndex(3);
        typedef int32_t (*Callback)(intptr_t, const MethodInfo*);
		return ((Callback)(method->methodPointerCallByInterp))(__arg0, method);
	}

	int32_t __ReversePInvokeMethod_4(intptr_t __arg0)
	{
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
        const MethodInfo* method = MetadataModule::GetMethodInfoByReversePInvokeWrapperIndex(4);
        typedef int32_t (*Callback)(intptr_t, const MethodInfo*);
		return ((Callback)(method->methodPointerCallByInterp))(__arg0, method);
	}

	int32_t __ReversePInvokeMethod_5(intptr_t __arg0)
	{
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
        const MethodInfo* method = MetadataModule::GetMethodInfoByReversePInvokeWrapperIndex(5);
        typedef int32_t (*Callback)(intptr_t, const MethodInfo*);
		return ((Callback)(method->methodPointerCallByInterp))(__arg0, method);
	}

	int32_t __ReversePInvokeMethod_6(intptr_t __arg0)
	{
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
        const MethodInfo* method = MetadataModule::GetMethodInfoByReversePInvokeWrapperIndex(6);
        typedef int32_t (*Callback)(intptr_t, const MethodInfo*);
		return ((Callback)(method->methodPointerCallByInterp))(__arg0, method);
	}

	int32_t __ReversePInvokeMethod_7(intptr_t __arg0)
	{
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
        const MethodInfo* method = MetadataModule::GetMethodInfoByReversePInvokeWrapperIndex(7);
        typedef int32_t (*Callback)(intptr_t, const MethodInfo*);
		return ((Callback)(method->methodPointerCallByInterp))(__arg0, method);
	}

	int32_t __ReversePInvokeMethod_8(intptr_t __arg0)
	{
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
        const MethodInfo* method = MetadataModule::GetMethodInfoByReversePInvokeWrapperIndex(8);
        typedef int32_t (*Callback)(intptr_t, const MethodInfo*);
		return ((Callback)(method->methodPointerCallByInterp))(__arg0, method);
	}

	int32_t __ReversePInvokeMethod_9(intptr_t __arg0)
	{
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
        const MethodInfo* method = MetadataModule::GetMethodInfoByReversePInvokeWrapperIndex(9);
        typedef int32_t (*Callback)(intptr_t, const MethodInfo*);
		return ((Callback)(method->methodPointerCallByInterp))(__arg0, method);
	}

	int32_t __ReversePInvokeMethod_10(intptr_t __arg0)
	{
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
        const MethodInfo* method = MetadataModule::GetMethodInfoByReversePInvokeWrapperIndex(10);
        typedef int32_t (*Callback)(intptr_t, const MethodInfo*);
		return ((Callback)(method->methodPointerCallByInterp))(__arg0, method);
	}

	int32_t __ReversePInvokeMethod_11(int32_t __arg0, int32_t __arg1)
	{
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
        const MethodInfo* method = MetadataModule::GetMethodInfoByReversePInvokeWrapperIndex(11);
        typedef int32_t (*Callback)(int32_t, int32_t, const MethodInfo*);
		return ((Callback)(method->methodPointerCallByInterp))(__arg0, __arg1, method);
	}

	int32_t __ReversePInvokeMethod_12(int32_t __arg0, int32_t __arg1)
	{
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
        const MethodInfo* method = MetadataModule::GetMethodInfoByReversePInvokeWrapperIndex(12);
        typedef int32_t (*Callback)(int32_t, int32_t, const MethodInfo*);
		return ((Callback)(method->methodPointerCallByInterp))(__arg0, __arg1, method);
	}

	void __ReversePInvokeMethod_13()
	{
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
        const MethodInfo* method = MetadataModule::GetMethodInfoByReversePInvokeWrapperIndex(13);
        typedef void (*Callback)(const MethodInfo*);
		((Callback)(method->methodPointerCallByInterp))(method);
	}

    ReversePInvokeMethodData g_reversePInvokeMethodStub[]
	{
		{"i4", (Il2CppMethodPointer)__ReversePInvokeMethod_0},
		{"i4i", (Il2CppMethodPointer)__ReversePInvokeMethod_1},
		{"i4i", (Il2CppMethodPointer)__ReversePInvokeMethod_2},
		{"i4i", (Il2CppMethodPointer)__ReversePInvokeMethod_3},
		{"i4i", (Il2CppMethodPointer)__ReversePInvokeMethod_4},
		{"i4i", (Il2CppMethodPointer)__ReversePInvokeMethod_5},
		{"i4i", (Il2CppMethodPointer)__ReversePInvokeMethod_6},
		{"i4i", (Il2CppMethodPointer)__ReversePInvokeMethod_7},
		{"i4i", (Il2CppMethodPointer)__ReversePInvokeMethod_8},
		{"i4i", (Il2CppMethodPointer)__ReversePInvokeMethod_9},
		{"i4i", (Il2CppMethodPointer)__ReversePInvokeMethod_10},
		{"i4i4i4", (Il2CppMethodPointer)__ReversePInvokeMethod_11},
		{"i4i4i4", (Il2CppMethodPointer)__ReversePInvokeMethod_12},
		{"v", (Il2CppMethodPointer)__ReversePInvokeMethod_13},

		{nullptr, nullptr},
	};


	//!!!}}CODE
}
}
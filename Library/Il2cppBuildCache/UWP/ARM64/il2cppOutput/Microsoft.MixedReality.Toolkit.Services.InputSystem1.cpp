﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct Dictionary_2_t17D14186357F4FCCA956E8681E1B43CCD807D615;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`3<System.String,UnityEngine.Transform,System.String>
struct Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD;
// System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct IDictionary_2_tFF9C089B93F08DA8C1536A48CBF4B682915868BA;
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>
struct IEnumerator_1_tCE409A99E24E3662757D84E0A60C8FAE328BF058;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct IMixedRealityGestureHandler_1_t0248C94C145F5AB93302CCCF4C41B8CA8B3A4A1F;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>
struct IMixedRealityGestureHandler_1_t577CB846BCEF216AA48D6CA9E7BE3608AF36F9BB;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>
struct IMixedRealityGestureHandler_1_t13C033AAE0091A841EFF3D1A4975F855E560B7C5;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>
struct IMixedRealityGestureHandler_1_t539B96AA3D2238D2DD8BECE1B885AE2C47ABF504;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct IMixedRealityInputHandler_1_t2CF9135C69487F61B2D137080339E891E73F72C1;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>
struct IMixedRealityInputHandler_1_tBAD7AF468916BE3141208F8B939E3BD553C476D2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>
struct IMixedRealityInputHandler_1_t27486769A6B79CAD7141CEE522728A7309A9F492;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>
struct IMixedRealityInputHandler_1_tAF5D94C471FFDFFBE30098DC36F89BF9933E5C1D;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>
struct IMixedRealityInputHandler_1_tBADB4452797FB2DBAE88E4F57687EA0F04AAEC2A;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct InputEventData_1_tC6CD5227DE30910A42F60E4D57C330946FA03FD2;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>
struct InputEventData_1_t80FAAC4573C5B66BBC88B94D530CDC46B4EECEE2;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct InputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>
struct InputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>
struct InputEventData_1_tE44B3E2DFC8CE21E8B2B2E3C0F9FAF7091F41D54;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>
struct InputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>
struct InputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct KeyCollection_tF2F54941D8EC3AA74C75ADEE470001BA28306BFC;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct List_1_t771DAC99CA3D22AB8F76E3561396264B96AE5D3B;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct SourcePoseEventData_1_tE626A849E7457E2AE0456AFC30D610EC221959E1;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>
struct SourcePoseEventData_1_t231D726E31121868C0276AFE9019E37C9E90D64E;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>
struct SourcePoseEventData_1_t4955807E7BF053B446583ED8BB34D8A1BE645DDF;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>
struct SourcePoseEventData_1_t3F40104911F5F86F88A46E3961EDD20ABDB3CFFD;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>
struct SourcePoseEventData_1_t348DE491DFFC276DC552C0DF33FA0331F70B67D2;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct ValueCollection_t4D150B6B0911B02837A90DE16E22508484ABD7E3;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>[]
struct EntryU5BU5D_t95D08E7C7894EEE8DC5ADD8750C2FBBF1F41DA64;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t2E1200BB76021AEE3903EBC3A13545C54BB0E7E2;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F;
// Microsoft.MixedReality.Toolkit.Physics.RayStep[]
struct RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource
struct BaseGenericInputSource_tACE58AEA81725FFF6F6EA684EE90F348A841888B;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer
struct BaseRayStabilizer_t17F65400739179C021C592F65676659FC7CA2DF7;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.MixedReality.Toolkit.Input.DictationEventData
struct DictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// System.Exception
struct Exception_t;
// Microsoft.MixedReality.Toolkit.Input.FocusEventData
struct FocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.Input.GazeProvider
struct GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4;
// Microsoft.MixedReality.Toolkit.Physics.GazeStabilizer
struct GazeStabilizer_t31055B3377F6FD30FC37AF8C7E5E23F69FBDCDB6;
// Microsoft.MixedReality.Toolkit.Input.GenericPointer
struct GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984;
// Microsoft.MixedReality.Toolkit.Input.HandMeshInfo
struct HandMeshInfo_t3E6C810446969DE12D7A2ED8D370E4D12F5A2063;
// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData
struct HandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// Microsoft.MixedReality.Toolkit.Physics.IBaseRayStabilizer
struct IBaseRayStabilizer_t888F13E7221DA3C3D6CB996702021E5561A06123;
// Microsoft.MixedReality.Toolkit.Input.ICursorModifier
struct ICursorModifier_tDFC8A791949B97794A6E5EC57398D72EA778D623;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler
struct IMixedRealityBaseInputHandler_t78DA1A46E8EF7B8243A755E08816F694CFFA7B09;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_t7E6E610339CBD844D8062BDE80EC0E15E2ED6247;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor
struct IMixedRealityCursor_t0293DAB631DAB81630F7AF39212B17B080DB16A3;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler
struct IMixedRealityDictationHandler_t9E02D5EA6ECA6D79BD930F957389A2AFD282CAAE;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler
struct IMixedRealityFocusChangedHandler_t00F6F2C16BC026C4BFF958A3716D37A8AE9FCE21;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler
struct IMixedRealityFocusHandler_tE116B3563D9F1BB5FC1BB5149903DFCF0FE118F8;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler
struct IMixedRealityGestureHandler_t10431CE1B46A546932928514885A26F01E7E311E;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler
struct IMixedRealityHandJointHandler_tA36E11FBFA86A6AD8F43CB1204D4274E28EA66D4;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler
struct IMixedRealityHandMeshHandler_t8BCB8462842D92942223FBA6EA6D383B0F104220;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler
struct IMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler
struct IMixedRealityInputHandler_t70923AB8C2B3603FD1E12392C145636841C39E35;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t3196307F098DCEFBD251512224039745B7F4B96B;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler
struct IMixedRealityPointerHandler_t645D76844FC9995B3A7F301C39DFA9BBD3818534;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler
struct IMixedRealitySourcePoseHandler_t3584B07BBF521B412D9536341F733B547271267A;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler
struct IMixedRealitySourceStateHandler_t71AFAC421C0106F94BFD72A12B773F9C34232B5C;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler
struct IMixedRealitySpeechHandler_tA28296A7C298ED10EBA3D71F7868267D7B97FB7F;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler
struct IMixedRealityTouchHandler_t27E30DAB576450DABC09BFFAFB3920FFE88B9181;
// Microsoft.MixedReality.Toolkit.Input.IPointerResult
struct IPointerResult_t942F1E6D8298099F4901A78FBC656C31201459F6;
// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener
struct InputSystemGlobalHandlerListener_t843DD1A5D31A98462229555C6627F07324AD784B;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener
struct InputSystemGlobalListener_t1A1940053C0B9BF9CC21346987EC30F514A066AD;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule
struct MixedRealityInputModule_t49C8683CD8FCDD3D79B1DBADC47B0BE2FA7126DD;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct SourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4;
// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21;
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873;
// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData
struct PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213;
// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult
struct PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728;
// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences
struct PointerPreferences_t558D69982C2798201BE66A1A431423272D886765;
// Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer
struct InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c
struct U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c
struct U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16
struct U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData
struct PointerData_t8814E79B8DF54459590CDF91527B93920AF280C3;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c
struct U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c
struct U3CU3Ec_t53B87639731967C23BD958FB7695CA6D19C1921D;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* CoreServices_t180D897538CB6DFE721697AB118BDA1BC705EB26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityCursor_t0293DAB631DAB81630F7AF39212B17B080DB16A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityDictationHandler_t9E02D5EA6ECA6D79BD930F957389A2AFD282CAAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityEventSystem_t8CE6A4B833EC7FADACC56D8FE502784202AE8B05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityFocusChangedHandler_t00F6F2C16BC026C4BFF958A3716D37A8AE9FCE21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityFocusHandler_tE116B3563D9F1BB5FC1BB5149903DFCF0FE118F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_1_t0248C94C145F5AB93302CCCF4C41B8CA8B3A4A1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_1_t13C033AAE0091A841EFF3D1A4975F855E560B7C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_1_t539B96AA3D2238D2DD8BECE1B885AE2C47ABF504_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_1_t577CB846BCEF216AA48D6CA9E7BE3608AF36F9BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_t10431CE1B46A546932928514885A26F01E7E311E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHandJointHandler_tA36E11FBFA86A6AD8F43CB1204D4274E28EA66D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHandMeshHandler_t8BCB8462842D92942223FBA6EA6D383B0F104220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_t27486769A6B79CAD7141CEE522728A7309A9F492_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_t2CF9135C69487F61B2D137080339E891E73F72C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_tAF5D94C471FFDFFBE30098DC36F89BF9933E5C1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_tBAD7AF468916BE3141208F8B939E3BD553C476D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_tBADB4452797FB2DBAE88E4F57687EA0F04AAEC2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_t70923AB8C2B3603FD1E12392C145636841C39E35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointerHandler_t645D76844FC9995B3A7F301C39DFA9BBD3818534_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySourcePoseHandler_t3584B07BBF521B412D9536341F733B547271267A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySourceStateHandler_t71AFAC421C0106F94BFD72A12B773F9C34232B5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySpeechHandler_tA28296A7C298ED10EBA3D71F7868267D7B97FB7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityTouchHandler_t27E30DAB576450DABC09BFFAFB3920FFE88B9181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_t7C335C3B4D41F6E2E9EF02163418F8A82D423D3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t53B87639731967C23BD958FB7695CA6D19C1921D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral033695E8FCCB2AD8ED3D6CA47B0D7673411B3701;
IL2CPP_EXTERN_C String_t* _stringLiteral193EAB9F1EC19468783C52A94D9B84DF6D5BEE4F;
IL2CPP_EXTERN_C String_t* _stringLiteral3F670F51C586102E4AD2E77FED417809FF46F3D8;
IL2CPP_EXTERN_C String_t* _stringLiteral8646EE7CB5D6509C0ECF1B9EA3BEB8B77A6CB742;
IL2CPP_EXTERN_C String_t* _stringLiteral8A4B7834144C35546E7F3AA5FB0F9239B88B8B6A;
IL2CPP_EXTERN_C String_t* _stringLiteral9CFDCFFDD9F8EAA25BCF8F12B4E2CF9CE83B9B29;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_TisU3CEnsureInputSystemValidU3Ed__4_t4726393E49A24D484F82BE984437137A0AEEF5C7_mC7429CB3C90A64B912CA998CA3B28CFDC6AD1A26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_TisU3CEnsureInputSystemValidU3Ed__4_t55B2AC3258CED626D50DC9BA690EBB08390467D6_m10097A8245E4B54DF5DC1D3C58A2463EA44DE241_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C_m75F4BDB60A3AE7FAF7386BB1CB097C2DB58B082D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t7FE273F02D8FAC7B771B9CD0F2118F262D7E988F_mA535F8145798673F556FFC9138366C6CE0897E68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_tE8EA292542AF4AAD6DF000683694ECE869CB2C4A_m3BDDA156176506DB028495065DD5794248C8D2CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__69_tA1C435686F9556734AB0B8A96F09E74431B6874B_mC399D11DC357CF682CD09107AA9C085FF162B5EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m1848C6E420D34DBEC14D2F6CED9F2035F4119CB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8F1A111B663F7A3E98258DC6509C0FF5A6A5067A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m332D401D7B852D8CC1BC827AD3C461B7CA7645C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD3E898B7156BF1CBA8C9F9FD805589BB8CDFD48E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisDictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37_m67BBFE561CB447C577749FA4358B02140F9CE0F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisFocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D_mF53D529D573490C093A4FC5BC75DADF2CD0B369D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9_m176108EB24DCC2FF910B4D653D3ECC40CDEC51EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296_m79998E43364684CF2552CCFEF47BD0171A2705EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057_mE494F9977B221C7A1AB2DF1F3808DDB7BD3ABC15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50_mF54DBEA97FBED02124BDCA9A608402673773B939_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t80FAAC4573C5B66BBC88B94D530CDC46B4EECEE2_mB1BC0FDEE1C0FC2B32043A3634F62A0F9B83307C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_tC6CD5227DE30910A42F60E4D57C330946FA03FD2_m01B0E71ED8D9F01C10E55485DB6C0C16C3FD03B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_tE44B3E2DFC8CE21E8B2B2E3C0F9FAF7091F41D54_mF0FA6861DBFBA35EA84FC941631B89982F22571B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F_m63754764AB79DA9DAEEF23A4C309CFDD336BB968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81_m2BA349FC7301973222A459C5338B97E90563223F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t231D726E31121868C0276AFE9019E37C9E90D64E_mA8348C3843BD89D567D726B49E518FC02D874FA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t348DE491DFFC276DC552C0DF33FA0331F70B67D2_mD1F2FCCEB714188C1059F35F43EDF3732AC7743C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t3F40104911F5F86F88A46E3961EDD20ABDB3CFFD_mD69F6D3C070E3009C6C79F440DD4E5C3A4977F09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t4955807E7BF053B446583ED8BB34D8A1BE645DDF_mC776E03EFF407B3FAEE2482C962D8ED5B29C8FA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tE626A849E7457E2AE0456AFC30D610EC221959E1_m4B9E0C9155612DE175F91651E5D6D16D8BF9CD0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4_mD42AFBD3894DAC597A21941E12C25731891A1B45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46_mC4AAA10E280ABD899D79E36BF795F52D3AEA4627_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mD4877E41B1CC6D34CA364DA050FD0FCE51507A15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_m0EA597F67E72E14AFDC5CBBFCBD14E81693CD3D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_m52504482726B2CB4C7DCFE333A0CBF82C4FF9E7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerator_Reset_m097C1AD0BD613BE07CBE1DC6D4A05CF8F9171728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisGazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4_mA507EBEFA4575378A88A05CBFBCF61CDFEF4B1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t10431CE1B46A546932928514885A26F01E7E311E_mE7000B6458C14F8A4CB5B0399187139DB559B901_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_mB872F0AE9954DA7AEC86E9A93024DA3E9CF2DCF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_t70923AB8C2B3603FD1E12392C145636841C39E35_mFFB7F4F23F9B4AFEE50D5E838EC56D8ECE2EA920_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_tA28296A7C298ED10EBA3D71F7868267D7B97FB7F_m5A3ABE263D0FDFC90690602DD6BF58549C1D05BC_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F;
struct RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct Dictionary_2_t17D14186357F4FCCA956E8681E1B43CCD807D615  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t95D08E7C7894EEE8DC5ADD8750C2FBBF1F41DA64* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tF2F54941D8EC3AA74C75ADEE470001BA28306BFC * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4D150B6B0911B02837A90DE16E22508484ABD7E3 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t17D14186357F4FCCA956E8681E1B43CCD807D615, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t17D14186357F4FCCA956E8681E1B43CCD807D615, ___entries_1)); }
	inline EntryU5BU5D_t95D08E7C7894EEE8DC5ADD8750C2FBBF1F41DA64* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t95D08E7C7894EEE8DC5ADD8750C2FBBF1F41DA64** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t95D08E7C7894EEE8DC5ADD8750C2FBBF1F41DA64* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t17D14186357F4FCCA956E8681E1B43CCD807D615, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t17D14186357F4FCCA956E8681E1B43CCD807D615, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t17D14186357F4FCCA956E8681E1B43CCD807D615, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t17D14186357F4FCCA956E8681E1B43CCD807D615, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t17D14186357F4FCCA956E8681E1B43CCD807D615, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t17D14186357F4FCCA956E8681E1B43CCD807D615, ___keys_7)); }
	inline KeyCollection_tF2F54941D8EC3AA74C75ADEE470001BA28306BFC * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF2F54941D8EC3AA74C75ADEE470001BA28306BFC ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF2F54941D8EC3AA74C75ADEE470001BA28306BFC * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t17D14186357F4FCCA956E8681E1B43CCD807D615, ___values_8)); }
	inline ValueCollection_t4D150B6B0911B02837A90DE16E22508484ABD7E3 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4D150B6B0911B02837A90DE16E22508484ABD7E3 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4D150B6B0911B02837A90DE16E22508484ABD7E3 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t17D14186357F4FCCA956E8681E1B43CCD807D615, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer
struct BaseRayStabilizer_t17F65400739179C021C592F65676659FC7CA2DF7  : public RuntimeObject
{
public:

public:
};


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873  : public RuntimeObject
{
public:
	// System.Exception Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::exception
	Exception_t * ___exception_0;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::continuation
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_exception_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873, ___exception_0)); }
	inline Exception_t * get_exception_0() const { return ___exception_0; }
	inline Exception_t ** get_address_of_exception_0() { return &___exception_0; }
	inline void set_exception_0(Exception_t * value)
	{
		___exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873, ___continuation_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_continuation_1() const { return ___continuation_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873, ___U3CIsCompletedU3Ek__BackingField_2)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_2() const { return ___U3CIsCompletedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_2() { return &___U3CIsCompletedU3Ek__BackingField_2; }
	inline void set_U3CIsCompletedU3Ek__BackingField_2(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c
struct U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::<>9
	U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477 * ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::<>9__4_0
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3E9__4_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c
struct U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::<>9
	U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00 * ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::<>9__4_0
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3E9__4_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c
struct U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<>9
	U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c
struct U3CU3Ec_t53B87639731967C23BD958FB7695CA6D19C1921D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t53B87639731967C23BD958FB7695CA6D19C1921D_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::<>9
	U3CU3Ec_t53B87639731967C23BD958FB7695CA6D19C1921D * ___U3CU3E9_0;
	// System.Func`3<System.String,UnityEngine.Transform,System.String> Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::<>9__25_0
	Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD * ___U3CU3E9__25_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t53B87639731967C23BD958FB7695CA6D19C1921D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t53B87639731967C23BD958FB7695CA6D19C1921D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t53B87639731967C23BD958FB7695CA6D19C1921D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t53B87639731967C23BD958FB7695CA6D19C1921D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t53B87639731967C23BD958FB7695CA6D19C1921D_StaticFields, ___U3CU3E9__25_0_1)); }
	inline Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD * get_U3CU3E9__25_0_1() const { return ___U3CU3E9__25_0_1; }
	inline Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD ** get_address_of_U3CU3E9__25_0_1() { return &___U3CU3E9__25_0_1; }
	inline void set_U3CU3E9__25_0_1(Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD * value)
	{
		___U3CU3E9__25_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_0_1), (void*)value);
	}
};


// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState> UnityEngine.EventSystems.PointerInputModule/MouseState::m_TrackedButtons
	List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * ___m_TrackedButtons_0;

public:
	inline static int32_t get_offset_of_m_TrackedButtons_0() { return static_cast<int32_t>(offsetof(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1, ___m_TrackedButtons_0)); }
	inline List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * get_m_TrackedButtons_0() const { return ___m_TrackedButtons_0; }
	inline List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E ** get_address_of_m_TrackedButtons_0() { return &___m_TrackedButtons_0; }
	inline void set_m_TrackedButtons_0(List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * value)
	{
		___m_TrackedButtons_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedButtons_0), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct KeyValuePair_2_t00FE0E370638CA3CD5CC8569639D7E67DEDA7A61 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PointerData_t8814E79B8DF54459590CDF91527B93920AF280C3 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t00FE0E370638CA3CD5CC8569639D7E67DEDA7A61, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t00FE0E370638CA3CD5CC8569639D7E67DEDA7A61, ___value_1)); }
	inline PointerData_t8814E79B8DF54459590CDF91527B93920AF280C3 * get_value_1() const { return ___value_1; }
	inline PointerData_t8814E79B8DF54459590CDF91527B93920AF280C3 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(PointerData_t8814E79B8DF54459590CDF91527B93920AF280C3 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};

// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21, ___m_Predicate_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_task_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___dictionary_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___current_3)); }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t17D14186357F4FCCA956E8681E1B43CCD807D615 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t00FE0E370638CA3CD5CC8569639D7E67DEDA7A61  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB, ___dictionary_0)); }
	inline Dictionary_2_t17D14186357F4FCCA956E8681E1B43CCD807D615 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t17D14186357F4FCCA956E8681E1B43CCD807D615 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t17D14186357F4FCCA956E8681E1B43CCD807D615 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB, ___current_3)); }
	inline KeyValuePair_2_t00FE0E370638CA3CD5CC8569639D7E67DEDA7A61  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t00FE0E370638CA3CD5CC8569639D7E67DEDA7A61 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t00FE0E370638CA3CD5CC8569639D7E67DEDA7A61  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 
{
public:
	// T System.Nullable`1::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___value_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_0() const { return ___value_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_t6AC8C31BC7161427E9FCC65350B7AB6350B79BFB 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t6AC8C31BC7161427E9FCC65350B7AB6350B79BFB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Microsoft.MixedReality.Toolkit.Input.FocusEventData
struct FocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.FocusEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusEventData::<OldFocusedObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3COldFocusedObjectU3Ek__BackingField_3;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusEventData::<NewFocusedObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CNewFocusedObjectU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D, ___U3CPointerU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_2() const { return ___U3CPointerU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_2() { return &___U3CPointerU3Ek__BackingField_2; }
	inline void set_U3CPointerU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3COldFocusedObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D, ___U3COldFocusedObjectU3Ek__BackingField_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3COldFocusedObjectU3Ek__BackingField_3() const { return ___U3COldFocusedObjectU3Ek__BackingField_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3COldFocusedObjectU3Ek__BackingField_3() { return &___U3COldFocusedObjectU3Ek__BackingField_3; }
	inline void set_U3COldFocusedObjectU3Ek__BackingField_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3COldFocusedObjectU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COldFocusedObjectU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNewFocusedObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D, ___U3CNewFocusedObjectU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CNewFocusedObjectU3Ek__BackingField_4() const { return ___U3CNewFocusedObjectU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CNewFocusedObjectU3Ek__BackingField_4() { return &___U3CNewFocusedObjectU3Ek__BackingField_4; }
	inline void set_U3CNewFocusedObjectU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CNewFocusedObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNewFocusedObjectU3Ek__BackingField_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_t46E1205C9E39DFF11C6A883DAE830A9776D7766C 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t46E1205C9E39DFF11C6A883DAE830A9776D7766C, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSourceType
struct InputSourceType_tC054F14B0D86BA0C97E14A2D2EF20C89834401D2 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceType_tC054F14B0D86BA0C97E14A2D2EF20C89834401D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.LowLevel.MarkerFlags
struct MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8 
{
public:
	// System.UInt16 Unity.Profiling.LowLevel.MarkerFlags::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8, ___rotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::barycentricCoordinate
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___barycentricCoordinate_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::distance
	float ___distance_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::triangleIndex
	int32_t ___triangleIndex_4;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::textureCoord
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord_5;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::textureCoord2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord2_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_7;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::lightmapCoord
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lightmapCoord_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::raycastValid
	bool ___raycastValid_9;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider_10;

public:
	inline static int32_t get_offset_of_point_0() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00, ___point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_point_0() const { return ___point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_point_0() { return &___point_0; }
	inline void set_point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___point_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00, ___normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_normal_1() const { return ___normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_barycentricCoordinate_2() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00, ___barycentricCoordinate_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_barycentricCoordinate_2() const { return ___barycentricCoordinate_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_barycentricCoordinate_2() { return &___barycentricCoordinate_2; }
	inline void set_barycentricCoordinate_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___barycentricCoordinate_2 = value;
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00, ___distance_3)); }
	inline float get_distance_3() const { return ___distance_3; }
	inline float* get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(float value)
	{
		___distance_3 = value;
	}

	inline static int32_t get_offset_of_triangleIndex_4() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00, ___triangleIndex_4)); }
	inline int32_t get_triangleIndex_4() const { return ___triangleIndex_4; }
	inline int32_t* get_address_of_triangleIndex_4() { return &___triangleIndex_4; }
	inline void set_triangleIndex_4(int32_t value)
	{
		___triangleIndex_4 = value;
	}

	inline static int32_t get_offset_of_textureCoord_5() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00, ___textureCoord_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_textureCoord_5() const { return ___textureCoord_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_textureCoord_5() { return &___textureCoord_5; }
	inline void set_textureCoord_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___textureCoord_5 = value;
	}

	inline static int32_t get_offset_of_textureCoord2_6() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00, ___textureCoord2_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_textureCoord2_6() const { return ___textureCoord2_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_textureCoord2_6() { return &___textureCoord2_6; }
	inline void set_textureCoord2_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___textureCoord2_6 = value;
	}

	inline static int32_t get_offset_of_transform_7() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00, ___transform_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_transform_7() const { return ___transform_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_transform_7() { return &___transform_7; }
	inline void set_transform_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___transform_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_7), (void*)value);
	}

	inline static int32_t get_offset_of_lightmapCoord_8() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00, ___lightmapCoord_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_lightmapCoord_8() const { return ___lightmapCoord_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_lightmapCoord_8() { return &___lightmapCoord_8; }
	inline void set_lightmapCoord_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___lightmapCoord_8 = value;
	}

	inline static int32_t get_offset_of_raycastValid_9() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00, ___raycastValid_9)); }
	inline bool get_raycastValid_9() const { return ___raycastValid_9; }
	inline bool* get_address_of_raycastValid_9() { return &___raycastValid_9; }
	inline void set_raycastValid_9(bool value)
	{
		___raycastValid_9 = value;
	}

	inline static int32_t get_offset_of_collider_10() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00, ___collider_10)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_collider_10() const { return ___collider_10; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_collider_10() { return &___collider_10; }
	inline void set_collider_10(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___collider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collider_10), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___barycentricCoordinate_2;
	float ___distance_3;
	int32_t ___triangleIndex_4;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord_5;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord2_6;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_7;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lightmapCoord_8;
	int32_t ___raycastValid_9;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider_10;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___barycentricCoordinate_2;
	float ___distance_3;
	int32_t ___triangleIndex_4;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord_5;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord2_6;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_7;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lightmapCoord_8;
	int32_t ___raycastValid_9;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider_10;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Microsoft.MixedReality.Toolkit.Input.PointerBehavior
struct PointerBehavior_tC7B4045CC6EAC9F5C4739F1217EE3BAEAF613C8E 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.PointerBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PointerBehavior_tC7B4045CC6EAC9F5C4739F1217EE3BAEAF613C8E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Physics.RayStep
struct RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Origin>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3COriginU3Ek__BackingField_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Terminus>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CTerminusU3Ek__BackingField_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Direction>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CDirectionU3Ek__BackingField_5;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_6;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::epsilon
	float ___epsilon_7;

public:
	inline static int32_t get_offset_of_U3COriginU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E, ___U3COriginU3Ek__BackingField_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3COriginU3Ek__BackingField_3() const { return ___U3COriginU3Ek__BackingField_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3COriginU3Ek__BackingField_3() { return &___U3COriginU3Ek__BackingField_3; }
	inline void set_U3COriginU3Ek__BackingField_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3COriginU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTerminusU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E, ___U3CTerminusU3Ek__BackingField_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CTerminusU3Ek__BackingField_4() const { return ___U3CTerminusU3Ek__BackingField_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CTerminusU3Ek__BackingField_4() { return &___U3CTerminusU3Ek__BackingField_4; }
	inline void set_U3CTerminusU3Ek__BackingField_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CTerminusU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CDirectionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E, ___U3CDirectionU3Ek__BackingField_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CDirectionU3Ek__BackingField_5() const { return ___U3CDirectionU3Ek__BackingField_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CDirectionU3Ek__BackingField_5() { return &___U3CDirectionU3Ek__BackingField_5; }
	inline void set_U3CDirectionU3Ek__BackingField_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CDirectionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E, ___U3CLengthU3Ek__BackingField_6)); }
	inline float get_U3CLengthU3Ek__BackingField_6() const { return ___U3CLengthU3Ek__BackingField_6; }
	inline float* get_address_of_U3CLengthU3Ek__BackingField_6() { return &___U3CLengthU3Ek__BackingField_6; }
	inline void set_U3CLengthU3Ek__BackingField_6(float value)
	{
		___U3CLengthU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_epsilon_7() { return static_cast<int32_t>(offsetof(RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E, ___epsilon_7)); }
	inline float get_epsilon_7() const { return ___epsilon_7; }
	inline float* get_address_of_epsilon_7() { return &___epsilon_7; }
	inline void set_epsilon_7(float value)
	{
		___epsilon_7 = value;
	}
};

struct RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E_StaticFields
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dist
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dist_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos_2;

public:
	inline static int32_t get_offset_of_dist_0() { return static_cast<int32_t>(offsetof(RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E_StaticFields, ___dist_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dist_0() const { return ___dist_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dist_0() { return &___dist_0; }
	inline void set_dist_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dist_0 = value;
	}

	inline static int32_t get_offset_of_dir_1() { return static_cast<int32_t>(offsetof(RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E_StaticFields, ___dir_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dir_1() const { return ___dir_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dir_1() { return &___dir_1; }
	inline void set_dir_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dir_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E_StaticFields, ___pos_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_pos_2() const { return ___pos_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___pos_2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel
struct RecognitionConfidenceLevel_t5E3D9BFFCECBCC8588F02F2EBA4B71AB534B525D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecognitionConfidenceLevel_t5E3D9BFFCECBCC8588F02F2EBA4B71AB534B525D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType
struct SceneQueryType_t5C7D90999A11C46DAD81892C091ADC4C6D9B8B31 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Physics.SceneQueryType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneQueryType_t5C7D90999A11C46DAD81892C091ADC4C6D9B8B31, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackingState
struct TrackingState_t8EAE903011CB326DEC8860DC6F73EB636D4DDCF1 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t8EAE903011CB326DEC8860DC6F73EB636D4DDCF1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.GazePointerVisibilityStateMachine/GazePointerState
struct GazePointerState_t2FA73DC7D3B462C20B9C937DBE03F622DF929280 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.GazePointerVisibilityStateMachine/GazePointerState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GazePointerState_t2FA73DC7D3B462C20B9C937DBE03F622DF929280, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/FramePressState
struct FramePressState_t4BB461B7704D7F72519B36A0C8B3370AB302E7A7 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/FramePressState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FramePressState_t4BB461B7704D7F72519B36A0C8B3370AB302E7A7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};

// Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource
struct BaseGenericInputSource_tACE58AEA81725FFF6F6EA684EE90F348A841888B  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::<Pointers>k__BackingField
	IMixedRealityPointerU5BU5D_t2E1200BB76021AEE3903EBC3A13545C54BB0E7E2* ___U3CPointersU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::<SourceType>k__BackingField
	int32_t ___U3CSourceTypeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_tACE58AEA81725FFF6F6EA684EE90F348A841888B, ___U3CSourceIdU3Ek__BackingField_0)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_0() const { return ___U3CSourceIdU3Ek__BackingField_0; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_0() { return &___U3CSourceIdU3Ek__BackingField_0; }
	inline void set_U3CSourceIdU3Ek__BackingField_0(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_tACE58AEA81725FFF6F6EA684EE90F348A841888B, ___U3CSourceNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_1() const { return ___U3CSourceNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_1() { return &___U3CSourceNameU3Ek__BackingField_1; }
	inline void set_U3CSourceNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPointersU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_tACE58AEA81725FFF6F6EA684EE90F348A841888B, ___U3CPointersU3Ek__BackingField_2)); }
	inline IMixedRealityPointerU5BU5D_t2E1200BB76021AEE3903EBC3A13545C54BB0E7E2* get_U3CPointersU3Ek__BackingField_2() const { return ___U3CPointersU3Ek__BackingField_2; }
	inline IMixedRealityPointerU5BU5D_t2E1200BB76021AEE3903EBC3A13545C54BB0E7E2** get_address_of_U3CPointersU3Ek__BackingField_2() { return &___U3CPointersU3Ek__BackingField_2; }
	inline void set_U3CPointersU3Ek__BackingField_2(IMixedRealityPointerU5BU5D_t2E1200BB76021AEE3903EBC3A13545C54BB0E7E2* value)
	{
		___U3CPointersU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointersU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_tACE58AEA81725FFF6F6EA684EE90F348A841888B, ___U3CSourceTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CSourceTypeU3Ek__BackingField_3() const { return ___U3CSourceTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CSourceTypeU3Ek__BackingField_3() { return &___U3CSourceTypeU3Ek__BackingField_3; }
	inline void set_U3CSourceTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CSourceTypeU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<RayDistance>k__BackingField
	float ___U3CRayDistanceU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Point>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointU3Ek__BackingField_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Normal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalU3Ek__BackingField_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Object>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CObjectU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<LastRaycastHit>k__BackingField
	MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00  ___U3CLastRaycastHitU3Ek__BackingField_4;
	// UnityEngine.EventSystems.RaycastResult Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<LastGraphicsRaycastResult>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<PointLocalSpace>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointLocalSpaceU3Ek__BackingField_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<NormalLocalSpace>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalLocalSpaceU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CRayDistanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316, ___U3CRayDistanceU3Ek__BackingField_0)); }
	inline float get_U3CRayDistanceU3Ek__BackingField_0() const { return ___U3CRayDistanceU3Ek__BackingField_0; }
	inline float* get_address_of_U3CRayDistanceU3Ek__BackingField_0() { return &___U3CRayDistanceU3Ek__BackingField_0; }
	inline void set_U3CRayDistanceU3Ek__BackingField_0(float value)
	{
		___U3CRayDistanceU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CPointU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316, ___U3CPointU3Ek__BackingField_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPointU3Ek__BackingField_1() const { return ___U3CPointU3Ek__BackingField_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPointU3Ek__BackingField_1() { return &___U3CPointU3Ek__BackingField_1; }
	inline void set_U3CPointU3Ek__BackingField_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPointU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CNormalU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316, ___U3CNormalU3Ek__BackingField_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CNormalU3Ek__BackingField_2() const { return ___U3CNormalU3Ek__BackingField_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CNormalU3Ek__BackingField_2() { return &___U3CNormalU3Ek__BackingField_2; }
	inline void set_U3CNormalU3Ek__BackingField_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CNormalU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316, ___U3CObjectU3Ek__BackingField_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CObjectU3Ek__BackingField_3() const { return ___U3CObjectU3Ek__BackingField_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CObjectU3Ek__BackingField_3() { return &___U3CObjectU3Ek__BackingField_3; }
	inline void set_U3CObjectU3Ek__BackingField_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CObjectU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CObjectU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLastRaycastHitU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316, ___U3CLastRaycastHitU3Ek__BackingField_4)); }
	inline MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00  get_U3CLastRaycastHitU3Ek__BackingField_4() const { return ___U3CLastRaycastHitU3Ek__BackingField_4; }
	inline MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00 * get_address_of_U3CLastRaycastHitU3Ek__BackingField_4() { return &___U3CLastRaycastHitU3Ek__BackingField_4; }
	inline void set_U3CLastRaycastHitU3Ek__BackingField_4(MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00  value)
	{
		___U3CLastRaycastHitU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastRaycastHitU3Ek__BackingField_4))->___transform_7), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastRaycastHitU3Ek__BackingField_4))->___collider_10), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CLastGraphicsRaycastResultU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316, ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CLastGraphicsRaycastResultU3Ek__BackingField_5() const { return ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CLastGraphicsRaycastResultU3Ek__BackingField_5() { return &___U3CLastGraphicsRaycastResultU3Ek__BackingField_5; }
	inline void set_U3CLastGraphicsRaycastResultU3Ek__BackingField_5(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CLastGraphicsRaycastResultU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastGraphicsRaycastResultU3Ek__BackingField_5))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastGraphicsRaycastResultU3Ek__BackingField_5))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CPointLocalSpaceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316, ___U3CPointLocalSpaceU3Ek__BackingField_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPointLocalSpaceU3Ek__BackingField_6() const { return ___U3CPointLocalSpaceU3Ek__BackingField_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPointLocalSpaceU3Ek__BackingField_6() { return &___U3CPointLocalSpaceU3Ek__BackingField_6; }
	inline void set_U3CPointLocalSpaceU3Ek__BackingField_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPointLocalSpaceU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CNormalLocalSpaceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316, ___U3CNormalLocalSpaceU3Ek__BackingField_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CNormalLocalSpaceU3Ek__BackingField_7() const { return ___U3CNormalLocalSpaceU3Ek__BackingField_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CNormalLocalSpaceU3Ek__BackingField_7() { return &___U3CNormalLocalSpaceU3Ek__BackingField_7; }
	inline void set_U3CNormalLocalSpaceU3Ek__BackingField_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CNormalLocalSpaceU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316_marshaled_pinvoke
{
	float ___U3CRayDistanceU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointU3Ek__BackingField_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalU3Ek__BackingField_2;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CObjectU3Ek__BackingField_3;
	MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00_marshaled_pinvoke ___U3CLastRaycastHitU3Ek__BackingField_4;
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointLocalSpaceU3Ek__BackingField_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316_marshaled_com
{
	float ___U3CRayDistanceU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointU3Ek__BackingField_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalU3Ek__BackingField_2;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CObjectU3Ek__BackingField_3;
	MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00_marshaled_com ___U3CLastRaycastHitU3Ek__BackingField_4;
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointLocalSpaceU3Ek__BackingField_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};

// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.GenericPointer
struct GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.GenericPointer::controller
	RuntimeObject* ___controller_0;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.GenericPointer::<PointerId>k__BackingField
	uint32_t ___U3CPointerIdU3Ek__BackingField_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.GenericPointer::<PointerName>k__BackingField
	String_t* ___U3CPointerNameU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.GenericPointer::inputSourceParent
	RuntimeObject* ___inputSourceParent_3;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.GenericPointer::<BaseCursor>k__BackingField
	RuntimeObject* ___U3CBaseCursorU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Input.ICursorModifier Microsoft.MixedReality.Toolkit.Input.GenericPointer::<CursorModifier>k__BackingField
	RuntimeObject* ___U3CCursorModifierU3Ek__BackingField_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GenericPointer::isInteractionEnabled
	bool ___isInteractionEnabled_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GenericPointer::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GenericPointer::<IsFocusLocked>k__BackingField
	bool ___U3CIsFocusLockedU3Ek__BackingField_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GenericPointer::<IsTargetPositionLockedOnFocusLock>k__BackingField
	bool ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GenericPointer::<PointerExtent>k__BackingField
	float ___U3CPointerExtentU3Ek__BackingField_10;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.GenericPointer::<Rays>k__BackingField
	RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7* ___U3CRaysU3Ek__BackingField_11;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Input.GenericPointer::<PrioritizedLayerMasksOverride>k__BackingField
	LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler Microsoft.MixedReality.Toolkit.Input.GenericPointer::<FocusTarget>k__BackingField
	RuntimeObject* ___U3CFocusTargetU3Ek__BackingField_13;
	// Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.GenericPointer::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_14;
	// Microsoft.MixedReality.Toolkit.Physics.IBaseRayStabilizer Microsoft.MixedReality.Toolkit.Input.GenericPointer::<RayStabilizer>k__BackingField
	RuntimeObject* ___U3CRayStabilizerU3Ek__BackingField_15;
	// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Input.GenericPointer::<SceneQueryType>k__BackingField
	int32_t ___U3CSceneQueryTypeU3Ek__BackingField_16;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GenericPointer::<SphereCastRadius>k__BackingField
	float ___U3CSphereCastRadiusU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_controller_0() { return static_cast<int32_t>(offsetof(GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984, ___controller_0)); }
	inline RuntimeObject* get_controller_0() const { return ___controller_0; }
	inline RuntimeObject** get_address_of_controller_0() { return &___controller_0; }
	inline void set_controller_0(RuntimeObject* value)
	{
		___controller_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPointerIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984, ___U3CPointerIdU3Ek__BackingField_1)); }
	inline uint32_t get_U3CPointerIdU3Ek__BackingField_1() const { return ___U3CPointerIdU3Ek__BackingField_1; }
	inline uint32_t* get_address_of_U3CPointerIdU3Ek__BackingField_1() { return &___U3CPointerIdU3Ek__BackingField_1; }
	inline void set_U3CPointerIdU3Ek__BackingField_1(uint32_t value)
	{
		___U3CPointerIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPointerNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984, ___U3CPointerNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CPointerNameU3Ek__BackingField_2() const { return ___U3CPointerNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CPointerNameU3Ek__BackingField_2() { return &___U3CPointerNameU3Ek__BackingField_2; }
	inline void set_U3CPointerNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CPointerNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerNameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_inputSourceParent_3() { return static_cast<int32_t>(offsetof(GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984, ___inputSourceParent_3)); }
	inline RuntimeObject* get_inputSourceParent_3() const { return ___inputSourceParent_3; }
	inline RuntimeObject** get_address_of_inputSourceParent_3() { return &___inputSourceParent_3; }
	inline void set_inputSourceParent_3(RuntimeObject* value)
	{
		___inputSourceParent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSourceParent_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBaseCursorU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984, ___U3CBaseCursorU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CBaseCursorU3Ek__BackingField_4() const { return ___U3CBaseCursorU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CBaseCursorU3Ek__BackingField_4() { return &___U3CBaseCursorU3Ek__BackingField_4; }
	inline void set_U3CBaseCursorU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CBaseCursorU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBaseCursorU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCursorModifierU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984, ___U3CCursorModifierU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CCursorModifierU3Ek__BackingField_5() const { return ___U3CCursorModifierU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CCursorModifierU3Ek__BackingField_5() { return &___U3CCursorModifierU3Ek__BackingField_5; }
	inline void set_U3CCursorModifierU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CCursorModifierU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCursorModifierU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_isInteractionEnabled_6() { return static_cast<int32_t>(offsetof(GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984, ___isInteractionEnabled_6)); }
	inline bool get_isInteractionEnabled_6() const { return ___isInteractionEnabled_6; }
	inline bool* get_address_of_isInteractionEnabled_6() { return &___isInteractionEnabled_6; }
	inline void set_isInteractionEnabled_6(bool value)
	{
		___isInteractionEnabled_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984, ___U3CIsActiveU3Ek__BackingField_7)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_7() const { return ___U3CIsActiveU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_7() { return &___U3CIsActiveU3Ek__BackingField_7; }
	inline void set_U3CIsActiveU3Ek__BackingField_7(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsFocusLockedU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984, ___U3CIsFocusLockedU3Ek__BackingField_8)); }
	inline bool get_U3CIsFocusLockedU3Ek__BackingField_8() const { return ___U3CIsFocusLockedU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsFocusLockedU3Ek__BackingField_8() { return &___U3CIsFocusLockedU3Ek__BackingField_8; }
	inline void set_U3CIsFocusLockedU3Ek__BackingField_8(bool value)
	{
		___U3CIsFocusLockedU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984, ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9)); }
	inline bool get_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9() const { return ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9() { return &___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9; }
	inline void set_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9(bool value)
	{
		___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CPointerExtentU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984, ___U3CPointerExtentU3Ek__BackingField_10)); }
	inline float get_U3CPointerExtentU3Ek__BackingField_10() const { return ___U3CPointerExtentU3Ek__BackingField_10; }
	inline float* get_address_of_U3CPointerExtentU3Ek__BackingField_10() { return &___U3CPointerExtentU3Ek__BackingField_10; }
	inline void set_U3CPointerExtentU3Ek__BackingField_10(float value)
	{
		___U3CPointerExtentU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CRaysU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984, ___U3CRaysU3Ek__BackingField_11)); }
	inline RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7* get_U3CRaysU3Ek__BackingField_11() const { return ___U3CRaysU3Ek__BackingField_11; }
	inline RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7** get_address_of_U3CRaysU3Ek__BackingField_11() { return &___U3CRaysU3Ek__BackingField_11; }
	inline void set_U3CRaysU3Ek__BackingField_11(RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7* value)
	{
		___U3CRaysU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRaysU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984, ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12)); }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* get_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12() const { return ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12; }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F** get_address_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12() { return &___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12; }
	inline void set_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12(LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* value)
	{
		___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFocusTargetU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984, ___U3CFocusTargetU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CFocusTargetU3Ek__BackingField_13() const { return ___U3CFocusTargetU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CFocusTargetU3Ek__BackingField_13() { return &___U3CFocusTargetU3Ek__BackingField_13; }
	inline void set_U3CFocusTargetU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CFocusTargetU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFocusTargetU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984, ___U3CResultU3Ek__BackingField_14)); }
	inline RuntimeObject* get_U3CResultU3Ek__BackingField_14() const { return ___U3CResultU3Ek__BackingField_14; }
	inline RuntimeObject** get_address_of_U3CResultU3Ek__BackingField_14() { return &___U3CResultU3Ek__BackingField_14; }
	inline void set_U3CResultU3Ek__BackingField_14(RuntimeObject* value)
	{
		___U3CResultU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRayStabilizerU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984, ___U3CRayStabilizerU3Ek__BackingField_15)); }
	inline RuntimeObject* get_U3CRayStabilizerU3Ek__BackingField_15() const { return ___U3CRayStabilizerU3Ek__BackingField_15; }
	inline RuntimeObject** get_address_of_U3CRayStabilizerU3Ek__BackingField_15() { return &___U3CRayStabilizerU3Ek__BackingField_15; }
	inline void set_U3CRayStabilizerU3Ek__BackingField_15(RuntimeObject* value)
	{
		___U3CRayStabilizerU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRayStabilizerU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSceneQueryTypeU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984, ___U3CSceneQueryTypeU3Ek__BackingField_16)); }
	inline int32_t get_U3CSceneQueryTypeU3Ek__BackingField_16() const { return ___U3CSceneQueryTypeU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CSceneQueryTypeU3Ek__BackingField_16() { return &___U3CSceneQueryTypeU3Ek__BackingField_16; }
	inline void set_U3CSceneQueryTypeU3Ek__BackingField_16(int32_t value)
	{
		___U3CSceneQueryTypeU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CSphereCastRadiusU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984, ___U3CSphereCastRadiusU3Ek__BackingField_17)); }
	inline float get_U3CSphereCastRadiusU3Ek__BackingField_17() const { return ___U3CSphereCastRadiusU3Ek__BackingField_17; }
	inline float* get_address_of_U3CSphereCastRadiusU3Ek__BackingField_17() { return &___U3CSphereCastRadiusU3Ek__BackingField_17; }
	inline void set_U3CSphereCastRadiusU3Ek__BackingField_17(float value)
	{
		___U3CSphereCastRadiusU3Ek__BackingField_17 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult
struct PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::raycastHit
	MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00  ___raycastHit_0;
	// UnityEngine.EventSystems.RaycastResult Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::graphicsRaycastResult
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___graphicsRaycastResult_1;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::hitObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hitObject_2;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::hitPointOnObject
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitPointOnObject_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::hitNormalOnObject
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitNormalOnObject_4;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::ray
	RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E  ___ray_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::rayStepIndex
	int32_t ___rayStepIndex_6;
	// System.Single Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::rayDistance
	float ___rayDistance_7;

public:
	inline static int32_t get_offset_of_raycastHit_0() { return static_cast<int32_t>(offsetof(PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728, ___raycastHit_0)); }
	inline MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00  get_raycastHit_0() const { return ___raycastHit_0; }
	inline MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00 * get_address_of_raycastHit_0() { return &___raycastHit_0; }
	inline void set_raycastHit_0(MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00  value)
	{
		___raycastHit_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___raycastHit_0))->___transform_7), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___raycastHit_0))->___collider_10), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_graphicsRaycastResult_1() { return static_cast<int32_t>(offsetof(PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728, ___graphicsRaycastResult_1)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_graphicsRaycastResult_1() const { return ___graphicsRaycastResult_1; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_graphicsRaycastResult_1() { return &___graphicsRaycastResult_1; }
	inline void set_graphicsRaycastResult_1(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___graphicsRaycastResult_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___graphicsRaycastResult_1))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___graphicsRaycastResult_1))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hitObject_2() { return static_cast<int32_t>(offsetof(PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728, ___hitObject_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hitObject_2() const { return ___hitObject_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hitObject_2() { return &___hitObject_2; }
	inline void set_hitObject_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hitObject_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitObject_2), (void*)value);
	}

	inline static int32_t get_offset_of_hitPointOnObject_3() { return static_cast<int32_t>(offsetof(PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728, ___hitPointOnObject_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_hitPointOnObject_3() const { return ___hitPointOnObject_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_hitPointOnObject_3() { return &___hitPointOnObject_3; }
	inline void set_hitPointOnObject_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___hitPointOnObject_3 = value;
	}

	inline static int32_t get_offset_of_hitNormalOnObject_4() { return static_cast<int32_t>(offsetof(PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728, ___hitNormalOnObject_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_hitNormalOnObject_4() const { return ___hitNormalOnObject_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_hitNormalOnObject_4() { return &___hitNormalOnObject_4; }
	inline void set_hitNormalOnObject_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___hitNormalOnObject_4 = value;
	}

	inline static int32_t get_offset_of_ray_5() { return static_cast<int32_t>(offsetof(PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728, ___ray_5)); }
	inline RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E  get_ray_5() const { return ___ray_5; }
	inline RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E * get_address_of_ray_5() { return &___ray_5; }
	inline void set_ray_5(RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E  value)
	{
		___ray_5 = value;
	}

	inline static int32_t get_offset_of_rayStepIndex_6() { return static_cast<int32_t>(offsetof(PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728, ___rayStepIndex_6)); }
	inline int32_t get_rayStepIndex_6() const { return ___rayStepIndex_6; }
	inline int32_t* get_address_of_rayStepIndex_6() { return &___rayStepIndex_6; }
	inline void set_rayStepIndex_6(int32_t value)
	{
		___rayStepIndex_6 = value;
	}

	inline static int32_t get_offset_of_rayDistance_7() { return static_cast<int32_t>(offsetof(PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728, ___rayDistance_7)); }
	inline float get_rayDistance_7() const { return ___rayDistance_7; }
	inline float* get_address_of_rayDistance_7() { return &___rayDistance_7; }
	inline void set_rayDistance_7(float value)
	{
		___rayDistance_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences
struct PointerPreferences_t558D69982C2798201BE66A1A431423272D886765  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::<InputSourceType>k__BackingField
	int32_t ___U3CInputSourceTypeU3Ek__BackingField_0;
	// System.Type Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::<PointerType>k__BackingField
	Type_t * ___U3CPointerTypeU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::<Left>k__BackingField
	int32_t ___U3CLeftU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::<Right>k__BackingField
	int32_t ___U3CRightU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::<Other>k__BackingField
	int32_t ___U3COtherU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInputSourceTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PointerPreferences_t558D69982C2798201BE66A1A431423272D886765, ___U3CInputSourceTypeU3Ek__BackingField_0)); }
	inline int32_t get_U3CInputSourceTypeU3Ek__BackingField_0() const { return ___U3CInputSourceTypeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CInputSourceTypeU3Ek__BackingField_0() { return &___U3CInputSourceTypeU3Ek__BackingField_0; }
	inline void set_U3CInputSourceTypeU3Ek__BackingField_0(int32_t value)
	{
		___U3CInputSourceTypeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CPointerTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PointerPreferences_t558D69982C2798201BE66A1A431423272D886765, ___U3CPointerTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CPointerTypeU3Ek__BackingField_1() const { return ___U3CPointerTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CPointerTypeU3Ek__BackingField_1() { return &___U3CPointerTypeU3Ek__BackingField_1; }
	inline void set_U3CPointerTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CPointerTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLeftU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerPreferences_t558D69982C2798201BE66A1A431423272D886765, ___U3CLeftU3Ek__BackingField_2)); }
	inline int32_t get_U3CLeftU3Ek__BackingField_2() const { return ___U3CLeftU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CLeftU3Ek__BackingField_2() { return &___U3CLeftU3Ek__BackingField_2; }
	inline void set_U3CLeftU3Ek__BackingField_2(int32_t value)
	{
		___U3CLeftU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CRightU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PointerPreferences_t558D69982C2798201BE66A1A431423272D886765, ___U3CRightU3Ek__BackingField_3)); }
	inline int32_t get_U3CRightU3Ek__BackingField_3() const { return ___U3CRightU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CRightU3Ek__BackingField_3() { return &___U3CRightU3Ek__BackingField_3; }
	inline void set_U3CRightU3Ek__BackingField_3(int32_t value)
	{
		___U3CRightU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3COtherU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerPreferences_t558D69982C2798201BE66A1A431423272D886765, ___U3COtherU3Ek__BackingField_4)); }
	inline int32_t get_U3COtherU3Ek__BackingField_4() const { return ___U3COtherU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3COtherU3Ek__BackingField_4() { return &___U3COtherU3Ek__BackingField_4; }
	inline void set_U3COtherU3Ek__BackingField_4(int32_t value)
	{
		___U3COtherU3Ek__BackingField_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__83
struct U3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__83::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__83::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Input.GazeProvider Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__83::<>4__this
	GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * ___U3CU3E4__this_2;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__83::<>7__wrap1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3E7__wrap1_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__83::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C, ___U3CU3E4__this_2)); }
	inline GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C, ___U3CU3E7__wrap1_3)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3E7__wrap1_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__69
struct U3CStartU3Ed__69_tA1C435686F9556734AB0B8A96F09E74431B6874B 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__69::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__69::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Input.GazeProvider Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__69::<>4__this
	GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__69::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__69_tA1C435686F9556734AB0B8A96F09E74431B6874B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__69_tA1C435686F9556734AB0B8A96F09E74431B6874B, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__69_tA1C435686F9556734AB0B8A96F09E74431B6874B, ___U3CU3E4__this_2)); }
	inline GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__69_tA1C435686F9556734AB0B8A96F09E74431B6874B, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2
struct U3CStartU3Ed__2_tE8EA292542AF4AAD6DF000683694ECE869CB2C4A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::<>4__this
	InputSystemGlobalHandlerListener_t843DD1A5D31A98462229555C6627F07324AD784B * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tE8EA292542AF4AAD6DF000683694ECE869CB2C4A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tE8EA292542AF4AAD6DF000683694ECE869CB2C4A, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tE8EA292542AF4AAD6DF000683694ECE869CB2C4A, ___U3CU3E4__this_2)); }
	inline InputSystemGlobalHandlerListener_t843DD1A5D31A98462229555C6627F07324AD784B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InputSystemGlobalHandlerListener_t843DD1A5D31A98462229555C6627F07324AD784B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InputSystemGlobalHandlerListener_t843DD1A5D31A98462229555C6627F07324AD784B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tE8EA292542AF4AAD6DF000683694ECE869CB2C4A, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2
struct U3CStartU3Ed__2_t7FE273F02D8FAC7B771B9CD0F2118F262D7E988F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::<>4__this
	InputSystemGlobalListener_t1A1940053C0B9BF9CC21346987EC30F514A066AD * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t7FE273F02D8FAC7B771B9CD0F2118F262D7E988F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t7FE273F02D8FAC7B771B9CD0F2118F262D7E988F, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t7FE273F02D8FAC7B771B9CD0F2118F262D7E988F, ___U3CU3E4__this_2)); }
	inline InputSystemGlobalListener_t1A1940053C0B9BF9CC21346987EC30F514A066AD * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InputSystemGlobalListener_t1A1940053C0B9BF9CC21346987EC30F514A066AD ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InputSystemGlobalListener_t1A1940053C0B9BF9CC21346987EC30F514A066AD * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t7FE273F02D8FAC7B771B9CD0F2118F262D7E988F, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16
struct U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>4__this
	MixedRealityInputModule_t49C8683CD8FCDD3D79B1DBADC47B0BE2FA7126DD * ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>7__wrap1
	Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB  ___U3CU3E7__wrap1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B, ___U3CU3E2__current_1)); }
	inline RuntimeObject* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B, ___U3CU3E4__this_3)); }
	inline MixedRealityInputModule_t49C8683CD8FCDD3D79B1DBADC47B0BE2FA7126DD * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline MixedRealityInputModule_t49C8683CD8FCDD3D79B1DBADC47B0BE2FA7126DD ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(MixedRealityInputModule_t49C8683CD8FCDD3D79B1DBADC47B0BE2FA7126DD * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_4))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData
struct PointerData_t8814E79B8DF54459590CDF91527B93920AF280C3  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::pointer
	RuntimeObject* ___pointer_0;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::lastMousePoint3d
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___lastMousePoint3d_1;
	// UnityEngine.EventSystems.PointerEventData/FramePressState Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::nextPressState
	int32_t ___nextPressState_2;
	// UnityEngine.EventSystems.PointerInputModule/MouseState Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::mouseState
	MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * ___mouseState_3;
	// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::eventDataLeft
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventDataLeft_4;
	// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::eventDataMiddle
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventDataMiddle_5;
	// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::eventDataRight
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventDataRight_6;

public:
	inline static int32_t get_offset_of_pointer_0() { return static_cast<int32_t>(offsetof(PointerData_t8814E79B8DF54459590CDF91527B93920AF280C3, ___pointer_0)); }
	inline RuntimeObject* get_pointer_0() const { return ___pointer_0; }
	inline RuntimeObject** get_address_of_pointer_0() { return &___pointer_0; }
	inline void set_pointer_0(RuntimeObject* value)
	{
		___pointer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointer_0), (void*)value);
	}

	inline static int32_t get_offset_of_lastMousePoint3d_1() { return static_cast<int32_t>(offsetof(PointerData_t8814E79B8DF54459590CDF91527B93920AF280C3, ___lastMousePoint3d_1)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_lastMousePoint3d_1() const { return ___lastMousePoint3d_1; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_lastMousePoint3d_1() { return &___lastMousePoint3d_1; }
	inline void set_lastMousePoint3d_1(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___lastMousePoint3d_1 = value;
	}

	inline static int32_t get_offset_of_nextPressState_2() { return static_cast<int32_t>(offsetof(PointerData_t8814E79B8DF54459590CDF91527B93920AF280C3, ___nextPressState_2)); }
	inline int32_t get_nextPressState_2() const { return ___nextPressState_2; }
	inline int32_t* get_address_of_nextPressState_2() { return &___nextPressState_2; }
	inline void set_nextPressState_2(int32_t value)
	{
		___nextPressState_2 = value;
	}

	inline static int32_t get_offset_of_mouseState_3() { return static_cast<int32_t>(offsetof(PointerData_t8814E79B8DF54459590CDF91527B93920AF280C3, ___mouseState_3)); }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * get_mouseState_3() const { return ___mouseState_3; }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 ** get_address_of_mouseState_3() { return &___mouseState_3; }
	inline void set_mouseState_3(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * value)
	{
		___mouseState_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseState_3), (void*)value);
	}

	inline static int32_t get_offset_of_eventDataLeft_4() { return static_cast<int32_t>(offsetof(PointerData_t8814E79B8DF54459590CDF91527B93920AF280C3, ___eventDataLeft_4)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventDataLeft_4() const { return ___eventDataLeft_4; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventDataLeft_4() { return &___eventDataLeft_4; }
	inline void set_eventDataLeft_4(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventDataLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventDataLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_eventDataMiddle_5() { return static_cast<int32_t>(offsetof(PointerData_t8814E79B8DF54459590CDF91527B93920AF280C3, ___eventDataMiddle_5)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventDataMiddle_5() const { return ___eventDataMiddle_5; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventDataMiddle_5() { return &___eventDataMiddle_5; }
	inline void set_eventDataMiddle_5(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventDataMiddle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventDataMiddle_5), (void*)value);
	}

	inline static int32_t get_offset_of_eventDataRight_6() { return static_cast<int32_t>(offsetof(PointerData_t8814E79B8DF54459590CDF91527B93920AF280C3, ___eventDataRight_6)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventDataRight_6() const { return ___eventDataRight_6; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventDataRight_6() { return &___eventDataRight_6; }
	inline void set_eventDataRight_6(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventDataRight_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventDataRight_6), (void*)value);
	}
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct BaseInputEventData_t528914D04060771DC6666A9828E503AE80EFF475  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  ___U3CMixedRealityInputActionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseInputEventData_t528914D04060771DC6666A9828E503AE80EFF475, ___U3CEventTimeU3Ek__BackingField_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CEventTimeU3Ek__BackingField_2() const { return ___U3CEventTimeU3Ek__BackingField_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CEventTimeU3Ek__BackingField_2() { return &___U3CEventTimeU3Ek__BackingField_2; }
	inline void set_U3CEventTimeU3Ek__BackingField_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CEventTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseInputEventData_t528914D04060771DC6666A9828E503AE80EFF475, ___U3CInputSourceU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_3() const { return ___U3CInputSourceU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_3() { return &___U3CInputSourceU3Ek__BackingField_3; }
	inline void set_U3CInputSourceU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseInputEventData_t528914D04060771DC6666A9828E503AE80EFF475, ___U3CMixedRealityInputActionU3Ek__BackingField_4)); }
	inline MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  get_U3CMixedRealityInputActionU3Ek__BackingField_4() const { return ___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396 * get_address_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return &___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline void set_U3CMixedRealityInputActionU3Ek__BackingField_4(MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  value)
	{
		___U3CMixedRealityInputActionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CMixedRealityInputActionU3Ek__BackingField_4))->___description_2), (void*)NULL);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizationKey
	String_t* ___localizationKey_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizedKeyword
	String_t* ___localizedKeyword_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyword
	String_t* ___keyword_2;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyCode
	int32_t ___keyCode_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SpeechCommands::action
	MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  ___action_4;

public:
	inline static int32_t get_offset_of_localizationKey_0() { return static_cast<int32_t>(offsetof(SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56, ___localizationKey_0)); }
	inline String_t* get_localizationKey_0() const { return ___localizationKey_0; }
	inline String_t** get_address_of_localizationKey_0() { return &___localizationKey_0; }
	inline void set_localizationKey_0(String_t* value)
	{
		___localizationKey_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizationKey_0), (void*)value);
	}

	inline static int32_t get_offset_of_localizedKeyword_1() { return static_cast<int32_t>(offsetof(SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56, ___localizedKeyword_1)); }
	inline String_t* get_localizedKeyword_1() const { return ___localizedKeyword_1; }
	inline String_t** get_address_of_localizedKeyword_1() { return &___localizedKeyword_1; }
	inline void set_localizedKeyword_1(String_t* value)
	{
		___localizedKeyword_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizedKeyword_1), (void*)value);
	}

	inline static int32_t get_offset_of_keyword_2() { return static_cast<int32_t>(offsetof(SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56, ___keyword_2)); }
	inline String_t* get_keyword_2() const { return ___keyword_2; }
	inline String_t** get_address_of_keyword_2() { return &___keyword_2; }
	inline void set_keyword_2(String_t* value)
	{
		___keyword_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyword_2), (void*)value);
	}

	inline static int32_t get_offset_of_keyCode_3() { return static_cast<int32_t>(offsetof(SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56, ___keyCode_3)); }
	inline int32_t get_keyCode_3() const { return ___keyCode_3; }
	inline int32_t* get_address_of_keyCode_3() { return &___keyCode_3; }
	inline void set_keyCode_3(int32_t value)
	{
		___keyCode_3 = value;
	}

	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56, ___action_4)); }
	inline MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  get_action_4() const { return ___action_4; }
	inline MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396 * get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___action_4))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56_marshaled_pinvoke
{
	char* ___localizationKey_0;
	char* ___localizedKeyword_1;
	char* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396_marshaled_pinvoke ___action_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56_marshaled_com
{
	Il2CppChar* ___localizationKey_0;
	Il2CppChar* ___localizedKeyword_1;
	Il2CppChar* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396_marshaled_com ___action_4;
};

// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData
struct PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::Pointer
	RuntimeObject* ___Pointer_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::<StartPoint>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CStartPointU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::focusDetails
	FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316  ___focusDetails_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::<PreviousPointerTarget>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CPreviousPointerTargetU3Ek__BackingField_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::<RayStepIndex>k__BackingField
	int32_t ___U3CRayStepIndexU3Ek__BackingField_4;
	// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::graphicData
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___graphicData_5;

public:
	inline static int32_t get_offset_of_Pointer_0() { return static_cast<int32_t>(offsetof(PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213, ___Pointer_0)); }
	inline RuntimeObject* get_Pointer_0() const { return ___Pointer_0; }
	inline RuntimeObject** get_address_of_Pointer_0() { return &___Pointer_0; }
	inline void set_Pointer_0(RuntimeObject* value)
	{
		___Pointer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Pointer_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStartPointU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213, ___U3CStartPointU3Ek__BackingField_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CStartPointU3Ek__BackingField_1() const { return ___U3CStartPointU3Ek__BackingField_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CStartPointU3Ek__BackingField_1() { return &___U3CStartPointU3Ek__BackingField_1; }
	inline void set_U3CStartPointU3Ek__BackingField_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CStartPointU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_focusDetails_2() { return static_cast<int32_t>(offsetof(PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213, ___focusDetails_2)); }
	inline FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316  get_focusDetails_2() const { return ___focusDetails_2; }
	inline FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * get_address_of_focusDetails_2() { return &___focusDetails_2; }
	inline void set_focusDetails_2(FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316  value)
	{
		___focusDetails_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___focusDetails_2))->___U3CObjectU3Ek__BackingField_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___focusDetails_2))->___U3CLastRaycastHitU3Ek__BackingField_4))->___transform_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___focusDetails_2))->___U3CLastRaycastHitU3Ek__BackingField_4))->___collider_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___focusDetails_2))->___U3CLastGraphicsRaycastResultU3Ek__BackingField_5))->___m_GameObject_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___focusDetails_2))->___U3CLastGraphicsRaycastResultU3Ek__BackingField_5))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CPreviousPointerTargetU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213, ___U3CPreviousPointerTargetU3Ek__BackingField_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CPreviousPointerTargetU3Ek__BackingField_3() const { return ___U3CPreviousPointerTargetU3Ek__BackingField_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CPreviousPointerTargetU3Ek__BackingField_3() { return &___U3CPreviousPointerTargetU3Ek__BackingField_3; }
	inline void set_U3CPreviousPointerTargetU3Ek__BackingField_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CPreviousPointerTargetU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPreviousPointerTargetU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRayStepIndexU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213, ___U3CRayStepIndexU3Ek__BackingField_4)); }
	inline int32_t get_U3CRayStepIndexU3Ek__BackingField_4() const { return ___U3CRayStepIndexU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CRayStepIndexU3Ek__BackingField_4() { return &___U3CRayStepIndexU3Ek__BackingField_4; }
	inline void set_U3CRayStepIndexU3Ek__BackingField_4(int32_t value)
	{
		___U3CRayStepIndexU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_graphicData_5() { return static_cast<int32_t>(offsetof(PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213, ___graphicData_5)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_graphicData_5() const { return ___graphicData_5; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_graphicData_5() { return &___graphicData_5; }
	inline void set_graphicData_5(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___graphicData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphicData_5), (void*)value);
	}
};

struct PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::UpdateHitPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateHitPerfMarker_6;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::UpdateFocusLockedHitPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateFocusLockedHitPerfMarker_7;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::ResetFocusedObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResetFocusedObjectPerfMarker_8;

public:
	inline static int32_t get_offset_of_UpdateHitPerfMarker_6() { return static_cast<int32_t>(offsetof(PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_StaticFields, ___UpdateHitPerfMarker_6)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateHitPerfMarker_6() const { return ___UpdateHitPerfMarker_6; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateHitPerfMarker_6() { return &___UpdateHitPerfMarker_6; }
	inline void set_UpdateHitPerfMarker_6(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateHitPerfMarker_6 = value;
	}

	inline static int32_t get_offset_of_UpdateFocusLockedHitPerfMarker_7() { return static_cast<int32_t>(offsetof(PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_StaticFields, ___UpdateFocusLockedHitPerfMarker_7)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateFocusLockedHitPerfMarker_7() const { return ___UpdateFocusLockedHitPerfMarker_7; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateFocusLockedHitPerfMarker_7() { return &___UpdateFocusLockedHitPerfMarker_7; }
	inline void set_UpdateFocusLockedHitPerfMarker_7(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateFocusLockedHitPerfMarker_7 = value;
	}

	inline static int32_t get_offset_of_ResetFocusedObjectPerfMarker_8() { return static_cast<int32_t>(offsetof(PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_StaticFields, ___ResetFocusedObjectPerfMarker_8)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResetFocusedObjectPerfMarker_8() const { return ___ResetFocusedObjectPerfMarker_8; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResetFocusedObjectPerfMarker_8() { return &___ResetFocusedObjectPerfMarker_8; }
	inline void set_ResetFocusedObjectPerfMarker_8(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResetFocusedObjectPerfMarker_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer
struct InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71  : public GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984
{
public:
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::gazeTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___gazeTransform_18;
	// Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::stabilizer
	BaseRayStabilizer_t17F65400739179C021C592F65676659FC7CA2DF7 * ___stabilizer_19;
	// Microsoft.MixedReality.Toolkit.Input.GazeProvider Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::gazeProvider
	GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * ___gazeProvider_20;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_21;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::<InputSourceParent>k__BackingField
	RuntimeObject* ___U3CInputSourceParentU3Ek__BackingField_22;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::pointerExtent
	float ___pointerExtent_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::isDown
	bool ___isDown_24;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::currentInputSource
	RuntimeObject* ___currentInputSource_25;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::currentHandedness
	uint8_t ___currentHandedness_26;

public:
	inline static int32_t get_offset_of_gazeTransform_18() { return static_cast<int32_t>(offsetof(InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71, ___gazeTransform_18)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_gazeTransform_18() const { return ___gazeTransform_18; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_gazeTransform_18() { return &___gazeTransform_18; }
	inline void set_gazeTransform_18(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___gazeTransform_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeTransform_18), (void*)value);
	}

	inline static int32_t get_offset_of_stabilizer_19() { return static_cast<int32_t>(offsetof(InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71, ___stabilizer_19)); }
	inline BaseRayStabilizer_t17F65400739179C021C592F65676659FC7CA2DF7 * get_stabilizer_19() const { return ___stabilizer_19; }
	inline BaseRayStabilizer_t17F65400739179C021C592F65676659FC7CA2DF7 ** get_address_of_stabilizer_19() { return &___stabilizer_19; }
	inline void set_stabilizer_19(BaseRayStabilizer_t17F65400739179C021C592F65676659FC7CA2DF7 * value)
	{
		___stabilizer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stabilizer_19), (void*)value);
	}

	inline static int32_t get_offset_of_gazeProvider_20() { return static_cast<int32_t>(offsetof(InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71, ___gazeProvider_20)); }
	inline GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * get_gazeProvider_20() const { return ___gazeProvider_20; }
	inline GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 ** get_address_of_gazeProvider_20() { return &___gazeProvider_20; }
	inline void set_gazeProvider_20(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * value)
	{
		___gazeProvider_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeProvider_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71, ___U3CControllerU3Ek__BackingField_21)); }
	inline RuntimeObject* get_U3CControllerU3Ek__BackingField_21() const { return ___U3CControllerU3Ek__BackingField_21; }
	inline RuntimeObject** get_address_of_U3CControllerU3Ek__BackingField_21() { return &___U3CControllerU3Ek__BackingField_21; }
	inline void set_U3CControllerU3Ek__BackingField_21(RuntimeObject* value)
	{
		___U3CControllerU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInputSourceParentU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71, ___U3CInputSourceParentU3Ek__BackingField_22)); }
	inline RuntimeObject* get_U3CInputSourceParentU3Ek__BackingField_22() const { return ___U3CInputSourceParentU3Ek__BackingField_22; }
	inline RuntimeObject** get_address_of_U3CInputSourceParentU3Ek__BackingField_22() { return &___U3CInputSourceParentU3Ek__BackingField_22; }
	inline void set_U3CInputSourceParentU3Ek__BackingField_22(RuntimeObject* value)
	{
		___U3CInputSourceParentU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceParentU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_pointerExtent_23() { return static_cast<int32_t>(offsetof(InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71, ___pointerExtent_23)); }
	inline float get_pointerExtent_23() const { return ___pointerExtent_23; }
	inline float* get_address_of_pointerExtent_23() { return &___pointerExtent_23; }
	inline void set_pointerExtent_23(float value)
	{
		___pointerExtent_23 = value;
	}

	inline static int32_t get_offset_of_isDown_24() { return static_cast<int32_t>(offsetof(InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71, ___isDown_24)); }
	inline bool get_isDown_24() const { return ___isDown_24; }
	inline bool* get_address_of_isDown_24() { return &___isDown_24; }
	inline void set_isDown_24(bool value)
	{
		___isDown_24 = value;
	}

	inline static int32_t get_offset_of_currentInputSource_25() { return static_cast<int32_t>(offsetof(InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71, ___currentInputSource_25)); }
	inline RuntimeObject* get_currentInputSource_25() const { return ___currentInputSource_25; }
	inline RuntimeObject** get_address_of_currentInputSource_25() { return &___currentInputSource_25; }
	inline void set_currentInputSource_25(RuntimeObject* value)
	{
		___currentInputSource_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentInputSource_25), (void*)value);
	}

	inline static int32_t get_offset_of_currentHandedness_26() { return static_cast<int32_t>(offsetof(InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71, ___currentHandedness_26)); }
	inline uint8_t get_currentHandedness_26() const { return ___currentHandedness_26; }
	inline uint8_t* get_address_of_currentHandedness_26() { return &___currentHandedness_26; }
	inline void set_currentHandedness_26(uint8_t value)
	{
		___currentHandedness_26 = value;
	}
};

struct InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPreSceneQueryPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnPreSceneQueryPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPostSceneQueryPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnPostSceneQueryPerfMarker_28;

public:
	inline static int32_t get_offset_of_OnPreSceneQueryPerfMarker_27() { return static_cast<int32_t>(offsetof(InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71_StaticFields, ___OnPreSceneQueryPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnPreSceneQueryPerfMarker_27() const { return ___OnPreSceneQueryPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnPreSceneQueryPerfMarker_27() { return &___OnPreSceneQueryPerfMarker_27; }
	inline void set_OnPreSceneQueryPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnPreSceneQueryPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_OnPostSceneQueryPerfMarker_28() { return static_cast<int32_t>(offsetof(InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71_StaticFields, ___OnPostSceneQueryPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnPostSceneQueryPerfMarker_28() const { return ___OnPostSceneQueryPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnPostSceneQueryPerfMarker_28() { return &___OnPostSceneQueryPerfMarker_28; }
	inline void set_OnPostSceneQueryPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnPostSceneQueryPerfMarker_28 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4
struct U3CEnsureInputSystemValidU3Ed__4_t4726393E49A24D484F82BE984437137A0AEEF5C7 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Object Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::<>u__1
	RuntimeObject * ___U3CU3Eu__1_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_t4726393E49A24D484F82BE984437137A0AEEF5C7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_t4726393E49A24D484F82BE984437137A0AEEF5C7, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_2() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_t4726393E49A24D484F82BE984437137A0AEEF5C7, ___U3CU3Eu__1_2)); }
	inline RuntimeObject * get_U3CU3Eu__1_2() const { return ___U3CU3Eu__1_2; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_2() { return &___U3CU3Eu__1_2; }
	inline void set_U3CU3Eu__1_2(RuntimeObject * value)
	{
		___U3CU3Eu__1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4
struct U3CEnsureInputSystemValidU3Ed__4_t55B2AC3258CED626D50DC9BA690EBB08390467D6 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Object Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::<>u__1
	RuntimeObject * ___U3CU3Eu__1_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_t55B2AC3258CED626D50DC9BA690EBB08390467D6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_t55B2AC3258CED626D50DC9BA690EBB08390467D6, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_2() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_t55B2AC3258CED626D50DC9BA690EBB08390467D6, ___U3CU3Eu__1_2)); }
	inline RuntimeObject * get_U3CU3Eu__1_2() const { return ___U3CU3Eu__1_2; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_2() { return &___U3CU3Eu__1_2; }
	inline void set_U3CU3Eu__1_2(RuntimeObject * value)
	{
		___U3CU3Eu__1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.DictationEventData
struct DictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37  : public BaseInputEventData_t528914D04060771DC6666A9828E503AE80EFF475
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.DictationEventData::<DictationResult>k__BackingField
	String_t* ___U3CDictationResultU3Ek__BackingField_5;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Input.DictationEventData::<DictationAudioClip>k__BackingField
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___U3CDictationAudioClipU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDictationResultU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37, ___U3CDictationResultU3Ek__BackingField_5)); }
	inline String_t* get_U3CDictationResultU3Ek__BackingField_5() const { return ___U3CDictationResultU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CDictationResultU3Ek__BackingField_5() { return &___U3CDictationResultU3Ek__BackingField_5; }
	inline void set_U3CDictationResultU3Ek__BackingField_5(String_t* value)
	{
		___U3CDictationResultU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDictationResultU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDictationAudioClipU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37, ___U3CDictationAudioClipU3Ek__BackingField_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_U3CDictationAudioClipU3Ek__BackingField_6() const { return ___U3CDictationAudioClipU3Ek__BackingField_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_U3CDictationAudioClipU3Ek__BackingField_6() { return &___U3CDictationAudioClipU3Ek__BackingField_6; }
	inline void set_U3CDictationAudioClipU3Ek__BackingField_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___U3CDictationAudioClipU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDictationAudioClipU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE  : public BaseInputEventData_t528914D04060771DC6666A9828E503AE80EFF475
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.InputEventData::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CHandednessU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE, ___U3CHandednessU3Ek__BackingField_5)); }
	inline uint8_t get_U3CHandednessU3Ek__BackingField_5() const { return ___U3CHandednessU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CHandednessU3Ek__BackingField_5() { return &___U3CHandednessU3Ek__BackingField_5; }
	inline void set_U3CHandednessU3Ek__BackingField_5(uint8_t value)
	{
		___U3CHandednessU3Ek__BackingField_5 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct SourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4  : public BaseInputEventData_t528914D04060771DC6666A9828E503AE80EFF475
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.SourceStateEventData::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4, ___U3CControllerU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CControllerU3Ek__BackingField_5() const { return ___U3CControllerU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CControllerU3Ek__BackingField_5() { return &___U3CControllerU3Ek__BackingField_5; }
	inline void set_U3CControllerU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CControllerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46  : public BaseInputEventData_t528914D04060771DC6666A9828E503AE80EFF475
{
public:
	// System.TimeSpan Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<PhraseDuration>k__BackingField
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___U3CPhraseDurationU3Ek__BackingField_5;
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<PhraseStartTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CPhraseStartTimeU3Ek__BackingField_6;
	// Microsoft.MixedReality.Toolkit.Input.SpeechCommands Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<Command>k__BackingField
	SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56  ___U3CCommandU3Ek__BackingField_7;
	// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<Confidence>k__BackingField
	int32_t ___U3CConfidenceU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CPhraseDurationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46, ___U3CPhraseDurationU3Ek__BackingField_5)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_U3CPhraseDurationU3Ek__BackingField_5() const { return ___U3CPhraseDurationU3Ek__BackingField_5; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_U3CPhraseDurationU3Ek__BackingField_5() { return &___U3CPhraseDurationU3Ek__BackingField_5; }
	inline void set_U3CPhraseDurationU3Ek__BackingField_5(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___U3CPhraseDurationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CPhraseStartTimeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46, ___U3CPhraseStartTimeU3Ek__BackingField_6)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CPhraseStartTimeU3Ek__BackingField_6() const { return ___U3CPhraseStartTimeU3Ek__BackingField_6; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CPhraseStartTimeU3Ek__BackingField_6() { return &___U3CPhraseStartTimeU3Ek__BackingField_6; }
	inline void set_U3CPhraseStartTimeU3Ek__BackingField_6(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CPhraseStartTimeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CCommandU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46, ___U3CCommandU3Ek__BackingField_7)); }
	inline SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56  get_U3CCommandU3Ek__BackingField_7() const { return ___U3CCommandU3Ek__BackingField_7; }
	inline SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56 * get_address_of_U3CCommandU3Ek__BackingField_7() { return &___U3CCommandU3Ek__BackingField_7; }
	inline void set_U3CCommandU3Ek__BackingField_7(SpeechCommands_t3A470F00A50CA11C7E02C80F373115C83C1F0E56  value)
	{
		___U3CCommandU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_7))->___localizationKey_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_7))->___localizedKeyword_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_7))->___keyword_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCommandU3Ek__BackingField_7))->___action_4))->___description_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CConfidenceU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46, ___U3CConfidenceU3Ek__BackingField_8)); }
	inline int32_t get_U3CConfidenceU3Ek__BackingField_8() const { return ___U3CConfidenceU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CConfidenceU3Ek__BackingField_8() { return &___U3CConfidenceU3Ek__BackingField_8; }
	inline void set_U3CConfidenceU3Ek__BackingField_8(int32_t value)
	{
		___U3CConfidenceU3Ek__BackingField_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct InputEventData_1_tC6CD5227DE30910A42F60E4D57C330946FA03FD2  : public InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	RuntimeObject* ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_tC6CD5227DE30910A42F60E4D57C330946FA03FD2, ___U3CInputDataU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputDataU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>
struct InputEventData_1_t80FAAC4573C5B66BBC88B94D530CDC46B4EECEE2  : public InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	HandMeshInfo_t3E6C810446969DE12D7A2ED8D370E4D12F5A2063 * ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t80FAAC4573C5B66BBC88B94D530CDC46B4EECEE2, ___U3CInputDataU3Ek__BackingField_6)); }
	inline HandMeshInfo_t3E6C810446969DE12D7A2ED8D370E4D12F5A2063 * get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline HandMeshInfo_t3E6C810446969DE12D7A2ED8D370E4D12F5A2063 ** get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(HandMeshInfo_t3E6C810446969DE12D7A2ED8D370E4D12F5A2063 * value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputDataU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct InputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F  : public InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8  ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F, ___U3CInputDataU3Ek__BackingField_6)); }
	inline MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8  get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8 * get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8  value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>
struct InputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057  : public InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057, ___U3CInputDataU3Ek__BackingField_6)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>
struct InputEventData_1_tE44B3E2DFC8CE21E8B2B2E3C0F9FAF7091F41D54  : public InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	float ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_tE44B3E2DFC8CE21E8B2B2E3C0F9FAF7091F41D54, ___U3CInputDataU3Ek__BackingField_6)); }
	inline float get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline float* get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(float value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>
struct InputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296  : public InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296, ___U3CInputDataU3Ek__BackingField_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>
struct InputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50  : public InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50, ___U3CInputDataU3Ek__BackingField_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct SourcePoseEventData_1_tE626A849E7457E2AE0456AFC30D610EC221959E1  : public SourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8  ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_tE626A849E7457E2AE0456AFC30D610EC221959E1, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8  get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8 * get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(MixedRealityPose_tC9CB7B8A0F0F105715ED7B07CDF10D9AF81EDBD8  value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>
struct SourcePoseEventData_1_t231D726E31121868C0276AFE9019E37C9E90D64E  : public SourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_t231D726E31121868C0276AFE9019E37C9E90D64E, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>
struct SourcePoseEventData_1_t4955807E7BF053B446583ED8BB34D8A1BE645DDF  : public SourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	int32_t ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_t4955807E7BF053B446583ED8BB34D8A1BE645DDF, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline int32_t get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(int32_t value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>
struct SourcePoseEventData_1_t3F40104911F5F86F88A46E3961EDD20ABDB3CFFD  : public SourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_t3F40104911F5F86F88A46E3961EDD20ABDB3CFFD, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>
struct SourcePoseEventData_1_t348DE491DFFC276DC552C0DF33FA0331F70B67D2  : public SourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_t348DE491DFFC276DC552C0DF33FA0331F70B67D2, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener
struct InputSystemGlobalHandlerListener_t843DD1A5D31A98462229555C6627F07324AD784B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::lateInitialize
	bool ___lateInitialize_4;

public:
	inline static int32_t get_offset_of_lateInitialize_4() { return static_cast<int32_t>(offsetof(InputSystemGlobalHandlerListener_t843DD1A5D31A98462229555C6627F07324AD784B, ___lateInitialize_4)); }
	inline bool get_lateInitialize_4() const { return ___lateInitialize_4; }
	inline bool* get_address_of_lateInitialize_4() { return &___lateInitialize_4; }
	inline void set_lateInitialize_4(bool value)
	{
		___lateInitialize_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener
struct InputSystemGlobalListener_t1A1940053C0B9BF9CC21346987EC30F514A066AD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener::lateInitialize
	bool ___lateInitialize_4;

public:
	inline static int32_t get_offset_of_lateInitialize_4() { return static_cast<int32_t>(offsetof(InputSystemGlobalListener_t1A1940053C0B9BF9CC21346987EC30F514A066AD, ___lateInitialize_4)); }
	inline bool get_lateInitialize_4() const { return ___lateInitialize_4; }
	inline bool* get_address_of_lateInitialize_4() { return &___lateInitialize_4; }
	inline void set_lateInitialize_4(bool value)
	{
		___lateInitialize_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81  : public InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81, ___U3CPointerU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_6() const { return ___U3CPointerU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_6() { return &___U3CPointerU3Ek__BackingField_6; }
	inline void set_U3CPointerU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81, ___U3CCountU3Ek__BackingField_7)); }
	inline int32_t get_U3CCountU3Ek__BackingField_7() const { return ___U3CCountU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_7() { return &___U3CCountU3Ek__BackingField_7; }
	inline void set_U3CCountU3Ek__BackingField_7(int32_t value)
	{
		___U3CCountU3Ek__BackingField_7 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_DefaultInput_9;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_RaycastResultCache_4)); }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * get_m_RaycastResultCache_4() const { return ___m_RaycastResultCache_4; }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 ** get_address_of_m_RaycastResultCache_4() { return &___m_RaycastResultCache_4; }
	inline void set_m_RaycastResultCache_4(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * value)
	{
		___m_RaycastResultCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastResultCache_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_AxisEventData_5)); }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * get_m_AxisEventData_5() const { return ___m_AxisEventData_5; }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E ** get_address_of_m_AxisEventData_5() { return &___m_AxisEventData_5; }
	inline void set_m_AxisEventData_5(AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * value)
	{
		___m_AxisEventData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AxisEventData_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventSystem_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_EventSystem_6)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_6() const { return ___m_EventSystem_6; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_6() { return &___m_EventSystem_6; }
	inline void set_m_EventSystem_6(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_BaseEventData_7)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_BaseEventData_7() const { return ___m_BaseEventData_7; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_BaseEventData_7() { return &___m_BaseEventData_7; }
	inline void set_m_BaseEventData_7(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_BaseEventData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BaseEventData_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputOverride_8() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_InputOverride_8)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_InputOverride_8() const { return ___m_InputOverride_8; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_InputOverride_8() { return &___m_InputOverride_8; }
	inline void set_m_InputOverride_8(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_InputOverride_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputOverride_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_9() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_DefaultInput_9)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_DefaultInput_9() const { return ___m_DefaultInput_9; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_DefaultInput_9() { return &___m_DefaultInput_9; }
	inline void set_m_DefaultInput_9(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_DefaultInput_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultInput_9), (void*)value);
	}
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.GazeProvider
struct GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4  : public InputSystemGlobalHandlerListener_t843DD1A5D31A98462229555C6627F07324AD784B
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::lockCursorWhenFocusLocked
	bool ___lockCursorWhenFocusLocked_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::setCursorInvisibleWhenFocusLocked
	bool ___setCursorInvisibleWhenFocusLocked_8;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::maxGazeCollisionDistance
	float ___maxGazeCollisionDistance_9;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Input.GazeProvider::raycastLayerMasks
	LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___raycastLayerMasks_10;
	// Microsoft.MixedReality.Toolkit.Physics.GazeStabilizer Microsoft.MixedReality.Toolkit.Input.GazeProvider::stabilizer
	GazeStabilizer_t31055B3377F6FD30FC37AF8C7E5E23F69FBDCDB6 * ___stabilizer_11;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.GazeProvider::gazeTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___gazeTransform_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::minHeadVelocityThreshold
	float ___minHeadVelocityThreshold_13;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::maxHeadVelocityThreshold
	float ___maxHeadVelocityThreshold_14;
	// Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource Microsoft.MixedReality.Toolkit.Input.GazeProvider::gazeInputSource
	BaseGenericInputSource_tACE58AEA81725FFF6F6EA684EE90F348A841888B * ___gazeInputSource_15;
	// Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer Microsoft.MixedReality.Toolkit.Input.GazeProvider::gazePointer
	InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71 * ___gazePointer_16;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.GazeProvider::<GazeCursorPrefab>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CGazeCursorPrefabU3Ek__BackingField_17;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.GazeProvider::<GazeTarget>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CGazeTargetU3Ek__BackingField_18;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HitInfo>k__BackingField
	MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00  ___U3CHitInfoU3Ek__BackingField_19;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HitPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CHitPositionU3Ek__BackingField_20;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HitNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CHitNormalU3Ek__BackingField_21;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HeadVelocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CHeadVelocityU3Ek__BackingField_22;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HeadMovementDirection>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CHeadMovementDirectionU3Ek__BackingField_23;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::lastHitDistance
	float ___lastHitDistance_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::delayInitialization
	bool ___delayInitialization_25;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::lastHeadPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lastHeadPosition_26;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.GazeProvider::<overrideHeadPosition>k__BackingField
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___U3CoverrideHeadPositionU3Ek__BackingField_27;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.GazeProvider::<overrideHeadForward>k__BackingField
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___U3CoverrideHeadForwardU3Ek__BackingField_28;
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.GazeProvider::latestEyeTrackingUpdate
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___latestEyeTrackingUpdate_33;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.Input.GazeProvider::<IsEyeCalibrationValid>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CIsEyeCalibrationValidU3Ek__BackingField_35;
	// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.GazeProvider::<LatestEyeGaze>k__BackingField
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___U3CLatestEyeGazeU3Ek__BackingField_36;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::<IsEyeTrackingEnabled>k__BackingField
	bool ___U3CIsEyeTrackingEnabledU3Ek__BackingField_37;
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.GazeProvider::<Timestamp>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CTimestampU3Ek__BackingField_38;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::<UseHeadGazeOverride>k__BackingField
	bool ___U3CUseHeadGazeOverrideU3Ek__BackingField_39;

public:
	inline static int32_t get_offset_of_lockCursorWhenFocusLocked_7() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___lockCursorWhenFocusLocked_7)); }
	inline bool get_lockCursorWhenFocusLocked_7() const { return ___lockCursorWhenFocusLocked_7; }
	inline bool* get_address_of_lockCursorWhenFocusLocked_7() { return &___lockCursorWhenFocusLocked_7; }
	inline void set_lockCursorWhenFocusLocked_7(bool value)
	{
		___lockCursorWhenFocusLocked_7 = value;
	}

	inline static int32_t get_offset_of_setCursorInvisibleWhenFocusLocked_8() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___setCursorInvisibleWhenFocusLocked_8)); }
	inline bool get_setCursorInvisibleWhenFocusLocked_8() const { return ___setCursorInvisibleWhenFocusLocked_8; }
	inline bool* get_address_of_setCursorInvisibleWhenFocusLocked_8() { return &___setCursorInvisibleWhenFocusLocked_8; }
	inline void set_setCursorInvisibleWhenFocusLocked_8(bool value)
	{
		___setCursorInvisibleWhenFocusLocked_8 = value;
	}

	inline static int32_t get_offset_of_maxGazeCollisionDistance_9() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___maxGazeCollisionDistance_9)); }
	inline float get_maxGazeCollisionDistance_9() const { return ___maxGazeCollisionDistance_9; }
	inline float* get_address_of_maxGazeCollisionDistance_9() { return &___maxGazeCollisionDistance_9; }
	inline void set_maxGazeCollisionDistance_9(float value)
	{
		___maxGazeCollisionDistance_9 = value;
	}

	inline static int32_t get_offset_of_raycastLayerMasks_10() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___raycastLayerMasks_10)); }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* get_raycastLayerMasks_10() const { return ___raycastLayerMasks_10; }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F** get_address_of_raycastLayerMasks_10() { return &___raycastLayerMasks_10; }
	inline void set_raycastLayerMasks_10(LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* value)
	{
		___raycastLayerMasks_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastLayerMasks_10), (void*)value);
	}

	inline static int32_t get_offset_of_stabilizer_11() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___stabilizer_11)); }
	inline GazeStabilizer_t31055B3377F6FD30FC37AF8C7E5E23F69FBDCDB6 * get_stabilizer_11() const { return ___stabilizer_11; }
	inline GazeStabilizer_t31055B3377F6FD30FC37AF8C7E5E23F69FBDCDB6 ** get_address_of_stabilizer_11() { return &___stabilizer_11; }
	inline void set_stabilizer_11(GazeStabilizer_t31055B3377F6FD30FC37AF8C7E5E23F69FBDCDB6 * value)
	{
		___stabilizer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stabilizer_11), (void*)value);
	}

	inline static int32_t get_offset_of_gazeTransform_12() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___gazeTransform_12)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_gazeTransform_12() const { return ___gazeTransform_12; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_gazeTransform_12() { return &___gazeTransform_12; }
	inline void set_gazeTransform_12(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___gazeTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_minHeadVelocityThreshold_13() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___minHeadVelocityThreshold_13)); }
	inline float get_minHeadVelocityThreshold_13() const { return ___minHeadVelocityThreshold_13; }
	inline float* get_address_of_minHeadVelocityThreshold_13() { return &___minHeadVelocityThreshold_13; }
	inline void set_minHeadVelocityThreshold_13(float value)
	{
		___minHeadVelocityThreshold_13 = value;
	}

	inline static int32_t get_offset_of_maxHeadVelocityThreshold_14() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___maxHeadVelocityThreshold_14)); }
	inline float get_maxHeadVelocityThreshold_14() const { return ___maxHeadVelocityThreshold_14; }
	inline float* get_address_of_maxHeadVelocityThreshold_14() { return &___maxHeadVelocityThreshold_14; }
	inline void set_maxHeadVelocityThreshold_14(float value)
	{
		___maxHeadVelocityThreshold_14 = value;
	}

	inline static int32_t get_offset_of_gazeInputSource_15() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___gazeInputSource_15)); }
	inline BaseGenericInputSource_tACE58AEA81725FFF6F6EA684EE90F348A841888B * get_gazeInputSource_15() const { return ___gazeInputSource_15; }
	inline BaseGenericInputSource_tACE58AEA81725FFF6F6EA684EE90F348A841888B ** get_address_of_gazeInputSource_15() { return &___gazeInputSource_15; }
	inline void set_gazeInputSource_15(BaseGenericInputSource_tACE58AEA81725FFF6F6EA684EE90F348A841888B * value)
	{
		___gazeInputSource_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeInputSource_15), (void*)value);
	}

	inline static int32_t get_offset_of_gazePointer_16() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___gazePointer_16)); }
	inline InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71 * get_gazePointer_16() const { return ___gazePointer_16; }
	inline InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71 ** get_address_of_gazePointer_16() { return &___gazePointer_16; }
	inline void set_gazePointer_16(InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71 * value)
	{
		___gazePointer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazePointer_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGazeCursorPrefabU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___U3CGazeCursorPrefabU3Ek__BackingField_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CGazeCursorPrefabU3Ek__BackingField_17() const { return ___U3CGazeCursorPrefabU3Ek__BackingField_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CGazeCursorPrefabU3Ek__BackingField_17() { return &___U3CGazeCursorPrefabU3Ek__BackingField_17; }
	inline void set_U3CGazeCursorPrefabU3Ek__BackingField_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CGazeCursorPrefabU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGazeCursorPrefabU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGazeTargetU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___U3CGazeTargetU3Ek__BackingField_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CGazeTargetU3Ek__BackingField_18() const { return ___U3CGazeTargetU3Ek__BackingField_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CGazeTargetU3Ek__BackingField_18() { return &___U3CGazeTargetU3Ek__BackingField_18; }
	inline void set_U3CGazeTargetU3Ek__BackingField_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CGazeTargetU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGazeTargetU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHitInfoU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___U3CHitInfoU3Ek__BackingField_19)); }
	inline MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00  get_U3CHitInfoU3Ek__BackingField_19() const { return ___U3CHitInfoU3Ek__BackingField_19; }
	inline MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00 * get_address_of_U3CHitInfoU3Ek__BackingField_19() { return &___U3CHitInfoU3Ek__BackingField_19; }
	inline void set_U3CHitInfoU3Ek__BackingField_19(MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00  value)
	{
		___U3CHitInfoU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CHitInfoU3Ek__BackingField_19))->___transform_7), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CHitInfoU3Ek__BackingField_19))->___collider_10), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CHitPositionU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___U3CHitPositionU3Ek__BackingField_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CHitPositionU3Ek__BackingField_20() const { return ___U3CHitPositionU3Ek__BackingField_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CHitPositionU3Ek__BackingField_20() { return &___U3CHitPositionU3Ek__BackingField_20; }
	inline void set_U3CHitPositionU3Ek__BackingField_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CHitPositionU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CHitNormalU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___U3CHitNormalU3Ek__BackingField_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CHitNormalU3Ek__BackingField_21() const { return ___U3CHitNormalU3Ek__BackingField_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CHitNormalU3Ek__BackingField_21() { return &___U3CHitNormalU3Ek__BackingField_21; }
	inline void set_U3CHitNormalU3Ek__BackingField_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CHitNormalU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CHeadVelocityU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___U3CHeadVelocityU3Ek__BackingField_22)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CHeadVelocityU3Ek__BackingField_22() const { return ___U3CHeadVelocityU3Ek__BackingField_22; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CHeadVelocityU3Ek__BackingField_22() { return &___U3CHeadVelocityU3Ek__BackingField_22; }
	inline void set_U3CHeadVelocityU3Ek__BackingField_22(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CHeadVelocityU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CHeadMovementDirectionU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___U3CHeadMovementDirectionU3Ek__BackingField_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CHeadMovementDirectionU3Ek__BackingField_23() const { return ___U3CHeadMovementDirectionU3Ek__BackingField_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CHeadMovementDirectionU3Ek__BackingField_23() { return &___U3CHeadMovementDirectionU3Ek__BackingField_23; }
	inline void set_U3CHeadMovementDirectionU3Ek__BackingField_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CHeadMovementDirectionU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_lastHitDistance_24() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___lastHitDistance_24)); }
	inline float get_lastHitDistance_24() const { return ___lastHitDistance_24; }
	inline float* get_address_of_lastHitDistance_24() { return &___lastHitDistance_24; }
	inline void set_lastHitDistance_24(float value)
	{
		___lastHitDistance_24 = value;
	}

	inline static int32_t get_offset_of_delayInitialization_25() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___delayInitialization_25)); }
	inline bool get_delayInitialization_25() const { return ___delayInitialization_25; }
	inline bool* get_address_of_delayInitialization_25() { return &___delayInitialization_25; }
	inline void set_delayInitialization_25(bool value)
	{
		___delayInitialization_25 = value;
	}

	inline static int32_t get_offset_of_lastHeadPosition_26() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___lastHeadPosition_26)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lastHeadPosition_26() const { return ___lastHeadPosition_26; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lastHeadPosition_26() { return &___lastHeadPosition_26; }
	inline void set_lastHeadPosition_26(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lastHeadPosition_26 = value;
	}

	inline static int32_t get_offset_of_U3CoverrideHeadPositionU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___U3CoverrideHeadPositionU3Ek__BackingField_27)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_U3CoverrideHeadPositionU3Ek__BackingField_27() const { return ___U3CoverrideHeadPositionU3Ek__BackingField_27; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_U3CoverrideHeadPositionU3Ek__BackingField_27() { return &___U3CoverrideHeadPositionU3Ek__BackingField_27; }
	inline void set_U3CoverrideHeadPositionU3Ek__BackingField_27(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___U3CoverrideHeadPositionU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CoverrideHeadForwardU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___U3CoverrideHeadForwardU3Ek__BackingField_28)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_U3CoverrideHeadForwardU3Ek__BackingField_28() const { return ___U3CoverrideHeadForwardU3Ek__BackingField_28; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_U3CoverrideHeadForwardU3Ek__BackingField_28() { return &___U3CoverrideHeadForwardU3Ek__BackingField_28; }
	inline void set_U3CoverrideHeadForwardU3Ek__BackingField_28(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___U3CoverrideHeadForwardU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_latestEyeTrackingUpdate_33() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___latestEyeTrackingUpdate_33)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_latestEyeTrackingUpdate_33() const { return ___latestEyeTrackingUpdate_33; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_latestEyeTrackingUpdate_33() { return &___latestEyeTrackingUpdate_33; }
	inline void set_latestEyeTrackingUpdate_33(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___latestEyeTrackingUpdate_33 = value;
	}

	inline static int32_t get_offset_of_U3CIsEyeCalibrationValidU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___U3CIsEyeCalibrationValidU3Ek__BackingField_35)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CIsEyeCalibrationValidU3Ek__BackingField_35() const { return ___U3CIsEyeCalibrationValidU3Ek__BackingField_35; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CIsEyeCalibrationValidU3Ek__BackingField_35() { return &___U3CIsEyeCalibrationValidU3Ek__BackingField_35; }
	inline void set_U3CIsEyeCalibrationValidU3Ek__BackingField_35(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CIsEyeCalibrationValidU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CLatestEyeGazeU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___U3CLatestEyeGazeU3Ek__BackingField_36)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get_U3CLatestEyeGazeU3Ek__BackingField_36() const { return ___U3CLatestEyeGazeU3Ek__BackingField_36; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of_U3CLatestEyeGazeU3Ek__BackingField_36() { return &___U3CLatestEyeGazeU3Ek__BackingField_36; }
	inline void set_U3CLatestEyeGazeU3Ek__BackingField_36(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		___U3CLatestEyeGazeU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CIsEyeTrackingEnabledU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___U3CIsEyeTrackingEnabledU3Ek__BackingField_37)); }
	inline bool get_U3CIsEyeTrackingEnabledU3Ek__BackingField_37() const { return ___U3CIsEyeTrackingEnabledU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CIsEyeTrackingEnabledU3Ek__BackingField_37() { return &___U3CIsEyeTrackingEnabledU3Ek__BackingField_37; }
	inline void set_U3CIsEyeTrackingEnabledU3Ek__BackingField_37(bool value)
	{
		___U3CIsEyeTrackingEnabledU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_U3CTimestampU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___U3CTimestampU3Ek__BackingField_38)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CTimestampU3Ek__BackingField_38() const { return ___U3CTimestampU3Ek__BackingField_38; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CTimestampU3Ek__BackingField_38() { return &___U3CTimestampU3Ek__BackingField_38; }
	inline void set_U3CTimestampU3Ek__BackingField_38(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CTimestampU3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_U3CUseHeadGazeOverrideU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4, ___U3CUseHeadGazeOverrideU3Ek__BackingField_39)); }
	inline bool get_U3CUseHeadGazeOverrideU3Ek__BackingField_39() const { return ___U3CUseHeadGazeOverrideU3Ek__BackingField_39; }
	inline bool* get_address_of_U3CUseHeadGazeOverrideU3Ek__BackingField_39() { return &___U3CUseHeadGazeOverrideU3Ek__BackingField_39; }
	inline void set_U3CUseHeadGazeOverrideU3Ek__BackingField_39(bool value)
	{
		___U3CUseHeadGazeOverrideU3Ek__BackingField_39 = value;
	}
};

struct GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider::LateUpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LateUpdatePerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider::InitializeGazePointerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InitializeGazePointerPerfMarker_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider::RaiseSourceDetectedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceDetectedPerfMarker_32;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::maxEyeTrackingTimeoutInSeconds
	float ___maxEyeTrackingTimeoutInSeconds_34;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_29() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4_StaticFields, ___UpdatePerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_29() const { return ___UpdatePerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_29() { return &___UpdatePerfMarker_29; }
	inline void set_UpdatePerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_LateUpdatePerfMarker_30() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4_StaticFields, ___LateUpdatePerfMarker_30)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LateUpdatePerfMarker_30() const { return ___LateUpdatePerfMarker_30; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LateUpdatePerfMarker_30() { return &___LateUpdatePerfMarker_30; }
	inline void set_LateUpdatePerfMarker_30(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LateUpdatePerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_InitializeGazePointerPerfMarker_31() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4_StaticFields, ___InitializeGazePointerPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InitializeGazePointerPerfMarker_31() const { return ___InitializeGazePointerPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InitializeGazePointerPerfMarker_31() { return &___InitializeGazePointerPerfMarker_31; }
	inline void set_InitializeGazePointerPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InitializeGazePointerPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_RaiseSourceDetectedPerfMarker_32() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4_StaticFields, ___RaiseSourceDetectedPerfMarker_32)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceDetectedPerfMarker_32() const { return ___RaiseSourceDetectedPerfMarker_32; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceDetectedPerfMarker_32() { return &___RaiseSourceDetectedPerfMarker_32; }
	inline void set_RaiseSourceDetectedPerfMarker_32(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceDetectedPerfMarker_32 = value;
	}

	inline static int32_t get_offset_of_maxEyeTrackingTimeoutInSeconds_34() { return static_cast<int32_t>(offsetof(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4_StaticFields, ___maxEyeTrackingTimeoutInSeconds_34)); }
	inline float get_maxEyeTrackingTimeoutInSeconds_34() const { return ___maxEyeTrackingTimeoutInSeconds_34; }
	inline float* get_address_of_maxEyeTrackingTimeoutInSeconds_34() { return &___maxEyeTrackingTimeoutInSeconds_34; }
	inline void set_maxEyeTrackingTimeoutInSeconds_34(float value)
	{
		___maxEyeTrackingTimeoutInSeconds_34 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData
struct HandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9  : public InputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(HandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9, ___U3CControllerU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CControllerU3Ek__BackingField_7() const { return ___U3CControllerU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CControllerU3Ek__BackingField_7() { return &___U3CControllerU3Ek__BackingField_7; }
	inline void set_U3CControllerU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CControllerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_7), (void*)value);
	}
};


// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421  : public BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * ___m_PointerData_14;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * ___m_MouseState_15;

public:
	inline static int32_t get_offset_of_m_PointerData_14() { return static_cast<int32_t>(offsetof(PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421, ___m_PointerData_14)); }
	inline Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * get_m_PointerData_14() const { return ___m_PointerData_14; }
	inline Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 ** get_address_of_m_PointerData_14() { return &___m_PointerData_14; }
	inline void set_m_PointerData_14(Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * value)
	{
		___m_PointerData_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerData_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_MouseState_15() { return static_cast<int32_t>(offsetof(PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421, ___m_MouseState_15)); }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * get_m_MouseState_15() const { return ___m_MouseState_15; }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 ** get_address_of_m_MouseState_15() { return &___m_MouseState_15; }
	inline void set_m_MouseState_15(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * value)
	{
		___m_MouseState_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MouseState_15), (void*)value);
	}
};


// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD  : public PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421
{
public:
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_16;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_LastMoveVector_17;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_LastMousePosition_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_MousePosition_20;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentFocusedGameObject_21;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.StandaloneInputModule::m_InputPointerEvent
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___m_InputPointerEvent_22;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_23;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_24;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_25;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_26;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_27;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_28;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_29;

public:
	inline static int32_t get_offset_of_m_PrevActionTime_16() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_PrevActionTime_16)); }
	inline float get_m_PrevActionTime_16() const { return ___m_PrevActionTime_16; }
	inline float* get_address_of_m_PrevActionTime_16() { return &___m_PrevActionTime_16; }
	inline void set_m_PrevActionTime_16(float value)
	{
		___m_PrevActionTime_16 = value;
	}

	inline static int32_t get_offset_of_m_LastMoveVector_17() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_LastMoveVector_17)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_LastMoveVector_17() const { return ___m_LastMoveVector_17; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_LastMoveVector_17() { return &___m_LastMoveVector_17; }
	inline void set_m_LastMoveVector_17(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_LastMoveVector_17 = value;
	}

	inline static int32_t get_offset_of_m_ConsecutiveMoveCount_18() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_ConsecutiveMoveCount_18)); }
	inline int32_t get_m_ConsecutiveMoveCount_18() const { return ___m_ConsecutiveMoveCount_18; }
	inline int32_t* get_address_of_m_ConsecutiveMoveCount_18() { return &___m_ConsecutiveMoveCount_18; }
	inline void set_m_ConsecutiveMoveCount_18(int32_t value)
	{
		___m_ConsecutiveMoveCount_18 = value;
	}

	inline static int32_t get_offset_of_m_LastMousePosition_19() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_LastMousePosition_19)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_LastMousePosition_19() const { return ___m_LastMousePosition_19; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_LastMousePosition_19() { return &___m_LastMousePosition_19; }
	inline void set_m_LastMousePosition_19(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_LastMousePosition_19 = value;
	}

	inline static int32_t get_offset_of_m_MousePosition_20() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_MousePosition_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_MousePosition_20() const { return ___m_MousePosition_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_MousePosition_20() { return &___m_MousePosition_20; }
	inline void set_m_MousePosition_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_MousePosition_20 = value;
	}

	inline static int32_t get_offset_of_m_CurrentFocusedGameObject_21() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_CurrentFocusedGameObject_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentFocusedGameObject_21() const { return ___m_CurrentFocusedGameObject_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentFocusedGameObject_21() { return &___m_CurrentFocusedGameObject_21; }
	inline void set_m_CurrentFocusedGameObject_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentFocusedGameObject_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentFocusedGameObject_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputPointerEvent_22() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_InputPointerEvent_22)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_m_InputPointerEvent_22() const { return ___m_InputPointerEvent_22; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_m_InputPointerEvent_22() { return &___m_InputPointerEvent_22; }
	inline void set_m_InputPointerEvent_22(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___m_InputPointerEvent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputPointerEvent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_HorizontalAxis_23() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_HorizontalAxis_23)); }
	inline String_t* get_m_HorizontalAxis_23() const { return ___m_HorizontalAxis_23; }
	inline String_t** get_address_of_m_HorizontalAxis_23() { return &___m_HorizontalAxis_23; }
	inline void set_m_HorizontalAxis_23(String_t* value)
	{
		___m_HorizontalAxis_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalAxis_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalAxis_24() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_VerticalAxis_24)); }
	inline String_t* get_m_VerticalAxis_24() const { return ___m_VerticalAxis_24; }
	inline String_t** get_address_of_m_VerticalAxis_24() { return &___m_VerticalAxis_24; }
	inline void set_m_VerticalAxis_24(String_t* value)
	{
		___m_VerticalAxis_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalAxis_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_SubmitButton_25() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_SubmitButton_25)); }
	inline String_t* get_m_SubmitButton_25() const { return ___m_SubmitButton_25; }
	inline String_t** get_address_of_m_SubmitButton_25() { return &___m_SubmitButton_25; }
	inline void set_m_SubmitButton_25(String_t* value)
	{
		___m_SubmitButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubmitButton_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_CancelButton_26() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_CancelButton_26)); }
	inline String_t* get_m_CancelButton_26() const { return ___m_CancelButton_26; }
	inline String_t** get_address_of_m_CancelButton_26() { return &___m_CancelButton_26; }
	inline void set_m_CancelButton_26(String_t* value)
	{
		___m_CancelButton_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CancelButton_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputActionsPerSecond_27() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_InputActionsPerSecond_27)); }
	inline float get_m_InputActionsPerSecond_27() const { return ___m_InputActionsPerSecond_27; }
	inline float* get_address_of_m_InputActionsPerSecond_27() { return &___m_InputActionsPerSecond_27; }
	inline void set_m_InputActionsPerSecond_27(float value)
	{
		___m_InputActionsPerSecond_27 = value;
	}

	inline static int32_t get_offset_of_m_RepeatDelay_28() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_RepeatDelay_28)); }
	inline float get_m_RepeatDelay_28() const { return ___m_RepeatDelay_28; }
	inline float* get_address_of_m_RepeatDelay_28() { return &___m_RepeatDelay_28; }
	inline void set_m_RepeatDelay_28(float value)
	{
		___m_RepeatDelay_28 = value;
	}

	inline static int32_t get_offset_of_m_ForceModuleActive_29() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_ForceModuleActive_29)); }
	inline bool get_m_ForceModuleActive_29() const { return ___m_ForceModuleActive_29; }
	inline bool* get_address_of_m_ForceModuleActive_29() { return &___m_ForceModuleActive_29; }
	inline void set_m_ForceModuleActive_29(bool value)
	{
		___m_ForceModuleActive_29 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule
struct MixedRealityInputModule_t49C8683CD8FCDD3D79B1DBADC47B0BE2FA7126DD  : public StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::pointerDataToUpdate
	Dictionary_2_t17D14186357F4FCCA956E8681E1B43CCD807D615 * ___pointerDataToUpdate_30;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::pointerDataToRemove
	List_1_t771DAC99CA3D22AB8F76E3561396264B96AE5D3B * ___pointerDataToRemove_31;
	// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::<RaycastCamera>k__BackingField
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___U3CRaycastCameraU3Ek__BackingField_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::<ManualInitializationRequired>k__BackingField
	bool ___U3CManualInitializationRequiredU3Ek__BackingField_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::<ProcessPaused>k__BackingField
	bool ___U3CProcessPausedU3Ek__BackingField_34;

public:
	inline static int32_t get_offset_of_pointerDataToUpdate_30() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t49C8683CD8FCDD3D79B1DBADC47B0BE2FA7126DD, ___pointerDataToUpdate_30)); }
	inline Dictionary_2_t17D14186357F4FCCA956E8681E1B43CCD807D615 * get_pointerDataToUpdate_30() const { return ___pointerDataToUpdate_30; }
	inline Dictionary_2_t17D14186357F4FCCA956E8681E1B43CCD807D615 ** get_address_of_pointerDataToUpdate_30() { return &___pointerDataToUpdate_30; }
	inline void set_pointerDataToUpdate_30(Dictionary_2_t17D14186357F4FCCA956E8681E1B43CCD807D615 * value)
	{
		___pointerDataToUpdate_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerDataToUpdate_30), (void*)value);
	}

	inline static int32_t get_offset_of_pointerDataToRemove_31() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t49C8683CD8FCDD3D79B1DBADC47B0BE2FA7126DD, ___pointerDataToRemove_31)); }
	inline List_1_t771DAC99CA3D22AB8F76E3561396264B96AE5D3B * get_pointerDataToRemove_31() const { return ___pointerDataToRemove_31; }
	inline List_1_t771DAC99CA3D22AB8F76E3561396264B96AE5D3B ** get_address_of_pointerDataToRemove_31() { return &___pointerDataToRemove_31; }
	inline void set_pointerDataToRemove_31(List_1_t771DAC99CA3D22AB8F76E3561396264B96AE5D3B * value)
	{
		___pointerDataToRemove_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerDataToRemove_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRaycastCameraU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t49C8683CD8FCDD3D79B1DBADC47B0BE2FA7126DD, ___U3CRaycastCameraU3Ek__BackingField_32)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_U3CRaycastCameraU3Ek__BackingField_32() const { return ___U3CRaycastCameraU3Ek__BackingField_32; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_U3CRaycastCameraU3Ek__BackingField_32() { return &___U3CRaycastCameraU3Ek__BackingField_32; }
	inline void set_U3CRaycastCameraU3Ek__BackingField_32(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___U3CRaycastCameraU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRaycastCameraU3Ek__BackingField_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CManualInitializationRequiredU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t49C8683CD8FCDD3D79B1DBADC47B0BE2FA7126DD, ___U3CManualInitializationRequiredU3Ek__BackingField_33)); }
	inline bool get_U3CManualInitializationRequiredU3Ek__BackingField_33() const { return ___U3CManualInitializationRequiredU3Ek__BackingField_33; }
	inline bool* get_address_of_U3CManualInitializationRequiredU3Ek__BackingField_33() { return &___U3CManualInitializationRequiredU3Ek__BackingField_33; }
	inline void set_U3CManualInitializationRequiredU3Ek__BackingField_33(bool value)
	{
		___U3CManualInitializationRequiredU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CProcessPausedU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t49C8683CD8FCDD3D79B1DBADC47B0BE2FA7126DD, ___U3CProcessPausedU3Ek__BackingField_34)); }
	inline bool get_U3CProcessPausedU3Ek__BackingField_34() const { return ___U3CProcessPausedU3Ek__BackingField_34; }
	inline bool* get_address_of_U3CProcessPausedU3Ek__BackingField_34() { return &___U3CProcessPausedU3Ek__BackingField_34; }
	inline void set_U3CProcessPausedU3Ek__BackingField_34(bool value)
	{
		___U3CProcessPausedU3Ek__BackingField_34 = value;
	}
};

struct MixedRealityInputModule_t49C8683CD8FCDD3D79B1DBADC47B0BE2FA7126DD_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::ProcessPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ProcessPerfMarker_35;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::ProcessMrtkPointerLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ProcessMrtkPointerLostPerfMarker_36;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::GetMousePointerEventDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetMousePointerEventDataPerfMarker_37;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::UpdateMousePointerEventDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateMousePointerEventDataPerfMarker_38;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::ResetMousePointerEventDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResetMousePointerEventDataPerfMarker_39;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::OnSourceDetectedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnSourceDetectedPerfMarker_40;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::OnSourceLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnSourceLostPerfMarker_41;

public:
	inline static int32_t get_offset_of_ProcessPerfMarker_35() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t49C8683CD8FCDD3D79B1DBADC47B0BE2FA7126DD_StaticFields, ___ProcessPerfMarker_35)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ProcessPerfMarker_35() const { return ___ProcessPerfMarker_35; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ProcessPerfMarker_35() { return &___ProcessPerfMarker_35; }
	inline void set_ProcessPerfMarker_35(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ProcessPerfMarker_35 = value;
	}

	inline static int32_t get_offset_of_ProcessMrtkPointerLostPerfMarker_36() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t49C8683CD8FCDD3D79B1DBADC47B0BE2FA7126DD_StaticFields, ___ProcessMrtkPointerLostPerfMarker_36)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ProcessMrtkPointerLostPerfMarker_36() const { return ___ProcessMrtkPointerLostPerfMarker_36; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ProcessMrtkPointerLostPerfMarker_36() { return &___ProcessMrtkPointerLostPerfMarker_36; }
	inline void set_ProcessMrtkPointerLostPerfMarker_36(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ProcessMrtkPointerLostPerfMarker_36 = value;
	}

	inline static int32_t get_offset_of_GetMousePointerEventDataPerfMarker_37() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t49C8683CD8FCDD3D79B1DBADC47B0BE2FA7126DD_StaticFields, ___GetMousePointerEventDataPerfMarker_37)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetMousePointerEventDataPerfMarker_37() const { return ___GetMousePointerEventDataPerfMarker_37; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetMousePointerEventDataPerfMarker_37() { return &___GetMousePointerEventDataPerfMarker_37; }
	inline void set_GetMousePointerEventDataPerfMarker_37(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetMousePointerEventDataPerfMarker_37 = value;
	}

	inline static int32_t get_offset_of_UpdateMousePointerEventDataPerfMarker_38() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t49C8683CD8FCDD3D79B1DBADC47B0BE2FA7126DD_StaticFields, ___UpdateMousePointerEventDataPerfMarker_38)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateMousePointerEventDataPerfMarker_38() const { return ___UpdateMousePointerEventDataPerfMarker_38; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateMousePointerEventDataPerfMarker_38() { return &___UpdateMousePointerEventDataPerfMarker_38; }
	inline void set_UpdateMousePointerEventDataPerfMarker_38(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateMousePointerEventDataPerfMarker_38 = value;
	}

	inline static int32_t get_offset_of_ResetMousePointerEventDataPerfMarker_39() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t49C8683CD8FCDD3D79B1DBADC47B0BE2FA7126DD_StaticFields, ___ResetMousePointerEventDataPerfMarker_39)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResetMousePointerEventDataPerfMarker_39() const { return ___ResetMousePointerEventDataPerfMarker_39; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResetMousePointerEventDataPerfMarker_39() { return &___ResetMousePointerEventDataPerfMarker_39; }
	inline void set_ResetMousePointerEventDataPerfMarker_39(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResetMousePointerEventDataPerfMarker_39 = value;
	}

	inline static int32_t get_offset_of_OnSourceDetectedPerfMarker_40() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t49C8683CD8FCDD3D79B1DBADC47B0BE2FA7126DD_StaticFields, ___OnSourceDetectedPerfMarker_40)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnSourceDetectedPerfMarker_40() const { return ___OnSourceDetectedPerfMarker_40; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnSourceDetectedPerfMarker_40() { return &___OnSourceDetectedPerfMarker_40; }
	inline void set_OnSourceDetectedPerfMarker_40(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnSourceDetectedPerfMarker_40 = value;
	}

	inline static int32_t get_offset_of_OnSourceLostPerfMarker_41() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t49C8683CD8FCDD3D79B1DBADC47B0BE2FA7126DD_StaticFields, ___OnSourceLostPerfMarker_41)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnSourceLostPerfMarker_41() const { return ___OnSourceLostPerfMarker_41; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnSourceLostPerfMarker_41() { return &___OnSourceLostPerfMarker_41; }
	inline void set_OnSourceLostPerfMarker_41(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnSourceLostPerfMarker_41 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Physics.RayStep[]
struct RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E  m_Items[1];

public:
	inline RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  m_Items[1];

public:
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__83>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C_m75F4BDB60A3AE7FAF7386BB1CB097C2DB58B082D_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C * ___stateMachine1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityObjectExtensions_IsNull_TisRuntimeObject_mB546B2AE90ECCF199EA19D0376D6357F7C5DC8E9_gshared (RuntimeObject * ___interface0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__69>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__69_tA1C435686F9556734AB0B8A96F09E74431B6874B_mC399D11DC357CF682CD09107AA9C085FF162B5EF_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__69_tA1C435686F9556734AB0B8A96F09E74431B6874B * ___stateMachine1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Vector3>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_gshared (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnsureInputSystemValidU3Ed__4_t4726393E49A24D484F82BE984437137A0AEEF5C7_mC44CB9E4DC3496B5D7110262C60D050DC89D7CD7_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject ** ___awaiter0, U3CEnsureInputSystemValidU3Ed__4_t4726393E49A24D484F82BE984437137A0AEEF5C7 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_tE8EA292542AF4AAD6DF000683694ECE869CB2C4A_m3BDDA156176506DB028495065DD5794248C8D2CF_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__2_tE8EA292542AF4AAD6DF000683694ECE869CB2C4A * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnsureInputSystemValidU3Ed__4_t55B2AC3258CED626D50DC9BA690EBB08390467D6_m51C5B6CE654415E12B4A6CC46FB7ED0CC8BD232F_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject ** ___awaiter0, U3CEnsureInputSystemValidU3Ed__4_t55B2AC3258CED626D50DC9BA690EBB08390467D6 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t7FE273F02D8FAC7B771B9CD0F2118F262D7E988F_mA535F8145798673F556FFC9138366C6CE0897E68_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__2_t7FE273F02D8FAC7B771B9CD0F2118F262D7E988F * ___stateMachine1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C  Dictionary_2_GetEnumerator_m17437D82A5AF502166F10DD12B5C5830DDB95444_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m7567E65C01E35A09AD2AD4814D708A8E76469D31_gshared (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method);

// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_Object()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * FocusDetails_get_Object_m6E611D223AC2D91FA1436B14B16A133F5EAFB83F_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * EventSystem_get_current_m6DCD04BC8A3C673A2961DB3BC373EDC0BEAD8251 (const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2 (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_CurrentPointerTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PointerData_get_CurrentPointerTarget_mD300D51D3BC59BAB2976FE2E38E71EF9EBDA489F (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::set_PreviousPointerTarget(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerData_set_PreviousPointerTarget_m60774B5702185ED8B132FB130E2CC52B82FBADF8_inline (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.FocusDetails::set_Object(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_Object_mE30D7E68112FCC6D52434D98C5895331269673A7_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.FocusDetails::set_LastRaycastHit(Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_LastRaycastHit_mFA9CA0D694CF4CD39649730AE447CC03CF36C9EE_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.FocusDetails::set_LastGraphicsRaycastResult(UnityEngine.EventSystems.RaycastResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_LastGraphicsRaycastResult_mBCBF82062020D04151A04BED4766CFE445F396AC_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::set_RayStepIndex(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerData_set_RayStepIndex_m380239B0289557A1FDF1DD40FDD8A0C38E299F19_inline (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Origin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Origin_mE84E244641769AB2B36226E9D16FCD6A0B2F1D60_inline (RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::set_StartPoint(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerData_set_StartPoint_m1373FD9D3BF90406D263219BC458B5249EA049AE_inline (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.FocusDetails::set_RayDistance(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_RayDistance_m004B6FD4F669C2324EA89EB1C57DE79277C894F1_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.FocusDetails::set_Point(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_Point_m021BEC1DA8BFD4EEC41FDA0B52F848E92EB5AD31_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.FocusDetails::set_Normal(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_Normal_m17F57ACF6B19B36A025B59E21278F740D50060AB_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RayStep_get_Length_m91DEC6B3F1CE1DDDB88380E46B61277E7DC1E9D8_inline (RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Terminus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Terminus_m35F90B142BE20BDCD6426BEB30CB8FC0B72BD7C9_inline (RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Direction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Direction_m8F0AA29CC2F69935B92A1C71B52C8C6912A7F4B3_inline (RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m56EB454031EABB53BA35FECF3F61A7E2332A2521_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_Point()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_Point_m6F012CA7F09CF74419141C3B0988A4BCAEE5B4F2_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.FocusDetails::set_PointLocalSpace(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_PointLocalSpace_m1634F54BCC3389C55E7DB08E3E73F30C27048295_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_Normal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_Normal_m30AF9F941B737856133F3BCDC144899C6876A599_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformDirection_m9EB6F7A2598FD8D6B52F0A6EBA96A3BAAF68D696 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.FocusDetails::set_NormalLocalSpace(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_NormalLocalSpace_m09AE9D3B5C85AD65CDF6E63174A57547C6740434_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6 (const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_PointLocalSpace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_PointLocalSpace_m36C41EB93AE0F16FB93F1A7679EE729C8D52B411_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_NormalLocalSpace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_NormalLocalSpace_mA235420352F8FE257A05E7CDD5804D6F1B7F7C10_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Physics.RayStep::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RayStep_Contains_m5582EB1D15D1BD935B8B9A34291963A434DA59AE (RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_Details()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316  PointerData_get_Details_m2F7A93F53A62978746EE54E30F3F79A08D2A6D55_inline (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m519B1E8F2F1E2101ADF863401FCAE38210395368 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::Equals(Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerData_Equals_m3163C63B88958E1C6BC8185AE05349E138DFABBB (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * ___other0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector4_op_Implicit_mFAF4066991B0091223DB22E35C4290C43E5913AB (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___v0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline (RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::get_InputSourceType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerPreferences_get_InputSourceType_m72F97938461D75708AD238D6662D07F840BDD198_inline (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::get_PointerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * PointerPreferences_get_PointerType_mA878224D689866E21EA72D04D83B039A4ED49ABF_inline (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::get_Right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerPreferences_get_Right_mF8D590E57B4E2FE0C358525757055A82A9E6EFA8_inline (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::get_Left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerPreferences_get_Left_m27D6C4D2E8AB8DC2AAFA5D52B948C0FE5C34251A_inline (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::get_Other()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerPreferences_get_Other_m1DCB326ED20626010AF59C06CDD1E30E67E17D70_inline (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::set_Right(Microsoft.MixedReality.Toolkit.Input.PointerBehavior)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerPreferences_set_Right_m9C2E593E82206CA22FCB240AFF87611BD82EA6D7_inline (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::set_Left(Microsoft.MixedReality.Toolkit.Input.PointerBehavior)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerPreferences_set_Left_mBE3FB989FA7752716C38E998E3909ADF22FE0BF0_inline (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::set_Other(Microsoft.MixedReality.Toolkit.Input.PointerBehavior)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerPreferences_set_Other_mA59BA29954BA1CC221042978C3ACF1F1D1FCF92C_inline (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::EnsureInputSystemValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * InputSystemGlobalHandlerListener_EnsureInputSystemValid_m46890ECB4D0686F2FC1298E2AFE6FCB499E3D2FB (InputSystemGlobalHandlerListener_t843DD1A5D31A98462229555C6627F07324AD784B * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__83>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C_m75F4BDB60A3AE7FAF7386BB1CB097C2DB58B082D (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C_m75F4BDB60A3AE7FAF7386BB1CB097C2DB58B082D_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.GazeProvider>(!!0)
inline bool UnityObjectExtensions_IsNull_TisGazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4_mA507EBEFA4575378A88A05CBFBCF61CDFEF4B1B9 (GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 *, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_mB546B2AE90ECCF199EA19D0376D6357F7C5DC8E9_gshared)(___interface0, method);
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m09B8CBC7F935B5EBD4AC8682902B60A952EC8BDE (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__83::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRaiseSourceDetectedU3Ed__83_MoveNext_mD7AF6261FB0527FB3F9219051327729CE749E07D (U3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__83::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRaiseSourceDetectedU3Ed__83_SetStateMachine_mFC32CF4BEC31D9FC75FDE1ABEB44B81BCA4815A7 (U3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider::<>n__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeProvider_U3CU3En__0_m2391EBB4F95E45AB45C2587EE41FC1D1D2990AE3 (GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__69>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__69_tA1C435686F9556734AB0B8A96F09E74431B6874B_mC399D11DC357CF682CD09107AA9C085FF162B5EF (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__69_tA1C435686F9556734AB0B8A96F09E74431B6874B * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CStartU3Ed__69_tA1C435686F9556734AB0B8A96F09E74431B6874B *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__69_tA1C435686F9556734AB0B8A96F09E74431B6874B_mC399D11DC357CF682CD09107AA9C085FF162B5EF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider::RaiseSourceDetected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeProvider_RaiseSourceDetected_mBF58AA84D31599C942CE17DF8F0C480C60247577 (GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__69::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__69_MoveNext_m3D35B7A3C057C0EBB39FC099AC67F85D9955744E (U3CStartU3Ed__69_tA1C435686F9556734AB0B8A96F09E74431B6874B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__69::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__69_SetStateMachine_m4C9342A58F4654EDF404E2CCF36C097BA7C4831B (U3CStartU3Ed__69_tA1C435686F9556734AB0B8A96F09E74431B6874B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::.ctor(System.String,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericPointer__ctor_m233F42F42D21A536B33F8F2D4A352C795F22A842 (GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984 * __this, String_t* ___pointerName0, RuntimeObject* ___inputSourceParent1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::set_PrioritizedLayerMasksOverride(UnityEngine.LayerMask[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GenericPointer_set_PrioritizedLayerMasksOverride_m607E454D525D68ACD65B3BE6D6FC0A53AF41D684_inline (GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984 * __this, LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::set_IsInteractionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericPointer_set_IsInteractionEnabled_m5B4C3EE5A4464839E933DE8E9CE765FF230A1341 (GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_IsEyeTrackingEnabledAndValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GazeProvider_get_IsEyeTrackingEnabledAndValid_m9F2A05E6A1AAD39578CDB74B667425C1499DF3F5 (GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::set_SourceType(Microsoft.MixedReality.Toolkit.Input.InputSourceType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseGenericInputSource_set_SourceType_mD07D42C4699D971CA44EC8A62385ABDDF1FF3967_inline (BaseGenericInputSource_tACE58AEA81725FFF6F6EA684EE90F348A841888B * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_LatestEyeGaze()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  GazeProvider_get_LatestEyeGaze_m3B08254C87B1FCC970A1602CB7F6BE11AA7F3B33_inline (GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_UseHeadGazeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GazeProvider_get_UseHeadGazeOverride_mEB5E7F3B458C6ED184F4849D15B22838FF70D765_inline (GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * __this, const RuntimeMethod* method);
// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_overrideHeadPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  GazeProvider_get_overrideHeadPosition_m6B8D629E261E41B9E7537702DF16080538BDCB62_inline (GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *, const RuntimeMethod*))Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline)(__this, method);
}
// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_overrideHeadForward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  GazeProvider_get_overrideHeadForward_m3A0B0DECA9CDC71FF12D9601E4CF4BF2C2C9C2AB_inline (GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Vector3>::get_Value()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *, const RuntimeMethod*))Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider::set_overrideHeadPosition(System.Nullable`1<UnityEngine.Vector3>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GazeProvider_set_overrideHeadPosition_m4B50D930F9FCC64412FEE718AEA02EE3D9CCB193_inline (GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * __this, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider::set_overrideHeadForward(System.Nullable`1<UnityEngine.Vector3>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GazeProvider_set_overrideHeadForward_mCEDCB4D540076E25EBB717B365EDA44EC2C502FC_inline (GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * __this, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_InverseTransformPoint_mCDCABC86EB8147AD7EB44AE4CE976502A0F8A158 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_InverseTransformDirection_mBE1455CA3673A6164CADDEFBC55C3FAEF1CC8D99 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldDirection0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_TransformPoint_m7397A738A9E1E7F5FA3B5DC500450ED605437F2E (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_TransformDirection_mBE0AF2CD81E17F9985E4C9A9B66373DA39C0EE20 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localDirection0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.GenericPointer::get_Rays()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7* GenericPointer_get_Rays_m5B4976E39B661849D6B4FBF5CCD0D976BA6DAD46_inline (GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.RayStep::UpdateRayStep(UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayStep_UpdateRayStep_mE2E7EAFB3B39246C3B3614A1CD90280CABFCD16C (RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___terminus1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::get_None()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  MixedRealityInputAction_get_None_mF8925BEFFCBF261E00BEAD634565EB980540E2CC_inline (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m71966BB46B5EF41A4D0AA5F4C30D511B72146443 (U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___predicate0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions::GetAwaiter(UnityEngine.WaitUntil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * AwaiterExtensions_GetAwaiter_m19F2A5009ABEF7C69C5D1F9CFBA83A6E550F7578 (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___instruction0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_mA1D47F19E3535E59267118BB76A0C9495A50C4CE_inline (SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_TisU3CEnsureInputSystemValidU3Ed__4_t4726393E49A24D484F82BE984437137A0AEEF5C7_mC7429CB3C90A64B912CA998CA3B28CFDC6AD1A26 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 ** ___awaiter0, U3CEnsureInputSystemValidU3Ed__4_t4726393E49A24D484F82BE984437137A0AEEF5C7 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 **, U3CEnsureInputSystemValidU3Ed__4_t4726393E49A24D484F82BE984437137A0AEEF5C7 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnsureInputSystemValidU3Ed__4_t4726393E49A24D484F82BE984437137A0AEEF5C7_mC44CB9E4DC3496B5D7110262C60D050DC89D7CD7_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_m2AAF3D8883A33795B8216B9D4BBA4586B2E29365 (SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_MoveNext_m70CE79F6C12DF68B1211D43771EA0D097BFF3859 (U3CEnsureInputSystemValidU3Ed__4_t4726393E49A24D484F82BE984437137A0AEEF5C7 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_mCB8A759C24F11606BFD301C67E6E9E26C5A60C64 (U3CEnsureInputSystemValidU3Ed__4_t4726393E49A24D484F82BE984437137A0AEEF5C7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_tE8EA292542AF4AAD6DF000683694ECE869CB2C4A_m3BDDA156176506DB028495065DD5794248C8D2CF (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__2_tE8EA292542AF4AAD6DF000683694ECE869CB2C4A * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CStartU3Ed__2_tE8EA292542AF4AAD6DF000683694ECE869CB2C4A *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_tE8EA292542AF4AAD6DF000683694ECE869CB2C4A_m3BDDA156176506DB028495065DD5794248C8D2CF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_MoveNext_m0DB088666A039033FAF823BDD88960F599C8F9C2 (U3CStartU3Ed__2_tE8EA292542AF4AAD6DF000683694ECE869CB2C4A * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_SetStateMachine_mA3F0FC8F546E8000A66278BCC0128DEB8EB3A387 (U3CStartU3Ed__2_tE8EA292542AF4AAD6DF000683694ECE869CB2C4A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0C47A61FFC53A9C7A2451CEF5B6493AB530CEF1C (U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_TisU3CEnsureInputSystemValidU3Ed__4_t55B2AC3258CED626D50DC9BA690EBB08390467D6_m10097A8245E4B54DF5DC1D3C58A2463EA44DE241 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 ** ___awaiter0, U3CEnsureInputSystemValidU3Ed__4_t55B2AC3258CED626D50DC9BA690EBB08390467D6 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 **, U3CEnsureInputSystemValidU3Ed__4_t55B2AC3258CED626D50DC9BA690EBB08390467D6 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnsureInputSystemValidU3Ed__4_t55B2AC3258CED626D50DC9BA690EBB08390467D6_m51C5B6CE654415E12B4A6CC46FB7ED0CC8BD232F_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_MoveNext_mC5AA1486155609CCEF92E30A8D610C309DBA3A94 (U3CEnsureInputSystemValidU3Ed__4_t55B2AC3258CED626D50DC9BA690EBB08390467D6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_m69A96DC6B83745774DCD2721A93D11971FDC0FC4 (U3CEnsureInputSystemValidU3Ed__4_t55B2AC3258CED626D50DC9BA690EBB08390467D6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener::EnsureInputSystemValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * InputSystemGlobalListener_EnsureInputSystemValid_m7B9667A1E1C50C02B13979A894BDE5E36ECF91B8 (InputSystemGlobalListener_t1A1940053C0B9BF9CC21346987EC30F514A066AD * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t7FE273F02D8FAC7B771B9CD0F2118F262D7E988F_mA535F8145798673F556FFC9138366C6CE0897E68 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__2_t7FE273F02D8FAC7B771B9CD0F2118F262D7E988F * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CStartU3Ed__2_t7FE273F02D8FAC7B771B9CD0F2118F262D7E988F *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t7FE273F02D8FAC7B771B9CD0F2118F262D7E988F_mA535F8145798673F556FFC9138366C6CE0897E68_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_MoveNext_m0A4722F8429043C94FE0EA8172F38B925BCEDF3D (U3CStartU3Ed__2_t7FE273F02D8FAC7B771B9CD0F2118F262D7E988F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_SetStateMachine_m31400C9F446618690957769B240CAF521B7BCFA9 (U3CStartU3Ed__2_t7FE273F02D8FAC7B771B9CD0F2118F262D7E988F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m3972B2C66691EA6DF91A19CEF3521B7C2679D7A1 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_U3CU3Em__Finally1_m0DC2106EB8DD60281885E992898A9EB797AA5E22 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::GetEnumerator()
inline Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB  Dictionary_2_GetEnumerator_m1848C6E420D34DBEC14D2F6CED9F2035F4119CB3 (Dictionary_2_t17D14186357F4FCCA956E8681E1B43CCD807D615 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB  (*) (Dictionary_2_t17D14186357F4FCCA956E8681E1B43CCD807D615 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m17437D82A5AF502166F10DD12B5C5830DDB95444_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::get_Current()
inline KeyValuePair_2_t00FE0E370638CA3CD5CC8569639D7E67DEDA7A61  Enumerator_get_Current_mD3E898B7156BF1CBA8C9F9FD805589BB8CDFD48E_inline (Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t00FE0E370638CA3CD5CC8569639D7E67DEDA7A61  (*) (Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB *, const RuntimeMethod*))Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::get_Value()
inline PointerData_t8814E79B8DF54459590CDF91527B93920AF280C3 * KeyValuePair_2_get_Value_mD4877E41B1CC6D34CA364DA050FD0FCE51507A15_inline (KeyValuePair_2_t00FE0E370638CA3CD5CC8569639D7E67DEDA7A61 * __this, const RuntimeMethod* method)
{
	return ((  PointerData_t8814E79B8DF54459590CDF91527B93920AF280C3 * (*) (KeyValuePair_2_t00FE0E370638CA3CD5CC8569639D7E67DEDA7A61 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::MoveNext()
inline bool Enumerator_MoveNext_m332D401D7B852D8CC1BC827AD3C461B7CA7645C5 (Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB *, const RuntimeMethod*))Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_System_IDisposable_Dispose_m63E5F2C742E28F6AE303CAA117533BC9F98FBB36 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::Dispose()
inline void Enumerator_Dispose_m8F1A111B663F7A3E98258DC6509C0FF5A6A5067A (Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB *, const RuntimeMethod*))Enumerator_Dispose_m7567E65C01E35A09AD2AD4814D708A8E76469D31_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16__ctor_mC2F3B7E6F64908C996049BCF8A423C1E5D76C36B (U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.Generic.IEnumerable<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_Generic_IEnumerableU3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityPointerU3E_GetEnumerator_m4E8DD10E157FC195B66E5F0A60EDD2C71EE2A1AA (U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseState__ctor_m16EF8D45AF8A178368547BD1CE4FBF9DBC563605 (MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m665B46F6BE60C3658FE6683D1689BC4AFB3C8790 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourceStateEventData>(UnityEngine.EventSystems.BaseEventData)
inline SourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4 * ExecuteEvents_ValidateEventData_TisSourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4_mD42AFBD3894DAC597A21941E12C25731891A1B45 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_t4955807E7BF053B446583ED8BB34D8A1BE645DDF * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t4955807E7BF053B446583ED8BB34D8A1BE645DDF_mC776E03EFF407B3FAEE2482C962D8ED5B29C8FA3 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_t4955807E7BF053B446583ED8BB34D8A1BE645DDF * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_t3F40104911F5F86F88A46E3961EDD20ABDB3CFFD * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t3F40104911F5F86F88A46E3961EDD20ABDB3CFFD_mD69F6D3C070E3009C6C79F440DD4E5C3A4977F09 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_t3F40104911F5F86F88A46E3961EDD20ABDB3CFFD * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_t348DE491DFFC276DC552C0DF33FA0331F70B67D2 * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t348DE491DFFC276DC552C0DF33FA0331F70B67D2_mD1F2FCCEB714188C1059F35F43EDF3732AC7743C (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_t348DE491DFFC276DC552C0DF33FA0331F70B67D2 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_t231D726E31121868C0276AFE9019E37C9E90D64E * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t231D726E31121868C0276AFE9019E37C9E90D64E_mA8348C3843BD89D567D726B49E518FC02D874FA6 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_t231D726E31121868C0276AFE9019E37C9E90D64E * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_tE626A849E7457E2AE0456AFC30D610EC221959E1 * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tE626A849E7457E2AE0456AFC30D610EC221959E1_m4B9E0C9155612DE175F91651E5D6D16D8BF9CD0A (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_tE626A849E7457E2AE0456AFC30D610EC221959E1 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.FocusEventData>(UnityEngine.EventSystems.BaseEventData)
inline FocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D * ExecuteEvents_ValidateEventData_TisFocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D_mF53D529D573490C093A4FC5BC75DADF2CD0B369D (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  FocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData>(UnityEngine.EventSystems.BaseEventData)
inline MixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81 * ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81_m2BA349FC7301973222A459C5338B97E90563223F (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  MixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler>(!!0)
inline bool UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_t70923AB8C2B3603FD1E12392C145636841C39E35_mFFB7F4F23F9B4AFEE50D5E838EC56D8ECE2EA920 (RuntimeObject* ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_mB546B2AE90ECCF199EA19D0376D6357F7C5DC8E9_gshared)(___interface0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler>(!!0)
inline bool UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_mB872F0AE9954DA7AEC86E9A93024DA3E9CF2DCF1 (RuntimeObject* ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_mB546B2AE90ECCF199EA19D0376D6357F7C5DC8E9_gshared)(___interface0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_tE44B3E2DFC8CE21E8B2B2E3C0F9FAF7091F41D54 * ExecuteEvents_ValidateEventData_TisInputEventData_1_tE44B3E2DFC8CE21E8B2B2E3C0F9FAF7091F41D54_mF0FA6861DBFBA35EA84FC941631B89982F22571B (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_tE44B3E2DFC8CE21E8B2B2E3C0F9FAF7091F41D54 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296 * ExecuteEvents_ValidateEventData_TisInputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296_m79998E43364684CF2552CCFEF47BD0171A2705EB (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50 * ExecuteEvents_ValidateEventData_TisInputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50_mF54DBEA97FBED02124BDCA9A608402673773B939 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057 * ExecuteEvents_ValidateEventData_TisInputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057_mE494F9977B221C7A1AB2DF1F3808DDB7BD3ABC15 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F * ExecuteEvents_ValidateEventData_TisInputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F_m63754764AB79DA9DAEEF23A4C309CFDD336BB968 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler>(!!0)
inline bool UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t10431CE1B46A546932928514885A26F01E7E311E_mE7000B6458C14F8A4CB5B0399187139DB559B901 (RuntimeObject* ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_mB546B2AE90ECCF199EA19D0376D6357F7C5DC8E9_gshared)(___interface0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SpeechEventData>(UnityEngine.EventSystems.BaseEventData)
inline SpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46 * ExecuteEvents_ValidateEventData_TisSpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46_mC4AAA10E280ABD899D79E36BF795F52D3AEA4627 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler>(!!0)
inline bool UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_tA28296A7C298ED10EBA3D71F7868267D7B97FB7F_m5A3ABE263D0FDFC90690602DD6BF58549C1D05BC (RuntimeObject* ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_mB546B2AE90ECCF199EA19D0376D6357F7C5DC8E9_gshared)(___interface0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.DictationEventData>(UnityEngine.EventSystems.BaseEventData)
inline DictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37 * ExecuteEvents_ValidateEventData_TisDictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37_m67BBFE561CB447C577749FA4358B02140F9CE0F3 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  DictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_tC6CD5227DE30910A42F60E4D57C330946FA03FD2 * ExecuteEvents_ValidateEventData_TisInputEventData_1_tC6CD5227DE30910A42F60E4D57C330946FA03FD2_m01B0E71ED8D9F01C10E55485DB6C0C16C3FD03B3 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_tC6CD5227DE30910A42F60E4D57C330946FA03FD2 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t80FAAC4573C5B66BBC88B94D530CDC46B4EECEE2 * ExecuteEvents_ValidateEventData_TisInputEventData_1_t80FAAC4573C5B66BBC88B94D530CDC46B4EECEE2_mB1BC0FDEE1C0FC2B32043A3634F62A0F9B83307C (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t80FAAC4573C5B66BBC88B94D530CDC46B4EECEE2 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData>(UnityEngine.EventSystems.BaseEventData)
inline HandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9 * ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9_m176108EB24DCC2FF910B4D653D3ECC40CDEC51EF (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  HandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD237691749D651D0558112BAF2DE5F7C139AA087 (U3CU3Ec_t53B87639731967C23BD958FB7695CA6D19C1921D * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m2A9C5852FDDF2F191716E29F8BD5E5478E1EEA87 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_mC2227A5AAC0C2D1C5F2C97BB3A5937B8CE368ACA (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_mDA03BFD5DF47FFF880309A31A2DC8454EDFAB08B (intptr_t ___markerPtr0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_StartPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PointerData_get_StartPoint_m0C716E53C50858B186FA8E10EEEE04E53AEC1212 (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 StartPoint { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CStartPointU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::set_StartPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData_set_StartPoint_m1373FD9D3BF90406D263219BC458B5249EA049AE (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 StartPoint { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CStartPointU3Ek__BackingField_1(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_Details()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316  PointerData_get_Details_m2F7A93F53A62978746EE54E30F3F79A08D2A6D55 (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, const RuntimeMethod* method)
{
	{
		// get => focusDetails;
		FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316  L_0 = __this->get_focusDetails_2();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::set_Details(Microsoft.MixedReality.Toolkit.Physics.FocusDetails)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData_set_Details_m5D5493BAD3A222EFE189C27093C2EB856D03C091 (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316  ___value0, const RuntimeMethod* method)
{
	{
		// set => focusDetails = value;
		FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316  L_0 = ___value0;
		__this->set_focusDetails_2(L_0);
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_CurrentPointerTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PointerData_get_CurrentPointerTarget_mD300D51D3BC59BAB2976FE2E38E71EF9EBDA489F (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject CurrentPointerTarget => focusDetails.Object;
		FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_0 = __this->get_address_of_focusDetails_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = FocusDetails_get_Object_m6E611D223AC2D91FA1436B14B16A133F5EAFB83F_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_PreviousPointerTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PointerData_get_PreviousPointerTarget_mB2134E0422482B98214DF04969FCB83BB186A5FC (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PreviousPointerTarget { get; private set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CPreviousPointerTargetU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::set_PreviousPointerTarget(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData_set_PreviousPointerTarget_m60774B5702185ED8B132FB130E2CC52B82FBADF8 (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject PreviousPointerTarget { get; private set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CPreviousPointerTargetU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_RayStepIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerData_get_RayStepIndex_m5135A08E7D7133B671BEF2841905F5045704B571 (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, const RuntimeMethod* method)
{
	{
		// public int RayStepIndex { get; private set; }
		int32_t L_0 = __this->get_U3CRayStepIndexU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::set_RayStepIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData_set_RayStepIndex_m380239B0289557A1FDF1DD40FDD8A0C38E299F19 (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int RayStepIndex { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRayStepIndexU3Ek__BackingField_4(L_0);
		return;
	}
}
// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_GraphicEventData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * PointerData_get_GraphicEventData_m1F04FE8567CBE0B6F022BE33FE645BDB93206F67 (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (graphicData == null)
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = __this->get_graphicData_5();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// graphicData = new PointerEventData(EventSystem.current);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_1;
		L_1 = EventSystem_get_current_m6DCD04BC8A3C673A2961DB3BC373EDC0BEAD8251(/*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_2, L_1, /*hidden argument*/NULL);
		__this->set_graphicData_5(L_2);
	}

IL_0018:
	{
		// return graphicData;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = __this->get_graphicData_5();
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_IsCurrentPointerTargetInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerData_get_IsCurrentPointerTargetInvalid_m2FBBD537801445051613376CB09A505A65E27E21 (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsCurrentPointerTargetInvalid => ((CurrentPointerTarget != null && !CurrentPointerTarget.activeInHierarchy)) ||
		//     (CurrentPointerTarget == null && !ReferenceEquals(CurrentPointerTarget, null));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = PointerData_get_CurrentPointerTarget_mD300D51D3BC59BAB2976FE2E38E71EF9EBDA489F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = PointerData_get_CurrentPointerTarget_mD300D51D3BC59BAB2976FE2E38E71EF9EBDA489F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}

IL_001b:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = PointerData_get_CurrentPointerTarget_mD300D51D3BC59BAB2976FE2E38E71EF9EBDA489F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = PointerData_get_CurrentPointerTarget_mD300D51D3BC59BAB2976FE2E38E71EF9EBDA489F(__this, /*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}

IL_0033:
	{
		return (bool)0;
	}

IL_0035:
	{
		return (bool)1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData__ctor_m2086474D123C5B7550CC81460FA473A8B1A101B8 (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, RuntimeObject* ___pointer0, const RuntimeMethod* method)
{
	{
		// public PointerData(IMixedRealityPointer pointer)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Pointer = pointer;
		RuntimeObject* L_0 = ___pointer0;
		__this->set_Pointer_0(L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::UpdateHit(Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData_UpdateHit_mA638476A12AA1A388BB9403A4AD3D9E26EB3FF31 (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * ___hitResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// using (UpdateHitPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_StaticFields*)il2cpp_codegen_static_fields_for(PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_il2cpp_TypeInfo_var))->get_UpdateHitPerfMarker_6();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (hitResult.hitObject != CurrentPointerTarget)
			PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * L_2 = ___hitResult0;
			NullCheck(L_2);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_2->get_hitObject_2();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
			L_4 = PointerData_get_CurrentPointerTarget_mD300D51D3BC59BAB2976FE2E38E71EF9EBDA489F(__this, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_5;
			L_5 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_3, L_4, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_002c;
			}
		}

IL_0021:
		{
			// Pointer.OnPreCurrentPointerTargetChange();
			RuntimeObject* L_6 = __this->get_Pointer_0();
			NullCheck(L_6);
			InterfaceActionInvoker0::Invoke(32 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::OnPreCurrentPointerTargetChange() */, IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C_il2cpp_TypeInfo_var, L_6);
		}

IL_002c:
		{
			// PreviousPointerTarget = CurrentPointerTarget;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
			L_7 = PointerData_get_CurrentPointerTarget_mD300D51D3BC59BAB2976FE2E38E71EF9EBDA489F(__this, /*hidden argument*/NULL);
			PointerData_set_PreviousPointerTarget_m60774B5702185ED8B132FB130E2CC52B82FBADF8_inline(__this, L_7, /*hidden argument*/NULL);
			// focusDetails.Object = hitResult.hitObject;
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_8 = __this->get_address_of_focusDetails_2();
			PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * L_9 = ___hitResult0;
			NullCheck(L_9);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = L_9->get_hitObject_2();
			FocusDetails_set_Object_mE30D7E68112FCC6D52434D98C5895331269673A7_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_8, L_10, /*hidden argument*/NULL);
			// focusDetails.LastRaycastHit = hitResult.raycastHit;
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_11 = __this->get_address_of_focusDetails_2();
			PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * L_12 = ___hitResult0;
			NullCheck(L_12);
			MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00  L_13 = L_12->get_raycastHit_0();
			FocusDetails_set_LastRaycastHit_mFA9CA0D694CF4CD39649730AE447CC03CF36C9EE_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_11, L_13, /*hidden argument*/NULL);
			// focusDetails.LastGraphicsRaycastResult = hitResult.graphicsRaycastResult;
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_14 = __this->get_address_of_focusDetails_2();
			PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * L_15 = ___hitResult0;
			NullCheck(L_15);
			RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_16 = L_15->get_graphicsRaycastResult_1();
			FocusDetails_set_LastGraphicsRaycastResult_mBCBF82062020D04151A04BED4766CFE445F396AC_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_14, L_16, /*hidden argument*/NULL);
			// if (hitResult.rayStepIndex >= 0)
			PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * L_17 = ___hitResult0;
			NullCheck(L_17);
			int32_t L_18 = L_17->get_rayStepIndex_6();
			if ((((int32_t)L_18) < ((int32_t)0)))
			{
				goto IL_00c9;
			}
		}

IL_0074:
		{
			// RayStepIndex = hitResult.rayStepIndex;
			PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * L_19 = ___hitResult0;
			NullCheck(L_19);
			int32_t L_20 = L_19->get_rayStepIndex_6();
			PointerData_set_RayStepIndex_m380239B0289557A1FDF1DD40FDD8A0C38E299F19_inline(__this, L_20, /*hidden argument*/NULL);
			// StartPoint = hitResult.ray.Origin;
			PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * L_21 = ___hitResult0;
			NullCheck(L_21);
			RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E * L_22 = L_21->get_address_of_ray_5();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
			L_23 = RayStep_get_Origin_mE84E244641769AB2B36226E9D16FCD6A0B2F1D60_inline((RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E *)L_22, /*hidden argument*/NULL);
			PointerData_set_StartPoint_m1373FD9D3BF90406D263219BC458B5249EA049AE_inline(__this, L_23, /*hidden argument*/NULL);
			// focusDetails.RayDistance = hitResult.rayDistance;
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_24 = __this->get_address_of_focusDetails_2();
			PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * L_25 = ___hitResult0;
			NullCheck(L_25);
			float L_26 = L_25->get_rayDistance_7();
			FocusDetails_set_RayDistance_m004B6FD4F669C2324EA89EB1C57DE79277C894F1_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_24, L_26, /*hidden argument*/NULL);
			// focusDetails.Point = hitResult.hitPointOnObject;
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_27 = __this->get_address_of_focusDetails_2();
			PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * L_28 = ___hitResult0;
			NullCheck(L_28);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = L_28->get_hitPointOnObject_3();
			FocusDetails_set_Point_m021BEC1DA8BFD4EEC41FDA0B52F848E92EB5AD31_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_27, L_29, /*hidden argument*/NULL);
			// focusDetails.Normal = hitResult.hitNormalOnObject;
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_30 = __this->get_address_of_focusDetails_2();
			PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * L_31 = ___hitResult0;
			NullCheck(L_31);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = L_31->get_hitNormalOnObject_4();
			FocusDetails_set_Normal_m17F57ACF6B19B36A025B59E21278F740D50060AB_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_30, L_32, /*hidden argument*/NULL);
			// }
			goto IL_0184;
		}

IL_00c9:
		{
			// RayStep firstStep = Pointer.Rays[0];
			RuntimeObject* L_33 = __this->get_Pointer_0();
			NullCheck(L_33);
			RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7* L_34;
			L_34 = InterfaceFuncInvoker0< RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C_il2cpp_TypeInfo_var, L_33);
			NullCheck(L_34);
			int32_t L_35 = 0;
			RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E  L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
			V_2 = L_36;
			// RayStep finalStep = Pointer.Rays[Pointer.Rays.Length - 1];
			RuntimeObject* L_37 = __this->get_Pointer_0();
			NullCheck(L_37);
			RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7* L_38;
			L_38 = InterfaceFuncInvoker0< RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C_il2cpp_TypeInfo_var, L_37);
			RuntimeObject* L_39 = __this->get_Pointer_0();
			NullCheck(L_39);
			RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7* L_40;
			L_40 = InterfaceFuncInvoker0< RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C_il2cpp_TypeInfo_var, L_39);
			NullCheck(L_40);
			NullCheck(L_38);
			int32_t L_41 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))), (int32_t)1));
			RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E  L_42 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
			V_3 = L_42;
			// RayStepIndex = 0;
			PointerData_set_RayStepIndex_m380239B0289557A1FDF1DD40FDD8A0C38E299F19_inline(__this, 0, /*hidden argument*/NULL);
			// StartPoint = firstStep.Origin;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
			L_43 = RayStep_get_Origin_mE84E244641769AB2B36226E9D16FCD6A0B2F1D60_inline((RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E *)(&V_2), /*hidden argument*/NULL);
			PointerData_set_StartPoint_m1373FD9D3BF90406D263219BC458B5249EA049AE_inline(__this, L_43, /*hidden argument*/NULL);
			// float rayDist = 0.0f;
			V_4 = (0.0f);
			// for (int i = 0; i < Pointer.Rays.Length; i++)
			V_5 = 0;
			goto IL_013d;
		}

IL_011b:
		{
			// rayDist += Pointer.Rays[i].Length;
			float L_44 = V_4;
			RuntimeObject* L_45 = __this->get_Pointer_0();
			NullCheck(L_45);
			RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7* L_46;
			L_46 = InterfaceFuncInvoker0< RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C_il2cpp_TypeInfo_var, L_45);
			int32_t L_47 = V_5;
			NullCheck(L_46);
			float L_48;
			L_48 = RayStep_get_Length_m91DEC6B3F1CE1DDDB88380E46B61277E7DC1E9D8_inline((RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E *)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47))), /*hidden argument*/NULL);
			V_4 = ((float)il2cpp_codegen_add((float)L_44, (float)L_48));
			// for (int i = 0; i < Pointer.Rays.Length; i++)
			int32_t L_49 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
		}

IL_013d:
		{
			// for (int i = 0; i < Pointer.Rays.Length; i++)
			int32_t L_50 = V_5;
			RuntimeObject* L_51 = __this->get_Pointer_0();
			NullCheck(L_51);
			RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7* L_52;
			L_52 = InterfaceFuncInvoker0< RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C_il2cpp_TypeInfo_var, L_51);
			NullCheck(L_52);
			if ((((int32_t)L_50) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length))))))
			{
				goto IL_011b;
			}
		}

IL_014e:
		{
			// focusDetails.RayDistance = rayDist;
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_53 = __this->get_address_of_focusDetails_2();
			float L_54 = V_4;
			FocusDetails_set_RayDistance_m004B6FD4F669C2324EA89EB1C57DE79277C894F1_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_53, L_54, /*hidden argument*/NULL);
			// focusDetails.Point = finalStep.Terminus;
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_55 = __this->get_address_of_focusDetails_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
			L_56 = RayStep_get_Terminus_m35F90B142BE20BDCD6426BEB30CB8FC0B72BD7C9_inline((RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E *)(&V_3), /*hidden argument*/NULL);
			FocusDetails_set_Point_m021BEC1DA8BFD4EEC41FDA0B52F848E92EB5AD31_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_55, L_56, /*hidden argument*/NULL);
			// focusDetails.Normal = -finalStep.Direction;
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_57 = __this->get_address_of_focusDetails_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
			L_58 = RayStep_get_Direction_m8F0AA29CC2F69935B92A1C71B52C8C6912A7F4B3_inline((RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E *)(&V_3), /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
			L_59 = Vector3_op_UnaryNegation_m56EB454031EABB53BA35FECF3F61A7E2332A2521_inline(L_58, /*hidden argument*/NULL);
			FocusDetails_set_Normal_m17F57ACF6B19B36A025B59E21278F740D50060AB_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_57, L_59, /*hidden argument*/NULL);
		}

IL_0184:
		{
			// if (hitResult.hitObject != null)
			PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * L_60 = ___hitResult0;
			NullCheck(L_60);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_61 = L_60->get_hitObject_2();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_62;
			L_62 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_61, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_62)
			{
				goto IL_01e0;
			}
		}

IL_0192:
		{
			// focusDetails.PointLocalSpace = hitResult.hitObject.transform.InverseTransformPoint(focusDetails.Point);
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_63 = __this->get_address_of_focusDetails_2();
			PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * L_64 = ___hitResult0;
			NullCheck(L_64);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_65 = L_64->get_hitObject_2();
			NullCheck(L_65);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66;
			L_66 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_65, /*hidden argument*/NULL);
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_67 = __this->get_address_of_focusDetails_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
			L_68 = FocusDetails_get_Point_m6F012CA7F09CF74419141C3B0988A4BCAEE5B4F2_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_67, /*hidden argument*/NULL);
			NullCheck(L_66);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69;
			L_69 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_66, L_68, /*hidden argument*/NULL);
			FocusDetails_set_PointLocalSpace_m1634F54BCC3389C55E7DB08E3E73F30C27048295_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_63, L_69, /*hidden argument*/NULL);
			// focusDetails.NormalLocalSpace = hitResult.hitObject.transform.InverseTransformDirection(focusDetails.Normal);
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_70 = __this->get_address_of_focusDetails_2();
			PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * L_71 = ___hitResult0;
			NullCheck(L_71);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72 = L_71->get_hitObject_2();
			NullCheck(L_72);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73;
			L_73 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_72, /*hidden argument*/NULL);
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_74 = __this->get_address_of_focusDetails_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
			L_75 = FocusDetails_get_Normal_m30AF9F941B737856133F3BCDC144899C6876A599_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_74, /*hidden argument*/NULL);
			NullCheck(L_73);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76;
			L_76 = Transform_InverseTransformDirection_m9EB6F7A2598FD8D6B52F0A6EBA96A3BAAF68D696(L_73, L_75, /*hidden argument*/NULL);
			FocusDetails_set_NormalLocalSpace_m09AE9D3B5C85AD65CDF6E63174A57547C6740434_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_70, L_76, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x210, FINALLY_0202);
		}

IL_01e0:
		{
			// focusDetails.PointLocalSpace = Vector3.zero;
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_77 = __this->get_address_of_focusDetails_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78;
			L_78 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
			FocusDetails_set_PointLocalSpace_m1634F54BCC3389C55E7DB08E3E73F30C27048295_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_77, L_78, /*hidden argument*/NULL);
			// focusDetails.NormalLocalSpace = Vector3.zero;
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_79 = __this->get_address_of_focusDetails_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80;
			L_80 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
			FocusDetails_set_NormalLocalSpace_m09AE9D3B5C85AD65CDF6E63174A57547C6740434_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_79, L_80, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x210, FINALLY_0202);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0202;
	}

FINALLY_0202:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(514)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(514)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x210, IL_0210)
	}

IL_0210:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::UpdateFocusLockedHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData_UpdateFocusLockedHit_m6C95F071202C21D92E3FC53A124E496D7B5E74E5 (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// using (UpdateFocusLockedHitPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_StaticFields*)il2cpp_codegen_static_fields_for(PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_il2cpp_TypeInfo_var))->get_UpdateFocusLockedHitPerfMarker_7();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// PreviousPointerTarget = focusDetails.Object;
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_2 = __this->get_address_of_focusDetails_2();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
			L_3 = FocusDetails_get_Object_m6E611D223AC2D91FA1436B14B16A133F5EAFB83F_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_2, /*hidden argument*/NULL);
			PointerData_set_PreviousPointerTarget_m60774B5702185ED8B132FB130E2CC52B82FBADF8_inline(__this, L_3, /*hidden argument*/NULL);
			// if (focusDetails.Object != null && focusDetails.Object.transform != null)
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_4 = __this->get_address_of_focusDetails_2();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
			L_5 = FocusDetails_get_Object_m6E611D223AC2D91FA1436B14B16A133F5EAFB83F_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_4, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_6;
			L_6 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_00fc;
			}
		}

IL_0035:
		{
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_7 = __this->get_address_of_focusDetails_2();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
			L_8 = FocusDetails_get_Object_m6E611D223AC2D91FA1436B14B16A133F5EAFB83F_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_7, /*hidden argument*/NULL);
			NullCheck(L_8);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
			L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_10;
			L_10 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_00fc;
			}
		}

IL_0050:
		{
			// focusDetails.Point = focusDetails.Object.transform.TransformPoint(focusDetails.PointLocalSpace);
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_11 = __this->get_address_of_focusDetails_2();
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_12 = __this->get_address_of_focusDetails_2();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
			L_13 = FocusDetails_get_Object_m6E611D223AC2D91FA1436B14B16A133F5EAFB83F_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
			L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_15 = __this->get_address_of_focusDetails_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
			L_16 = FocusDetails_get_PointLocalSpace_m36C41EB93AE0F16FB93F1A7679EE729C8D52B411_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_15, /*hidden argument*/NULL);
			NullCheck(L_14);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
			L_17 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_14, L_16, /*hidden argument*/NULL);
			FocusDetails_set_Point_m021BEC1DA8BFD4EEC41FDA0B52F848E92EB5AD31_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_11, L_17, /*hidden argument*/NULL);
			// focusDetails.Normal = focusDetails.Object.transform.TransformDirection(focusDetails.NormalLocalSpace);
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_18 = __this->get_address_of_focusDetails_2();
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_19 = __this->get_address_of_focusDetails_2();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
			L_20 = FocusDetails_get_Object_m6E611D223AC2D91FA1436B14B16A133F5EAFB83F_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_19, /*hidden argument*/NULL);
			NullCheck(L_20);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
			L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_22 = __this->get_address_of_focusDetails_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
			L_23 = FocusDetails_get_NormalLocalSpace_mA235420352F8FE257A05E7CDD5804D6F1B7F7C10_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_22, /*hidden argument*/NULL);
			NullCheck(L_21);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
			L_24 = Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91(L_21, L_23, /*hidden argument*/NULL);
			FocusDetails_set_Normal_m17F57ACF6B19B36A025B59E21278F740D50060AB_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_18, L_24, /*hidden argument*/NULL);
			// focusDetails.PointLocalSpace = focusDetails.Object.transform.InverseTransformPoint(focusDetails.Point);
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_25 = __this->get_address_of_focusDetails_2();
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_26 = __this->get_address_of_focusDetails_2();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
			L_27 = FocusDetails_get_Object_m6E611D223AC2D91FA1436B14B16A133F5EAFB83F_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_26, /*hidden argument*/NULL);
			NullCheck(L_27);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
			L_28 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_27, /*hidden argument*/NULL);
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_29 = __this->get_address_of_focusDetails_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
			L_30 = FocusDetails_get_Point_m6F012CA7F09CF74419141C3B0988A4BCAEE5B4F2_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_29, /*hidden argument*/NULL);
			NullCheck(L_28);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
			L_31 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_28, L_30, /*hidden argument*/NULL);
			FocusDetails_set_PointLocalSpace_m1634F54BCC3389C55E7DB08E3E73F30C27048295_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_25, L_31, /*hidden argument*/NULL);
			// focusDetails.NormalLocalSpace = focusDetails.Object.transform.InverseTransformDirection(focusDetails.Normal);
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_32 = __this->get_address_of_focusDetails_2();
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_33 = __this->get_address_of_focusDetails_2();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
			L_34 = FocusDetails_get_Object_m6E611D223AC2D91FA1436B14B16A133F5EAFB83F_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_33, /*hidden argument*/NULL);
			NullCheck(L_34);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
			L_35 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_34, /*hidden argument*/NULL);
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_36 = __this->get_address_of_focusDetails_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
			L_37 = FocusDetails_get_Normal_m30AF9F941B737856133F3BCDC144899C6876A599_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_36, /*hidden argument*/NULL);
			NullCheck(L_35);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
			L_38 = Transform_InverseTransformDirection_m9EB6F7A2598FD8D6B52F0A6EBA96A3BAAF68D696(L_35, L_37, /*hidden argument*/NULL);
			FocusDetails_set_NormalLocalSpace_m09AE9D3B5C85AD65CDF6E63174A57547C6740434_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_32, L_38, /*hidden argument*/NULL);
		}

IL_00fc:
		{
			// StartPoint = Pointer.Rays[0].Origin;
			RuntimeObject* L_39 = __this->get_Pointer_0();
			NullCheck(L_39);
			RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7* L_40;
			L_40 = InterfaceFuncInvoker0< RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C_il2cpp_TypeInfo_var, L_39);
			NullCheck(L_40);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
			L_41 = RayStep_get_Origin_mE84E244641769AB2B36226E9D16FCD6A0B2F1D60_inline((RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E *)((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
			PointerData_set_StartPoint_m1373FD9D3BF90406D263219BC458B5249EA049AE_inline(__this, L_41, /*hidden argument*/NULL);
			// for (int i = 0; i < Pointer.Rays.Length; i++)
			V_2 = 0;
			goto IL_014c;
		}

IL_011c:
		{
			// if (Pointer.Rays[i].Contains(focusDetails.Point))
			RuntimeObject* L_42 = __this->get_Pointer_0();
			NullCheck(L_42);
			RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7* L_43;
			L_43 = InterfaceFuncInvoker0< RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C_il2cpp_TypeInfo_var, L_42);
			int32_t L_44 = V_2;
			NullCheck(L_43);
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_45 = __this->get_address_of_focusDetails_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
			L_46 = FocusDetails_get_Point_m6F012CA7F09CF74419141C3B0988A4BCAEE5B4F2_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_45, /*hidden argument*/NULL);
			bool L_47;
			L_47 = RayStep_Contains_m5582EB1D15D1BD935B8B9A34291963A434DA59AE((RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E *)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44))), L_46, /*hidden argument*/NULL);
			if (!L_47)
			{
				goto IL_0148;
			}
		}

IL_013f:
		{
			// RayStepIndex = i;
			int32_t L_48 = V_2;
			PointerData_set_RayStepIndex_m380239B0289557A1FDF1DD40FDD8A0C38E299F19_inline(__this, L_48, /*hidden argument*/NULL);
			// break;
			IL2CPP_LEAVE(0x16C, FINALLY_015e);
		}

IL_0148:
		{
			// for (int i = 0; i < Pointer.Rays.Length; i++)
			int32_t L_49 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
		}

IL_014c:
		{
			// for (int i = 0; i < Pointer.Rays.Length; i++)
			int32_t L_50 = V_2;
			RuntimeObject* L_51 = __this->get_Pointer_0();
			NullCheck(L_51);
			RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7* L_52;
			L_52 = InterfaceFuncInvoker0< RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C_il2cpp_TypeInfo_var, L_51);
			NullCheck(L_52);
			if ((((int32_t)L_50) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length))))))
			{
				goto IL_011c;
			}
		}

IL_015c:
		{
			// }
			IL2CPP_LEAVE(0x16C, FINALLY_015e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_015e;
	}

FINALLY_015e:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(350)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(350)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16C, IL_016c)
	}

IL_016c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::ResetFocusedObjects(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData_ResetFocusedObjects_mA7DADA88222577A313C9FE5DE7C3127ECB43F931 (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, bool ___clearPreviousObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * G_B5_0 = NULL;
	PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * G_B4_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B6_0 = NULL;
	PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * G_B6_1 = NULL;
	{
		// using (ResetFocusedObjectPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_StaticFields*)il2cpp_codegen_static_fields_for(PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_il2cpp_TypeInfo_var))->get_ResetFocusedObjectPerfMarker_8();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (CurrentPointerTarget != null)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
			L_2 = PointerData_get_CurrentPointerTarget_mD300D51D3BC59BAB2976FE2E38E71EF9EBDA489F(__this, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_0027;
			}
		}

IL_001c:
		{
			// Pointer.OnPreCurrentPointerTargetChange();
			RuntimeObject* L_4 = __this->get_Pointer_0();
			NullCheck(L_4);
			InterfaceActionInvoker0::Invoke(32 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::OnPreCurrentPointerTargetChange() */, IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C_il2cpp_TypeInfo_var, L_4);
		}

IL_0027:
		{
			// PreviousPointerTarget = clearPreviousObject ? null : CurrentPointerTarget;
			bool L_5 = ___clearPreviousObject0;
			G_B4_0 = __this;
			if (L_5)
			{
				G_B5_0 = __this;
				goto IL_0033;
			}
		}

IL_002b:
		{
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
			L_6 = PointerData_get_CurrentPointerTarget_mD300D51D3BC59BAB2976FE2E38E71EF9EBDA489F(__this, /*hidden argument*/NULL);
			G_B6_0 = L_6;
			G_B6_1 = G_B4_0;
			goto IL_0034;
		}

IL_0033:
		{
			G_B6_0 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)(NULL));
			G_B6_1 = G_B5_0;
		}

IL_0034:
		{
			NullCheck(G_B6_1);
			PointerData_set_PreviousPointerTarget_m60774B5702185ED8B132FB130E2CC52B82FBADF8_inline(G_B6_1, G_B6_0, /*hidden argument*/NULL);
			// focusDetails.Point = Details.Point;
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_7 = __this->get_address_of_focusDetails_2();
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316  L_8;
			L_8 = PointerData_get_Details_m2F7A93F53A62978746EE54E30F3F79A08D2A6D55_inline(__this, /*hidden argument*/NULL);
			V_2 = L_8;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
			L_9 = FocusDetails_get_Point_m6F012CA7F09CF74419141C3B0988A4BCAEE5B4F2_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)(&V_2), /*hidden argument*/NULL);
			FocusDetails_set_Point_m021BEC1DA8BFD4EEC41FDA0B52F848E92EB5AD31_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_7, L_9, /*hidden argument*/NULL);
			// focusDetails.Normal = Details.Normal;
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_10 = __this->get_address_of_focusDetails_2();
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316  L_11;
			L_11 = PointerData_get_Details_m2F7A93F53A62978746EE54E30F3F79A08D2A6D55_inline(__this, /*hidden argument*/NULL);
			V_2 = L_11;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
			L_12 = FocusDetails_get_Normal_m30AF9F941B737856133F3BCDC144899C6876A599_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)(&V_2), /*hidden argument*/NULL);
			FocusDetails_set_Normal_m17F57ACF6B19B36A025B59E21278F740D50060AB_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_10, L_12, /*hidden argument*/NULL);
			// focusDetails.NormalLocalSpace = Details.NormalLocalSpace;
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_13 = __this->get_address_of_focusDetails_2();
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316  L_14;
			L_14 = PointerData_get_Details_m2F7A93F53A62978746EE54E30F3F79A08D2A6D55_inline(__this, /*hidden argument*/NULL);
			V_2 = L_14;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
			L_15 = FocusDetails_get_NormalLocalSpace_mA235420352F8FE257A05E7CDD5804D6F1B7F7C10_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)(&V_2), /*hidden argument*/NULL);
			FocusDetails_set_NormalLocalSpace_m09AE9D3B5C85AD65CDF6E63174A57547C6740434_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_13, L_15, /*hidden argument*/NULL);
			// focusDetails.PointLocalSpace = Details.PointLocalSpace;
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_16 = __this->get_address_of_focusDetails_2();
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316  L_17;
			L_17 = PointerData_get_Details_m2F7A93F53A62978746EE54E30F3F79A08D2A6D55_inline(__this, /*hidden argument*/NULL);
			V_2 = L_17;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
			L_18 = FocusDetails_get_PointLocalSpace_m36C41EB93AE0F16FB93F1A7679EE729C8D52B411_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)(&V_2), /*hidden argument*/NULL);
			FocusDetails_set_PointLocalSpace_m1634F54BCC3389C55E7DB08E3E73F30C27048295_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_16, L_18, /*hidden argument*/NULL);
			// focusDetails.Object = null;
			FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * L_19 = __this->get_address_of_focusDetails_2();
			FocusDetails_set_Object_mE30D7E68112FCC6D52434D98C5895331269673A7_inline((FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 *)L_19, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0xB9, FINALLY_00ab);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ab;
	}

FINALLY_00ab:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(171)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(171)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB9, IL_00b9)
	}

IL_00b9:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::Equals(Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerData_Equals_m3163C63B88958E1C6BC8185AE05349E138DFABBB (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, other))
		PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, other))
		PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * L_1 = ___other0;
		if ((!(((RuntimeObject*)(PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 *)__this) == ((RuntimeObject*)(PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return Pointer.PointerId == other.Pointer.PointerId;
		RuntimeObject* L_2 = __this->get_Pointer_0();
		NullCheck(L_2);
		uint32_t L_3;
		L_3 = InterfaceFuncInvoker0< uint32_t >::Invoke(2 /* System.UInt32 Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_PointerId() */, IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C_il2cpp_TypeInfo_var, L_2);
		PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * L_4 = ___other0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->get_Pointer_0();
		NullCheck(L_5);
		uint32_t L_6;
		L_6 = InterfaceFuncInvoker0< uint32_t >::Invoke(2 /* System.UInt32 Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_PointerId() */, IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C_il2cpp_TypeInfo_var, L_5);
		return (bool)((((int32_t)L_3) == ((int32_t)L_6))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerData_Equals_mDDE4C1F14398B82DF6E6C99515008A6892C0FFB9 (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj))
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj))
		RuntimeObject * L_1 = ___obj0;
		if ((!(((RuntimeObject*)(PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != GetType())
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_2, /*hidden argument*/NULL);
		Type_t * L_4;
		L_4 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m519B1E8F2F1E2101ADF863401FCAE38210395368(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals((PointerData)obj);
		RuntimeObject * L_6 = ___obj0;
		bool L_7;
		L_7 = PointerData_Equals_m3163C63B88958E1C6BC8185AE05349E138DFABBB(__this, ((PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 *)CastclassClass((RuntimeObject*)L_6, PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerData_GetHashCode_m9EE09F566982E8F26FA7A2173BA85B17081B66FF (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, const RuntimeMethod* method)
{
	{
		// return Pointer != null ? Pointer.GetHashCode() : 0;
		RuntimeObject* L_0 = __this->get_Pointer_0();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->get_Pointer_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData__cctor_mDDE0133B66247C6104100998E0A945DFE62163C2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F670F51C586102E4AD2E77FED417809FF46F3D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A4B7834144C35546E7F3AA5FB0F9239B88B8B6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CFDCFFDD9F8EAA25BCF8F12B4E2CF9CE83B9B29);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdateHitPerfMarker = new ProfilerMarker("[MRTK] PointerData.UpdateHit");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral3F670F51C586102E4AD2E77FED417809FF46F3D8, /*hidden argument*/NULL);
		((PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_StaticFields*)il2cpp_codegen_static_fields_for(PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_il2cpp_TypeInfo_var))->set_UpdateHitPerfMarker_6(L_0);
		// private static readonly ProfilerMarker UpdateFocusLockedHitPerfMarker = new ProfilerMarker("[MRTK] PointerData.UpdateFocusLockedHit");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteral9CFDCFFDD9F8EAA25BCF8F12B4E2CF9CE83B9B29, /*hidden argument*/NULL);
		((PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_StaticFields*)il2cpp_codegen_static_fields_for(PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_il2cpp_TypeInfo_var))->set_UpdateFocusLockedHitPerfMarker_7(L_1);
		// private static readonly ProfilerMarker ResetFocusedObjectPerfMarker = new ProfilerMarker("[MRTK] PointerData.ResetFocusedObject");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_2), _stringLiteral8A4B7834144C35546E7F3AA5FB0F9239B88B8B6A, /*hidden argument*/NULL);
		((PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_StaticFields*)il2cpp_codegen_static_fields_for(PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213_il2cpp_TypeInfo_var))->set_ResetFocusedObjectPerfMarker_8(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerHitResult_Clear_mCC8E8B95B628572FA4F4FD4A9B7F4BA9003F545D (PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * __this, const RuntimeMethod* method)
{
	{
		// raycastHit = default(MixedRealityRaycastHit);
		MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00 * L_0 = __this->get_address_of_raycastHit_0();
		il2cpp_codegen_initobj(L_0, sizeof(MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00 ));
		// graphicsRaycastResult = default(RaycastResult);
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * L_1 = __this->get_address_of_graphicsRaycastResult_1();
		il2cpp_codegen_initobj(L_1, sizeof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE ));
		// hitObject = null;
		__this->set_hitObject_2((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// hitPointOnObject = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
		__this->set_hitPointOnObject_3(L_2);
		// hitNormalOnObject = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
		__this->set_hitNormalOnObject_4(L_3);
		// ray = default(RayStep);
		RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E * L_4 = __this->get_address_of_ray_5();
		il2cpp_codegen_initobj(L_4, sizeof(RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E ));
		// rayStepIndex = -1;
		__this->set_rayStepIndex_6((-1));
		// rayDistance = 0.0f;
		__this->set_rayDistance_7((0.0f));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::Set(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Vector4,Microsoft.MixedReality.Toolkit.Physics.RayStep,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerHitResult_Set_m3E51D46E0E9513D8826F6E795943725CE81B5C5F (PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hitObject0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitPointOnObject1, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___hitNormalOnObject2, RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E  ___ray3, int32_t ___rayStepIndex4, float ___rayDistance5, const RuntimeMethod* method)
{
	{
		// raycastHit = default(MixedRealityRaycastHit);
		MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00 * L_0 = __this->get_address_of_raycastHit_0();
		il2cpp_codegen_initobj(L_0, sizeof(MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00 ));
		// graphicsRaycastResult = default(RaycastResult);
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * L_1 = __this->get_address_of_graphicsRaycastResult_1();
		il2cpp_codegen_initobj(L_1, sizeof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE ));
		// this.hitObject = hitObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___hitObject0;
		__this->set_hitObject_2(L_2);
		// this.hitPointOnObject = hitPointOnObject;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___hitPointOnObject1;
		__this->set_hitPointOnObject_3(L_3);
		// this.hitNormalOnObject = hitNormalOnObject;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = ___hitNormalOnObject2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector4_op_Implicit_mFAF4066991B0091223DB22E35C4290C43E5913AB(L_4, /*hidden argument*/NULL);
		__this->set_hitNormalOnObject_4(L_5);
		// this.ray = ray;
		RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E  L_6 = ___ray3;
		__this->set_ray_5(L_6);
		// this.rayStepIndex = rayStepIndex;
		int32_t L_7 = ___rayStepIndex4;
		__this->set_rayStepIndex_6(L_7);
		// this.rayDistance = rayDistance;
		float L_8 = ___rayDistance5;
		__this->set_rayDistance_7(L_8);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::Set(Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit,Microsoft.MixedReality.Toolkit.Physics.RayStep,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerHitResult_Set_m4DF4FCA3F1F24849D0BAB3826C56A145BD0583F0 (PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * __this, MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00  ___hit0, RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E  ___ray1, int32_t ___rayStepIndex2, float ___rayDistance3, bool ___focusIndividualCompoundCollider4, const RuntimeMethod* method)
{
	PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * G_B2_0 = NULL;
	PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * G_B1_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B3_0 = NULL;
	PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * G_B3_1 = NULL;
	{
		// raycastHit = hit;
		MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00  L_0 = ___hit0;
		__this->set_raycastHit_0(L_0);
		// graphicsRaycastResult = default(RaycastResult);
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * L_1 = __this->get_address_of_graphicsRaycastResult_1();
		il2cpp_codegen_initobj(L_1, sizeof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE ));
		// hitObject = focusIndividualCompoundCollider ? hit.collider.gameObject : hit.transform.gameObject;
		bool L_2 = ___focusIndividualCompoundCollider4;
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_0025;
		}
	}
	{
		MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00  L_3 = ___hit0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = L_3.get_transform_7();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0030;
	}

IL_0025:
	{
		MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00  L_6 = ___hit0;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_7 = L_6.get_collider_10();
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_0030:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_hitObject_2(G_B3_0);
		// hitPointOnObject = hit.point;
		MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00  L_9 = ___hit0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = L_9.get_point_0();
		__this->set_hitPointOnObject_3(L_10);
		// hitNormalOnObject = hit.normal;
		MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00  L_11 = ___hit0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = L_11.get_normal_1();
		__this->set_hitNormalOnObject_4(L_12);
		// this.ray = ray;
		RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E  L_13 = ___ray1;
		__this->set_ray_5(L_13);
		// this.rayStepIndex = rayStepIndex;
		int32_t L_14 = ___rayStepIndex2;
		__this->set_rayStepIndex_6(L_14);
		// this.rayDistance = rayDistance;
		float L_15 = ___rayDistance3;
		__this->set_rayDistance_7(L_15);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::Set(UnityEngine.EventSystems.RaycastResult,UnityEngine.Vector3,UnityEngine.Vector4,Microsoft.MixedReality.Toolkit.Physics.RayStep,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerHitResult_Set_m0C511236B5F8F9EC56A63DF775C37DF9D84E2FF7 (PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * __this, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___result0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitPointOnObject1, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___hitNormalOnObject2, RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E  ___ray3, int32_t ___rayStepIndex4, float ___rayDistance5, const RuntimeMethod* method)
{
	{
		// raycastHit = default(MixedRealityRaycastHit);
		MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00 * L_0 = __this->get_address_of_raycastHit_0();
		il2cpp_codegen_initobj(L_0, sizeof(MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00 ));
		// raycastHit.point = hitPointOnObject;
		MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00 * L_1 = __this->get_address_of_raycastHit_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___hitPointOnObject1;
		L_1->set_point_0(L_2);
		// raycastHit.normal = hitNormalOnObject;
		MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00 * L_3 = __this->get_address_of_raycastHit_0();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = ___hitNormalOnObject2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector4_op_Implicit_mFAF4066991B0091223DB22E35C4290C43E5913AB(L_4, /*hidden argument*/NULL);
		L_3->set_normal_1(L_5);
		// raycastHit.distance = rayDistance;
		MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00 * L_6 = __this->get_address_of_raycastHit_0();
		float L_7 = ___rayDistance5;
		L_6->set_distance_3(L_7);
		// raycastHit.transform = result.gameObject.transform;
		MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00 * L_8 = __this->get_address_of_raycastHit_0();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline((RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE *)(&___result0), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		L_8->set_transform_7(L_10);
		// raycastHit.raycastValid = true;
		MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00 * L_11 = __this->get_address_of_raycastHit_0();
		L_11->set_raycastValid_9((bool)1);
		// graphicsRaycastResult = result;
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_12 = ___result0;
		__this->set_graphicsRaycastResult_1(L_12);
		// this.hitObject = result.gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline((RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE *)(&___result0), /*hidden argument*/NULL);
		__this->set_hitObject_2(L_13);
		// this.hitPointOnObject = hitPointOnObject;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = ___hitPointOnObject1;
		__this->set_hitPointOnObject_3(L_14);
		// this.hitNormalOnObject = hitNormalOnObject;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_15 = ___hitNormalOnObject2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector4_op_Implicit_mFAF4066991B0091223DB22E35C4290C43E5913AB(L_15, /*hidden argument*/NULL);
		__this->set_hitNormalOnObject_4(L_16);
		// this.ray = ray;
		RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E  L_17 = ___ray3;
		__this->set_ray_5(L_17);
		// this.rayStepIndex = rayStepIndex;
		int32_t L_18 = ___rayStepIndex4;
		__this->set_rayStepIndex_6(L_18);
		// this.rayDistance = rayDistance;
		float L_19 = ___rayDistance5;
		__this->set_rayDistance_7(L_19);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerHitResult__ctor_m9C70DD0C9E6EA44BCD56906E44DDDAAEA70C58AF (PointerHitResult_t6AD574B2933CBC7ED242843CC49A0531317C0728 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 hitPointOnObject = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
		__this->set_hitPointOnObject_3(L_0);
		// public Vector3 hitNormalOnObject = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
		__this->set_hitNormalOnObject_4(L_1);
		// public int rayStepIndex = -1;
		__this->set_rayStepIndex_6((-1));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::get_InputSourceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerPreferences_get_InputSourceType_m72F97938461D75708AD238D6662D07F840BDD198 (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, const RuntimeMethod* method)
{
	{
		// public InputSourceType InputSourceType { get; }
		int32_t L_0 = __this->get_U3CInputSourceTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::get_PointerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * PointerPreferences_get_PointerType_mA878224D689866E21EA72D04D83B039A4ED49ABF (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, const RuntimeMethod* method)
{
	{
		// public Type PointerType { get; }
		Type_t * L_0 = __this->get_U3CPointerTypeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::Matches(System.Type,Microsoft.MixedReality.Toolkit.Input.InputSourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerPreferences_Matches_m54BB4BA9EA59C37374CD35EC7B0404037D004075 (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, Type_t * ___queryType0, int32_t ___queryInputType1, const RuntimeMethod* method)
{
	{
		// return queryInputType == InputSourceType && queryType.IsAssignableFrom(PointerType);
		int32_t L_0 = ___queryInputType1;
		int32_t L_1;
		L_1 = PointerPreferences_get_InputSourceType_m72F97938461D75708AD238D6662D07F840BDD198_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0016;
		}
	}
	{
		Type_t * L_2 = ___queryType0;
		Type_t * L_3;
		L_3 = PointerPreferences_get_PointerType_mA878224D689866E21EA72D04D83B039A4ED49ABF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtFuncInvoker1< bool, Type_t * >::Invoke(112 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_2, L_3);
		return L_4;
	}

IL_0016:
	{
		return (bool)0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::get_Left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerPreferences_get_Left_m27D6C4D2E8AB8DC2AAFA5D52B948C0FE5C34251A (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, const RuntimeMethod* method)
{
	{
		// public PointerBehavior Left { get; private set; }
		int32_t L_0 = __this->get_U3CLeftU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::set_Left(Microsoft.MixedReality.Toolkit.Input.PointerBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerPreferences_set_Left_mBE3FB989FA7752716C38E998E3909ADF22FE0BF0 (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public PointerBehavior Left { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CLeftU3Ek__BackingField_2(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::get_Right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerPreferences_get_Right_mF8D590E57B4E2FE0C358525757055A82A9E6EFA8 (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, const RuntimeMethod* method)
{
	{
		// public PointerBehavior Right { get; private set; }
		int32_t L_0 = __this->get_U3CRightU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::set_Right(Microsoft.MixedReality.Toolkit.Input.PointerBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerPreferences_set_Right_m9C2E593E82206CA22FCB240AFF87611BD82EA6D7 (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public PointerBehavior Right { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRightU3Ek__BackingField_3(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::get_Other()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerPreferences_get_Other_m1DCB326ED20626010AF59C06CDD1E30E67E17D70 (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, const RuntimeMethod* method)
{
	{
		// public PointerBehavior Other { get; private set; }
		int32_t L_0 = __this->get_U3COtherU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::set_Other(Microsoft.MixedReality.Toolkit.Input.PointerBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerPreferences_set_Other_mA59BA29954BA1CC221042978C3ACF1F1D1FCF92C (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public PointerBehavior Other { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3COtherU3Ek__BackingField_4(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::GetBehaviorForHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerPreferences_GetBehaviorForHandedness_m1BA3AFC951DFAB2D61C2326418A8DBE2FA13064F (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, uint8_t ___h0, const RuntimeMethod* method)
{
	{
		// if ((h & Handedness.Right) != 0)
		uint8_t L_0 = ___h0;
		if (!((int32_t)((int32_t)L_0&(int32_t)2)))
		{
			goto IL_000c;
		}
	}
	{
		// return Right;
		int32_t L_1;
		L_1 = PointerPreferences_get_Right_mF8D590E57B4E2FE0C358525757055A82A9E6EFA8_inline(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_000c:
	{
		// if ((h & Handedness.Left) != 0)
		uint8_t L_2 = ___h0;
		if (!((int32_t)((int32_t)L_2&(int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		// return Left;
		int32_t L_3;
		L_3 = PointerPreferences_get_Left_m27D6C4D2E8AB8DC2AAFA5D52B948C0FE5C34251A_inline(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_0018:
	{
		// if ((h & Handedness.Other) != 0)
		uint8_t L_4 = ___h0;
		if (!((int32_t)((int32_t)L_4&(int32_t)4)))
		{
			goto IL_0024;
		}
	}
	{
		// return Other;
		int32_t L_5;
		L_5 = PointerPreferences_get_Other_m1DCB326ED20626010AF59C06CDD1E30E67E17D70_inline(__this, /*hidden argument*/NULL);
		return L_5;
	}

IL_0024:
	{
		// return PointerBehavior.Default;
		return (int32_t)(0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::SetBehaviorForHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.PointerBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerPreferences_SetBehaviorForHandedness_mEF9658281D24BE1345E6E5937036B135C9DDDE40 (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, uint8_t ___h0, int32_t ___b1, const RuntimeMethod* method)
{
	{
		// if ((h & Handedness.Right) != 0)
		uint8_t L_0 = ___h0;
		if (!((int32_t)((int32_t)L_0&(int32_t)2)))
		{
			goto IL_000c;
		}
	}
	{
		// Right = b;
		int32_t L_1 = ___b1;
		PointerPreferences_set_Right_m9C2E593E82206CA22FCB240AFF87611BD82EA6D7_inline(__this, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	{
		// if ((h & Handedness.Left) != 0)
		uint8_t L_2 = ___h0;
		if (!((int32_t)((int32_t)L_2&(int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		// Left = b;
		int32_t L_3 = ___b1;
		PointerPreferences_set_Left_mBE3FB989FA7752716C38E998E3909ADF22FE0BF0_inline(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// if ((h & Handedness.Other) != 0)
		uint8_t L_4 = ___h0;
		if (!((int32_t)((int32_t)L_4&(int32_t)4)))
		{
			goto IL_0024;
		}
	}
	{
		// Other = b;
		int32_t L_5 = ___b1;
		PointerPreferences_set_Other_mA59BA29954BA1CC221042978C3ACF1F1D1FCF92C_inline(__this, L_5, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::.ctor(System.Type,Microsoft.MixedReality.Toolkit.Input.InputSourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerPreferences__ctor_mAAA2DDADC8C7C680E00B793187141FE47DEE3DFE (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, Type_t * ___pointerType0, int32_t ___inputType1, const RuntimeMethod* method)
{
	{
		// public PointerPreferences(Type pointerType, InputSourceType inputType)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Left = PointerBehavior.Default;
		PointerPreferences_set_Left_mBE3FB989FA7752716C38E998E3909ADF22FE0BF0_inline(__this, 0, /*hidden argument*/NULL);
		// Right = PointerBehavior.Default;
		PointerPreferences_set_Right_m9C2E593E82206CA22FCB240AFF87611BD82EA6D7_inline(__this, 0, /*hidden argument*/NULL);
		// Other = PointerBehavior.Default;
		PointerPreferences_set_Other_mA59BA29954BA1CC221042978C3ACF1F1D1FCF92C_inline(__this, 0, /*hidden argument*/NULL);
		// InputSourceType = inputType;
		int32_t L_0 = ___inputType1;
		__this->set_U3CInputSourceTypeU3Ek__BackingField_0(L_0);
		// PointerType = pointerType;
		Type_t * L_1 = ___pointerType0;
		__this->set_U3CPointerTypeU3Ek__BackingField_1(L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__83::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRaiseSourceDetectedU3Ed__83_MoveNext_mD7AF6261FB0527FB3F9219051327729CE749E07D (U3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C_m75F4BDB60A3AE7FAF7386BB1CB097C2DB58B082D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t180D897538CB6DFE721697AB118BDA1BC705EB26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityCursor_t0293DAB631DAB81630F7AF39212B17B080DB16A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisGazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4_mA507EBEFA4575378A88A05CBFBCF61CDFEF4B1B9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * V_1 = NULL;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B15_0 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0024;
			}
		}

IL_0011:
		{
			// using (RaiseSourceDetectedPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3 = ((GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4_StaticFields*)il2cpp_codegen_static_fields_for(GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4_il2cpp_TypeInfo_var))->get_RaiseSourceDetectedPerfMarker_32();
			V_2 = L_3;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_4;
			L_4 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_2), /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_3(L_4);
		}

IL_0024:
		{
		}

IL_0025:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				if (!L_5)
				{
					goto IL_0060;
				}
			}

IL_0028:
			{
				// await EnsureInputSystemValid();
				GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_6 = V_1;
				NullCheck(L_6);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
				L_7 = InputSystemGlobalHandlerListener_EnsureInputSystemValid_m46890ECB4D0686F2FC1298E2AFE6FCB499E3D2FB(L_6, /*hidden argument*/NULL);
				NullCheck(L_7);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_8;
				L_8 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_7, /*hidden argument*/NULL);
				V_3 = L_8;
				bool L_9;
				L_9 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
				if (L_9)
				{
					goto IL_007c;
				}
			}

IL_003d:
			{
				int32_t L_10 = 0;
				V_0 = L_10;
				__this->set_U3CU3E1__state_0(L_10);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11 = V_3;
				__this->set_U3CU3Eu__1_4(L_11);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_12 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C_m75F4BDB60A3AE7FAF7386BB1CB097C2DB58B082D((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_12, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C_m75F4BDB60A3AE7FAF7386BB1CB097C2DB58B082D_RuntimeMethod_var);
				IL2CPP_LEAVE(0x10D, FINALLY_00bd);
			}

IL_0060:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_13 = __this->get_U3CU3Eu__1_4();
				V_3 = L_13;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_14 = __this->get_address_of_U3CU3Eu__1_4();
				il2cpp_codegen_initobj(L_14, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_15 = (-1);
				V_0 = L_15;
				__this->set_U3CU3E1__state_0(L_15);
			}

IL_007c:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
				// if (this.IsNull())
				GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_16 = V_1;
				bool L_17;
				L_17 = UnityObjectExtensions_IsNull_TisGazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4_mA507EBEFA4575378A88A05CBFBCF61CDFEF4B1B9(L_16, /*hidden argument*/UnityObjectExtensions_IsNull_TisGazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4_mA507EBEFA4575378A88A05CBFBCF61CDFEF4B1B9_RuntimeMethod_var);
				if (!L_17)
				{
					goto IL_008d;
				}
			}

IL_008b:
			{
				// return;
				IL2CPP_LEAVE(0xFA, FINALLY_00bd);
			}

IL_008d:
			{
				// CoreServices.InputSystem?.RaiseSourceDetected(GazeInputSource);
				IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t180D897538CB6DFE721697AB118BDA1BC705EB26_il2cpp_TypeInfo_var);
				RuntimeObject* L_18;
				L_18 = CoreServices_get_InputSystem_m09B8CBC7F935B5EBD4AC8682902B60A952EC8BDE(/*hidden argument*/NULL);
				RuntimeObject* L_19 = L_18;
				G_B11_0 = L_19;
				if (L_19)
				{
					G_B12_0 = L_19;
					goto IL_0098;
				}
			}

IL_0095:
			{
				goto IL_00a4;
			}

IL_0098:
			{
				GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_20 = V_1;
				NullCheck(L_20);
				RuntimeObject* L_21;
				L_21 = VirtFuncInvoker0< RuntimeObject* >::Invoke(39 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_GazeInputSource() */, L_20);
				NullCheck(G_B12_0);
				InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(24 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceDetected(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var, G_B12_0, L_21, (RuntimeObject*)NULL);
			}

IL_00a4:
			{
				// GazePointer.BaseCursor?.SetVisibility(true);
				GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_22 = V_1;
				NullCheck(L_22);
				RuntimeObject* L_23;
				L_23 = VirtFuncInvoker0< RuntimeObject* >::Invoke(40 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_GazePointer() */, L_22);
				NullCheck(L_23);
				RuntimeObject* L_24;
				L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_BaseCursor() */, IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C_il2cpp_TypeInfo_var, L_23);
				RuntimeObject* L_25 = L_24;
				G_B14_0 = L_25;
				if (L_25)
				{
					G_B15_0 = L_25;
					goto IL_00b5;
				}
			}

IL_00b2:
			{
				goto IL_00bb;
			}

IL_00b5:
			{
				NullCheck(G_B15_0);
				InterfaceActionInvoker1< bool >::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor::SetVisibility(System.Boolean) */, IMixedRealityCursor_t0293DAB631DAB81630F7AF39212B17B080DB16A3_il2cpp_TypeInfo_var, G_B15_0, (bool)1);
			}

IL_00bb:
			{
				// }
				IL2CPP_LEAVE(0xD3, FINALLY_00bd);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00bd;
		}

FINALLY_00bd:
		{ // begin finally (depth: 2)
			{
				int32_t L_26 = V_0;
				if ((((int32_t)L_26) >= ((int32_t)0)))
				{
					goto IL_00d2;
				}
			}

IL_00c1:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_27 = __this->get_address_of_U3CU3E7__wrap1_3();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_27, /*hidden argument*/NULL);
			}

IL_00d2:
			{
				IL2CPP_END_FINALLY(189)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(189)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x10D, IL_010d)
			IL2CPP_JUMP_TBL(0xFA, IL_00fa)
			IL2CPP_JUMP_TBL(0xD3, IL_00d3)
		}

IL_00d3:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_28 = __this->get_address_of_U3CU3E7__wrap1_3();
			il2cpp_codegen_initobj(L_28, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_00fa;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e1;
		}
		throw e;
	}

CATCH_00e1:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_29 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_30 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_29, L_30, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_010d;
	} // end catch (depth: 1)

IL_00fa:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_31 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_31, /*hidden argument*/NULL);
	}

IL_010d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRaiseSourceDetectedU3Ed__83_MoveNext_mD7AF6261FB0527FB3F9219051327729CE749E07D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C * _thisAdjusted = reinterpret_cast<U3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C *>(__this + _offset);
	U3CRaiseSourceDetectedU3Ed__83_MoveNext_mD7AF6261FB0527FB3F9219051327729CE749E07D(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__83::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRaiseSourceDetectedU3Ed__83_SetStateMachine_mFC32CF4BEC31D9FC75FDE1ABEB44B81BCA4815A7 (U3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRaiseSourceDetectedU3Ed__83_SetStateMachine_mFC32CF4BEC31D9FC75FDE1ABEB44B81BCA4815A7_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C * _thisAdjusted = reinterpret_cast<U3CRaiseSourceDetectedU3Ed__83_t9E8463AE367B4021094EF3298DB51CE234F50F1C *>(__this + _offset);
	U3CRaiseSourceDetectedU3Ed__83_SetStateMachine_mFC32CF4BEC31D9FC75FDE1ABEB44B81BCA4815A7(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__69::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__69_MoveNext_m3D35B7A3C057C0EBB39FC099AC67F85D9955744E (U3CStartU3Ed__69_tA1C435686F9556734AB0B8A96F09E74431B6874B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__69_tA1C435686F9556734AB0B8A96F09E74431B6874B_mC399D11DC357CF682CD09107AA9C085FF162B5EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityCursor_t0293DAB631DAB81630F7AF39212B17B080DB16A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisGazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4_mA507EBEFA4575378A88A05CBFBCF61CDFEF4B1B9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004f;
			}
		}

IL_0011:
		{
			// base.Start();
			GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_3 = V_1;
			NullCheck(L_3);
			GazeProvider_U3CU3En__0_m2391EBB4F95E45AB45C2587EE41FC1D1D2990AE3(L_3, /*hidden argument*/NULL);
			// await EnsureInputSystemValid();
			GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_4 = V_1;
			NullCheck(L_4);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
			L_5 = InputSystemGlobalHandlerListener_EnsureInputSystemValid_m46890ECB4D0686F2FC1298E2AFE6FCB499E3D2FB(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_6;
			L_6 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_5, /*hidden argument*/NULL);
			V_2 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_006b;
			}
		}

IL_002c:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_9 = V_2;
			__this->set_U3CU3Eu__1_3(L_9);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__69_tA1C435686F9556734AB0B8A96F09E74431B6874B_mC399D11DC357CF682CD09107AA9C085FF162B5EF((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_10, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CStartU3Ed__69_tA1C435686F9556734AB0B8A96F09E74431B6874B *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__69_tA1C435686F9556734AB0B8A96F09E74431B6874B_mC399D11DC357CF682CD09107AA9C085FF162B5EF_RuntimeMethod_var);
			goto IL_00d4;
		}

IL_004f:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11 = __this->get_U3CU3Eu__1_3();
			V_2 = L_11;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_12 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_006b:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			// if (this.IsNull())
			GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_14 = V_1;
			bool L_15;
			L_15 = UnityObjectExtensions_IsNull_TisGazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4_mA507EBEFA4575378A88A05CBFBCF61CDFEF4B1B9(L_14, /*hidden argument*/UnityObjectExtensions_IsNull_TisGazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4_mA507EBEFA4575378A88A05CBFBCF61CDFEF4B1B9_RuntimeMethod_var);
			if (!L_15)
			{
				goto IL_007c;
			}
		}

IL_007a:
		{
			// return;
			goto IL_00c1;
		}

IL_007c:
		{
			// GazePointer.BaseCursor?.SetVisibility(true);
			GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_16 = V_1;
			NullCheck(L_16);
			RuntimeObject* L_17;
			L_17 = VirtFuncInvoker0< RuntimeObject* >::Invoke(40 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_GazePointer() */, L_16);
			NullCheck(L_17);
			RuntimeObject* L_18;
			L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_BaseCursor() */, IMixedRealityPointer_t024FE1F5BCF550810E9D591E67792FD18B70AA7C_il2cpp_TypeInfo_var, L_17);
			RuntimeObject* L_19 = L_18;
			G_B8_0 = L_19;
			if (L_19)
			{
				G_B9_0 = L_19;
				goto IL_008d;
			}
		}

IL_008a:
		{
			goto IL_0093;
		}

IL_008d:
		{
			NullCheck(G_B9_0);
			InterfaceActionInvoker1< bool >::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor::SetVisibility(System.Boolean) */, IMixedRealityCursor_t0293DAB631DAB81630F7AF39212B17B080DB16A3_il2cpp_TypeInfo_var, G_B9_0, (bool)1);
		}

IL_0093:
		{
			// if (delayInitialization)
			GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_20 = V_1;
			NullCheck(L_20);
			bool L_21 = L_20->get_delayInitialization_25();
			if (!L_21)
			{
				goto IL_00a8;
			}
		}

IL_009b:
		{
			// delayInitialization = false;
			GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_22 = V_1;
			NullCheck(L_22);
			L_22->set_delayInitialization_25((bool)0);
			// RaiseSourceDetected();
			GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_23 = V_1;
			NullCheck(L_23);
			GazeProvider_RaiseSourceDetected_mBF58AA84D31599C942CE17DF8F0C480C60247577(L_23, /*hidden argument*/NULL);
		}

IL_00a8:
		{
			goto IL_00c1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00aa;
		}
		throw e;
	}

CATCH_00aa:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_24 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_25 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_24, L_25, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d4;
	} // end catch (depth: 1)

IL_00c1:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_26 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_26, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__69_MoveNext_m3D35B7A3C057C0EBB39FC099AC67F85D9955744E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__69_tA1C435686F9556734AB0B8A96F09E74431B6874B * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__69_tA1C435686F9556734AB0B8A96F09E74431B6874B *>(__this + _offset);
	U3CStartU3Ed__69_MoveNext_m3D35B7A3C057C0EBB39FC099AC67F85D9955744E(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__69::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__69_SetStateMachine_m4C9342A58F4654EDF404E2CCF36C097BA7C4831B (U3CStartU3Ed__69_tA1C435686F9556734AB0B8A96F09E74431B6874B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__69_SetStateMachine_m4C9342A58F4654EDF404E2CCF36C097BA7C4831B_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__69_tA1C435686F9556734AB0B8A96F09E74431B6874B * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__69_tA1C435686F9556734AB0B8A96F09E74431B6874B *>(__this + _offset);
	U3CStartU3Ed__69_SetStateMachine_m4C9342A58F4654EDF404E2CCF36C097BA7C4831B(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::.ctor(Microsoft.MixedReality.Toolkit.Input.GazeProvider,System.String,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,UnityEngine.LayerMask[],System.Single,UnityEngine.Transform,Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer__ctor_m7D93B0538B0D8D61BC1D031016BFD68C36574908 (InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71 * __this, GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * ___gazeProvider0, String_t* ___pointerName1, RuntimeObject* ___inputSourceParent2, LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___raycastLayerMasks3, float ___pointerExtent4, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___gazeTransform5, BaseRayStabilizer_t17F65400739179C021C592F65676659FC7CA2DF7 * ___stabilizer6, const RuntimeMethod* method)
{
	{
		// : base(pointerName, inputSourceParent)
		String_t* L_0 = ___pointerName1;
		RuntimeObject* L_1 = ___inputSourceParent2;
		GenericPointer__ctor_m233F42F42D21A536B33F8F2D4A352C795F22A842(__this, L_0, L_1, /*hidden argument*/NULL);
		// this.gazeProvider = gazeProvider;
		GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_2 = ___gazeProvider0;
		__this->set_gazeProvider_20(L_2);
		// PrioritizedLayerMasksOverride = raycastLayerMasks;
		LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* L_3 = ___raycastLayerMasks3;
		GenericPointer_set_PrioritizedLayerMasksOverride_m607E454D525D68ACD65B3BE6D6FC0A53AF41D684_inline(__this, L_3, /*hidden argument*/NULL);
		// this.pointerExtent = pointerExtent;
		float L_4 = ___pointerExtent4;
		__this->set_pointerExtent_23(L_4);
		// this.gazeTransform = gazeTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ___gazeTransform5;
		__this->set_gazeTransform_18(L_5);
		// this.stabilizer = stabilizer;
		BaseRayStabilizer_t17F65400739179C021C592F65676659FC7CA2DF7 * L_6 = ___stabilizer6;
		__this->set_stabilizer_19(L_6);
		// IsInteractionEnabled = true;
		GenericPointer_set_IsInteractionEnabled_m5B4C3EE5A4464839E933DE8E9CE765FF230A1341(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_Controller()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalGazePointer_get_Controller_m3226BB4565FC72F82AEC1A50BC0E7DE8BD7ACEC6 (InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71 * __this, const RuntimeMethod* method)
{
	{
		// public override IMixedRealityController Controller { get; set; }
		RuntimeObject* L_0 = __this->get_U3CControllerU3Ek__BackingField_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::set_Controller(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_set_Controller_m17E94E0C6C7333A2DDCD9A55274B4B0F197CAD99 (InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public override IMixedRealityController Controller { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CControllerU3Ek__BackingField_21(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_InputSourceParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalGazePointer_get_InputSourceParent_mBF6781D22D5C27546E0E5E26C57AF2214AC9121F (InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71 * __this, const RuntimeMethod* method)
{
	{
		// public override IMixedRealityInputSource InputSourceParent { get; protected set; }
		RuntimeObject* L_0 = __this->get_U3CInputSourceParentU3Ek__BackingField_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::set_InputSourceParent(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_set_InputSourceParent_m46C331F49E857AE97C0B50C6B492DB516EDDD001 (InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public override IMixedRealityInputSource InputSourceParent { get; protected set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CInputSourceParentU3Ek__BackingField_22(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_PointerExtent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InternalGazePointer_get_PointerExtent_m6544156F132F6993E7C40451866AD41A55E75D2E (InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71 * __this, const RuntimeMethod* method)
{
	{
		// get => pointerExtent;
		float L_0 = __this->get_pointerExtent_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::set_PointerExtent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_set_PointerExtent_m117A8BB3E51F564EFCF71070FAE204B0C85A95FE (InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => pointerExtent = value;
		float L_0 = ___value0;
		__this->set_pointerExtent_23(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::SetGazeInputSourceParent(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_SetGazeInputSourceParent_mC68FE5EFFE75AA363AA1C2F19FA777938CD2D53D (InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71 * __this, RuntimeObject* ___gazeInputSource0, const RuntimeMethod* method)
{
	{
		// InputSourceParent = gazeInputSource;
		RuntimeObject* L_0 = ___gazeInputSource0;
		VirtActionInvoker1< RuntimeObject* >::Invoke(43 /* System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::set_InputSourceParent(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, __this, L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPreSceneQuery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_OnPreSceneQuery_mAB3939D82E68C8A8D8A81E85331E69E1F8699216 (InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPlayspace_t7C335C3B4D41F6E2E9EF02163418F8A82D423D3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (OnPreSceneQueryPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71_StaticFields*)il2cpp_codegen_static_fields_for(InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71_il2cpp_TypeInfo_var))->get_OnPreSceneQueryPerfMarker_27();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (gazeProvider.IsEyeTrackingEnabledAndValid)
			GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_2 = __this->get_gazeProvider_20();
			NullCheck(L_2);
			bool L_3;
			L_3 = GazeProvider_get_IsEyeTrackingEnabledAndValid_m9F2A05E6A1AAD39578CDB74B667425C1499DF3F5(L_2, /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_005b;
			}
		}

IL_001b:
		{
			// gazeProvider.gazeInputSource.SourceType = InputSourceType.Eyes;
			GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_4 = __this->get_gazeProvider_20();
			NullCheck(L_4);
			BaseGenericInputSource_tACE58AEA81725FFF6F6EA684EE90F348A841888B * L_5 = L_4->get_gazeInputSource_15();
			NullCheck(L_5);
			BaseGenericInputSource_set_SourceType_mD07D42C4699D971CA44EC8A62385ABDDF1FF3967_inline(L_5, 5, /*hidden argument*/NULL);
			// newGazeOrigin = gazeProvider.LatestEyeGaze.origin;
			GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_6 = __this->get_gazeProvider_20();
			NullCheck(L_6);
			Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_7;
			L_7 = GazeProvider_get_LatestEyeGaze_m3B08254C87B1FCC970A1602CB7F6BE11AA7F3B33_inline(L_6, /*hidden argument*/NULL);
			V_5 = L_7;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
			L_8 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_5), /*hidden argument*/NULL);
			V_2 = L_8;
			// newGazeNormal = gazeProvider.LatestEyeGaze.direction;
			GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_9 = __this->get_gazeProvider_20();
			NullCheck(L_9);
			Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_10;
			L_10 = GazeProvider_get_LatestEyeGaze_m3B08254C87B1FCC970A1602CB7F6BE11AA7F3B33_inline(L_9, /*hidden argument*/NULL);
			V_5 = L_10;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
			L_11 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_5), /*hidden argument*/NULL);
			V_3 = L_11;
			// }
			goto IL_0160;
		}

IL_005b:
		{
			// gazeProvider.gazeInputSource.SourceType = InputSourceType.Head;
			GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_12 = __this->get_gazeProvider_20();
			NullCheck(L_12);
			BaseGenericInputSource_tACE58AEA81725FFF6F6EA684EE90F348A841888B * L_13 = L_12->get_gazeInputSource_15();
			NullCheck(L_13);
			BaseGenericInputSource_set_SourceType_mD07D42C4699D971CA44EC8A62385ABDDF1FF3967_inline(L_13, 4, /*hidden argument*/NULL);
			// if (gazeProvider.UseHeadGazeOverride && gazeProvider.overrideHeadPosition.HasValue && gazeProvider.overrideHeadForward.HasValue)
			GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_14 = __this->get_gazeProvider_20();
			NullCheck(L_14);
			bool L_15;
			L_15 = GazeProvider_get_UseHeadGazeOverride_mEB5E7F3B458C6ED184F4849D15B22838FF70D765_inline(L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_00fe;
			}
		}

IL_007c:
		{
			GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_16 = __this->get_gazeProvider_20();
			NullCheck(L_16);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_17;
			L_17 = GazeProvider_get_overrideHeadPosition_m6B8D629E261E41B9E7537702DF16080538BDCB62_inline(L_16, /*hidden argument*/NULL);
			V_6 = L_17;
			bool L_18;
			L_18 = Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)(&V_6), /*hidden argument*/Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
			if (!L_18)
			{
				goto IL_00fe;
			}
		}

IL_0092:
		{
			GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_19 = __this->get_gazeProvider_20();
			NullCheck(L_19);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_20;
			L_20 = GazeProvider_get_overrideHeadForward_m3A0B0DECA9CDC71FF12D9601E4CF4BF2C2C9C2AB_inline(L_19, /*hidden argument*/NULL);
			V_6 = L_20;
			bool L_21;
			L_21 = Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)(&V_6), /*hidden argument*/Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
			if (!L_21)
			{
				goto IL_00fe;
			}
		}

IL_00a8:
		{
			// newGazeOrigin = gazeProvider.overrideHeadPosition.Value;
			GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_22 = __this->get_gazeProvider_20();
			NullCheck(L_22);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_23;
			L_23 = GazeProvider_get_overrideHeadPosition_m6B8D629E261E41B9E7537702DF16080538BDCB62_inline(L_22, /*hidden argument*/NULL);
			V_6 = L_23;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
			L_24 = Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)(&V_6), /*hidden argument*/Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var);
			V_2 = L_24;
			// newGazeNormal = gazeProvider.overrideHeadForward.Value;
			GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_25 = __this->get_gazeProvider_20();
			NullCheck(L_25);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_26;
			L_26 = GazeProvider_get_overrideHeadForward_m3A0B0DECA9CDC71FF12D9601E4CF4BF2C2C9C2AB_inline(L_25, /*hidden argument*/NULL);
			V_6 = L_26;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
			L_27 = Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)(&V_6), /*hidden argument*/Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var);
			V_3 = L_27;
			// gazeProvider.overrideHeadPosition = null;
			GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_28 = __this->get_gazeProvider_20();
			il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_29 = V_6;
			NullCheck(L_28);
			GazeProvider_set_overrideHeadPosition_m4B50D930F9FCC64412FEE718AEA02EE3D9CCB193_inline(L_28, L_29, /*hidden argument*/NULL);
			// gazeProvider.overrideHeadForward = null;
			GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * L_30 = __this->get_gazeProvider_20();
			il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_31 = V_6;
			NullCheck(L_30);
			GazeProvider_set_overrideHeadForward_mCEDCB4D540076E25EBB717B365EDA44EC2C502FC_inline(L_30, L_31, /*hidden argument*/NULL);
			// }
			goto IL_0116;
		}

IL_00fe:
		{
			// newGazeOrigin = gazeTransform.position;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32 = __this->get_gazeTransform_18();
			NullCheck(L_32);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
			L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
			V_2 = L_33;
			// newGazeNormal = gazeTransform.forward;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34 = __this->get_gazeTransform_18();
			NullCheck(L_34);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
			L_35 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_34, /*hidden argument*/NULL);
			V_3 = L_35;
		}

IL_0116:
		{
			// if (stabilizer != null)
			BaseRayStabilizer_t17F65400739179C021C592F65676659FC7CA2DF7 * L_36 = __this->get_stabilizer_19();
			if (!L_36)
			{
				goto IL_0160;
			}
		}

IL_011e:
		{
			// stabilizer.UpdateStability(MixedRealityPlayspace.InverseTransformPoint(newGazeOrigin), MixedRealityPlayspace.InverseTransformDirection(newGazeNormal));
			BaseRayStabilizer_t17F65400739179C021C592F65676659FC7CA2DF7 * L_37 = __this->get_stabilizer_19();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t7C335C3B4D41F6E2E9EF02163418F8A82D423D3D_il2cpp_TypeInfo_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
			L_39 = MixedRealityPlayspace_InverseTransformPoint_mCDCABC86EB8147AD7EB44AE4CE976502A0F8A158(L_38, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = V_3;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
			L_41 = MixedRealityPlayspace_InverseTransformDirection_mBE1455CA3673A6164CADDEFBC55C3FAEF1CC8D99(L_40, /*hidden argument*/NULL);
			NullCheck(L_37);
			VirtActionInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(13 /* System.Void Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer::UpdateStability(UnityEngine.Vector3,UnityEngine.Vector3) */, L_37, L_39, L_41);
			// newGazeOrigin = MixedRealityPlayspace.TransformPoint(stabilizer.StablePosition);
			BaseRayStabilizer_t17F65400739179C021C592F65676659FC7CA2DF7 * L_42 = __this->get_stabilizer_19();
			NullCheck(L_42);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
			L_43 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(9 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer::get_StablePosition() */, L_42);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
			L_44 = MixedRealityPlayspace_TransformPoint_m7397A738A9E1E7F5FA3B5DC500450ED605437F2E(L_43, /*hidden argument*/NULL);
			V_2 = L_44;
			// newGazeNormal = MixedRealityPlayspace.TransformDirection(stabilizer.StableRay.direction);
			BaseRayStabilizer_t17F65400739179C021C592F65676659FC7CA2DF7 * L_45 = __this->get_stabilizer_19();
			NullCheck(L_45);
			Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_46;
			L_46 = VirtFuncInvoker0< Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(11 /* UnityEngine.Ray Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer::get_StableRay() */, L_45);
			V_5 = L_46;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
			L_47 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_5), /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
			L_48 = MixedRealityPlayspace_TransformDirection_mBE0AF2CD81E17F9985E4C9A9B66373DA39C0EE20(L_47, /*hidden argument*/NULL);
			V_3 = L_48;
		}

IL_0160:
		{
			// Vector3 endPoint = newGazeOrigin + (newGazeNormal * pointerExtent);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49 = V_2;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = V_3;
			float L_51 = __this->get_pointerExtent_23();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
			L_52 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline(L_50, L_51, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
			L_53 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_49, L_52, /*hidden argument*/NULL);
			V_4 = L_53;
			// Rays[0].UpdateRayStep(ref newGazeOrigin, ref endPoint);
			RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7* L_54;
			L_54 = GenericPointer_get_Rays_m5B4976E39B661849D6B4FBF5CCD0D976BA6DAD46_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_54);
			RayStep_UpdateRayStep_mE2E7EAFB3B39246C3B3614A1CD90280CABFCD16C((RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E *)((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x199, FINALLY_018b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_018b;
	}

FINALLY_018b:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(395)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(395)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x199, IL_0199)
	}

IL_0199:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPostSceneQuery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_OnPostSceneQuery_m166FF2C882A85805F5539CFED41810F8BA752BAB (InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t180D897538CB6DFE721697AB118BDA1BC705EB26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (OnPostSceneQueryPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71_StaticFields*)il2cpp_codegen_static_fields_for(InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71_il2cpp_TypeInfo_var))->get_OnPostSceneQueryPerfMarker_28();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (isDown)
			bool L_2 = __this->get_isDown_24();
			if (!L_2)
			{
				goto IL_0032;
			}
		}

IL_0016:
		{
			// CoreServices.InputSystem.RaisePointerDragged(this, MixedRealityInputAction.None, currentHandedness, currentInputSource);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t180D897538CB6DFE721697AB118BDA1BC705EB26_il2cpp_TypeInfo_var);
			RuntimeObject* L_3;
			L_3 = CoreServices_get_InputSystem_m09B8CBC7F935B5EBD4AC8682902B60A952EC8BDE(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396_il2cpp_TypeInfo_var);
			MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  L_4;
			L_4 = MixedRealityInputAction_get_None_mF8925BEFFCBF261E00BEAD634565EB980540E2CC_inline(/*hidden argument*/NULL);
			uint8_t L_5 = __this->get_currentHandedness_26();
			RuntimeObject* L_6 = __this->get_currentInputSource_25();
			NullCheck(L_3);
			InterfaceActionInvoker4< RuntimeObject*, MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396 , uint8_t, RuntimeObject* >::Invoke(36 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePointerDragged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var, L_3, __this, L_4, L_5, L_6);
		}

IL_0032:
		{
			// }
			IL2CPP_LEAVE(0x42, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(52)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPreCurrentPointerTargetChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_OnPreCurrentPointerTargetChange_m8D80EF987E7A0A57B58A65CD179AD244EECA5D6C (InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71 * __this, const RuntimeMethod* method)
{
	{
		// public override void OnPreCurrentPointerTargetChange() { }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  InternalGazePointer_get_Position_m264416AA5616B00C458A14D567D3FD4614C0712E (InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71 * __this, const RuntimeMethod* method)
{
	{
		// public override Vector3 Position => gazeTransform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_gazeTransform_18();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  InternalGazePointer_get_Rotation_m56FAA16CB9BED90186C3392B746AC922957BAEC3 (InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71 * __this, const RuntimeMethod* method)
{
	{
		// public override Quaternion Rotation => gazeTransform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_gazeTransform_18();
		NullCheck(L_0);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_Reset_mFB2DA03DBEEF3FD2B2F18002B4D18DF33EFADD01 (InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71 * __this, const RuntimeMethod* method)
{
	{
		// Controller = null;
		VirtActionInvoker1< RuntimeObject* >::Invoke(41 /* System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::set_Controller(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, __this, (RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::RaisePointerDown(Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_RaisePointerDown_mC9885C18D97DE3F5D9E72ADE9122BB828B5AA548 (InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71 * __this, MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  ___mixedRealityInputAction0, uint8_t ___handedness1, RuntimeObject* ___inputSource2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t180D897538CB6DFE721697AB118BDA1BC705EB26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// isDown = true;
		__this->set_isDown_24((bool)1);
		// currentHandedness = handedness;
		uint8_t L_0 = ___handedness1;
		__this->set_currentHandedness_26(L_0);
		// currentInputSource = inputSource;
		RuntimeObject* L_1 = ___inputSource2;
		__this->set_currentInputSource_25(L_1);
		// CoreServices.InputSystem?.RaisePointerDown(this, mixedRealityInputAction, handedness, inputSource);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t180D897538CB6DFE721697AB118BDA1BC705EB26_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = CoreServices_get_InputSystem_m09B8CBC7F935B5EBD4AC8682902B60A952EC8BDE(/*hidden argument*/NULL);
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  L_4 = ___mixedRealityInputAction0;
		uint8_t L_5 = ___handedness1;
		RuntimeObject* L_6 = ___inputSource2;
		NullCheck(G_B2_0);
		InterfaceActionInvoker4< RuntimeObject*, MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396 , uint8_t, RuntimeObject* >::Invoke(35 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePointerDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var, G_B2_0, __this, L_4, L_5, L_6);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::RaisePointerUp(Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_RaisePointerUp_m2125012C103940786017F8259BD37880833E38EE (InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71 * __this, MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  ___mixedRealityInputAction0, uint8_t ___handedness1, RuntimeObject* ___inputSource2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t180D897538CB6DFE721697AB118BDA1BC705EB26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// isDown = false;
		__this->set_isDown_24((bool)0);
		// currentHandedness = Handedness.None;
		__this->set_currentHandedness_26(0);
		// currentInputSource = null;
		__this->set_currentInputSource_25((RuntimeObject*)NULL);
		// CoreServices.InputSystem?.RaisePointerClicked(this, mixedRealityInputAction, 0, handedness, inputSource);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t180D897538CB6DFE721697AB118BDA1BC705EB26_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m09B8CBC7F935B5EBD4AC8682902B60A952EC8BDE(/*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0020;
		}
	}
	{
		goto IL_002a;
	}

IL_0020:
	{
		MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  L_2 = ___mixedRealityInputAction0;
		uint8_t L_3 = ___handedness1;
		RuntimeObject* L_4 = ___inputSource2;
		NullCheck(G_B2_0);
		InterfaceActionInvoker5< RuntimeObject*, MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396 , int32_t, uint8_t, RuntimeObject* >::Invoke(37 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePointerClicked(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,System.Int32,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var, G_B2_0, __this, L_2, 0, L_3, L_4);
	}

IL_002a:
	{
		// CoreServices.InputSystem?.RaisePointerUp(this, mixedRealityInputAction, handedness, inputSource);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t180D897538CB6DFE721697AB118BDA1BC705EB26_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = CoreServices_get_InputSystem_m09B8CBC7F935B5EBD4AC8682902B60A952EC8BDE(/*hidden argument*/NULL);
		RuntimeObject* L_6 = L_5;
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_0034;
		}
	}
	{
		return;
	}

IL_0034:
	{
		MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  L_7 = ___mixedRealityInputAction0;
		uint8_t L_8 = ___handedness1;
		RuntimeObject* L_9 = ___inputSource2;
		NullCheck(G_B5_0);
		InterfaceActionInvoker4< RuntimeObject*, MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396 , uint8_t, RuntimeObject* >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePointerUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, IMixedRealityInputSystem_t80B7D955AF27871E0F0B9B1E7994170ADD4A0651_il2cpp_TypeInfo_var, G_B5_0, __this, L_7, L_8, L_9);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer__cctor_m87CB740FB9DAB97B69F8E41BE54CCF63FB0C0DEC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral033695E8FCCB2AD8ED3D6CA47B0D7673411B3701);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8646EE7CB5D6509C0ECF1B9EA3BEB8B77A6CB742);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker OnPreSceneQueryPerfMarker = new ProfilerMarker("[MRTK] InternalGazePointer.OnPreSceneQuery");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral033695E8FCCB2AD8ED3D6CA47B0D7673411B3701, /*hidden argument*/NULL);
		((InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71_StaticFields*)il2cpp_codegen_static_fields_for(InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71_il2cpp_TypeInfo_var))->set_OnPreSceneQueryPerfMarker_27(L_0);
		// private static readonly ProfilerMarker OnPostSceneQueryPerfMarker = new ProfilerMarker("[MRTK] InternalGazePointer.OnPostSceneQuery");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteral8646EE7CB5D6509C0ECF1B9EA3BEB8B77A6CB742, /*hidden argument*/NULL);
		((InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71_StaticFields*)il2cpp_codegen_static_fields_for(InternalGazePointer_tB818A5780C8C86E83261618E035DA105BC6D2F71_il2cpp_TypeInfo_var))->set_OnPostSceneQueryPerfMarker_28(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m53BE763E5A2E2D40023F016FBE781F6570052D88 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477 * L_0 = (U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477 *)il2cpp_codegen_object_new(U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m71966BB46B5EF41A4D0AA5F4C30D511B72146443(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m71966BB46B5EF41A4D0AA5F4C30D511B72146443 (U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::<EnsureInputSystemValid>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_m52504482726B2CB4C7DCFE333A0CBF82C4FF9E7C (U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t180D897538CB6DFE721697AB118BDA1BC705EB26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// await new WaitUntil(() => CoreServices.InputSystem != null);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t180D897538CB6DFE721697AB118BDA1BC705EB26_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m09B8CBC7F935B5EBD4AC8682902B60A952EC8BDE(/*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_MoveNext_m70CE79F6C12DF68B1211D43771EA0D097BFF3859 (U3CEnsureInputSystemValidU3Ed__4_t4726393E49A24D484F82BE984437137A0AEEF5C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_TisU3CEnsureInputSystemValidU3Ed__4_t4726393E49A24D484F82BE984437137A0AEEF5C7_mC7429CB3C90A64B912CA998CA3B28CFDC6AD1A26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t180D897538CB6DFE721697AB118BDA1BC705EB26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_m52504482726B2CB4C7DCFE333A0CBF82C4FF9E7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B5_0 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B4_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0063;
			}
		}

IL_000a:
		{
			// if (CoreServices.InputSystem == null)
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t180D897538CB6DFE721697AB118BDA1BC705EB26_il2cpp_TypeInfo_var);
			RuntimeObject* L_2;
			L_2 = CoreServices_get_InputSystem_m09B8CBC7F935B5EBD4AC8682902B60A952EC8BDE(/*hidden argument*/NULL);
			if (L_2)
			{
				goto IL_0085;
			}
		}

IL_0011:
		{
			// await new WaitUntil(() => CoreServices.InputSystem != null);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477_il2cpp_TypeInfo_var);
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_3 = ((U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477_il2cpp_TypeInfo_var))->get_U3CU3E9__4_0_1();
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = L_3;
			G_B4_0 = L_4;
			if (L_4)
			{
				G_B5_0 = L_4;
				goto IL_0030;
			}
		}

IL_0019:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477_il2cpp_TypeInfo_var);
			U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477 * L_5 = ((U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_6 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
			Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_m52504482726B2CB4C7DCFE333A0CBF82C4FF9E7C_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_7 = L_6;
			((U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAEACF9D137E6CD5664617846B0D32D2B3B39A477_il2cpp_TypeInfo_var))->set_U3CU3E9__4_0_1(L_7);
			G_B5_0 = L_7;
		}

IL_0030:
		{
			WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_8 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
			WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_8, G_B5_0, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * L_9;
			L_9 = AwaiterExtensions_GetAwaiter_m19F2A5009ABEF7C69C5D1F9CFBA83A6E550F7578(L_8, /*hidden argument*/NULL);
			V_1 = L_9;
			SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * L_10 = V_1;
			NullCheck(L_10);
			bool L_11;
			L_11 = SimpleCoroutineAwaiter_get_IsCompleted_mA1D47F19E3535E59267118BB76A0C9495A50C4CE_inline(L_10, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_007f;
			}
		}

IL_0043:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * L_13 = V_1;
			__this->set_U3CU3Eu__1_2(L_13);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_TisU3CEnsureInputSystemValidU3Ed__4_t4726393E49A24D484F82BE984437137A0AEEF5C7_mC7429CB3C90A64B912CA998CA3B28CFDC6AD1A26((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_14, (SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 **)(&V_1), (U3CEnsureInputSystemValidU3Ed__4_t4726393E49A24D484F82BE984437137A0AEEF5C7 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_TisU3CEnsureInputSystemValidU3Ed__4_t4726393E49A24D484F82BE984437137A0AEEF5C7_mC7429CB3C90A64B912CA998CA3B28CFDC6AD1A26_RuntimeMethod_var);
			goto IL_00b1;
		}

IL_0063:
		{
			RuntimeObject * L_15 = __this->get_U3CU3Eu__1_2();
			V_1 = ((SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 *)CastclassClass((RuntimeObject*)L_15, SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_2(NULL);
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
		}

IL_007f:
		{
			SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * L_17 = V_1;
			NullCheck(L_17);
			SimpleCoroutineAwaiter_GetResult_m2AAF3D8883A33795B8216B9D4BBA4586B2E29365(L_17, /*hidden argument*/NULL);
		}

IL_0085:
		{
			goto IL_009e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0087;
		}
		throw e;
	}

CATCH_0087:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_2;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_18, L_19, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b1;
	} // end catch (depth: 1)

IL_009e:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_20, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnsureInputSystemValidU3Ed__4_MoveNext_m70CE79F6C12DF68B1211D43771EA0D097BFF3859_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnsureInputSystemValidU3Ed__4_t4726393E49A24D484F82BE984437137A0AEEF5C7 * _thisAdjusted = reinterpret_cast<U3CEnsureInputSystemValidU3Ed__4_t4726393E49A24D484F82BE984437137A0AEEF5C7 *>(__this + _offset);
	U3CEnsureInputSystemValidU3Ed__4_MoveNext_m70CE79F6C12DF68B1211D43771EA0D097BFF3859(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_mCB8A759C24F11606BFD301C67E6E9E26C5A60C64 (U3CEnsureInputSystemValidU3Ed__4_t4726393E49A24D484F82BE984437137A0AEEF5C7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_mCB8A759C24F11606BFD301C67E6E9E26C5A60C64_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnsureInputSystemValidU3Ed__4_t4726393E49A24D484F82BE984437137A0AEEF5C7 * _thisAdjusted = reinterpret_cast<U3CEnsureInputSystemValidU3Ed__4_t4726393E49A24D484F82BE984437137A0AEEF5C7 *>(__this + _offset);
	U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_mCB8A759C24F11606BFD301C67E6E9E26C5A60C64(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_MoveNext_m0DB088666A039033FAF823BDD88960F599C8F9C2 (U3CStartU3Ed__2_tE8EA292542AF4AAD6DF000683694ECE869CB2C4A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_tE8EA292542AF4AAD6DF000683694ECE869CB2C4A_m3BDDA156176506DB028495065DD5794248C8D2CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputSystemGlobalHandlerListener_t843DD1A5D31A98462229555C6627F07324AD784B * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		InputSystemGlobalHandlerListener_t843DD1A5D31A98462229555C6627F07324AD784B * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004e;
			}
		}

IL_0011:
		{
			// if (lateInitialize)
			InputSystemGlobalHandlerListener_t843DD1A5D31A98462229555C6627F07324AD784B * L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = L_3->get_lateInitialize_4();
			if (!L_4)
			{
				goto IL_0089;
			}
		}

IL_0019:
		{
			// await EnsureInputSystemValid();
			InputSystemGlobalHandlerListener_t843DD1A5D31A98462229555C6627F07324AD784B * L_5 = V_1;
			NullCheck(L_5);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
			L_6 = InputSystemGlobalHandlerListener_EnsureInputSystemValid_m46890ECB4D0686F2FC1298E2AFE6FCB499E3D2FB(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_7;
			L_7 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_006a;
			}
		}

IL_002e:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10 = V_2;
			__this->set_U3CU3Eu__1_3(L_10);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_tE8EA292542AF4AAD6DF000683694ECE869CB2C4A_m3BDDA156176506DB028495065DD5794248C8D2CF((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_11, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CStartU3Ed__2_tE8EA292542AF4AAD6DF000683694ECE869CB2C4A *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_tE8EA292542AF4AAD6DF000683694ECE869CB2C4A_m3BDDA156176506DB028495065DD5794248C8D2CF_RuntimeMethod_var);
			goto IL_00b5;
		}

IL_004e:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12 = __this->get_U3CU3Eu__1_3();
			V_2 = L_12;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_13 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_006a:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			// if (this == null)
			InputSystemGlobalHandlerListener_t843DD1A5D31A98462229555C6627F07324AD784B * L_15 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_16;
			L_16 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_007c;
			}
		}

IL_007a:
		{
			// return;
			goto IL_00a2;
		}

IL_007c:
		{
			// lateInitialize = false;
			InputSystemGlobalHandlerListener_t843DD1A5D31A98462229555C6627F07324AD784B * L_17 = V_1;
			NullCheck(L_17);
			L_17->set_lateInitialize_4((bool)0);
			// RegisterHandlers();
			InputSystemGlobalHandlerListener_t843DD1A5D31A98462229555C6627F07324AD784B * L_18 = V_1;
			NullCheck(L_18);
			VirtActionInvoker0::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::RegisterHandlers() */, L_18);
		}

IL_0089:
		{
			goto IL_00a2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008b;
		}
		throw e;
	}

CATCH_008b:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_20 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b5;
	} // end catch (depth: 1)

IL_00a2:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_21, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__2_MoveNext_m0DB088666A039033FAF823BDD88960F599C8F9C2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__2_tE8EA292542AF4AAD6DF000683694ECE869CB2C4A * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__2_tE8EA292542AF4AAD6DF000683694ECE869CB2C4A *>(__this + _offset);
	U3CStartU3Ed__2_MoveNext_m0DB088666A039033FAF823BDD88960F599C8F9C2(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_SetStateMachine_mA3F0FC8F546E8000A66278BCC0128DEB8EB3A387 (U3CStartU3Ed__2_tE8EA292542AF4AAD6DF000683694ECE869CB2C4A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__2_SetStateMachine_mA3F0FC8F546E8000A66278BCC0128DEB8EB3A387_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__2_tE8EA292542AF4AAD6DF000683694ECE869CB2C4A * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__2_tE8EA292542AF4AAD6DF000683694ECE869CB2C4A *>(__this + _offset);
	U3CStartU3Ed__2_SetStateMachine_mA3F0FC8F546E8000A66278BCC0128DEB8EB3A387(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m035C1630446FA56615D4C7575F763DE34B479D8F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00 * L_0 = (U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00 *)il2cpp_codegen_object_new(U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0C47A61FFC53A9C7A2451CEF5B6493AB530CEF1C(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0C47A61FFC53A9C7A2451CEF5B6493AB530CEF1C (U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::<EnsureInputSystemValid>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_m0EA597F67E72E14AFDC5CBBFCBD14E81693CD3D6 (U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t180D897538CB6DFE721697AB118BDA1BC705EB26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// await new WaitUntil(() => CoreServices.InputSystem != null);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t180D897538CB6DFE721697AB118BDA1BC705EB26_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m09B8CBC7F935B5EBD4AC8682902B60A952EC8BDE(/*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_MoveNext_mC5AA1486155609CCEF92E30A8D610C309DBA3A94 (U3CEnsureInputSystemValidU3Ed__4_t55B2AC3258CED626D50DC9BA690EBB08390467D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_TisU3CEnsureInputSystemValidU3Ed__4_t55B2AC3258CED626D50DC9BA690EBB08390467D6_m10097A8245E4B54DF5DC1D3C58A2463EA44DE241_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t180D897538CB6DFE721697AB118BDA1BC705EB26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_m0EA597F67E72E14AFDC5CBBFCBD14E81693CD3D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B5_0 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B4_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0063;
			}
		}

IL_000a:
		{
			// if (CoreServices.InputSystem == null)
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t180D897538CB6DFE721697AB118BDA1BC705EB26_il2cpp_TypeInfo_var);
			RuntimeObject* L_2;
			L_2 = CoreServices_get_InputSystem_m09B8CBC7F935B5EBD4AC8682902B60A952EC8BDE(/*hidden argument*/NULL);
			if (L_2)
			{
				goto IL_0085;
			}
		}

IL_0011:
		{
			// await new WaitUntil(() => CoreServices.InputSystem != null);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00_il2cpp_TypeInfo_var);
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_3 = ((U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00_il2cpp_TypeInfo_var))->get_U3CU3E9__4_0_1();
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = L_3;
			G_B4_0 = L_4;
			if (L_4)
			{
				G_B5_0 = L_4;
				goto IL_0030;
			}
		}

IL_0019:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00_il2cpp_TypeInfo_var);
			U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00 * L_5 = ((U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_6 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
			Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_m0EA597F67E72E14AFDC5CBBFCBD14E81693CD3D6_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_7 = L_6;
			((U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC36BF9146F0C4669BBCBC61C15CC686E86BCCF00_il2cpp_TypeInfo_var))->set_U3CU3E9__4_0_1(L_7);
			G_B5_0 = L_7;
		}

IL_0030:
		{
			WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_8 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
			WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_8, G_B5_0, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * L_9;
			L_9 = AwaiterExtensions_GetAwaiter_m19F2A5009ABEF7C69C5D1F9CFBA83A6E550F7578(L_8, /*hidden argument*/NULL);
			V_1 = L_9;
			SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * L_10 = V_1;
			NullCheck(L_10);
			bool L_11;
			L_11 = SimpleCoroutineAwaiter_get_IsCompleted_mA1D47F19E3535E59267118BB76A0C9495A50C4CE_inline(L_10, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_007f;
			}
		}

IL_0043:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * L_13 = V_1;
			__this->set_U3CU3Eu__1_2(L_13);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_TisU3CEnsureInputSystemValidU3Ed__4_t55B2AC3258CED626D50DC9BA690EBB08390467D6_m10097A8245E4B54DF5DC1D3C58A2463EA44DE241((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_14, (SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 **)(&V_1), (U3CEnsureInputSystemValidU3Ed__4_t55B2AC3258CED626D50DC9BA690EBB08390467D6 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_TisU3CEnsureInputSystemValidU3Ed__4_t55B2AC3258CED626D50DC9BA690EBB08390467D6_m10097A8245E4B54DF5DC1D3C58A2463EA44DE241_RuntimeMethod_var);
			goto IL_00b1;
		}

IL_0063:
		{
			RuntimeObject * L_15 = __this->get_U3CU3Eu__1_2();
			V_1 = ((SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 *)CastclassClass((RuntimeObject*)L_15, SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_2(NULL);
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
		}

IL_007f:
		{
			SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * L_17 = V_1;
			NullCheck(L_17);
			SimpleCoroutineAwaiter_GetResult_m2AAF3D8883A33795B8216B9D4BBA4586B2E29365(L_17, /*hidden argument*/NULL);
		}

IL_0085:
		{
			goto IL_009e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0087;
		}
		throw e;
	}

CATCH_0087:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_2;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_18, L_19, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b1;
	} // end catch (depth: 1)

IL_009e:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_20, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnsureInputSystemValidU3Ed__4_MoveNext_mC5AA1486155609CCEF92E30A8D610C309DBA3A94_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnsureInputSystemValidU3Ed__4_t55B2AC3258CED626D50DC9BA690EBB08390467D6 * _thisAdjusted = reinterpret_cast<U3CEnsureInputSystemValidU3Ed__4_t55B2AC3258CED626D50DC9BA690EBB08390467D6 *>(__this + _offset);
	U3CEnsureInputSystemValidU3Ed__4_MoveNext_mC5AA1486155609CCEF92E30A8D610C309DBA3A94(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_m69A96DC6B83745774DCD2721A93D11971FDC0FC4 (U3CEnsureInputSystemValidU3Ed__4_t55B2AC3258CED626D50DC9BA690EBB08390467D6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_m69A96DC6B83745774DCD2721A93D11971FDC0FC4_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnsureInputSystemValidU3Ed__4_t55B2AC3258CED626D50DC9BA690EBB08390467D6 * _thisAdjusted = reinterpret_cast<U3CEnsureInputSystemValidU3Ed__4_t55B2AC3258CED626D50DC9BA690EBB08390467D6 *>(__this + _offset);
	U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_m69A96DC6B83745774DCD2721A93D11971FDC0FC4(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_MoveNext_m0A4722F8429043C94FE0EA8172F38B925BCEDF3D (U3CStartU3Ed__2_t7FE273F02D8FAC7B771B9CD0F2118F262D7E988F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t7FE273F02D8FAC7B771B9CD0F2118F262D7E988F_mA535F8145798673F556FFC9138366C6CE0897E68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t180D897538CB6DFE721697AB118BDA1BC705EB26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_t8CE6A4B833EC7FADACC56D8FE502784202AE8B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputSystemGlobalListener_t1A1940053C0B9BF9CC21346987EC30F514A066AD * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		InputSystemGlobalListener_t1A1940053C0B9BF9CC21346987EC30F514A066AD * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004e;
			}
		}

IL_0011:
		{
			// if (lateInitialize)
			InputSystemGlobalListener_t1A1940053C0B9BF9CC21346987EC30F514A066AD * L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = L_3->get_lateInitialize_4();
			if (!L_4)
			{
				goto IL_0093;
			}
		}

IL_0019:
		{
			// await EnsureInputSystemValid();
			InputSystemGlobalListener_t1A1940053C0B9BF9CC21346987EC30F514A066AD * L_5 = V_1;
			NullCheck(L_5);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
			L_6 = InputSystemGlobalListener_EnsureInputSystemValid_m7B9667A1E1C50C02B13979A894BDE5E36ECF91B8(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_7;
			L_7 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_006a;
			}
		}

IL_002e:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10 = V_2;
			__this->set_U3CU3Eu__1_3(L_10);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t7FE273F02D8FAC7B771B9CD0F2118F262D7E988F_mA535F8145798673F556FFC9138366C6CE0897E68((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_11, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CStartU3Ed__2_t7FE273F02D8FAC7B771B9CD0F2118F262D7E988F *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t7FE273F02D8FAC7B771B9CD0F2118F262D7E988F_mA535F8145798673F556FFC9138366C6CE0897E68_RuntimeMethod_var);
			goto IL_00bf;
		}

IL_004e:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12 = __this->get_U3CU3Eu__1_3();
			V_2 = L_12;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_13 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_006a:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			// if (this == null)
			InputSystemGlobalListener_t1A1940053C0B9BF9CC21346987EC30F514A066AD * L_15 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_16;
			L_16 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_007c;
			}
		}

IL_007a:
		{
			// return;
			goto IL_00ac;
		}

IL_007c:
		{
			// lateInitialize = false;
			InputSystemGlobalListener_t1A1940053C0B9BF9CC21346987EC30F514A066AD * L_17 = V_1;
			NullCheck(L_17);
			L_17->set_lateInitialize_4((bool)0);
			// CoreServices.InputSystem.Register(gameObject);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t180D897538CB6DFE721697AB118BDA1BC705EB26_il2cpp_TypeInfo_var);
			RuntimeObject* L_18;
			L_18 = CoreServices_get_InputSystem_m09B8CBC7F935B5EBD4AC8682902B60A952EC8BDE(/*hidden argument*/NULL);
			InputSystemGlobalListener_t1A1940053C0B9BF9CC21346987EC30F514A066AD * L_19 = V_1;
			NullCheck(L_19);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
			L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
			NullCheck(L_18);
			InterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.IMixedRealityEventSystem::Register(UnityEngine.GameObject) */, IMixedRealityEventSystem_t8CE6A4B833EC7FADACC56D8FE502784202AE8B05_il2cpp_TypeInfo_var, L_18, L_20);
		}

IL_0093:
		{
			goto IL_00ac;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0095;
		}
		throw e;
	}

CATCH_0095:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_22 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_21, L_22, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00bf;
	} // end catch (depth: 1)

IL_00ac:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_23 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_23, /*hidden argument*/NULL);
	}

IL_00bf:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__2_MoveNext_m0A4722F8429043C94FE0EA8172F38B925BCEDF3D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__2_t7FE273F02D8FAC7B771B9CD0F2118F262D7E988F * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__2_t7FE273F02D8FAC7B771B9CD0F2118F262D7E988F *>(__this + _offset);
	U3CStartU3Ed__2_MoveNext_m0A4722F8429043C94FE0EA8172F38B925BCEDF3D(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_SetStateMachine_m31400C9F446618690957769B240CAF521B7BCFA9 (U3CStartU3Ed__2_t7FE273F02D8FAC7B771B9CD0F2118F262D7E988F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__2_SetStateMachine_m31400C9F446618690957769B240CAF521B7BCFA9_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__2_t7FE273F02D8FAC7B771B9CD0F2118F262D7E988F * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__2_t7FE273F02D8FAC7B771B9CD0F2118F262D7E988F *>(__this + _offset);
	U3CStartU3Ed__2_SetStateMachine_m31400C9F446618690957769B240CAF521B7BCFA9(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16__ctor_mC2F3B7E6F64908C996049BCF8A423C1E5D76C36B (U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m3972B2C66691EA6DF91A19CEF3521B7C2679D7A1(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_System_IDisposable_Dispose_m63E5F2C742E28F6AE303CAA117533BC9F98FBB36 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3Cget_ActiveMixedRealityPointersU3Ed__16_U3CU3Em__Finally1_m0DC2106EB8DD60281885E992898A9EB797AA5E22(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ActiveMixedRealityPointersU3Ed__16_MoveNext_m76D8A4F4662A1EDFB81180B66C81B98C52F47F7F (U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m1848C6E420D34DBEC14D2F6CED9F2035F4119CB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m332D401D7B852D8CC1BC827AD3C461B7CA7645C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD3E898B7156BF1CBA8C9F9FD805589BB8CDFD48E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mD4877E41B1CC6D34CA364DA050FD0FCE51507A15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	MixedRealityInputModule_t49C8683CD8FCDD3D79B1DBADC47B0BE2FA7126DD * V_2 = NULL;
	KeyValuePair_2_t00FE0E370638CA3CD5CC8569639D7E67DEDA7A61  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			MixedRealityInputModule_t49C8683CD8FCDD3D79B1DBADC47B0BE2FA7126DD * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0064;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_0096;
		}

IL_0019:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (var pointerDataEntry in pointerDataToUpdate)
			MixedRealityInputModule_t49C8683CD8FCDD3D79B1DBADC47B0BE2FA7126DD * L_4 = V_2;
			NullCheck(L_4);
			Dictionary_2_t17D14186357F4FCCA956E8681E1B43CCD807D615 * L_5 = L_4->get_pointerDataToUpdate_30();
			NullCheck(L_5);
			Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB  L_6;
			L_6 = Dictionary_2_GetEnumerator_m1848C6E420D34DBEC14D2F6CED9F2035F4119CB3(L_5, /*hidden argument*/Dictionary_2_GetEnumerator_m1848C6E420D34DBEC14D2F6CED9F2035F4119CB3_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_4(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_006c;
		}

IL_003b:
		{
			// foreach (var pointerDataEntry in pointerDataToUpdate)
			Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB * L_7 = __this->get_address_of_U3CU3E7__wrap1_4();
			KeyValuePair_2_t00FE0E370638CA3CD5CC8569639D7E67DEDA7A61  L_8;
			L_8 = Enumerator_get_Current_mD3E898B7156BF1CBA8C9F9FD805589BB8CDFD48E_inline((Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB *)L_7, /*hidden argument*/Enumerator_get_Current_mD3E898B7156BF1CBA8C9F9FD805589BB8CDFD48E_RuntimeMethod_var);
			V_3 = L_8;
			// yield return pointerDataEntry.Value.pointer;
			PointerData_t8814E79B8DF54459590CDF91527B93920AF280C3 * L_9;
			L_9 = KeyValuePair_2_get_Value_mD4877E41B1CC6D34CA364DA050FD0FCE51507A15_inline((KeyValuePair_2_t00FE0E370638CA3CD5CC8569639D7E67DEDA7A61 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_mD4877E41B1CC6D34CA364DA050FD0FCE51507A15_RuntimeMethod_var);
			NullCheck(L_9);
			RuntimeObject* L_10 = L_9->get_pointer_0();
			__this->set_U3CU3E2__current_1(L_10);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0096;
		}

IL_0064:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_006c:
		{
			// foreach (var pointerDataEntry in pointerDataToUpdate)
			Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB * L_11 = __this->get_address_of_U3CU3E7__wrap1_4();
			bool L_12;
			L_12 = Enumerator_MoveNext_m332D401D7B852D8CC1BC827AD3C461B7CA7645C5((Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB *)L_11, /*hidden argument*/Enumerator_MoveNext_m332D401D7B852D8CC1BC827AD3C461B7CA7645C5_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_003b;
			}
		}

IL_0079:
		{
			U3Cget_ActiveMixedRealityPointersU3Ed__16_U3CU3Em__Finally1_m0DC2106EB8DD60281885E992898A9EB797AA5E22(__this, /*hidden argument*/NULL);
			Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB * L_13 = __this->get_address_of_U3CU3E7__wrap1_4();
			il2cpp_codegen_initobj(L_13, sizeof(Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB ));
			// }
			V_0 = (bool)0;
			goto IL_0096;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_008f;
	}

FAULT_008f:
	{ // begin fault (depth: 1)
		U3Cget_ActiveMixedRealityPointersU3Ed__16_System_IDisposable_Dispose_m63E5F2C742E28F6AE303CAA117533BC9F98FBB36(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(143)
	} // end fault
	IL2CPP_CLEANUP(143)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0096:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_U3CU3Em__Finally1_m0DC2106EB8DD60281885E992898A9EB797AA5E22 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8F1A111B663F7A3E98258DC6509C0FF5A6A5067A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB * L_0 = __this->get_address_of_U3CU3E7__wrap1_4();
		Enumerator_Dispose_m8F1A111B663F7A3E98258DC6509C0FF5A6A5067A((Enumerator_t4EF72790E8A6DB998BB93CA9643183C2F9656CEB *)L_0, /*hidden argument*/Enumerator_Dispose_m8F1A111B663F7A3E98258DC6509C0FF5A6A5067A_RuntimeMethod_var);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.Generic.IEnumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_Generic_IEnumeratorU3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityPointerU3E_get_Current_mA13DC91757A72F3CA52E7112542E9F2A1B2D27E5 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerator_Reset_m097C1AD0BD613BE07CBE1DC6D4A05CF8F9171728 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerator_Reset_m097C1AD0BD613BE07CBE1DC6D4A05CF8F9171728_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerator_get_Current_m43606854425F28810B0D617A9166F25D25E13BF2 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.Generic.IEnumerable<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_Generic_IEnumerableU3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityPointerU3E_GetEnumerator_m4E8DD10E157FC195B66E5F0A60EDD2C71EE2A1AA (U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m3972B2C66691EA6DF91A19CEF3521B7C2679D7A1(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B * L_3 = (U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B *)il2cpp_codegen_object_new(U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B_il2cpp_TypeInfo_var);
		U3Cget_ActiveMixedRealityPointersU3Ed__16__ctor_mC2F3B7E6F64908C996049BCF8A423C1E5D76C36B(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B * L_4 = V_0;
		MixedRealityInputModule_t49C8683CD8FCDD3D79B1DBADC47B0BE2FA7126DD * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerable_GetEnumerator_m6B1756D9DD064866AB0C34AE0E29D9DC074EAD53 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t2B28FCA537111726C8DA4ADA51B698624AA33F8B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_Generic_IEnumerableU3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityPointerU3E_GetEnumerator_m4E8DD10E157FC195B66E5F0A60EDD2C71EE2A1AA(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData__ctor_mC6436FE45B5C460FD63E8AAD1DCA3C4648C9FBDA (PointerData_t8814E79B8DF54459590CDF91527B93920AF280C3 * __this, RuntimeObject* ___pointer0, EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PointerEventData.FramePressState nextPressState = PointerEventData.FramePressState.NotChanged;
		__this->set_nextPressState_2(3);
		// public MouseState mouseState = new MouseState();
		MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * L_0 = (MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 *)il2cpp_codegen_object_new(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1_il2cpp_TypeInfo_var);
		MouseState__ctor_m16EF8D45AF8A178368547BD1CE4FBF9DBC563605(L_0, /*hidden argument*/NULL);
		__this->set_mouseState_3(L_0);
		// public PointerData(IMixedRealityPointer pointer, EventSystem eventSystem)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.pointer = pointer;
		RuntimeObject* L_1 = ___pointer0;
		__this->set_pointer_0(L_1);
		// eventDataLeft = new PointerEventData(eventSystem);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_2 = ___eventSystem1;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_3, L_2, /*hidden argument*/NULL);
		__this->set_eventDataLeft_4(L_3);
		// eventDataMiddle = new PointerEventData(eventSystem);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_4 = ___eventSystem1;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_5 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_5, L_4, /*hidden argument*/NULL);
		__this->set_eventDataMiddle_5(L_5);
		// eventDataRight = new PointerEventData(eventSystem);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_6 = ___eventSystem1;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_7 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_7, L_6, /*hidden argument*/NULL);
		__this->set_eventDataRight_6(L_7);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6377C5B12267C3BE4D61409A31C2188A5EB7B375 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * L_0 = (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 *)il2cpp_codegen_object_new(U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m665B46F6BE60C3658FE6683D1689BC4AFB3C8790(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m665B46F6BE60C3658FE6683D1689BC4AFB3C8790 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_0(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_0_m548A1AAA11BBDF63CE10106B631E998871F94FA1 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4_mD42AFBD3894DAC597A21941E12C25731891A1B45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourceStateHandler_t71AFAC421C0106F94BFD72A12B773F9C34232B5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourceStateEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4_mD42AFBD3894DAC597A21941E12C25731891A1B45(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4_mD42AFBD3894DAC597A21941E12C25731891A1B45_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourceDetected(casted);
		RuntimeObject* L_2 = ___handler0;
		SourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler::OnSourceDetected(Microsoft.MixedReality.Toolkit.Input.SourceStateEventData) */, IMixedRealitySourceStateHandler_t71AFAC421C0106F94BFD72A12B773F9C34232B5C_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_1(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_1_m6F680C7F9A9E01902BD4209953F0E08D698C03B5 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4_mD42AFBD3894DAC597A21941E12C25731891A1B45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourceStateHandler_t71AFAC421C0106F94BFD72A12B773F9C34232B5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourceStateEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4_mD42AFBD3894DAC597A21941E12C25731891A1B45(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4_mD42AFBD3894DAC597A21941E12C25731891A1B45_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourceLost(casted);
		RuntimeObject* L_2 = ___handler0;
		SourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourceStateEventData_t8CB813648E28782EC8F299974538CB8C2BF988B4 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler::OnSourceLost(Microsoft.MixedReality.Toolkit.Input.SourceStateEventData) */, IMixedRealitySourceStateHandler_t71AFAC421C0106F94BFD72A12B773F9C34232B5C_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_2(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_2_m44075240C741C87E857D3145A67B90BF338867D1 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t4955807E7BF053B446583ED8BB34D8A1BE645DDF_mC776E03EFF407B3FAEE2482C962D8ED5B29C8FA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_t3584B07BBF521B412D9536341F733B547271267A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_t4955807E7BF053B446583ED8BB34D8A1BE645DDF * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<TrackingState>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_t4955807E7BF053B446583ED8BB34D8A1BE645DDF * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t4955807E7BF053B446583ED8BB34D8A1BE645DDF_mC776E03EFF407B3FAEE2482C962D8ED5B29C8FA3(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t4955807E7BF053B446583ED8BB34D8A1BE645DDF_mC776E03EFF407B3FAEE2482C962D8ED5B29C8FA3_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_t4955807E7BF053B446583ED8BB34D8A1BE645DDF * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_t4955807E7BF053B446583ED8BB34D8A1BE645DDF * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>) */, IMixedRealitySourcePoseHandler_t3584B07BBF521B412D9536341F733B547271267A_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_3(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_3_m26D09D63F4AC251DB42536F7F6BDEC787D36D000 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t3F40104911F5F86F88A46E3961EDD20ABDB3CFFD_mD69F6D3C070E3009C6C79F440DD4E5C3A4977F09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_t3584B07BBF521B412D9536341F733B547271267A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_t3F40104911F5F86F88A46E3961EDD20ABDB3CFFD * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<Vector2>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_t3F40104911F5F86F88A46E3961EDD20ABDB3CFFD * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t3F40104911F5F86F88A46E3961EDD20ABDB3CFFD_mD69F6D3C070E3009C6C79F440DD4E5C3A4977F09(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t3F40104911F5F86F88A46E3961EDD20ABDB3CFFD_mD69F6D3C070E3009C6C79F440DD4E5C3A4977F09_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_t3F40104911F5F86F88A46E3961EDD20ABDB3CFFD * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_t3F40104911F5F86F88A46E3961EDD20ABDB3CFFD * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>) */, IMixedRealitySourcePoseHandler_t3584B07BBF521B412D9536341F733B547271267A_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_4(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_4_mD50461111D48DAF5205122A4D2C0A560DEE3EC79 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t348DE491DFFC276DC552C0DF33FA0331F70B67D2_mD1F2FCCEB714188C1059F35F43EDF3732AC7743C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_t3584B07BBF521B412D9536341F733B547271267A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_t348DE491DFFC276DC552C0DF33FA0331F70B67D2 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<Vector3>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_t348DE491DFFC276DC552C0DF33FA0331F70B67D2 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t348DE491DFFC276DC552C0DF33FA0331F70B67D2_mD1F2FCCEB714188C1059F35F43EDF3732AC7743C(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t348DE491DFFC276DC552C0DF33FA0331F70B67D2_mD1F2FCCEB714188C1059F35F43EDF3732AC7743C_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_t348DE491DFFC276DC552C0DF33FA0331F70B67D2 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_t348DE491DFFC276DC552C0DF33FA0331F70B67D2 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>) */, IMixedRealitySourcePoseHandler_t3584B07BBF521B412D9536341F733B547271267A_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_5(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_5_m85FBC12D7D6908116E7FCEDBA12F25398D7CC3E0 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t231D726E31121868C0276AFE9019E37C9E90D64E_mA8348C3843BD89D567D726B49E518FC02D874FA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_t3584B07BBF521B412D9536341F733B547271267A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_t231D726E31121868C0276AFE9019E37C9E90D64E * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<Quaternion>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_t231D726E31121868C0276AFE9019E37C9E90D64E * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t231D726E31121868C0276AFE9019E37C9E90D64E_mA8348C3843BD89D567D726B49E518FC02D874FA6(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t231D726E31121868C0276AFE9019E37C9E90D64E_mA8348C3843BD89D567D726B49E518FC02D874FA6_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_t231D726E31121868C0276AFE9019E37C9E90D64E * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_t231D726E31121868C0276AFE9019E37C9E90D64E * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>) */, IMixedRealitySourcePoseHandler_t3584B07BBF521B412D9536341F733B547271267A_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_6(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_6_m9A06CF9FE60E2150171A1E8312A8B3F8926A34C3 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tE626A849E7457E2AE0456AFC30D610EC221959E1_m4B9E0C9155612DE175F91651E5D6D16D8BF9CD0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_t3584B07BBF521B412D9536341F733B547271267A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_tE626A849E7457E2AE0456AFC30D610EC221959E1 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<MixedRealityPose>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_tE626A849E7457E2AE0456AFC30D610EC221959E1 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tE626A849E7457E2AE0456AFC30D610EC221959E1_m4B9E0C9155612DE175F91651E5D6D16D8BF9CD0A(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tE626A849E7457E2AE0456AFC30D610EC221959E1_m4B9E0C9155612DE175F91651E5D6D16D8BF9CD0A_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_tE626A849E7457E2AE0456AFC30D610EC221959E1 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_tE626A849E7457E2AE0456AFC30D610EC221959E1 * >::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>) */, IMixedRealitySourcePoseHandler_t3584B07BBF521B412D9536341F733B547271267A_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_7(Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_7_mE8ED91D9A0259940FECDB58E8A953D4434924E92 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisFocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D_mF53D529D573490C093A4FC5BC75DADF2CD0B369D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityFocusChangedHandler_t00F6F2C16BC026C4BFF958A3716D37A8AE9FCE21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<FocusEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		FocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisFocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D_mF53D529D573490C093A4FC5BC75DADF2CD0B369D(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisFocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D_mF53D529D573490C093A4FC5BC75DADF2CD0B369D_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnBeforeFocusChange(casted);
		RuntimeObject* L_2 = ___handler0;
		FocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< FocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler::OnBeforeFocusChange(Microsoft.MixedReality.Toolkit.Input.FocusEventData) */, IMixedRealityFocusChangedHandler_t00F6F2C16BC026C4BFF958A3716D37A8AE9FCE21_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_8(Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_8_m098F161BDFC138144CDB0C3236EDC9384B61E914 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisFocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D_mF53D529D573490C093A4FC5BC75DADF2CD0B369D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityFocusChangedHandler_t00F6F2C16BC026C4BFF958A3716D37A8AE9FCE21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<FocusEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		FocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisFocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D_mF53D529D573490C093A4FC5BC75DADF2CD0B369D(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisFocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D_mF53D529D573490C093A4FC5BC75DADF2CD0B369D_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnFocusChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		FocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< FocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler::OnFocusChanged(Microsoft.MixedReality.Toolkit.Input.FocusEventData) */, IMixedRealityFocusChangedHandler_t00F6F2C16BC026C4BFF958A3716D37A8AE9FCE21_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_9(Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_9_m7D0EA1F042D89D0C67E51A14FE0573989DD78861 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisFocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D_mF53D529D573490C093A4FC5BC75DADF2CD0B369D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityFocusHandler_tE116B3563D9F1BB5FC1BB5149903DFCF0FE118F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<FocusEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		FocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisFocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D_mF53D529D573490C093A4FC5BC75DADF2CD0B369D(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisFocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D_mF53D529D573490C093A4FC5BC75DADF2CD0B369D_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnFocusEnter(casted);
		RuntimeObject* L_2 = ___handler0;
		FocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< FocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler::OnFocusEnter(Microsoft.MixedReality.Toolkit.Input.FocusEventData) */, IMixedRealityFocusHandler_tE116B3563D9F1BB5FC1BB5149903DFCF0FE118F8_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_10(Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_10_m41961780F7557CD1FCF06E50815C5C91B11C4F91 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisFocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D_mF53D529D573490C093A4FC5BC75DADF2CD0B369D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityFocusHandler_tE116B3563D9F1BB5FC1BB5149903DFCF0FE118F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<FocusEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		FocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisFocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D_mF53D529D573490C093A4FC5BC75DADF2CD0B369D(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisFocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D_mF53D529D573490C093A4FC5BC75DADF2CD0B369D_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnFocusExit(casted);
		RuntimeObject* L_2 = ___handler0;
		FocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< FocusEventData_t8D6B5286A464A2D087E22D91F8137BD9E44B275D * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler::OnFocusExit(Microsoft.MixedReality.Toolkit.Input.FocusEventData) */, IMixedRealityFocusHandler_tE116B3563D9F1BB5FC1BB5149903DFCF0FE118F8_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_11(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_11_m5F96E2BB1E666685917A4E2FD0301E8E36932073 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81_m2BA349FC7301973222A459C5338B97E90563223F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointerHandler_t645D76844FC9995B3A7F301C39DFA9BBD3818534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<MixedRealityPointerEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		MixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81_m2BA349FC7301973222A459C5338B97E90563223F(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81_m2BA349FC7301973222A459C5338B97E90563223F_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnPointerDown(casted);
		RuntimeObject* L_2 = ___handler0;
		MixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler::OnPointerDown(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData) */, IMixedRealityPointerHandler_t645D76844FC9995B3A7F301C39DFA9BBD3818534_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_12(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_12_mC2CA80E83BFEA7315AC026F11AA465D7771888EC (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81_m2BA349FC7301973222A459C5338B97E90563223F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointerHandler_t645D76844FC9995B3A7F301C39DFA9BBD3818534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<MixedRealityPointerEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		MixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81_m2BA349FC7301973222A459C5338B97E90563223F(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81_m2BA349FC7301973222A459C5338B97E90563223F_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnPointerDragged(casted);
		RuntimeObject* L_2 = ___handler0;
		MixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler::OnPointerDragged(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData) */, IMixedRealityPointerHandler_t645D76844FC9995B3A7F301C39DFA9BBD3818534_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_13(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_13_mBFA6BD09FB8D6F8563815CE38865946660B6BA27 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81_m2BA349FC7301973222A459C5338B97E90563223F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointerHandler_t645D76844FC9995B3A7F301C39DFA9BBD3818534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<MixedRealityPointerEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		MixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81_m2BA349FC7301973222A459C5338B97E90563223F(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81_m2BA349FC7301973222A459C5338B97E90563223F_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnPointerClicked(casted);
		RuntimeObject* L_2 = ___handler0;
		MixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81 * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler::OnPointerClicked(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData) */, IMixedRealityPointerHandler_t645D76844FC9995B3A7F301C39DFA9BBD3818534_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_14(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_14_m021E9D455E2D41C152EAEA6A84AA51E7FF8DC10D (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81_m2BA349FC7301973222A459C5338B97E90563223F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointerHandler_t645D76844FC9995B3A7F301C39DFA9BBD3818534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<MixedRealityPointerEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		MixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81_m2BA349FC7301973222A459C5338B97E90563223F(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81_m2BA349FC7301973222A459C5338B97E90563223F_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnPointerUp(casted);
		RuntimeObject* L_2 = ___handler0;
		MixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealityPointerEventData_t38E7DEAF0C62E04EC27E739D8579411CC9291D81 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler::OnPointerUp(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData) */, IMixedRealityPointerHandler_t645D76844FC9995B3A7F301C39DFA9BBD3818534_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_15(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_15_m5AB1802860BEC16A5ADBF48B899CE0CC941C2690 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_t70923AB8C2B3603FD1E12392C145636841C39E35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputDown(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler::OnInputDown(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityInputHandler_t70923AB8C2B3603FD1E12392C145636841C39E35_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_16(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_16_m2E80E4E6AD9C021FE95EA4C640413D23BF2D025E (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_t70923AB8C2B3603FD1E12392C145636841C39E35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_mB872F0AE9954DA7AEC86E9A93024DA3E9CF2DCF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_t70923AB8C2B3603FD1E12392C145636841C39E35_mFFB7F4F23F9B4AFEE50D5E838EC56D8ECE2EA920_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var inputData = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456_RuntimeMethod_var);
		V_0 = L_1;
		// if (handler is IMixedRealityInputHandler inputHandler && !inputHandler.IsNull())
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityInputHandler_t70923AB8C2B3603FD1E12392C145636841C39E35_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_1;
		bool L_5;
		L_5 = UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_t70923AB8C2B3603FD1E12392C145636841C39E35_mFFB7F4F23F9B4AFEE50D5E838EC56D8ECE2EA920(L_4, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_t70923AB8C2B3603FD1E12392C145636841C39E35_mFFB7F4F23F9B4AFEE50D5E838EC56D8ECE2EA920_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// inputHandler.OnInputDown(inputData);
		RuntimeObject* L_6 = V_1;
		InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * L_7 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler::OnInputDown(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityInputHandler_t70923AB8C2B3603FD1E12392C145636841C39E35_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_0020:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_8 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_10 = V_2;
		bool L_11;
		L_11 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_mB872F0AE9954DA7AEC86E9A93024DA3E9CF2DCF1(L_10, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_mB872F0AE9954DA7AEC86E9A93024DA3E9CF2DCF1_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0039;
		}
	}
	{
		// actionHandler.OnActionStarted(inputData);
		RuntimeObject* L_12 = V_2;
		InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< BaseInputEventData_t528914D04060771DC6666A9828E503AE80EFF475 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionStarted(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_il2cpp_TypeInfo_var, L_12, L_13);
	}

IL_0039:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_17(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_17_m233482B4AE104424E6E7E8D077E60FB74C0FCF67 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_t70923AB8C2B3603FD1E12392C145636841C39E35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputUp(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler::OnInputUp(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityInputHandler_t70923AB8C2B3603FD1E12392C145636841C39E35_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_18(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_18_m44D0CF885776CB971DE8E38280CA89BBAB30914B (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_t70923AB8C2B3603FD1E12392C145636841C39E35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_mB872F0AE9954DA7AEC86E9A93024DA3E9CF2DCF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_t70923AB8C2B3603FD1E12392C145636841C39E35_mFFB7F4F23F9B4AFEE50D5E838EC56D8ECE2EA920_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var inputData = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456_RuntimeMethod_var);
		V_0 = L_1;
		// if (handler is IMixedRealityInputHandler inputHandler && !inputHandler.IsNull())
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityInputHandler_t70923AB8C2B3603FD1E12392C145636841C39E35_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_1;
		bool L_5;
		L_5 = UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_t70923AB8C2B3603FD1E12392C145636841C39E35_mFFB7F4F23F9B4AFEE50D5E838EC56D8ECE2EA920(L_4, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_t70923AB8C2B3603FD1E12392C145636841C39E35_mFFB7F4F23F9B4AFEE50D5E838EC56D8ECE2EA920_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// inputHandler.OnInputUp(inputData);
		RuntimeObject* L_6 = V_1;
		InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * L_7 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler::OnInputUp(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityInputHandler_t70923AB8C2B3603FD1E12392C145636841C39E35_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_0020:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_8 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_10 = V_2;
		bool L_11;
		L_11 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_mB872F0AE9954DA7AEC86E9A93024DA3E9CF2DCF1(L_10, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_mB872F0AE9954DA7AEC86E9A93024DA3E9CF2DCF1_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0039;
		}
	}
	{
		// actionHandler.OnActionEnded(inputData);
		RuntimeObject* L_12 = V_2;
		InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< BaseInputEventData_t528914D04060771DC6666A9828E503AE80EFF475 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionEnded(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_il2cpp_TypeInfo_var, L_12, L_13);
	}

IL_0039:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_19(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_19_mFD78274FDF965D791B90A707DE41B3FC25FB36AB (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tE44B3E2DFC8CE21E8B2B2E3C0F9FAF7091F41D54_mF0FA6861DBFBA35EA84FC941631B89982F22571B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_t27486769A6B79CAD7141CEE522728A7309A9F492_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tE44B3E2DFC8CE21E8B2B2E3C0F9FAF7091F41D54 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<float>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tE44B3E2DFC8CE21E8B2B2E3C0F9FAF7091F41D54 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tE44B3E2DFC8CE21E8B2B2E3C0F9FAF7091F41D54_mF0FA6861DBFBA35EA84FC941631B89982F22571B(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tE44B3E2DFC8CE21E8B2B2E3C0F9FAF7091F41D54_mF0FA6861DBFBA35EA84FC941631B89982F22571B_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tE44B3E2DFC8CE21E8B2B2E3C0F9FAF7091F41D54 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tE44B3E2DFC8CE21E8B2B2E3C0F9FAF7091F41D54 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_t27486769A6B79CAD7141CEE522728A7309A9F492_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_20(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_20_m34E636971617576F4E33900D4551ABEEEA227104 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296_m79998E43364684CF2552CCFEF47BD0171A2705EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_tAF5D94C471FFDFFBE30098DC36F89BF9933E5C1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector2>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296_m79998E43364684CF2552CCFEF47BD0171A2705EB(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296_m79998E43364684CF2552CCFEF47BD0171A2705EB_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_tAF5D94C471FFDFFBE30098DC36F89BF9933E5C1D_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_21(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_21_m24C9DF74640A4B4C840B86D4DA1B08F4C858F476 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50_mF54DBEA97FBED02124BDCA9A608402673773B939_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_tBADB4452797FB2DBAE88E4F57687EA0F04AAEC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector3>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50_mF54DBEA97FBED02124BDCA9A608402673773B939(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50_mF54DBEA97FBED02124BDCA9A608402673773B939_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_tBADB4452797FB2DBAE88E4F57687EA0F04AAEC2A_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_22(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_22_mD449884B6DE5A1430BD255D0B1E10B2F23F4CAD0 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057_mE494F9977B221C7A1AB2DF1F3808DDB7BD3ABC15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_tBAD7AF468916BE3141208F8B939E3BD553C476D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Quaternion>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057_mE494F9977B221C7A1AB2DF1F3808DDB7BD3ABC15(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057_mE494F9977B221C7A1AB2DF1F3808DDB7BD3ABC15_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_tBAD7AF468916BE3141208F8B939E3BD553C476D2_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_23(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_23_mE90F4D80C17601834E127C5706EC2C80F347FC9C (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F_m63754764AB79DA9DAEEF23A4C309CFDD336BB968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_t2CF9135C69487F61B2D137080339E891E73F72C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<MixedRealityPose>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F_m63754764AB79DA9DAEEF23A4C309CFDD336BB968(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F_m63754764AB79DA9DAEEF23A4C309CFDD336BB968_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_t2CF9135C69487F61B2D137080339E891E73F72C1_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_24(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_24_m1C0DCDBB7EC234EF23ECCD447EDAF45B51C26BB7 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t10431CE1B46A546932928514885A26F01E7E311E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureStarted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureStarted(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t10431CE1B46A546932928514885A26F01E7E311E_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_25(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_25_mCD7B926C13CEAFCC73FE71848AB122BBC7631952 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t10431CE1B46A546932928514885A26F01E7E311E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t10431CE1B46A546932928514885A26F01E7E311E_mE7000B6458C14F8A4CB5B0399187139DB559B901_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_mB872F0AE9954DA7AEC86E9A93024DA3E9CF2DCF1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var inputData = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456_RuntimeMethod_var);
		V_0 = L_1;
		// if (handler is IMixedRealityGestureHandler gestureHandler && !gestureHandler.IsNull())
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityGestureHandler_t10431CE1B46A546932928514885A26F01E7E311E_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_1;
		bool L_5;
		L_5 = UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t10431CE1B46A546932928514885A26F01E7E311E_mE7000B6458C14F8A4CB5B0399187139DB559B901(L_4, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t10431CE1B46A546932928514885A26F01E7E311E_mE7000B6458C14F8A4CB5B0399187139DB559B901_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// gestureHandler.OnGestureStarted(inputData);
		RuntimeObject* L_6 = V_1;
		InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * L_7 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureStarted(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t10431CE1B46A546932928514885A26F01E7E311E_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_0020:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_8 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_10 = V_2;
		bool L_11;
		L_11 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_mB872F0AE9954DA7AEC86E9A93024DA3E9CF2DCF1(L_10, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_mB872F0AE9954DA7AEC86E9A93024DA3E9CF2DCF1_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0039;
		}
	}
	{
		// actionHandler.OnActionStarted(inputData);
		RuntimeObject* L_12 = V_2;
		InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< BaseInputEventData_t528914D04060771DC6666A9828E503AE80EFF475 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionStarted(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_il2cpp_TypeInfo_var, L_12, L_13);
	}

IL_0039:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_26(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_26_mFF4F70EDF335F737A8DEB81BA980A13C1F0E3143 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t10431CE1B46A546932928514885A26F01E7E311E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t10431CE1B46A546932928514885A26F01E7E311E_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_27(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_27_mB239D0E8B69FCFC1FF459B28DD9446766162935B (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296_m79998E43364684CF2552CCFEF47BD0171A2705EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t13C033AAE0091A841EFF3D1A4975F855E560B7C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector2>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296_m79998E43364684CF2552CCFEF47BD0171A2705EB(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296_m79998E43364684CF2552CCFEF47BD0171A2705EB_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t13C033AAE0091A841EFF3D1A4975F855E560B7C5_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_28(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_28_m4E83836396BFC452628B6148083793B2C971AE09 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50_mF54DBEA97FBED02124BDCA9A608402673773B939_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t539B96AA3D2238D2DD8BECE1B885AE2C47ABF504_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector3>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50_mF54DBEA97FBED02124BDCA9A608402673773B939(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50_mF54DBEA97FBED02124BDCA9A608402673773B939_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t539B96AA3D2238D2DD8BECE1B885AE2C47ABF504_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_29(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_29_mBF67F1134E3A7A4E2A153CAE2EB97294E2E2F10C (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057_mE494F9977B221C7A1AB2DF1F3808DDB7BD3ABC15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t577CB846BCEF216AA48D6CA9E7BE3608AF36F9BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Quaternion>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057_mE494F9977B221C7A1AB2DF1F3808DDB7BD3ABC15(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057_mE494F9977B221C7A1AB2DF1F3808DDB7BD3ABC15_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t577CB846BCEF216AA48D6CA9E7BE3608AF36F9BB_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_30(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_30_m94DF4F4BD7DD64D757E82081C970BB1B60AE6EAF (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F_m63754764AB79DA9DAEEF23A4C309CFDD336BB968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t0248C94C145F5AB93302CCCF4C41B8CA8B3A4A1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<MixedRealityPose>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F_m63754764AB79DA9DAEEF23A4C309CFDD336BB968(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F_m63754764AB79DA9DAEEF23A4C309CFDD336BB968_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t0248C94C145F5AB93302CCCF4C41B8CA8B3A4A1F_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_31(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_31_m12A35EE92173FFA69E46BF3E41CE8005205385C6 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t10431CE1B46A546932928514885A26F01E7E311E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t10431CE1B46A546932928514885A26F01E7E311E_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_32(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_32_m18EF1B09B0A012D9DBB1DA786D36486B20279833 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t10431CE1B46A546932928514885A26F01E7E311E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t10431CE1B46A546932928514885A26F01E7E311E_mE7000B6458C14F8A4CB5B0399187139DB559B901_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_mB872F0AE9954DA7AEC86E9A93024DA3E9CF2DCF1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var inputData = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456_RuntimeMethod_var);
		V_0 = L_1;
		// if (handler is IMixedRealityGestureHandler gestureHandler && !gestureHandler.IsNull())
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityGestureHandler_t10431CE1B46A546932928514885A26F01E7E311E_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_1;
		bool L_5;
		L_5 = UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t10431CE1B46A546932928514885A26F01E7E311E_mE7000B6458C14F8A4CB5B0399187139DB559B901(L_4, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t10431CE1B46A546932928514885A26F01E7E311E_mE7000B6458C14F8A4CB5B0399187139DB559B901_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// gestureHandler.OnGestureCompleted(inputData);
		RuntimeObject* L_6 = V_1;
		InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * L_7 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t10431CE1B46A546932928514885A26F01E7E311E_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_0020:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_8 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_10 = V_2;
		bool L_11;
		L_11 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_mB872F0AE9954DA7AEC86E9A93024DA3E9CF2DCF1(L_10, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_mB872F0AE9954DA7AEC86E9A93024DA3E9CF2DCF1_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0039;
		}
	}
	{
		// actionHandler.OnActionEnded(inputData);
		RuntimeObject* L_12 = V_2;
		InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< BaseInputEventData_t528914D04060771DC6666A9828E503AE80EFF475 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionEnded(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_il2cpp_TypeInfo_var, L_12, L_13);
	}

IL_0039:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_33(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_33_m65167A8EB7CCA4ABBD34AD0497E1FD8E04A0A27A (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296_m79998E43364684CF2552CCFEF47BD0171A2705EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t13C033AAE0091A841EFF3D1A4975F855E560B7C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector2>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296_m79998E43364684CF2552CCFEF47BD0171A2705EB(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296_m79998E43364684CF2552CCFEF47BD0171A2705EB_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t5A8D3B68C815F12394DC164BB9EF840BBA39B296 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t13C033AAE0091A841EFF3D1A4975F855E560B7C5_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_34(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_34_m275C19FDE72FA1E5351D047465E12E7F36F22CA9 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50_mF54DBEA97FBED02124BDCA9A608402673773B939_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t539B96AA3D2238D2DD8BECE1B885AE2C47ABF504_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector3>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50_mF54DBEA97FBED02124BDCA9A608402673773B939(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50_mF54DBEA97FBED02124BDCA9A608402673773B939_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t7743A8050D73132DB8698B6F3F073AA8D8E80C50 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t539B96AA3D2238D2DD8BECE1B885AE2C47ABF504_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_35(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_35_mC3D35B4E226EE1D52697BEA1D10B9B748649C928 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057_mE494F9977B221C7A1AB2DF1F3808DDB7BD3ABC15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t577CB846BCEF216AA48D6CA9E7BE3608AF36F9BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Quaternion>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057_mE494F9977B221C7A1AB2DF1F3808DDB7BD3ABC15(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057_mE494F9977B221C7A1AB2DF1F3808DDB7BD3ABC15_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t62593732D526473CD7525B49E8D7B49352D37057 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t577CB846BCEF216AA48D6CA9E7BE3608AF36F9BB_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_36(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_36_m91EA5502C1B8CE6AC5FE099CF48CAA6BC6709A43 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F_m63754764AB79DA9DAEEF23A4C309CFDD336BB968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t0248C94C145F5AB93302CCCF4C41B8CA8B3A4A1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<MixedRealityPose>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F_m63754764AB79DA9DAEEF23A4C309CFDD336BB968(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F_m63754764AB79DA9DAEEF23A4C309CFDD336BB968_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tF5DB27F52152EB5881ADF9B05AE46A87D619244F * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t0248C94C145F5AB93302CCCF4C41B8CA8B3A4A1F_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_37(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_37_mAC0A1575D038702AE9A1C6DF1F9AD1CA6B2A147A (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t10431CE1B46A546932928514885A26F01E7E311E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE_m84226372C53D20CAF151C341BE2E7DBA8DF7C456_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCanceled(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t7DBA87422E2D5FB3A94D2402EE492B94AC767FEE * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureCanceled(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t10431CE1B46A546932928514885A26F01E7E311E_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_38(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_38_m32968A998C125B9BE36A7C045C27AAB8A8E326A1 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46_mC4AAA10E280ABD899D79E36BF795F52D3AEA4627_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySpeechHandler_tA28296A7C298ED10EBA3D71F7868267D7B97FB7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SpeechEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46_mC4AAA10E280ABD899D79E36BF795F52D3AEA4627(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46_mC4AAA10E280ABD899D79E36BF795F52D3AEA4627_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSpeechKeywordRecognized(casted);
		RuntimeObject* L_2 = ___handler0;
		SpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler::OnSpeechKeywordRecognized(Microsoft.MixedReality.Toolkit.Input.SpeechEventData) */, IMixedRealitySpeechHandler_tA28296A7C298ED10EBA3D71F7868267D7B97FB7F_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_39(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_39_mEA4C3B9B7D209808E780C559AEABA5F7AF122A41 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46_mC4AAA10E280ABD899D79E36BF795F52D3AEA4627_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySpeechHandler_tA28296A7C298ED10EBA3D71F7868267D7B97FB7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_mB872F0AE9954DA7AEC86E9A93024DA3E9CF2DCF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_tA28296A7C298ED10EBA3D71F7868267D7B97FB7F_m5A3ABE263D0FDFC90690602DD6BF58549C1D05BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var speechData = ExecuteEvents.ValidateEventData<SpeechEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46_mC4AAA10E280ABD899D79E36BF795F52D3AEA4627(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46_mC4AAA10E280ABD899D79E36BF795F52D3AEA4627_RuntimeMethod_var);
		V_0 = L_1;
		// if (handler is IMixedRealitySpeechHandler speechHandler && !speechHandler.IsNull())
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealitySpeechHandler_tA28296A7C298ED10EBA3D71F7868267D7B97FB7F_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_1;
		bool L_5;
		L_5 = UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_tA28296A7C298ED10EBA3D71F7868267D7B97FB7F_m5A3ABE263D0FDFC90690602DD6BF58549C1D05BC(L_4, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_tA28296A7C298ED10EBA3D71F7868267D7B97FB7F_m5A3ABE263D0FDFC90690602DD6BF58549C1D05BC_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// speechHandler.OnSpeechKeywordRecognized(speechData);
		RuntimeObject* L_6 = V_1;
		SpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46 * L_7 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< SpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler::OnSpeechKeywordRecognized(Microsoft.MixedReality.Toolkit.Input.SpeechEventData) */, IMixedRealitySpeechHandler_tA28296A7C298ED10EBA3D71F7868267D7B97FB7F_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_0020:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_8 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_10 = V_2;
		bool L_11;
		L_11 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_mB872F0AE9954DA7AEC86E9A93024DA3E9CF2DCF1(L_10, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_mB872F0AE9954DA7AEC86E9A93024DA3E9CF2DCF1_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0040;
		}
	}
	{
		// actionHandler.OnActionStarted(speechData);
		RuntimeObject* L_12 = V_2;
		SpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46 * L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< BaseInputEventData_t528914D04060771DC6666A9828E503AE80EFF475 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionStarted(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_il2cpp_TypeInfo_var, L_12, L_13);
		// actionHandler.OnActionEnded(speechData);
		RuntimeObject* L_14 = V_2;
		SpeechEventData_tBC700BF296BD2C90215C144040867EB294B9CE46 * L_15 = V_0;
		NullCheck(L_14);
		InterfaceActionInvoker1< BaseInputEventData_t528914D04060771DC6666A9828E503AE80EFF475 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionEnded(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_tE47620357290C172E5CB79CD6061601F033E4931_il2cpp_TypeInfo_var, L_14, L_15);
	}

IL_0040:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_40(Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_40_m58ED2DEB39A19E053B810A49AB2D0DE9357ED455 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisDictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37_m67BBFE561CB447C577749FA4358B02140F9CE0F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDictationHandler_t9E02D5EA6ECA6D79BD930F957389A2AFD282CAAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<DictationEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisDictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37_m67BBFE561CB447C577749FA4358B02140F9CE0F3(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37_m67BBFE561CB447C577749FA4358B02140F9CE0F3_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDictationHypothesis(casted);
		RuntimeObject* L_2 = ___handler0;
		DictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler::OnDictationHypothesis(Microsoft.MixedReality.Toolkit.Input.DictationEventData) */, IMixedRealityDictationHandler_t9E02D5EA6ECA6D79BD930F957389A2AFD282CAAE_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_41(Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_41_m110E91FAEC0B075AC483EAF858DA038AB7E5C779 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisDictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37_m67BBFE561CB447C577749FA4358B02140F9CE0F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDictationHandler_t9E02D5EA6ECA6D79BD930F957389A2AFD282CAAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<DictationEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisDictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37_m67BBFE561CB447C577749FA4358B02140F9CE0F3(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37_m67BBFE561CB447C577749FA4358B02140F9CE0F3_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDictationResult(casted);
		RuntimeObject* L_2 = ___handler0;
		DictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler::OnDictationResult(Microsoft.MixedReality.Toolkit.Input.DictationEventData) */, IMixedRealityDictationHandler_t9E02D5EA6ECA6D79BD930F957389A2AFD282CAAE_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_42(Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_42_m1B2F43FFB2EDCB88C96D6F544E70CEBC98552A0C (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisDictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37_m67BBFE561CB447C577749FA4358B02140F9CE0F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDictationHandler_t9E02D5EA6ECA6D79BD930F957389A2AFD282CAAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<DictationEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisDictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37_m67BBFE561CB447C577749FA4358B02140F9CE0F3(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37_m67BBFE561CB447C577749FA4358B02140F9CE0F3_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDictationComplete(casted);
		RuntimeObject* L_2 = ___handler0;
		DictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler::OnDictationComplete(Microsoft.MixedReality.Toolkit.Input.DictationEventData) */, IMixedRealityDictationHandler_t9E02D5EA6ECA6D79BD930F957389A2AFD282CAAE_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_43(Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_43_mD45B5A1BD37F19914631CA540AF2E1580772ECCC (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisDictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37_m67BBFE561CB447C577749FA4358B02140F9CE0F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDictationHandler_t9E02D5EA6ECA6D79BD930F957389A2AFD282CAAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<DictationEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisDictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37_m67BBFE561CB447C577749FA4358B02140F9CE0F3(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37_m67BBFE561CB447C577749FA4358B02140F9CE0F3_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDictationError(casted);
		RuntimeObject* L_2 = ___handler0;
		DictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DictationEventData_tB26A9E8DDFA163DC991D62AB4A4C1CF64FD0CC37 * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler::OnDictationError(Microsoft.MixedReality.Toolkit.Input.DictationEventData) */, IMixedRealityDictationHandler_t9E02D5EA6ECA6D79BD930F957389A2AFD282CAAE_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_44(Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_44_mF223BF1101D89B9CE1A907EC9D5E8223FB205F41 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tC6CD5227DE30910A42F60E4D57C330946FA03FD2_m01B0E71ED8D9F01C10E55485DB6C0C16C3FD03B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityHandJointHandler_tA36E11FBFA86A6AD8F43CB1204D4274E28EA66D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tC6CD5227DE30910A42F60E4D57C330946FA03FD2 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<IDictionary<TrackedHandJoint, MixedRealityPose>>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tC6CD5227DE30910A42F60E4D57C330946FA03FD2 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tC6CD5227DE30910A42F60E4D57C330946FA03FD2_m01B0E71ED8D9F01C10E55485DB6C0C16C3FD03B3(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tC6CD5227DE30910A42F60E4D57C330946FA03FD2_m01B0E71ED8D9F01C10E55485DB6C0C16C3FD03B3_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnHandJointsUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tC6CD5227DE30910A42F60E4D57C330946FA03FD2 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tC6CD5227DE30910A42F60E4D57C330946FA03FD2 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler::OnHandJointsUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>) */, IMixedRealityHandJointHandler_tA36E11FBFA86A6AD8F43CB1204D4274E28EA66D4_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_45(Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_45_m4577BF4FE9343FB689F1E4A01CDAE70F11F0F258 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t80FAAC4573C5B66BBC88B94D530CDC46B4EECEE2_mB1BC0FDEE1C0FC2B32043A3634F62A0F9B83307C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityHandMeshHandler_t8BCB8462842D92942223FBA6EA6D383B0F104220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t80FAAC4573C5B66BBC88B94D530CDC46B4EECEE2 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<HandMeshInfo>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t80FAAC4573C5B66BBC88B94D530CDC46B4EECEE2 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t80FAAC4573C5B66BBC88B94D530CDC46B4EECEE2_mB1BC0FDEE1C0FC2B32043A3634F62A0F9B83307C(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t80FAAC4573C5B66BBC88B94D530CDC46B4EECEE2_mB1BC0FDEE1C0FC2B32043A3634F62A0F9B83307C_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnHandMeshUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t80FAAC4573C5B66BBC88B94D530CDC46B4EECEE2 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t80FAAC4573C5B66BBC88B94D530CDC46B4EECEE2 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler::OnHandMeshUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>) */, IMixedRealityHandMeshHandler_t8BCB8462842D92942223FBA6EA6D383B0F104220_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_46(Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_46_mF1AD57540664C21F86E419963625E51B017B1237 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9_m176108EB24DCC2FF910B4D653D3ECC40CDEC51EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTouchHandler_t27E30DAB576450DABC09BFFAFB3920FFE88B9181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<HandTrackingInputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		HandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9_m176108EB24DCC2FF910B4D653D3ECC40CDEC51EF(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9_m176108EB24DCC2FF910B4D653D3ECC40CDEC51EF_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTouchStarted(casted);
		RuntimeObject* L_2 = ___handler0;
		HandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< HandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler::OnTouchStarted(Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData) */, IMixedRealityTouchHandler_t27E30DAB576450DABC09BFFAFB3920FFE88B9181_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_47(Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_47_mF7E317AC59554666329BB220A4BE9DE40941BC1D (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9_m176108EB24DCC2FF910B4D653D3ECC40CDEC51EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTouchHandler_t27E30DAB576450DABC09BFFAFB3920FFE88B9181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<HandTrackingInputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		HandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9_m176108EB24DCC2FF910B4D653D3ECC40CDEC51EF(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9_m176108EB24DCC2FF910B4D653D3ECC40CDEC51EF_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTouchCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		HandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< HandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler::OnTouchCompleted(Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData) */, IMixedRealityTouchHandler_t27E30DAB576450DABC09BFFAFB3920FFE88B9181_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_48(Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_48_m7F5920B37C186CC71C8B719DE0E6A673F1D0A6A3 (U3CU3Ec_t4022B0B92E389FBF23E67094F7A41EFC73197962 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9_m176108EB24DCC2FF910B4D653D3ECC40CDEC51EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTouchHandler_t27E30DAB576450DABC09BFFAFB3920FFE88B9181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<HandTrackingInputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		HandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9_m176108EB24DCC2FF910B4D653D3ECC40CDEC51EF(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9_m176108EB24DCC2FF910B4D653D3ECC40CDEC51EF_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTouchUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		HandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< HandTrackingInputEventData_tAF558F74E05C8E320DC9F73199BCDC819FCF67E9 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler::OnTouchUpdated(Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData) */, IMixedRealityTouchHandler_t27E30DAB576450DABC09BFFAFB3920FFE88B9181_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0F50D35F6225C8A275A847E2C83B6D19E7434895 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t53B87639731967C23BD958FB7695CA6D19C1921D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t53B87639731967C23BD958FB7695CA6D19C1921D * L_0 = (U3CU3Ec_t53B87639731967C23BD958FB7695CA6D19C1921D *)il2cpp_codegen_object_new(U3CU3Ec_t53B87639731967C23BD958FB7695CA6D19C1921D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD237691749D651D0558112BAF2DE5F7C139AA087(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t53B87639731967C23BD958FB7695CA6D19C1921D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t53B87639731967C23BD958FB7695CA6D19C1921D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD237691749D651D0558112BAF2DE5F7C139AA087 (U3CU3Ec_t53B87639731967C23BD958FB7695CA6D19C1921D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::<OnValidate>b__25_0(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3COnValidateU3Eb__25_0_m4806D0F236C8C48B4324720A52B4FD26040B03D7 (U3CU3Ec_t53B87639731967C23BD958FB7695CA6D19C1921D * __this, String_t* ___result0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___next1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral193EAB9F1EC19468783C52A94D9B84DF6D5BEE4F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string hierarchy = gameObject.transform.EnumerateAncestors(true).Aggregate("", (result, next) => next.gameObject.name + "=>" + result);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___next1;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___result0;
		String_t* L_4;
		L_4 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(L_2, _stringLiteral193EAB9F1EC19468783C52A94D9B84DF6D5BEE4F, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * FocusDetails_get_Object_m6E611D223AC2D91FA1436B14B16A133F5EAFB83F_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject Object { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CObjectU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method)
{
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerData_set_PreviousPointerTarget_m60774B5702185ED8B132FB130E2CC52B82FBADF8_inline (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject PreviousPointerTarget { get; private set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CPreviousPointerTargetU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_Object_mE30D7E68112FCC6D52434D98C5895331269673A7_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject Object { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CObjectU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_LastRaycastHit_mFA9CA0D694CF4CD39649730AE447CC03CF36C9EE_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00  ___value0, const RuntimeMethod* method)
{
	{
		// public MixedRealityRaycastHit LastRaycastHit { get; set; }
		MixedRealityRaycastHit_tD22EEBDAB236435E9B72AA0671637AA17A509F00  L_0 = ___value0;
		__this->set_U3CLastRaycastHitU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_LastGraphicsRaycastResult_mBCBF82062020D04151A04BED4766CFE445F396AC_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___value0, const RuntimeMethod* method)
{
	{
		// public RaycastResult LastGraphicsRaycastResult { get; set; }
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_0 = ___value0;
		__this->set_U3CLastGraphicsRaycastResultU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerData_set_RayStepIndex_m380239B0289557A1FDF1DD40FDD8A0C38E299F19_inline (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int RayStepIndex { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRayStepIndexU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Origin_mE84E244641769AB2B36226E9D16FCD6A0B2F1D60_inline (RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Origin { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3COriginU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerData_set_StartPoint_m1373FD9D3BF90406D263219BC458B5249EA049AE_inline (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 StartPoint { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CStartPointU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_RayDistance_m004B6FD4F669C2324EA89EB1C57DE79277C894F1_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float RayDistance { get; set; }
		float L_0 = ___value0;
		__this->set_U3CRayDistanceU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_Point_m021BEC1DA8BFD4EEC41FDA0B52F848E92EB5AD31_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Point { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CPointU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_Normal_m17F57ACF6B19B36A025B59E21278F740D50060AB_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Normal { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CNormalU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RayStep_get_Length_m91DEC6B3F1CE1DDDB88380E46B61277E7DC1E9D8_inline (RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E * __this, const RuntimeMethod* method)
{
	{
		// public float Length { get; private set; }
		float L_0 = __this->get_U3CLengthU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Terminus_m35F90B142BE20BDCD6426BEB30CB8FC0B72BD7C9_inline (RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Terminus { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CTerminusU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Direction_m8F0AA29CC2F69935B92A1C71B52C8C6912A7F4B3_inline (RayStep_tECE3729D80E033F0B16409C6C78D7D74517C113E * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Direction { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CDirectionU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m56EB454031EABB53BA35FECF3F61A7E2332A2521_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_Point_m6F012CA7F09CF74419141C3B0988A4BCAEE5B4F2_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Point { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CPointU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_PointLocalSpace_m1634F54BCC3389C55E7DB08E3E73F30C27048295_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 PointLocalSpace { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CPointLocalSpaceU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_Normal_m30AF9F941B737856133F3BCDC144899C6876A599_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Normal { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CNormalU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_NormalLocalSpace_m09AE9D3B5C85AD65CDF6E63174A57547C6740434_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 NormalLocalSpace { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CNormalLocalSpaceU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_EndSample_m2A9C5852FDDF2F191716E29F8BD5E5478E1EEA87((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_PointLocalSpace_m36C41EB93AE0F16FB93F1A7679EE729C8D52B411_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 PointLocalSpace { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CPointLocalSpaceU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_NormalLocalSpace_mA235420352F8FE257A05E7CDD5804D6F1B7F7C10_inline (FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 NormalLocalSpace { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CNormalLocalSpaceU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316  PointerData_get_Details_m2F7A93F53A62978746EE54E30F3F79A08D2A6D55_inline (PointerData_t5B14ED2EDCD2BC464D328FB6206CD49A15EE0213 * __this, const RuntimeMethod* method)
{
	{
		// get => focusDetails;
		FocusDetails_t5A0621684DB948718A18E76D6F67B5D4B2286316  L_0 = __this->get_focusDetails_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_mC2227A5AAC0C2D1C5F2C97BB3A5937B8CE368ACA(L_0, (uint16_t)1, 0, 0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline (RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * __this, const RuntimeMethod* method)
{
	{
		// get { return m_GameObject; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_GameObject_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerPreferences_get_InputSourceType_m72F97938461D75708AD238D6662D07F840BDD198_inline (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, const RuntimeMethod* method)
{
	{
		// public InputSourceType InputSourceType { get; }
		int32_t L_0 = __this->get_U3CInputSourceTypeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * PointerPreferences_get_PointerType_mA878224D689866E21EA72D04D83B039A4ED49ABF_inline (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, const RuntimeMethod* method)
{
	{
		// public Type PointerType { get; }
		Type_t * L_0 = __this->get_U3CPointerTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerPreferences_get_Right_mF8D590E57B4E2FE0C358525757055A82A9E6EFA8_inline (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, const RuntimeMethod* method)
{
	{
		// public PointerBehavior Right { get; private set; }
		int32_t L_0 = __this->get_U3CRightU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerPreferences_get_Left_m27D6C4D2E8AB8DC2AAFA5D52B948C0FE5C34251A_inline (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, const RuntimeMethod* method)
{
	{
		// public PointerBehavior Left { get; private set; }
		int32_t L_0 = __this->get_U3CLeftU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerPreferences_get_Other_m1DCB326ED20626010AF59C06CDD1E30E67E17D70_inline (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, const RuntimeMethod* method)
{
	{
		// public PointerBehavior Other { get; private set; }
		int32_t L_0 = __this->get_U3COtherU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerPreferences_set_Right_m9C2E593E82206CA22FCB240AFF87611BD82EA6D7_inline (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public PointerBehavior Right { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRightU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerPreferences_set_Left_mBE3FB989FA7752716C38E998E3909ADF22FE0BF0_inline (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public PointerBehavior Left { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CLeftU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerPreferences_set_Other_mA59BA29954BA1CC221042978C3ACF1F1D1FCF92C_inline (PointerPreferences_t558D69982C2798201BE66A1A431423272D886765 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public PointerBehavior Other { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3COtherU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GenericPointer_set_PrioritizedLayerMasksOverride_m607E454D525D68ACD65B3BE6D6FC0A53AF41D684_inline (GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984 * __this, LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___value0, const RuntimeMethod* method)
{
	{
		// public LayerMask[] PrioritizedLayerMasksOverride { get; set; } = null;
		LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* L_0 = ___value0;
		__this->set_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseGenericInputSource_set_SourceType_mD07D42C4699D971CA44EC8A62385ABDDF1FF3967_inline (BaseGenericInputSource_tACE58AEA81725FFF6F6EA684EE90F348A841888B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public InputSourceType SourceType { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CSourceTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  GazeProvider_get_LatestEyeGaze_m3B08254C87B1FCC970A1602CB7F6BE11AA7F3B33_inline (GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * __this, const RuntimeMethod* method)
{
	{
		// public Ray LatestEyeGaze { get; private set; } = default(Ray);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_0 = __this->get_U3CLatestEyeGazeU3Ek__BackingField_36();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GazeProvider_get_UseHeadGazeOverride_mEB5E7F3B458C6ED184F4849D15B22838FF70D765_inline (GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * __this, const RuntimeMethod* method)
{
	{
		// public bool UseHeadGazeOverride { get; set; }
		bool L_0 = __this->get_U3CUseHeadGazeOverrideU3Ek__BackingField_39();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  GazeProvider_get_overrideHeadPosition_m6B8D629E261E41B9E7537702DF16080538BDCB62_inline (GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3? overrideHeadPosition { get; private set; }
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_0 = __this->get_U3CoverrideHeadPositionU3Ek__BackingField_27();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  GazeProvider_get_overrideHeadForward_m3A0B0DECA9CDC71FF12D9601E4CF4BF2C2C9C2AB_inline (GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3? overrideHeadForward { get; private set; }
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_0 = __this->get_U3CoverrideHeadForwardU3Ek__BackingField_28();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GazeProvider_set_overrideHeadPosition_m4B50D930F9FCC64412FEE718AEA02EE3D9CCB193_inline (GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * __this, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3? overrideHeadPosition { get; private set; }
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_0 = ___value0;
		__this->set_U3CoverrideHeadPositionU3Ek__BackingField_27(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GazeProvider_set_overrideHeadForward_mCEDCB4D540076E25EBB717B365EDA44EC2C502FC_inline (GazeProvider_t65EC4085A7052AF724CBB22163ACFB7A3CDA71E4 * __this, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3? overrideHeadForward { get; private set; }
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_0 = ___value0;
		__this->set_U3CoverrideHeadForwardU3Ek__BackingField_28(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7* GenericPointer_get_Rays_m5B4976E39B661849D6B4FBF5CCD0D976BA6DAD46_inline (GenericPointer_t5A0A95285D351011D8335DE7D0B4FA21ECBAE984 * __this, const RuntimeMethod* method)
{
	{
		// public RayStep[] Rays { get; protected set; } = { new RayStep(Vector3.zero, Vector3.forward) };
		RayStepU5BU5D_t2D67BF00E9C0B6249235CEAEEF629A9BC1CAD1E7* L_0 = __this->get_U3CRaysU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  MixedRealityInputAction_get_None_mF8925BEFFCBF261E00BEAD634565EB980540E2CC_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityInputAction None { get; } = new MixedRealityInputAction(0, "None");
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396_il2cpp_TypeInfo_var);
		MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396  L_0 = ((MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityInputAction_tA77849E349836E20DE12E7AE1ED28250B4722396_il2cpp_TypeInfo_var))->get_U3CNoneU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_mA1D47F19E3535E59267118BB76A0C9495A50C4CE_inline (SimpleCoroutineAwaiter_t04E0EE20D0B0F8D1F080A6ECCAA357DA22E89873 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = __this->get_U3CIsCompletedU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  L_0 = (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )__this->get_current_3();
		return (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_mDA03BFD5DF47FFF880309A31A2DC8454EDFAB08B((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}

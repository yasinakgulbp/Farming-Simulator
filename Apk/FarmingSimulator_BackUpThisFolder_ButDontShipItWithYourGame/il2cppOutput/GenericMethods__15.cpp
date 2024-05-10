﻿#include "pch-cpp.hpp"





template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3Invoker;
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3Invoker<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct Action_1_t1EA00726877CBFFB94EE52CCD9672A96472984B8;
struct Action_1_tC7DA3F3177E0ABC8E0B6FB2D4D2F72C303E1A04F;
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
struct Action_1_t66B514BE877E216616DEDD40416127189FE16FA3;
struct Action_2_t240BAEB1DC7A6558995FFCB7E0186F2ABB2CE346;
struct Action_2_t5F23CC3B7A8A73A4EA03ECC4C0C36453937843DB;
struct Action_2_t723CF5545926725AE4B055BB8E304D27E617A846;
struct Action_2_t28390B369564138BA256B9D0831BFEC2F9FF1006;
struct Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75;
struct Action_2_tA1EAD43A5C76FF3E77D1705EC83B9AB7B1BE7D88;
struct Action_3_tD4FEFC6A317A295868086BEB12578A006464E2D5;
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB;
struct Dictionary_2_t4CE53C8BCD6558009650AFE413B37A773593BC7B;
struct Dictionary_2_t1C6F670EE6B3EEEEFF2CBA243476B8AC9C173D11;
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35;
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
struct Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C;
struct Func_1_tEA19435E526C20D577E34BADB14CA06F066636C2;
struct Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F;
struct IEnumerable_1_tDED90A5957122B27D452CE2D6BF2102E19B274AA;
struct IEqualityComparer_1_tA12FC187A10D7FDB4477118192479E5679FDC3C7;
struct IList_1_tF939437DA6A736B0D418E652C678C909E9D54240;
struct IPropertyBag_1_tF38E0DD26816C30F7A291A4C229273286EF81690;
struct IPropertyBag_1_t34647E6DBA2B3FBAF772A30AB58389B957EB2353;
struct IPropertyBag_1_t4503949B37B2AF7B859307C5B9FC0D205FBBB58C;
struct IPropertyBag_1_t0C3656FAD043E643AE0AF2CE556A8B0EFC08BAF0;
struct IPropertyBag_1_t12476CBFA03E553669FC0F78B8B392643D0EA98D;
struct IPropertyBag_1_tC89C7D801308BB118F51FC38D2EDF9150099CD87;
struct IPropertyBag_1_tA5F5E06CD7B6D9DA44B0C96DD751E125A2838965;
struct IPropertyBag_1_tB4F574342A3326282E305E935876E09BA8AC2A2E;
struct IPropertyBag_1_t0F569CB3E3DD679044B9F9E594B94E991D876F55;
struct IPropertyBag_1_tD0AC48FB723053E10D50C4F4ACA187049C60A52A;
struct IPropertyBag_1_tA86B0AA7564B969B39432363A3CC153860369CF8;
struct IPropertyBag_1_tF96AD753C8C0604F73BEC05D07FB8DB0E652D9D7;
struct IPropertyBag_1_tCC672A5FC4DF9FCAEDB0E95C78D8B03C0BE79D1F;
struct IPropertyBag_1_tFB0D9D329A0DD352CA6F2E401245E71D132AF6B1;
struct IPropertyBag_1_tD475E86AD532B7E07FF336E6D5F45242390B1331;
struct IPropertyBag_1_tAA5B8A65854B645C4BE0170D2629B00A15218E3E;
struct IPropertyBag_1_t474CE322BDE46B0885DE33A9810CBF959176FBE8;
struct IPropertyBag_1_tABC6AB8A0C2984D47212C161B82BB4CD34EE4B42;
struct IPropertyBag_1_t6AFC0AC74501529BFF9E097DC21249C06852B690;
struct IPropertyBag_1_tAE3DEC013C632256F0D7F5C1CBC3680AC185F979;
struct IPropertyBag_1_tC38B0E23F5A4EEEB1496FA49888AE669B1A22163;
struct IPropertyBag_1_t35C2AC27D6AF7F85B944D05BFC0298C9A7080388;
struct IPropertyBag_1_t852A24B93B53A9516797D747FE08D0DDDB2288B5;
struct IPropertyBag_1_tC4A861BBA0615CB45605B37C7604CB3950574558;
struct IPropertyBag_1_t0609AEAC1BAF0CC00E12F517D94A0BB20C869A05;
struct IPropertyBag_1_t21591A9B7F6B7F2B6226C8314B530B2C5CBEF548;
struct IPropertyBag_1_tAD71D1994E82547416831FC2DAE21F038A38CAAD;
struct IPropertyBag_1_t06FC2AE397C1A711BCF674C0438149C49A561045;
struct IPropertyBag_1_tF770C1A78A72D7B8E24F537F9409CFDB5B0C11A6;
struct IPropertyBag_1_t28707B699C3F6C7965A9AF253C21DE32BCB4148F;
struct IPropertyBag_1_t9834E39BF4BD812099CECA37DF60749AAE274FCD;
struct IPropertyBag_1_t145445023A0B2CED5FB1C2CCA065A0C2678B4CC3;
struct IPropertyBag_1_t8A3D63921BE840B9ACA3F45D9B9F6918AFD54CA5;
struct IPropertyBag_1_t4E3151D7F146BCDA0FA72786B3B30359FF54504F;
struct IPropertyBag_1_tD1F3A7DBE2F49D15806E8AC1B537F0B133DA265E;
struct IPropertyBag_1_t4F700C12974F20F57E80BF1374C40ADA92303CA3;
struct IPropertyBag_1_tB4AF5D6F5B05C75849FABA9CF0F7410F2058ADCD;
struct IPropertyBag_1_t6C3B3ECBE136DE8EB30C6E3C4C68260118B90C67;
struct IPropertyBag_1_t11B17E28AD004BEECDF730E60F377FEBBAE629D5;
struct IPropertyBag_1_t81B42929CDBDAC1B8C1775D38F8646DAF065F8F9;
struct IPropertyBag_1_tDAC9D4EA568EDC701E9AC378EF87FE080958271E;
struct IPropertyBag_1_t62EF8C2C7D11C796F3ECB8AD3461E8C3A2D87E5A;
struct IPropertyBag_1_t5EBA6E56CEB6DFD9CA30F8DA7E06E09A8211DE60;
struct IPropertyBag_1_t9CE20305E04AC1EB512CCC226C03A84714030C34;
struct IPropertyBag_1_tF3ED76A0B3B3C7C939F96D3F9D303DAD0210804D;
struct IPropertyBag_1_t87438811C2F2F5EDBD73279779C029EED554B3CB;
struct IPropertyBag_1_tBBDD5A5B3F8E9F119138331A16572F6626C67749;
struct IPropertyBag_1_t36BB94A0E64BDC3C7B44E3C33CD0562C77748D3F;
struct KeyCollection_t1918D5A854F712143047F012554DE65FD3B37477;
struct ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A;
struct ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442;
struct ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281;
struct ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15;
struct ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_t592DF2E59D6E244DA0041698383484A07C7E0480;
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
struct List_1_tD1A1A4E269D550491A33C35C61E549EBA163D6F4;
struct List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B;
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324;
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B;
struct List_1_t75E66FBE18EAE33E2DBD8F2C48C54549332A997F;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268;
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
struct List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF;
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_t8E88137DBF3559DC2CF17853F82E9C24C134B291;
struct Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2;
struct Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087;
struct Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC;
struct Property_2_tB2B25D50A07137613571C599F2D927783128F4B2;
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
struct ValueCollection_t8E5B377B625BA8506BADFD93EB64BA9E8266DF0A;
struct EntryU5BU5D_t4A0524CF4EC55E079AA0A775BD5980479D07A4C5;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Clickable_tED3E313565F64BDF5DA9D3FE0FEFFD0E17E53834;
struct Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A;
struct ColumnLayout_tF0A72BFB169B3329F9720AF33516EBAFAB4400B4;
struct ColumnMover_tF8B270BEC7C26ECD780F9EEAE6EC2A99BDC6986F;
struct Columns_t487EAF3B634F6D919D58F1927099A8883964831B;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D;
struct IBinding_t02FD99E9C9F2072B28E110F16C157666F5B2DBC7;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3;
struct IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E;
struct IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5;
struct IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697;
struct IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2;
struct IPropertyBagVisitor_tE8B9B7E14DBF946E6E65BD0ECC8679268715BF5A;
struct IResolvedStyle_t6A3530BA6147B091C278593F21F86B09CD42BE89;
struct IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7;
struct IVisualElementScheduledItem_t309F1A5445514122A9E3F64182D0D8A4DE34C48F;
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
struct MethodInfo_t;
struct MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211;
struct MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D;
struct MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6;
struct MultiColumnHeaderColumn_t6F44266EE1B6EEB83465A7FE3BA6A6C7CBF8F9B4;
struct MultiColumnHeaderColumnResizeHandle_t2512E81EB5479A2B0052C77741DB027E107F01C2;
struct MultiColumnHeaderColumnSortIndicator_tBC4661121B0BC69A811617BFB87C1D388A68EAF3;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SortColumnDescriptions_tDC3FDF948D96F26E0BCB2C971C6EDA1E02BAB1EA;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
struct TextEditingManipulator_t9AC543C81F3778888F421C8D93003EBC8902EB29;
struct TextSelectingManipulator_t85DD873E0C5537C1F8468B6FE5E4C9995B193855;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Type_t;
struct UIRenderer_t92C2C36451BAD524541C4C548B02D0EAC798644E;
struct UITKTextHandle_t1FF3B4EC2367C05F42D61C660D6FE30DF91C06CE;
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067;
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Data_t43E3238277579E631EA4E8016E61966D79F5B62E;
struct ColumnData_t0AB07CB43923527FF3700146C0F98D09B673492A;
struct ViewState_t5BBB8D6381ABFF63C3178453D4ACE18E7D54D4C0;
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tDED90A5957122B27D452CE2D6BF2102E19B274AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t6C561189597D7102947B2C2D0FCE829F1CFCE163_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IResolvedStyle_t6A3530BA6147B091C278593F21F86B09CD42BE89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral110D1733D85BF5EFB139B95FF286BB627337195E;
IL2CPP_EXTERN_C String_t* _stringLiteral1C09770F25C8580FC7F6623067ACD12EBA570614;
IL2CPP_EXTERN_C String_t* _stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC;
IL2CPP_EXTERN_C String_t* _stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B;
IL2CPP_EXTERN_C String_t* _stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468;
IL2CPP_EXTERN_C String_t* _stringLiteral7ECFB57A0D1B5CE741045B6B75AB6521BC5B5C0F;
IL2CPP_EXTERN_C String_t* _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46;
IL2CPP_EXTERN_C String_t* _stringLiteralB76C1A87204BBFDC1EB8755ECBEA3E6B651710A2;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralE958A63C0675D65C92182FC45CE3E78A8DD48061;
IL2CPP_EXTERN_C String_t* _stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32;
IL2CPP_EXTERN_C String_t* _stringLiteralF704B54D833421164E45E576DFD279921246BCEA;
IL2CPP_EXTERN_C String_t* _stringLiteralF7736367EB5597A368928D1011CEA2283AF9B94D;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA48C3C80A6FB19382E0268E36BA1D3ACFBDF700C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Dictionary_2_t1C6F670EE6B3EEEEFF2CBA243476B8AC9C173D11  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t4A0524CF4EC55E079AA0A775BD5980479D07A4C5* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t1918D5A854F712143047F012554DE65FD3B37477* ____keys;
	ValueCollection_t8E5B377B625BA8506BADFD93EB64BA9E8266DF0A* ____values;
	RuntimeObject* ____syncRoot;
};
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF  : public RuntimeObject
{
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A  : public RuntimeObject
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281  : public RuntimeObject
{
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15  : public RuntimeObject
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D  : public RuntimeObject
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_tAFBE76D1846D83A45C3F8E1CAE1C1261F0C455E2  : public RuntimeObject
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8  : public RuntimeObject
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324  : public RuntimeObject
{
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317  : public RuntimeObject
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95  : public RuntimeObject
{
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4  : public RuntimeObject
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tB2B25D50A07137613571C599F2D927783128F4B2  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct TypeTraits_1_t14492BDEFA66B94D1A35E842BFAB7898518438E4  : public RuntimeObject
{
};
struct TypeTraits_1_tC1A46C3724D2DAD269AF6BD39D20DE59150FDF28  : public RuntimeObject
{
};
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	bool ___isIMGUIContainer;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry;
};
struct LazyInitializer_t81FC47D75907B87D08CFBF24B41FB06B968BC948  : public RuntimeObject
{
};
struct Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7  : public RuntimeObject
{
};
struct Math_tEB65DE7CA8B083C412C969C92981C030865486CE  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct MemoryExtensions_t2DC3604DB167FA4473786CD400C718D98E20C6D7  : public RuntimeObject
{
};
struct MemoryMarshal_t0208DBB300D970EB22EDC8C08FB57418DE91D026  : public RuntimeObject
{
};
struct MouseEventsHelper_tCA2B2B4B36A3F80CE118DECAE91AB7658A68437F  : public RuntimeObject
{
};
struct MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6  : public RuntimeObject
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___columnSortingChanged;
	Action_2_t723CF5545926725AE4B055BB8E304D27E617A846* ___headerContextMenuPopulateEvent;
	BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* ___m_View;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_HeaderContainer;
	MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D* ___m_MultiColumnHeader;
};
struct NativeArrayUnsafeUtility_tB4D8A974D44EE6F4B2C32D5D19861FB081F88FCE  : public RuntimeObject
{
};
struct NativeSliceExtensions_tA2B0303180122826FD5887061B8DBA5F342A726B  : public RuntimeObject
{
};
struct NativeSliceUnsafeUtility_tA7CBE88BA4246367450DB167A878F2FA408E10CD  : public RuntimeObject
{
};
struct NoAllocHelpers_t5108A9272D2BFBFF50B14D2A1B5330A629180360  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct ColumnData_t0AB07CB43923527FF3700146C0F98D09B673492A  : public RuntimeObject
{
	MultiColumnHeaderColumn_t6F44266EE1B6EEB83465A7FE3BA6A6C7CBF8F9B4* ___U3CcontrolU3Ek__BackingField;
	MultiColumnHeaderColumnResizeHandle_t2512E81EB5479A2B0052C77741DB027E107F01C2* ___U3CresizeHandleU3Ek__BackingField;
};
struct NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref;
};
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref;
};
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref;
};
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref;
};
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref;
};
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref;
};
struct AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE 
{
	RuntimeObject* ___m_Target;
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Previous;
};
struct AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE_marshaled_pinvoke
{
	RuntimeObject* ___m_Target;
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Previous;
};
struct AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE_marshaled_com
{
	RuntimeObject* ___m_Target;
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Previous;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	bool ___m_Focusable;
	int32_t ___m_TabIndex;
	bool ___m_DelegatesFocus;
	bool ___m_ExcludeFromFocusRing;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	int32_t ___id;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD 
{
	PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* ___m_Visitor;
	RuntimeObject* ___m_Property;
};
struct PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD_marshaled_pinvoke
{
	PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* ___m_Visitor;
	RuntimeObject* ___m_Property;
};
struct PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD_marshaled_com
{
	PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* ___m_Visitor;
	RuntimeObject* ___m_Property;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	intptr_t ____value;
};
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	intptr_t ____value;
};
struct ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 
{
	intptr_t ____value;
};
struct ByReference_1_t60E9D5BC0CC636A7BBC9119CB88BD64476B03EA4 
{
	intptr_t ____value;
};
struct ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A 
{
	intptr_t ____value;
};
struct ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE 
{
	intptr_t ____value;
};
struct ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 
{
	intptr_t ____value;
};
struct ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct BackgroundPositionKeyword_tE680A05B983D256AADC8E2CF1CA169D004B8641B 
{
	int32_t ___value__;
};
struct BackgroundSizeType_tD194B20FF5086D494ABF8D799124D2FC4FFCC674 
{
	int32_t ___value__;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Size;
};
struct ClipMethod_tDE393081E6CA2C9C1A8C3D731613580585767391 
{
	int32_t ___value__;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ChotspotU3Ek__BackingField;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ChotspotU3Ek__BackingField;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ChotspotU3Ek__BackingField;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct EasingMode_tEF87477B9B9EB2524525550AE5ABEBC00FC7B0DF 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FindObjectsInactive_t10C7BE036CAD0178142374F945283DA50D02B87A 
{
	int32_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct LanguageDirection_t30A3B6BBCEE6A6F57641E4E008E0DCC40603558C 
{
	int32_t ___value__;
};
struct MeshUpdateFlags_tCCD32DF7F112AE37CA85E45959DC6CDF64444DF6 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct OwnedState_t0957CA36E21DE8A443B616EBE83B25CCCA70B5A4 
{
	uint8_t ___value__;
};
struct PickingMode_t5699BF9E5F2587E0D297984D5BF5B63B768E66AC 
{
	int32_t ___value__;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct PropagationPhase_tF3BE8BF5ED45FC52A828B7B6F078B64F01FAE6D6 
{
	int32_t ___value__;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct PseudoStates_tF4AB056E8743741BCE464A0983A060A53AAB7E4D 
{
	int32_t ___value__;
};
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	float ___m_Distance;
	float ___m_Fraction;
	int32_t ___m_Collider;
};
struct RenderDataDirtyTypes_tEF0AE4EB7DF790A711AA45103050432B8FEDB907 
{
	int32_t ___value__;
};
struct RenderDataFlags_t5FE970B94CB31B4691C29B856A2A5848BDEACB66 
{
	int32_t ___value__;
};
struct RenderHints_t4032FC4AB3FD946FD2A484865B8861730D9035E7 
{
	int32_t ___value__;
};
struct Repeat_tC0330B75B12D24B063BA5151AF3BB73B85D8B840 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	bool ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705 
{
	int32_t ___value__;
};
struct StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69 
{
	int32_t ___value__;
};
struct TextAnchor_tA46E794186AC1CD0F22888652F589EBF7DFDF830 
{
	int32_t ___value__;
};
struct TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset;
	float ___blurRadius;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct TimeUnit_t56A79CDB672E98A4EE28002BD23B6D5E0BAA2649 
{
	int32_t ___value__;
};
struct TouchScreenKeyboardType_t3F5A06315B263282460BE67DE01393B6FB3780C1 
{
	int32_t ___value__;
};
struct VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6 
{
	int32_t ___value__;
};
struct VertexAttributeFormat_tD714C51E671502B116ACE5E23F042BA80649D32F 
{
	int32_t ___value__;
};
struct VisitExceptionKind_t7E6C3EABD5439F2B4CA31C246B2AA4AC16A77DF5 
{
	int32_t ___value__;
};
struct VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75 
{
	int32_t ___value__;
};
struct VisualElementFlags_t4D1066E11400967A1A2DA7331391ACDC4AA14409 
{
	int32_t ___value__;
};
struct Unit_t21DCD5C095F7DC1A0B9A47CAF8CAD3E7776CD3DB 
{
	int32_t ___value__;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct StretchMode_t717095B19974BD53EBBF6214745B728086EC9007 
{
	int32_t ___value__;
};
struct EventPropagation_t024AF56F7A787C03AA21B065B624553EF52E7B83 
{
	int32_t ___value__;
};
struct LifeCycleStatus_tEE500629F5431B574B8047EB70864747D348D38C 
{
	int32_t ___value__;
};
struct Unit_t7A9C3ABB0618BEBFDC1813D07080CE0C145448ED 
{
	int32_t ___value__;
};
struct RenderTargetMode_tAE75E29BB61A64BDE7646D5CBD353B64BCFA9F3A 
{
	int32_t ___value__;
};
struct NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5FD897FA0026322EBCFF933FD6C54E43C38A0AC1 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC 
{
	ByReference_1_t60E9D5BC0CC636A7BBC9119CB88BD64476B03EA4 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A ____pointer;
	int32_t ____length;
};
struct Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F 
{
	int32_t ___m_Keyword;
	List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* ___m_Value;
};
struct StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C 
{
	int32_t ___m_Keyword;
	List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268* ___m_Value;
};
struct StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 
{
	int32_t ___m_Keyword;
	List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* ___m_Value;
};
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	int32_t ___page;
	uint16_t ___pageLine;
	uint8_t ___bitIndex;
	uint8_t ___ownedState;
};
struct BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F 
{
	int32_t ___x;
	int32_t ___y;
};
struct Columns_t487EAF3B634F6D919D58F1927099A8883964831B  : public RuntimeObject
{
	RuntimeObject* ___m_Columns;
	List_1_tD1A1A4E269D550491A33C35C61E549EBA163D6F4* ___m_DisplayColumns;
	List_1_tD1A1A4E269D550491A33C35C61E549EBA163D6F4* ___m_VisibleColumns;
	bool ___m_VisibleColumnsDirty;
	int32_t ___m_StretchMode;
	bool ___m_Reorderable;
	bool ___m_Resizable;
	bool ___m_ResizePreview;
	String_t* ___m_PrimaryColumnName;
	Action_1_tC7DA3F3177E0ABC8E0B6FB2D4D2F72C303E1A04F* ___changed;
	Action_2_t5F23CC3B7A8A73A4EA03ECC4C0C36453937843DB* ___columnAdded;
	Action_1_t1EA00726877CBFFB94EE52CCD9672A96472984B8* ___columnRemoved;
	Action_2_t240BAEB1DC7A6558995FFCB7E0186F2ABB2CE346* ___columnChanged;
	Action_1_t1EA00726877CBFFB94EE52CCD9672A96472984B8* ___columnResized;
	Action_3_tD4FEFC6A317A295868086BEB12578A006464E2D5* ___columnReordered;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 
{
	int32_t ___m_Mode;
};
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C  : public RuntimeObject
{
	int32_t ___U3CeventCategoriesU3Ek__BackingField;
	int64_t ___U3CtimestampU3Ek__BackingField;
	uint64_t ___U3CeventIdU3Ek__BackingField;
	uint64_t ___U3CtriggerEventIdU3Ek__BackingField;
	int32_t ___U3CpropagationU3Ek__BackingField;
	int32_t ___U3ClifeCycleStatusU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CelementTargetU3Ek__BackingField;
	int32_t ___U3CpropagationPhaseU3Ek__BackingField;
	RuntimeObject* ___m_CurrentTarget;
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ImguiEvent;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CoriginalMousePositionU3Ek__BackingField;
};
struct LayoutDataStore_tE59A593CD73517DDC7C117B293E7C2C6F17DC364 
{
	int32_t ___m_Allocator;
	Data_t43E3238277579E631EA4E8016E61966D79F5B62E* ___m_Data;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF 
{
	int32_t ___m_Kind;
	String_t* ___m_Name;
	int32_t ___m_Index;
	RuntimeObject* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke
{
	int32_t ___m_Kind;
	char* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com
{
	int32_t ___m_Kind;
	Il2CppChar* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B 
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_marshaled_pinvoke
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_marshaled_com
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshaled_pinvoke
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshaled_com
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 
{
	float ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___m_Value;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshaled_pinvoke
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke ___m_Value;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshaled_com
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com ___m_Value;
};
struct StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF 
{
	int32_t ___U3CidU3Ek__BackingField;
	String_t* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_pinvoke
{
	int32_t ___U3CidU3Ek__BackingField;
	char* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_com
{
	int32_t ___U3CidU3Ek__BackingField;
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC 
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshaled_pinvoke
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshaled_com
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 
{
	int32_t ___m_Keyword;
	TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 ___m_Value;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067  : public Exception_t
{
};
struct VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE 
{
	int32_t ___U3CIgnoreExceptionsU3Ek__BackingField;
};
struct Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75  : public MulticastDelegate_t
{
};
struct Action_2_tA1EAD43A5C76FF3E77D1705EC83B9AB7B1BE7D88  : public MulticastDelegate_t
{
};
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 
{
	int32_t ___keyword;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___offset;
};
struct BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 
{
	int32_t ___m_SizeType;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A  : public RuntimeObject
{
	String_t* ___m_Name;
	String_t* ___m_Title;
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___m_Icon;
	bool ___m_Visible;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Width;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_MinWidth;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_MaxWidth;
	float ___m_DesiredWidth;
	bool ___m_Stretchable;
	bool ___m_Sortable;
	bool ___m_Optional;
	bool ___m_Resizable;
	Func_1_tEA19435E526C20D577E34BADB14CA06F066636C2* ___m_MakeHeader;
	Action_1_t66B514BE877E216616DEDD40416127189FE16FA3* ___m_BindHeader;
	Action_1_t66B514BE877E216616DEDD40416127189FE16FA3* ___m_UnbindHeader;
	Action_1_t66B514BE877E216616DEDD40416127189FE16FA3* ___m_DestroyHeader;
	Func_1_tEA19435E526C20D577E34BADB14CA06F066636C2* ___m_MakeCell;
	Action_2_tA1EAD43A5C76FF3E77D1705EC83B9AB7B1BE7D88* ___m_BindCell;
	Action_2_tA1EAD43A5C76FF3E77D1705EC83B9AB7B1BE7D88* ___m_UnbindCellItem;
	Action_1_t66B514BE877E216616DEDD40416127189FE16FA3* ___U3CdestroyCellU3Ek__BackingField;
	Columns_t487EAF3B634F6D919D58F1927099A8883964831B* ___U3CcollectionU3Ek__BackingField;
	Action_2_t240BAEB1DC7A6558995FFCB7E0186F2ABB2CE346* ___changed;
	Action_1_t1EA00726877CBFFB94EE52CCD9672A96472984B8* ___resized;
};
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA 
{
	int32_t ___m_Manager;
	LayoutDataStore_tE59A593CD73517DDC7C117B293E7C2C6F17DC364 ___m_Nodes;
	LayoutDataStore_tE59A593CD73517DDC7C117B293E7C2C6F17DC364 ___m_Configs;
};
struct MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part3;
	PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty;
	int32_t ___flags;
	int32_t ___hierarchyDepth;
	int32_t ___dirtiedValues;
	uint32_t ___dirtyID;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstHeadCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastHeadCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstTailCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastTailCommand;
	bool ___localFlipsWinding;
	bool ___localTransformScaleZero;
	bool ___worldFlipsWinding;
	int32_t ___clipMethod;
	int32_t ___childrenStencilRef;
	int32_t ___childrenMaskDepth;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___headMesh;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___tailMesh;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID;
	float ___compositeOpacity;
	float ___backgroundAlpha;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures;
	bool ___pendingRepaint;
	bool ___pendingHierarchicalRepaint;
};
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty;
	int32_t ___flags;
	int32_t ___hierarchyDepth;
	int32_t ___dirtiedValues;
	uint32_t ___dirtyID;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstHeadCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastHeadCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstTailCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastTailCommand;
	int32_t ___localFlipsWinding;
	int32_t ___localTransformScaleZero;
	int32_t ___worldFlipsWinding;
	int32_t ___clipMethod;
	int32_t ___childrenStencilRef;
	int32_t ___childrenMaskDepth;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___headMesh;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___tailMesh;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID;
	float ___compositeOpacity;
	float ___backgroundAlpha;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures;
	int32_t ___pendingRepaint;
	int32_t ___pendingHierarchicalRepaint;
};
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty;
	int32_t ___flags;
	int32_t ___hierarchyDepth;
	int32_t ___dirtiedValues;
	uint32_t ___dirtyID;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstHeadCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastHeadCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstTailCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastTailCommand;
	int32_t ___localFlipsWinding;
	int32_t ___localTransformScaleZero;
	int32_t ___worldFlipsWinding;
	int32_t ___clipMethod;
	int32_t ___childrenStencilRef;
	int32_t ___childrenMaskDepth;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___headMesh;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___tailMesh;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID;
	float ___compositeOpacity;
	float ___backgroundAlpha;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures;
	int32_t ___pendingRepaint;
	int32_t ___pendingHierarchicalRepaint;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	bool ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 
{
	BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Value;
	int32_t ___m_Keyword;
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	bool ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E 
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___m_PropertyPath;
	String_t* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_pinvoke
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke ___m_PropertyPath;
	char* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_com
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com ___m_PropertyPath;
	Il2CppChar* ___m_Path;
};
struct LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE 
{
	LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA ___m_Access;
	LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 ___m_Handle;
};
struct MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211  : public MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC
{
	String_t* ___ClassName;
	String_t* ___MemberName;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Signature;
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446  : public RuntimeObject
{
	int32_t ___m_PathIndex;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CPathU3Ek__BackingField;
	RuntimeObject* ___U3CPropertyU3Ek__BackingField;
	bool ___U3CReadonlyVisitU3Ek__BackingField;
	int32_t ___U3CReturnCodeU3Ek__BackingField;
};
struct StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 
{
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 
{
	BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B 
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshaled_pinvoke
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshaled_com
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 
{
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshaled_pinvoke
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshaled_com
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct MissingMethodException_t3D861B41F6520C32A7994A884343802925703155  : public MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211
{
};
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField;
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField;
	String_t* ___m_Name;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList;
	Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35* ___m_PropertyBag;
	int32_t ___m_Flags;
	String_t* ___m_ViewDataKey;
	int32_t ___m_RenderHints;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding;
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 ___renderChainData;
	bool ___shouldCutRenderChain;
	UIRenderer_t92C2C36451BAD524541C4C548B02D0EAC798644E* ___uiRenderer;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClip;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClipMinusGroup;
	bool ___m_WorldClipIsInfinite;
	int32_t ___triggerPseudoMask;
	int32_t ___dependencyPseudoMask;
	int32_t ___m_PseudoStates;
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField;
	int32_t ___m_PickingMode;
	LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE ___m_LayoutNode;
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style;
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext;
	int32_t ___inheritedStylesHash;
	uint32_t ___controlid;
	int32_t ___imguiContainerDescendantCount;
	bool ___m_EnabledSelf;
	int32_t ___m_LanguageDirection;
	int32_t ___m_LocalLanguageDirection;
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField;
	int32_t ___m_SubRenderTargetMode;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_defaultMaterial;
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations;
	RuntimeObject* ___m_DataSource;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___m_DataSourcePath;
	List_1_t592DF2E59D6E244DA0041698383484A07C7E0480* ___m_Bindings;
	Type_t* ___U3CdataSourceTypeU3Ek__BackingField;
	int32_t ___m_TrickleDownHandleEventCategories;
	int32_t ___m_BubbleUpHandleEventCategories;
	int32_t ___m_BubbleUpEventCallbackCategories;
	int32_t ___m_TrickleDownEventCallbackCategories;
	int32_t ___m_EventInterestSelfCategories;
	int32_t ___m_CachedEventInterestParentCategories;
	uint32_t ___m_NextParentCachedVersion;
	uint32_t ___m_NextParentRequiredVersion;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CachedNextParentWithEventInterests;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField;
	bool ___U3CisRootVisualContainerU3Ek__BackingField;
	bool ___U3CcacheAsBitmapU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent;
	Action_1_t66B514BE877E216616DEDD40416127189FE16FA3* ___elementAdded;
	Action_1_t66B514BE877E216616DEDD40416127189FE16FA3* ___elementRemoved;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource;
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess;
	ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45* ___resolvedStyleAccess;
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList;
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData;
};
struct BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C  : public VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115
{
	RuntimeObject* ___U3CbindingU3Ek__BackingField;
	String_t* ___U3CbindingPathU3Ek__BackingField;
};
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding;
	int32_t ___m_ChildAlignment;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect;
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalMinSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalPreferredSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalFlexibleSize;
	List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___m_RectChildren;
};
struct MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D  : public VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115
{
	bool ___m_SortingEnabled;
	List_1_t75E66FBE18EAE33E2DBD8F2C48C54549332A997F* ___m_SortedColumns;
	SortColumnDescriptions_tDC3FDF948D96F26E0BCB2C971C6EDA1E02BAB1EA* ___m_SortDescriptions;
	List_1_t8E88137DBF3559DC2CF17853F82E9C24C134B291* ___m_OldSortedColumnStates;
	bool ___m_SortingUpdatesTemporarilyDisabled;
	ViewState_t5BBB8D6381ABFF63C3178453D4ACE18E7D54D4C0* ___m_ViewState;
	bool ___m_ApplyingViewState;
	bool ___m_DoLayoutScheduled;
	Dictionary_2_t1C6F670EE6B3EEEEFF2CBA243476B8AC9C173D11* ___U3CcolumnDataMapU3Ek__BackingField;
	ColumnLayout_tF0A72BFB169B3329F9720AF33516EBAFAB4400B4* ___U3CcolumnLayoutU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CcolumnContainerU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CresizeHandleContainerU3Ek__BackingField;
	Columns_t487EAF3B634F6D919D58F1927099A8883964831B* ___U3CcolumnsU3Ek__BackingField;
	Action_2_t28390B369564138BA256B9D0831BFEC2F9FF1006* ___columnResized;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___columnSortingChanged;
	Action_2_t723CF5545926725AE4B055BB8E304D27E617A846* ___contextMenuPopulateEvent;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___viewDataRestored;
};
struct MultiColumnHeaderColumn_t6F44266EE1B6EEB83465A7FE3BA6A6C7CBF8F9B4  : public VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_ContentContainer;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Content;
	MultiColumnHeaderColumnSortIndicator_tBC4661121B0BC69A811617BFB87C1D388A68EAF3* ___m_SortIndicatorContainer;
	RuntimeObject* ___m_ScheduledHeaderTemplateUpdate;
	Clickable_tED3E313565F64BDF5DA9D3FE0FEFFD0E17E53834* ___U3CclickableU3Ek__BackingField;
	ColumnMover_tF8B270BEC7C26ECD780F9EEAE6EC2A99BDC6986F* ___U3CmoverU3Ek__BackingField;
	Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* ___U3CcolumnU3Ek__BackingField;
};
struct TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0  : public BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C
{
	UITKTextHandle_t1FF3B4EC2367C05F42D61C660D6FE30DF91C06CE* ___U3CuitkTextHandleU3Ek__BackingField;
	String_t* ___m_Text;
	bool ___m_EnableRichText;
	bool ___m_EmojiFallbackSupport;
	bool ___m_ParseEscapeSequences;
	bool ___m_DisplayTooltipWhenElided;
	bool ___U3CisElidedU3Ek__BackingField;
	String_t* ___elidedText;
	bool ___m_WasElided;
	TextEditingManipulator_t9AC543C81F3778888F421C8D93003EBC8902EB29* ___U3CeditingManipulatorU3Ek__BackingField;
	bool ___m_Multiline;
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_TouchScreenKeyboard;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___onIsReadOnlyChanged;
	int32_t ___m_KeyboardType;
	bool ___m_HideMobileInput;
	bool ___m_IsReadOnly;
	int32_t ___m_MaxLength;
	String_t* ___m_PlaceholderText;
	bool ___U3CUnityEngine_UIElements_ITextEdition_isDelayedU3Ek__BackingField;
	Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___U3CUnityEngine_UIElements_ITextEdition_AcceptCharacterU3Ek__BackingField;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___U3CUnityEngine_UIElements_ITextEdition_UpdateScrollOffsetU3Ek__BackingField;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CUnityEngine_UIElements_ITextEdition_UpdateValueFromTextU3Ek__BackingField;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CUnityEngine_UIElements_ITextEdition_UpdateTextFromValueU3Ek__BackingField;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CUnityEngine_UIElements_ITextEdition_MoveFocusToCompositeRootU3Ek__BackingField;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3COnPlaceholderChangedU3Ek__BackingField;
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* ___U3CUnityEngine_UIElements_ITextEdition_GetDefaultValueTypeU3Ek__BackingField;
	String_t* ___m_RenderedText;
	String_t* ___m_OriginalText;
	Il2CppChar ___m_MaskChar;
	bool ___m_IsPassword;
	bool ___m_HidePlaceholderTextOnFocus;
	bool ___m_AutoCorrection;
	TextSelectingManipulator_t85DD873E0C5537C1F8468B6FE5E4C9995B193855* ___m_SelectingManipulator;
	bool ___m_IsSelectable;
	bool ___m_DoubleClickSelectsWord;
	bool ___m_TripleClickSelectsLine;
	bool ___m_SelectAllOnFocus;
	bool ___m_SelectAllOnMouseUp;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CursorColor;
	float ___m_CursorWidth;
};
struct Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70  : public TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0
{
};
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields
{
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* ___defaultComparer;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer;
};
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8_StaticFields
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___s_emptyArray;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324_StaticFields
{
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___s_emptyArray;
};
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray;
};
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_StaticFields
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___s_emptyArray;
};
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95_StaticFields
{
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___s_emptyArray;
};
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4_StaticFields
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct TypeTraits_1_t14492BDEFA66B94D1A35E842BFAB7898518438E4_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tC1A46C3724D2DAD269AF6BD39D20DE59150FDF28_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticFields
{
	int32_t ___SystemMaxDBCSCharSize;
	int32_t ___SystemDefaultCharSize;
	Dictionary_2_t4CE53C8BCD6558009650AFE413B37A773593BC7B* ___MarshalerInstanceCache;
	RuntimeObject* ___MarshalerInstanceCacheLock;
};
struct Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticFields
{
	double ___doubleRoundLimit;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___roundPower10Double;
};
struct MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6_StaticFields
{
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___k_BoundColumnVePropertyName;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___bindableElementPropertyName;
	String_t* ___baseUssClassName;
	String_t* ___k_HeaderContainerViewDataKey;
	String_t* ___headerContainerUssClassName;
	String_t* ___rowContainerUssClassName;
	String_t* ___cellUssClassName;
	String_t* ___cellLabelUssClassName;
	String_t* ___k_HeaderViewDataKey;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_StaticFields
{
	int64_t ___s_LastTypeId;
	uint64_t ___s_NextEventId;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	uint32_t ___s_NextId;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey;
	String_t* ___disabledUssClassName;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_InfiniteRect;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_runtimeMaterial;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___viewDataKeyProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___userDataProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___usageHintsProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___layoutProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___contentRectProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___worldBoundProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___localBoundProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___worldTransformProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___pickingModeProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___nameProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___enabledInHierarchyProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___enabledSelfProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___visibleProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___panelProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___visualTreeAssetSourceProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___childCountProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___styleSheetsProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___tooltipProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___dataSourceProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___dataSourcePathProperty;
	uint32_t ___s_NextParentVersion;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList;
	CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* ___s_CustomStyleAccess;
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey;
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData;
};
struct MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D_StaticFields
{
	String_t* ___ussClassName;
	String_t* ___columnContainerUssClassName;
	String_t* ___handleContainerUssClassName;
	String_t* ___reorderableUssClassName;
};
struct MultiColumnHeaderColumn_t6F44266EE1B6EEB83465A7FE3BA6A6C7CBF8F9B4_StaticFields
{
	String_t* ___ussClassName;
	String_t* ___sortableUssClassName;
	String_t* ___sortedAscendingUssClassName;
	String_t* ___sortedDescendingUssClassName;
	String_t* ___movingUssClassName;
	String_t* ___contentContainerUssClassName;
	String_t* ___contentUssClassName;
	String_t* ___defaultContentUssClassName;
	String_t* ___hasIconUssClassName;
	String_t* ___hasTitleUssClassName;
	String_t* ___titleUssClassName;
	String_t* ___iconElementName;
	String_t* ___titleElementName;
	String_t* ___s_BoundVEPropertyName;
	String_t* ___s_BindingCallbackVEPropertyName;
	String_t* ___s_UnbindingCallbackVEPropertyName;
	String_t* ___s_DestroyCallbackVEPropertyName;
};
struct TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0_StaticFields
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___textProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___enableRichTextProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___emojiFallbackSupportProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___parseEscapeSequencesProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___isElidedProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___displayTooltipWhenElidedProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___valueProperty;
	String_t* ___ussClassName;
	String_t* ___selectableUssClassName;
	String_t* ___k_EllipsisText;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___autoCorrectionProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___hideMobileInputProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___keyboardTypeProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___isReadOnlyProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___isPasswordProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___maxLengthProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___maskCharProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___isSelectableProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___cursorIndexProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___selectIndexProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___doubleClickSelectsWordProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___tripleClickSelectsLineProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___cursorPositionProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___selectionColorProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___cursorColorProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___selectAllOnFocusProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___selectAllOnMouseUpProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___selectionProperty;
};
struct Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70_StaticFields
{
	String_t* ___ussClassName;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA m_Items[1];

	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		m_Items[index] = value;
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m6C657E70C3EDB91430549159C00923CBB5E589D3_gshared (RuntimeObject** ___0_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LazyInitializer_EnsureInitializedCore_TisRuntimeObject_mF7F282E24251C4B201CE4AC5C5F0BB8E450B102E_gshared (RuntimeObject** ___0_target, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___1_valueFactory, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5BFF79141064122141ED34283347A634B9DF577D_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3E381D71F4CF4AB91BFFD85724D3F55A84E706E5_gshared (uint8_t* ___0_searchSpace, uint8_t ___1_value, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2F71ADBBAA6FA83C123CBA62E879F1D780F27D48_gshared (Il2CppChar* ___0_searchSpace, Il2CppChar ___1_value, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* MemoryMarshal_GetReference_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFC9D303E66CF269E3E7B9C5E375C066446C3022C_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2EAE0D843D45D653200D77CD60C0034A404551C2_gshared (int32_t* ___0_searchSpace, int32_t ___1_value, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MemoryExtensions_IsTypeComparableAsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m64FAB0403DCD80C51788DF3CD7390E44F6228CA7_gshared_inline (uint64_t* ___0_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m15554853B4E39558ED8B1049CF44428A9F9F0774_gshared (Il2CppChar* ___0_first, Il2CppChar* ___1_second, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* MemoryMarshal_GetReference_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m658F27CD8382523E3AA10A147039FD111CB9CBF6_gshared (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m339FDCE1FC17C2B97AEA44937294504AF706F7FF_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* MemoryMarshal_GetReference_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m189525FD0C59640C6106337AFC1D11B96258C796_gshared (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_GetAllocArrayFromChannel_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB9160ED046579DD87EF4BE48FB46C293273919A2_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* Mesh_GetAllocArrayFromChannel_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m0D5663B28C29E5FBEB421D61D57B2DF1D471C2F4_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetListForChannel_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC051E1416B4FAD036D26589F95566F03BFFEC4D0_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_buffer, int32_t ___1_capacity, int32_t ___2_channel, int32_t ___3_dim, int32_t ___4_channelType, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_EnsureListElemCount_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCC69B853EEBECBAF3DCBFD8A0B26691430128057_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_list, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* NoAllocHelpers_ExtractArrayFromList_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3240EFAF30E1B4FED168A81B9F7A60401304D6C1_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetListForChannel_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m75054A04FEDF611053F08A3AB54C0EFCEC104971_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_buffer, int32_t ___1_capacity, int32_t ___2_channel, int32_t ___3_dim, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NoAllocHelpers_ExtractArrayFromList_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA4886D846FD5578DC9261B5CB7BE47D6FD70498D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB85A915B5401A23E2802BF2945052148967220E2_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m201A65A21E6A7CC7D1A0C35A7D5CEBE2DD8A49B2_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_values, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* NoAllocHelpers_ExtractArrayFromList_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m55444175C4EC5B38827E5C10E65A408D81421E55_gshared_inline (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mDE7B561CE172B3EB697DE30C3A79C67F70018E6F_gshared (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC5F005A2C8491C9C9E68663E4A501DC3A7E9DDDC_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___3_values, int32_t ___4_start, int32_t ___5_length, int32_t ___6_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MouseEventBase_1_GetPooled_mF2E1FA826FA805E436D829345BBC0A65ADB0BF0B_gshared (RuntimeObject* ___0_triggerEvent, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_mousePosition, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m88484A213EB00FF7254FE3DB935BFB06DD3F5753_gshared_inline (Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75* __this, RuntimeObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiColumnController_DefaultBindCellItem_TisRuntimeObject_mE043596FF4C1439ECEEDFA1307911F3AB0902343_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* ___1_column, RuntimeObject* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiColumnController_BindCellItem_TisRuntimeObject_mB0270A9F745F2AE0DE677DFA715D859D4C285D8B_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_rowIndex, Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* ___2_column, RuntimeObject* ___3_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_mFCA72E41A56CB5CF71EB01A4A4D66B431F8932DA_gshared (NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B* __this, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m546F4FC4F00E93F0730BE9C5DC7648F384B6FB75_gshared (NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0* __this, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_mD4A144FA99A1B1DFBC1DA2BECE2C44266FF2741C_gshared (NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F* __this, NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m9BFC93FD998BD41E6249322EDA95916FC779B011_gshared (NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F* __this, NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29_gshared (NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8* __this, NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_mA3430F95264C061E101EC0E3C72042011833A9BC_gshared (NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882* __this, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m665194100AB694EC232EEFDAC3C87C7647CEBE28_gshared (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A* __this, NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m59DAA173E4BF1C15C5C42D00688F3B86EA28048D_gshared (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A* __this, NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___0_slice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m05A3D6C62D3EF51EBE50158889E9C6B1D214588C_gshared (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2* __this, NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_mC87483602F891B11DD01B19DAF427E8D61C385C6_gshared (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2* __this, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___0_slice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m313B1A91AB4ADBA821C074187D67957126F93DFF_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m4C0C75BC6633B56253FD4A7CD7F38A34E73C6253_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_slice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m60F25657F5AE104ED7F2F956B948FE7C704EDB5D_gshared (NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0* __this, NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m7A0D0D8A1439A72F1514624217FAB4B88C113BFD_gshared (NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9* __this, NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m6D4F92DC79D33023D68B3408D6464723C8AA83A9_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m4349F707AFD29359D197EE27DD358DF37C12E2F8_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject** UnsafeUtility_As_TisRuntimeObject_TisRuntimeObject_m427D45188F037E6A44060E2DC34BCD470560D8C9_gshared_inline (RuntimeObject** ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeUtility_As_TisRuntimeObject_m0FFD91677D5F942D9FA7112820E0596B59865532_gshared (RuntimeObject* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ReadOnlySpan_1_ToArray_m52B9C5497E426BA0C6D18FE069D501F7F6B0570F_gshared (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m8A8468ECDACBD86AE7FF53413628E0446F662397_gshared_inline (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mE73EFFF82CD84954143CA69B13EA7C22DBCDFE82_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m97646F93DD10BF861C66A0E05E73D1BA94B76143_gshared_inline (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mDC5AD8BD13FE50E98B67B956C048367F4E8C6F94_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, bool ___2_worldPositionStays, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E_gshared (int32_t* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441_gshared (RuntimeObject* ___0_visitor, int32_t* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBag_TryGetPropertyBagForValue_TisRuntimeObject_mD4CD5E0ECCA048DFCC4C4C71A78ED65C87C34C01_gshared (RuntimeObject** ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyContainer_Accept_TisRuntimeObject_m3580153F4048DF075DB593BDB3C4A63FA439FC39_gshared (RuntimeObject* ___0_visitor, RuntimeObject** ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B (int32_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutGroup_SetDirty_m32F20D8BB5C4B4DF350AF5F35A5917660FF9CE60 (LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F (float* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mA4E81D6FCE503DBD502BA499708344410F60DA4E_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
inline RuntimeObject* LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m6C657E70C3EDB91430549159C00923CBB5E589D3 (RuntimeObject** ___0_target, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject**, const RuntimeMethod*))LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m6C657E70C3EDB91430549159C00923CBB5E589D3_gshared)(___0_target, method);
}
inline RuntimeObject* LazyInitializer_EnsureInitializedCore_TisRuntimeObject_mF7F282E24251C4B201CE4AC5C5F0BB8E450B102E (RuntimeObject** ___0_target, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___1_valueFactory, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject**, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, const RuntimeMethod*))LazyInitializer_EnsureInitializedCore_TisRuntimeObject_mF7F282E24251C4B201CE4AC5C5F0BB8E450B102E_gshared)(___0_target, ___1_valueFactory, method);
}
inline RuntimeObject* Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingMemberException__ctor_m6292C676754200C455A390D36BFEBD8F8775628C (MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegateInternal_m4E9C4E82582417A3F843EBC929FA464EFF6B4EB7 (Delegate_t* ___0_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_mA1B296E1739D0481FACE3D9B43D94FF86091DD4E (RuntimeObject* ___0_structure, intptr_t ___1_ptr, bool ___2_fDeleteOld, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, RuntimeObject* ___2_p2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*))Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_gshared_inline)(__this, ___0_array, method);
}
inline void Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_gshared_inline)(__this, ___0_array, method);
}
inline void Span_1__ctor_m5BFF79141064122141ED34283347A634B9DF577D_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m5BFF79141064122141ED34283347A634B9DF577D_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_gshared)(___0_span, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_mB37566B16F2F4C7D14E1CD6EA781AC67110E8C4C (uint8_t* ___0_searchSpace, uint8_t ___1_value, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_m1EBE4594F5288D2297A3A8E8E4F365BE4BD211DC (Il2CppChar* ___0_searchSpace, Il2CppChar ___1_value, int32_t ___2_length, const RuntimeMethod* method) ;
inline int32_t SpanHelpers_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3E381D71F4CF4AB91BFFD85724D3F55A84E706E5 (uint8_t* ___0_searchSpace, uint8_t ___1_value, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint8_t*, uint8_t, int32_t, const RuntimeMethod*))SpanHelpers_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3E381D71F4CF4AB91BFFD85724D3F55A84E706E5_gshared)(___0_searchSpace, ___1_value, ___2_length, method);
}
inline Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_span, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A_gshared)(___0_span, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline)(__this, method);
}
inline int32_t SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2F71ADBBAA6FA83C123CBA62E879F1D780F27D48 (Il2CppChar* ___0_searchSpace, Il2CppChar ___1_value, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Il2CppChar*, Il2CppChar, int32_t, const RuntimeMethod*))SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2F71ADBBAA6FA83C123CBA62E879F1D780F27D48_gshared)(___0_searchSpace, ___1_value, ___2_length, method);
}
inline int32_t* MemoryMarshal_GetReference_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFC9D303E66CF269E3E7B9C5E375C066446C3022C (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_span, const RuntimeMethod* method)
{
	return ((  int32_t* (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316, const RuntimeMethod*))MemoryMarshal_GetReference_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFC9D303E66CF269E3E7B9C5E375C066446C3022C_gshared)(___0_span, method);
}
inline int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, const RuntimeMethod*))Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_gshared_inline)(__this, method);
}
inline int32_t SpanHelpers_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2EAE0D843D45D653200D77CD60C0034A404551C2 (int32_t* ___0_searchSpace, int32_t ___1_value, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t*, int32_t, int32_t, const RuntimeMethod*))SpanHelpers_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2EAE0D843D45D653200D77CD60C0034A404551C2_gshared)(___0_searchSpace, ___1_value, ___2_length, method);
}
inline bool MemoryExtensions_IsTypeComparableAsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m64FAB0403DCD80C51788DF3CD7390E44F6228CA7_inline (uint64_t* ___0_size, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t*, const RuntimeMethod*))MemoryExtensions_IsTypeComparableAsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m64FAB0403DCD80C51788DF3CD7390E44F6228CA7_gshared_inline)(___0_size, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_m69781B64721462BCA1ED200A1BB853E9B7026F2E (uint8_t* ___0_first, uint8_t* ___1_second, uint64_t ___2_length, const RuntimeMethod* method) ;
inline bool SpanHelpers_SequenceEqual_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m15554853B4E39558ED8B1049CF44428A9F9F0774 (Il2CppChar* ___0_first, Il2CppChar* ___1_second, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppChar*, Il2CppChar*, int32_t, const RuntimeMethod*))SpanHelpers_SequenceEqual_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m15554853B4E39558ED8B1049CF44428A9F9F0774_gshared)(___0_first, ___1_second, ___2_length, method);
}
inline Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527 (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, const RuntimeMethod*))MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527_gshared)(___0_span, method);
}
inline int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, const RuntimeMethod*))Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline)(__this, method);
}
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline uint16_t* MemoryMarshal_GetReference_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m658F27CD8382523E3AA10A147039FD111CB9CBF6 (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ___0_span, const RuntimeMethod* method)
{
	return ((  uint16_t* (*) (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F, const RuntimeMethod*))MemoryMarshal_GetReference_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m658F27CD8382523E3AA10A147039FD111CB9CBF6_gshared)(___0_span, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m339FDCE1FC17C2B97AEA44937294504AF706F7FF_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m339FDCE1FC17C2B97AEA44937294504AF706F7FF_gshared_inline)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, uint8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline uint32_t* MemoryMarshal_GetReference_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m189525FD0C59640C6106337AFC1D11B96258C796 (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ___0_span, const RuntimeMethod* method)
{
	return ((  uint32_t* (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4, const RuntimeMethod*))MemoryMarshal_GetReference_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m189525FD0C59640C6106337AFC1D11B96258C796_gshared)(___0_span, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4*, uint32_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_DefaultDimensionForChannel_mCE2BFE4516CB37EA677E8671997D986FF654C130 (int32_t ___0_channel, const RuntimeMethod* method) ;
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_GetAllocArrayFromChannel_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB9160ED046579DD87EF4BE48FB46C293273919A2 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t, int32_t, int32_t, const RuntimeMethod*))Mesh_GetAllocArrayFromChannel_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB9160ED046579DD87EF4BE48FB46C293273919A2_gshared)(__this, ___0_channel, ___1_format, ___2_dim, method);
}
inline Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* Mesh_GetAllocArrayFromChannel_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m0D5663B28C29E5FBEB421D61D57B2DF1D471C2F4 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, const RuntimeMethod* method)
{
	return ((  Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t, int32_t, int32_t, const RuntimeMethod*))Mesh_GetAllocArrayFromChannel_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m0D5663B28C29E5FBEB421D61D57B2DF1D471C2F4_gshared)(__this, ___0_channel, ___1_format, ___2_dim, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_get_canAccess_m97F255BBB8C009D643920E2D095B6DB8868E3572 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_HasVertexAttribute_m6FA9574E4DEE19158535F93281791AD6FB550595 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_attr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Mesh_GetAllocArrayFromChannelImpl_m30C7972CA5A67CD01EBBDDE2FD8F48CE2F8F86F6 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_PrintErrorCantAccessChannel_mD80AC1870BC51714BE0C97B15D3E3D4EC42AC85E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_ch, const RuntimeMethod* method) ;
inline void Mesh_GetListForChannel_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC051E1416B4FAD036D26589F95566F03BFFEC4D0 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_buffer, int32_t ___1_capacity, int32_t ___2_channel, int32_t ___3_dim, int32_t ___4_channelType, const RuntimeMethod* method)
{
	((  void (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Mesh_GetListForChannel_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC051E1416B4FAD036D26589F95566F03BFFEC4D0_gshared)(__this, ___0_buffer, ___1_capacity, ___2_channel, ___3_dim, ___4_channelType, method);
}
inline void List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, const RuntimeMethod*))List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_gshared_inline)(__this, method);
}
inline void NoAllocHelpers_EnsureListElemCount_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCC69B853EEBECBAF3DCBFD8A0B26691430128057 (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_list, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, int32_t, const RuntimeMethod*))NoAllocHelpers_EnsureListElemCount_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCC69B853EEBECBAF3DCBFD8A0B26691430128057_gshared)(___0_list, ___1_count, method);
}
inline Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* NoAllocHelpers_ExtractArrayFromList_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3240EFAF30E1B4FED168A81B9F7A60401304D6C1_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_list, const RuntimeMethod* method)
{
	return ((  Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, const RuntimeMethod*))NoAllocHelpers_ExtractArrayFromList_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3240EFAF30E1B4FED168A81B9F7A60401304D6C1_gshared_inline)(___0_list, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetArrayFromChannelImpl_mBCA166B62E25425D987638F2B4876613D113E66E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, RuntimeArray* ___3_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_GetUVChannel_m52936A342F9C96EB7F0214A2F310018E1A25A689 (int32_t ___0_uvIndex, const RuntimeMethod* method) ;
inline void Mesh_GetListForChannel_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m75054A04FEDF611053F08A3AB54C0EFCEC104971 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_buffer, int32_t ___1_capacity, int32_t ___2_channel, int32_t ___3_dim, const RuntimeMethod* method)
{
	((  void (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, int32_t, int32_t, int32_t, const RuntimeMethod*))Mesh_GetListForChannel_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m75054A04FEDF611053F08A3AB54C0EFCEC104971_gshared)(__this, ___0_buffer, ___1_capacity, ___2_channel, ___3_dim, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_m4EC7245A2215693CE163E3F6ECFB105D742087DF (RuntimeArray* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetSizedArrayForChannel_mBF8A0B7A6E58552C4142CD22FF31E7A0E125EC93 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, RuntimeArray* ___3_values, int32_t ___4_valuesArrayLength, int32_t ___5_valuesStart, int32_t ___6_valuesCount, int32_t ___7_flags, const RuntimeMethod* method) ;
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NoAllocHelpers_ExtractArrayFromList_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA4886D846FD5578DC9261B5CB7BE47D6FD70498D_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_list, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))NoAllocHelpers_ExtractArrayFromList_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA4886D846FD5578DC9261B5CB7BE47D6FD70498D_gshared_inline)(___0_list, method);
}
inline int32_t NoAllocHelpers_SafeLength_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB85A915B5401A23E2802BF2945052148967220E2 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_values, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))NoAllocHelpers_SafeLength_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB85A915B5401A23E2802BF2945052148967220E2_gshared)(___0_values, method);
}
inline int32_t NoAllocHelpers_SafeLength_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m201A65A21E6A7CC7D1A0C35A7D5CEBE2DD8A49B2 (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_values, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, const RuntimeMethod*))NoAllocHelpers_SafeLength_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m201A65A21E6A7CC7D1A0C35A7D5CEBE2DD8A49B2_gshared)(___0_values, method);
}
inline Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* NoAllocHelpers_ExtractArrayFromList_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m55444175C4EC5B38827E5C10E65A408D81421E55_inline (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___0_list, const RuntimeMethod* method)
{
	return ((  Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* (*) (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8*, const RuntimeMethod*))NoAllocHelpers_ExtractArrayFromList_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m55444175C4EC5B38827E5C10E65A408D81421E55_gshared_inline)(___0_list, method);
}
inline int32_t NoAllocHelpers_SafeLength_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mDE7B561CE172B3EB697DE30C3A79C67F70018E6F (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___0_values, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8*, const RuntimeMethod*))NoAllocHelpers_SafeLength_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mDE7B561CE172B3EB697DE30C3A79C67F70018E6F_gshared)(___0_values, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
inline void Mesh_SetListForChannel_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC5F005A2C8491C9C9E68663E4A501DC3A7E9DDDC (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___3_values, int32_t ___4_start, int32_t ___5_length, int32_t ___6_flags, const RuntimeMethod* method)
{
	((  void (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t, int32_t, int32_t, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, int32_t, int32_t, int32_t, const RuntimeMethod*))Mesh_SetListForChannel_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC5F005A2C8491C9C9E68663E4A501DC3A7E9DDDC_gshared)(__this, ___0_channel, ___1_format, ___2_dim, ___3_values, ___4_start, ___5_length, ___6_flags, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4 (Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677* __this, const RuntimeMethod* method) ;
inline RuntimeObject* MouseEventBase_1_GetPooled_mF2E1FA826FA805E436D829345BBC0A65ADB0BF0B (RuntimeObject* ___0_triggerEvent, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_mousePosition, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))MouseEventBase_1_GetPooled_mF2E1FA826FA805E436D829345BBC0A65ADB0BF0B_gshared)(___0_triggerEvent, ___1_mousePosition, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* VisualElementListPool_Get_m99F3D55FC85A740A48A062146D40D59F50107CC2 (int32_t ___0_initialCapacity, const RuntimeMethod* method) ;
inline void List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_inline (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_inline (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092 (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* (*) (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementListPool_Release_mAF4ED38CC4F9A6E58B06F4B0BD13611F7DECBCFA (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___0_elements, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_tA1EAD43A5C76FF3E77D1705EC83B9AB7B1BE7D88* Column_get_bindCell_m87B54CF94A95D41669E1B1E9F845C3E53B37C847_inline (Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* __this, const RuntimeMethod* method) ;
inline void Action_2_Invoke_mF5036A6D1FF31DA2E4CB571F6A0F904796417719_inline (Action_2_tA1EAD43A5C76FF3E77D1705EC83B9AB7B1BE7D88* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tA1EAD43A5C76FF3E77D1705EC83B9AB7B1BE7D88*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, const RuntimeMethod*))Action_2_Invoke_m88484A213EB00FF7254FE3DB935BFB06DD3F5753_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline void MultiColumnController_DefaultBindCellItem_TisRuntimeObject_mE043596FF4C1439ECEEDFA1307911F3AB0902343 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* ___1_column, RuntimeObject* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A*, RuntimeObject*, const RuntimeMethod*))MultiColumnController_DefaultBindCellItem_TisRuntimeObject_mE043596FF4C1439ECEEDFA1307911F3AB0902343_gshared)(___0_ve, ___1_column, ___2_item, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Columns_t487EAF3B634F6D919D58F1927099A8883964831B* MultiColumnCollectionHeader_get_columns_mCD478DC5065BA9B43AD13D998169055EAF1C3655_inline (MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Columns_get_visibleList_m4E86EF55B73DA013C449A7C1D9777002AF1496AC (Columns_t487EAF3B634F6D919D58F1927099A8883964831B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t1C6F670EE6B3EEEEFF2CBA243476B8AC9C173D11* MultiColumnCollectionHeader_get_columnDataMap_mA525250831644003B806C2732E14BDA37BC1A862_inline (MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D* __this, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_mA48C3C80A6FB19382E0268E36BA1D3ACFBDF700C (Dictionary_2_t1C6F670EE6B3EEEEFF2CBA243476B8AC9C173D11* __this, Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* ___0_key, ColumnData_t0AB07CB43923527FF3700146C0F98D09B673492A** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1C6F670EE6B3EEEEFF2CBA243476B8AC9C173D11*, Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A*, ColumnData_t0AB07CB43923527FF3700146C0F98D09B673492A**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_GetProperty_m55B38972BE5AC52737BE671560381BDC2C8EAAD2 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___0_key, const RuntimeMethod* method) ;
inline void MultiColumnController_BindCellItem_TisRuntimeObject_mB0270A9F745F2AE0DE677DFA715D859D4C285D8B (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_rowIndex, Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* ___2_column, RuntimeObject* ___3_item, const RuntimeMethod* method)
{
	((  void (*) (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A*, RuntimeObject*, const RuntimeMethod*))MultiColumnController_BindCellItem_TisRuntimeObject_mB0270A9F745F2AE0DE677DFA715D859D4C285D8B_gshared)(___0_ve, ___1_rowIndex, ___2_column, ___3_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MultiColumnHeaderColumn_t6F44266EE1B6EEB83465A7FE3BA6A6C7CBF8F9B4* ColumnData_get_control_m2104649E1052F0506708BD93DC9DDAE2CA34B700_inline (ColumnData_t0AB07CB43923527FF3700146C0F98D09B673492A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_resolvedStyle_m3885B7534A94E0BCE024A9621465A0F273DA0AEB (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019 (float ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_SetProperty_m2EB182A4E57AD33CACC3DC0209DCDB5D8773F7E6 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
inline void NativeSlice_1__ctor_mFCA72E41A56CB5CF71EB01A4A4D66B431F8932DA (NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B* __this, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B*, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_mFCA72E41A56CB5CF71EB01A4A4D66B431F8932DA_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m546F4FC4F00E93F0730BE9C5DC7648F384B6FB75 (NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0* __this, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0*, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m546F4FC4F00E93F0730BE9C5DC7648F384B6FB75_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_mD4A144FA99A1B1DFBC1DA2BECE2C44266FF2741C (NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F* __this, NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F*, NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_mD4A144FA99A1B1DFBC1DA2BECE2C44266FF2741C_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m9BFC93FD998BD41E6249322EDA95916FC779B011 (NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F* __this, NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F*, NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m9BFC93FD998BD41E6249322EDA95916FC779B011_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29 (NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8* __this, NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8*, NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_mA3430F95264C061E101EC0E3C72042011833A9BC (NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882* __this, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882*, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_mA3430F95264C061E101EC0E3C72042011833A9BC_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m665194100AB694EC232EEFDAC3C87C7647CEBE28 (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A* __this, NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A*, NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m665194100AB694EC232EEFDAC3C87C7647CEBE28_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m59DAA173E4BF1C15C5C42D00688F3B86EA28048D (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A* __this, NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___0_slice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A*, NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m59DAA173E4BF1C15C5C42D00688F3B86EA28048D_gshared)(__this, ___0_slice, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m05A3D6C62D3EF51EBE50158889E9C6B1D214588C (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2* __this, NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2*, NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m05A3D6C62D3EF51EBE50158889E9C6B1D214588C_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_mC87483602F891B11DD01B19DAF427E8D61C385C6 (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2* __this, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___0_slice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2*, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_mC87483602F891B11DD01B19DAF427E8D61C385C6_gshared)(__this, ___0_slice, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m313B1A91AB4ADBA821C074187D67957126F93DFF (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m313B1A91AB4ADBA821C074187D67957126F93DFF_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m4C0C75BC6633B56253FD4A7CD7F38A34E73C6253 (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_slice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m4C0C75BC6633B56253FD4A7CD7F38A34E73C6253_gshared)(__this, ___0_slice, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m60F25657F5AE104ED7F2F956B948FE7C704EDB5D (NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0* __this, NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0*, NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m60F25657F5AE104ED7F2F956B948FE7C704EDB5D_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m7A0D0D8A1439A72F1514624217FAB4B88C113BFD (NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9* __this, NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9*, NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m7A0D0D8A1439A72F1514624217FAB4B88C113BFD_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
inline int32_t List_1_get_Capacity_m6D4F92DC79D33023D68B3408D6464723C8AA83A9 (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, const RuntimeMethod*))List_1_get_Capacity_m6D4F92DC79D33023D68B3408D6464723C8AA83A9_gshared)(__this, method);
}
inline void List_1_set_Capacity_m4349F707AFD29359D197EE27DD358DF37C12E2F8 (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m4349F707AFD29359D197EE27DD358DF37C12E2F8_gshared)(__this, ___0_value, method);
}
inline int32_t List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, const RuntimeMethod*))List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_gshared_inline)(__this, method);
}
inline ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D** UnsafeUtility_As_TisList_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_TisListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D_mCF5F8927BE5A0D9A4F9E7858A43AE6987DA7C753_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317** ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D** (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317**, const RuntimeMethod*))UnsafeUtility_As_TisRuntimeObject_TisRuntimeObject_m427D45188F037E6A44060E2DC34BCD470560D8C9_gshared_inline)(___0_from, method);
}
inline ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* UnsafeUtility_As_TisListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A_m8E19F1360520F8CCB29F8B4FA9A743197F324203 (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisRuntimeObject_m0FFD91677D5F942D9FA7112820E0596B59865532_gshared)(___0_from, method);
}
inline ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442* UnsafeUtility_As_TisListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442_m32094283939C75A047F5F7EC76EE93ACA2AC0F66 (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisRuntimeObject_m0FFD91677D5F942D9FA7112820E0596B59865532_gshared)(___0_from, method);
}
inline ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* UnsafeUtility_As_TisListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281_m2CE6D666DDD840E471D8B3CB46F0FA6403AE56FA (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisRuntimeObject_m0FFD91677D5F942D9FA7112820E0596B59865532_gshared)(___0_from, method);
}
inline ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* UnsafeUtility_As_TisListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15_m3974617E3625DC4E1CE4E10AF326F3D5CDDC5FDF (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisRuntimeObject_m0FFD91677D5F942D9FA7112820E0596B59865532_gshared)(___0_from, method);
}
inline ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* UnsafeUtility_As_TisListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D_mF34BB00F023AE7858824BB59AD1C866292E6BC07 (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtility_As_TisRuntimeObject_m0FFD91677D5F942D9FA7112820E0596B59865532_gshared)(___0_from, method);
}
inline RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ReadOnlySpan_1_ToArray_m52B9C5497E426BA0C6D18FE069D501F7F6B0570F (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC* __this, const RuntimeMethod* method)
{
	return ((  RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* (*) (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC*, const RuntimeMethod*))ReadOnlySpan_1_ToArray_m52B9C5497E426BA0C6D18FE069D501F7F6B0570F_gshared)(__this, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m8A8468ECDACBD86AE7FF53413628E0446F662397_inline (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m8A8468ECDACBD86AE7FF53413628E0446F662397_gshared_inline)(__this, method);
}
inline int32_t List_1_get_Capacity_mE73EFFF82CD84954143CA69B13EA7C22DBCDFE82 (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*, const RuntimeMethod*))List_1_get_Capacity_mE73EFFF82CD84954143CA69B13EA7C22DBCDFE82_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D (bool ___0_condition, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m97646F93DD10BF861C66A0E05E73D1BA94B76143_inline (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8*, const RuntimeMethod*))List_1_get_Count_m97646F93DD10BF861C66A0E05E73D1BA94B76143_gshared_inline)(__this, method);
}
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_FindFirstObjectByType_mC479B3C54E61550A6A405DC1BCF0CBA2BA8FC66F (Type_t* ___0_type, int32_t ___1_findObjectsInactive, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_CheckNullArgument_m4D03BBBD975CCCCB3F9438864E3E8BF54E1E3F26 (RuntimeObject* ___0_arg, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_Internal_CloneSingle_m24ECA1416702930DF5C316EA8B70D575315B636A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312 (UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline RuntimeObject* Object_Instantiate_TisRuntimeObject_mDC5AD8BD13FE50E98B67B956C048367F4E8C6F94 (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, bool ___2_worldPositionStays, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mDC5AD8BD13FE50E98B67B956C048367F4E8C6F94_gshared)(___0_original, ___1_parent, ___2_worldPositionStays, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_Instantiate_m99F2A72EF6BFE09E6CF4FCF6207C5BCFAD1D76CF (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, bool ___2_instantiateInWorldSpace, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_Instantiate_m99C9917ED3F7B2B9C569B55F52411620B52DA19D (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD (PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21 (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57 (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D (AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline (PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* __this, const RuntimeMethod* method) ;
inline bool PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E (int32_t* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method)
{
	return ((  bool (*) (int32_t*, RuntimeObject**, const RuntimeMethod*))PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E_gshared)(___0_value, ___1_propertyBag, method);
}
inline bool TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_gshared_inline)(method);
}
inline EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF (PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD* __this, PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* ___0_visitor, RuntimeObject* ___1_property, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922 (PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD* __this, const RuntimeMethod* method) ;
inline void PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441 (RuntimeObject* ___0_visitor, int32_t* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441_gshared)(___0_visitor, ___1_container, ___2_parameters, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) ;
inline bool PropertyBag_TryGetPropertyBagForValue_TisRuntimeObject_mD4CD5E0ECCA048DFCC4C4C71A78ED65C87C34C01 (RuntimeObject** ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject**, RuntimeObject**, const RuntimeMethod*))PropertyBag_TryGetPropertyBagForValue_TisRuntimeObject_mD4CD5E0ECCA048DFCC4C4C71A78ED65C87C34C01_gshared)(___0_value, ___1_propertyBag, method);
}
inline bool TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_gshared_inline)(method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
inline void PropertyContainer_Accept_TisRuntimeObject_m3580153F4048DF075DB593BDB3C4A63FA439FC39 (RuntimeObject* ___0_visitor, RuntimeObject** ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, RuntimeObject**, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_Accept_TisRuntimeObject_m3580153F4048DF075DB593BDB3C4A63FA439FC39_gshared)(___0_visitor, ___1_container, ___2_parameters, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
inline EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73_gshared)(method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutGroup_SetProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF7660CF867054F9DAB23E4256CCD1BDB3DC4AE0D_gshared (LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* __this, int32_t* ___0_currentValue, int32_t ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		goto IL_0015;
	}

IL_0015:
	{
	}
	{
		int32_t* L_2 = ___0_currentValue;
		int32_t L_3 = ___1_newValue;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_4);
		bool L_6;
		L_6 = Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B(L_2, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_6)
		{
			goto IL_0037;
		}
	}

IL_0036:
	{
		return;
	}

IL_0037:
	{
		int32_t* L_7 = ___0_currentValue;
		int32_t L_8 = ___1_newValue;
		*(int32_t*)L_7 = L_8;
		LayoutGroup_SetDirty_m32F20D8BB5C4B4DF350AF5F35A5917660FF9CE60(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutGroup_SetProperty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m93D0F3CD932754C2CA0577C037516E3C8E7ABC5B_gshared (LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* __this, int32_t* ___0_currentValue, int32_t ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		goto IL_0015;
	}

IL_0015:
	{
	}
	{
		int32_t* L_2 = ___0_currentValue;
		int32_t L_3 = ___1_newValue;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_4);
		Il2CppFakeBox<int32_t> L_6(il2cpp_rgctx_data(method->rgctx_data, 1), L_2);
		bool L_7;
		L_7 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), L_5, NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}

IL_0036:
	{
		return;
	}

IL_0037:
	{
		int32_t* L_8 = ___0_currentValue;
		int32_t L_9 = ___1_newValue;
		*(int32_t*)L_8 = L_9;
		LayoutGroup_SetDirty_m32F20D8BB5C4B4DF350AF5F35A5917660FF9CE60(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutGroup_SetProperty_TisRuntimeObject_m33F8BEAC544B9614B51F4E0BDC2005D04B0CF6B5_gshared (LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* __this, RuntimeObject** ___0_currentValue, RuntimeObject* ___1_newValue, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_currentValue;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___1_newValue;
		if (!L_2)
		{
			goto IL_0036;
		}
	}

IL_0015:
	{
		RuntimeObject** L_3 = ___0_currentValue;
		RuntimeObject* L_4 = (*(RuntimeObject**)L_3);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject** L_5 = ___0_currentValue;
		RuntimeObject* L_6 = ___1_newValue;
		NullCheck((*L_5));
		bool L_7;
		L_7 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (*L_5), L_6);
		if (!L_7)
		{
			goto IL_0037;
		}
	}

IL_0036:
	{
		return;
	}

IL_0037:
	{
		RuntimeObject** L_8 = ___0_currentValue;
		RuntimeObject* L_9 = ___1_newValue;
		*(RuntimeObject**)L_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)L_9);
		LayoutGroup_SetDirty_m32F20D8BB5C4B4DF350AF5F35A5917660FF9CE60(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutGroup_SetProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mB1C9BC2933169CCE72256722D3BBCEB8191C8804_gshared (LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* __this, float* ___0_currentValue, float ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		goto IL_0015;
	}

IL_0015:
	{
	}
	{
		float* L_2 = ___0_currentValue;
		float L_3 = ___1_newValue;
		float L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_4);
		bool L_6;
		L_6 = Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F(L_2, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_6)
		{
			goto IL_0037;
		}
	}

IL_0036:
	{
		return;
	}

IL_0037:
	{
		float* L_7 = ___0_currentValue;
		float L_8 = ___1_newValue;
		*(float*)L_7 = L_8;
		LayoutGroup_SetDirty_m32F20D8BB5C4B4DF350AF5F35A5917660FF9CE60(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutGroup_SetProperty_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m302B723C1D9A1517569BEE0F4DE8F711C2410D8B_gshared (LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_currentValue, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		goto IL_0015;
	}

IL_0015:
	{
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = ___0_currentValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___1_newValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_4);
		bool L_6;
		L_6 = Vector2_Equals_mA4E81D6FCE503DBD502BA499708344410F60DA4E_inline(L_2, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_6)
		{
			goto IL_0037;
		}
	}

IL_0036:
	{
		return;
	}

IL_0037:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___0_currentValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___1_newValue;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_7 = L_8;
		LayoutGroup_SetDirty_m32F20D8BB5C4B4DF350AF5F35A5917660FF9CE60(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutGroup_SetProperty_TisIl2CppFullySharedGenericAny_m1B5D68D82E4AB86C60E6F76F7D7A950DB06F7E9C_gshared (LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* __this, Il2CppFullySharedGenericAny* ___0_currentValue, Il2CppFullySharedGenericAny ___1_newValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t4CE5249EE868EADA2EF337B748A959CE36EDC68C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t4CE5249EE868EADA2EF337B748A959CE36EDC68C);
	const Il2CppFullySharedGenericAny L_3 = L_1;
	const Il2CppFullySharedGenericAny L_6 = L_1;
	const Il2CppFullySharedGenericAny L_9 = L_1;
	const Il2CppFullySharedGenericAny L_14 = L_1;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_currentValue;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_t4CE5249EE868EADA2EF337B748A959CE36EDC68C);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_newValue : &___1_newValue), SizeOf_T_t4CE5249EE868EADA2EF337B748A959CE36EDC68C);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_3);
		if (!L_4)
		{
			goto IL_0036;
		}
	}

IL_0015:
	{
		Il2CppFullySharedGenericAny* L_5 = ___0_currentValue;
		il2cpp_codegen_memcpy(L_6, L_5, SizeOf_T_t4CE5249EE868EADA2EF337B748A959CE36EDC68C);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_6);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_8 = ___0_currentValue;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_newValue : &___1_newValue), SizeOf_T_t4CE5249EE868EADA2EF337B748A959CE36EDC68C);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_9);
		bool L_12;
		L_12 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_11, (void*)L_8, L_10);
		if (!L_12)
		{
			goto IL_0037;
		}
	}

IL_0036:
	{
		return;
	}

IL_0037:
	{
		Il2CppFullySharedGenericAny* L_13 = ___0_currentValue;
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_newValue : &___1_newValue), SizeOf_T_t4CE5249EE868EADA2EF337B748A959CE36EDC68C);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_13, L_14, SizeOf_T_t4CE5249EE868EADA2EF337B748A959CE36EDC68C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_13, (void*)L_14);
		LayoutGroup_SetDirty_m32F20D8BB5C4B4DF350AF5F35A5917660FF9CE60(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LazyInitializer_EnsureInitialized_TisRuntimeObject_m153BCA24E1AB65004A192DD74C0506DE22FE5349_gshared (RuntimeObject** ___0_target, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject** L_0 = ___0_target;
		RuntimeObject* L_1;
		L_1 = VolatileRead(L_0);
		RuntimeObject* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0015;
		}
		G_B1_0 = L_2;
	}
	{
		RuntimeObject** L_3 = ___0_target;
		RuntimeObject* L_4;
		L_4 = LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m6C657E70C3EDB91430549159C00923CBB5E589D3(L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B2_0 = L_4;
	}

IL_0015:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LazyInitializer_EnsureInitialized_TisRuntimeObject_mFEBA744876B29FFCD71AFC49292AA14051ED47DF_gshared (RuntimeObject** ___0_target, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___1_valueFactory, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject** L_0 = ___0_target;
		RuntimeObject* L_1;
		L_1 = VolatileRead(L_0);
		RuntimeObject* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0016;
		}
		G_B1_0 = L_2;
	}
	{
		RuntimeObject** L_3 = ___0_target;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_4 = ___1_valueFactory;
		RuntimeObject* L_5;
		L_5 = LazyInitializer_EnsureInitializedCore_TisRuntimeObject_mF7F282E24251C4B201CE4AC5C5F0BB8E450B102E(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 4));
		G_B2_0 = L_5;
	}

IL_0016:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m6C657E70C3EDB91430549159C00923CBB5E589D3_gshared (RuntimeObject** ___0_target, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		RuntimeObject** L_0 = ___0_target;
		RuntimeObject* L_1;
		L_1 = Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138(il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_0, L_1, L_2);
		goto IL_0023;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_4 = ((MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)IL2CPP_GET_ACTIVE_EXCEPTION(MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*));;
		MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211* L_5 = (MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211_il2cpp_TypeInfo_var)));
		MissingMemberException__ctor_m6292C676754200C455A390D36BFEBD8F8775628C(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7736367EB5597A368928D1011CEA2283AF9B94D)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0023:
	{
		RuntimeObject** L_6 = ___0_target;
		RuntimeObject* L_7 = (*(RuntimeObject**)L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LazyInitializer_EnsureInitializedCore_TisRuntimeObject_mF7F282E24251C4B201CE4AC5C5F0BB8E450B102E_gshared (RuntimeObject** ___0_target, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___1_valueFactory, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_0 = ___1_valueFactory;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE958A63C0675D65C92182FC45CE3E78A8DD48061)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001a:
	{
		RuntimeObject** L_4 = ___0_target;
		RuntimeObject* L_5 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7;
		L_7 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_4, L_5, L_6);
		RuntimeObject** L_8 = ___0_target;
		RuntimeObject* L_9 = (*(RuntimeObject**)L_8);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m389A3417EF0CFE64A042AA7E53E8604F24458074_gshared (RuntimeObject* ___0_d, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_d;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		RuntimeObject* L_2 = ___0_d;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = Marshal_GetFunctionPointerForDelegateInternal_m4E9C4E82582417A3F843EBC929FA464EFF6B4EB7(((Delegate_t*)CastclassClass((RuntimeObject*)L_2, Delegate_t_il2cpp_TypeInfo_var)), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegate_TisIl2CppFullySharedGenericAny_m04DF469F259D55E8A9421AD43B0727717659D363_gshared (Il2CppFullySharedGenericAny ___0_d, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TDelegate_t603B09DE9F50A15E4B68C0065D59B1AEACD8013C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TDelegate_t603B09DE9F50A15E4B68C0065D59B1AEACD8013C);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_d : &___0_d), SizeOf_TDelegate_t603B09DE9F50A15E4B68C0065D59B1AEACD8013C);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_d : &___0_d), SizeOf_TDelegate_t603B09DE9F50A15E4B68C0065D59B1AEACD8013C);
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_3);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_5;
		L_5 = Marshal_GetFunctionPointerForDelegateInternal_m4E9C4E82582417A3F843EBC929FA464EFF6B4EB7(((Delegate_t*)CastclassClass((RuntimeObject*)L_4, Delegate_t_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_TisIl2CppFullySharedGenericAny_m58ABB848CA03E7CF00C13B217E7AD9E4A0C2D515_gshared (Il2CppFullySharedGenericAny ___0_structure, intptr_t ___1_ptr, bool ___2_fDeleteOld, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tECAABBCCB42DB85B9E4F352013962F812072425C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tECAABBCCB42DB85B9E4F352013962F812072425C);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_structure : &___0_structure), SizeOf_T_tECAABBCCB42DB85B9E4F352013962F812072425C);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_0);
		intptr_t L_2 = ___1_ptr;
		bool L_3 = ___2_fDeleteOld;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_StructureToPtr_mA1B296E1739D0481FACE3D9B43D94FF86091DD4E(L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Math_ThrowMinMaxException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC7732632C280D3AEE2B08C470A78B9C5C4CBD77_gshared (int32_t ___0_min, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___0_min;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_1);
		int32_t L_3 = ___1_max;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_4);
		String_t* L_6;
		L_6 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral110D1733D85BF5EFB139B95FF286BB627337195E)), L_2, L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Math_ThrowMinMaxException_TisIl2CppFullySharedGenericAny_m557436C09046F5D4CF328BBF348EF8579340BED4_gshared (Il2CppFullySharedGenericAny ___0_min, Il2CppFullySharedGenericAny ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tDA843702ECF47E625B3E8038BC0DE5296BFCE229 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tDA843702ECF47E625B3E8038BC0DE5296BFCE229);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tDA843702ECF47E625B3E8038BC0DE5296BFCE229);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_min : &___0_min), SizeOf_T_tDA843702ECF47E625B3E8038BC0DE5296BFCE229);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_0);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_max : &___1_max), SizeOf_T_tDA843702ECF47E625B3E8038BC0DE5296BFCE229);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_2);
		String_t* L_4;
		L_4 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral110D1733D85BF5EFB139B95FF286BB627337195E)), L_1, L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C MemoryExtensions_AsSpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF14C9AF44BF6092EB640C33222BE02E3655EC69C_gshared (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_array;
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_inline((&L_1), L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 MemoryExtensions_AsSpan_TisIl2CppFullySharedGenericAny_m788D06C7A78ACE9317501CAAB3ACB95E63B8B3BD_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_inline((&L_1), L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D MemoryExtensions_AsSpan_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mAAE62C81257C2E4F2B34D90163A12BAD3815AAA6_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m5BFF79141064122141ED34283347A634B9DF577D_inline((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 MemoryExtensions_AsSpan_TisIl2CppFullySharedGenericAny_m344D5B88E371389CBB706486DD475040114089B1_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_inline((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryExtensions_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m508604BBCD7DCCB4DEC428F44BD554F030698FF7_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, uint8_t ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5 = ___0_span;
		uint8_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>(L_6);
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_as_ref<uint8_t>((&___1_value));
		int32_t L_9 = *((uint8_t*)L_8);
		int32_t L_10;
		L_10 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_11;
		L_11 = SpanHelpers_IndexOf_mB37566B16F2F4C7D14E1CD6EA781AC67110E8C4C(L_7, (uint8_t)L_9, L_10, NULL);
		return L_11;
	}

IL_003b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_17 = ___0_span;
		uint8_t* L_18;
		L_18 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_17, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppChar* L_19;
		L_19 = il2cpp_unsafe_as_ref<Il2CppChar>(L_18);
		Il2CppChar* L_20;
		L_20 = il2cpp_unsafe_as_ref<Il2CppChar>((&___1_value));
		int32_t L_21 = *((uint16_t*)L_20);
		int32_t L_22;
		L_22 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_23;
		L_23 = SpanHelpers_IndexOf_m1EBE4594F5288D2297A3A8E8E4F365BE4BD211DC(L_19, (Il2CppChar)L_21, L_22, NULL);
		return L_23;
	}

IL_0076:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_24 = ___0_span;
		uint8_t* L_25;
		L_25 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_24, il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t L_26 = ___1_value;
		int32_t L_27;
		L_27 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_28;
		L_28 = SpanHelpers_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3E381D71F4CF4AB91BFFD85724D3F55A84E706E5(L_25, L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mCA39BDFF0515AAF2D5364E2F2EBEFB3A45DC065B_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_span, Il2CppChar ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5 = ___0_span;
		Il2CppChar* L_6;
		L_6 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A(L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>(L_6);
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_as_ref<uint8_t>((&___1_value));
		int32_t L_9 = *((uint8_t*)L_8);
		int32_t L_10;
		L_10 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_11;
		L_11 = SpanHelpers_IndexOf_mB37566B16F2F4C7D14E1CD6EA781AC67110E8C4C(L_7, (uint8_t)L_9, L_10, NULL);
		return L_11;
	}

IL_003b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_17 = ___0_span;
		Il2CppChar* L_18;
		L_18 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A(L_17, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppChar* L_19;
		L_19 = il2cpp_unsafe_as_ref<Il2CppChar>(L_18);
		Il2CppChar* L_20;
		L_20 = il2cpp_unsafe_as_ref<Il2CppChar>((&___1_value));
		int32_t L_21 = *((uint16_t*)L_20);
		int32_t L_22;
		L_22 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_23;
		L_23 = SpanHelpers_IndexOf_m1EBE4594F5288D2297A3A8E8E4F365BE4BD211DC(L_19, (Il2CppChar)L_21, L_22, NULL);
		return L_23;
	}

IL_0076:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_24 = ___0_span;
		Il2CppChar* L_25;
		L_25 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A(L_24, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppChar L_26 = ___1_value;
		int32_t L_27;
		L_27 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_28;
		L_28 = SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2F71ADBBAA6FA83C123CBA62E879F1D780F27D48(L_25, L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryExtensions_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE80370AECCF597D40E92F38F67A969AB1FFDCCD5_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_span, int32_t ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_5 = ___0_span;
		int32_t* L_6;
		L_6 = MemoryMarshal_GetReference_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFC9D303E66CF269E3E7B9C5E375C066446C3022C(L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>(L_6);
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_as_ref<uint8_t>((&___1_value));
		int32_t L_9 = *((uint8_t*)L_8);
		int32_t L_10;
		L_10 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_11;
		L_11 = SpanHelpers_IndexOf_mB37566B16F2F4C7D14E1CD6EA781AC67110E8C4C(L_7, (uint8_t)L_9, L_10, NULL);
		return L_11;
	}

IL_003b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_17 = ___0_span;
		int32_t* L_18;
		L_18 = MemoryMarshal_GetReference_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFC9D303E66CF269E3E7B9C5E375C066446C3022C(L_17, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppChar* L_19;
		L_19 = il2cpp_unsafe_as_ref<Il2CppChar>(L_18);
		Il2CppChar* L_20;
		L_20 = il2cpp_unsafe_as_ref<Il2CppChar>((&___1_value));
		int32_t L_21 = *((uint16_t*)L_20);
		int32_t L_22;
		L_22 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_23;
		L_23 = SpanHelpers_IndexOf_m1EBE4594F5288D2297A3A8E8E4F365BE4BD211DC(L_19, (Il2CppChar)L_21, L_22, NULL);
		return L_23;
	}

IL_0076:
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_24 = ___0_span;
		int32_t* L_25;
		L_25 = MemoryMarshal_GetReference_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFC9D303E66CF269E3E7B9C5E375C066446C3022C(L_24, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_26 = ___1_value;
		int32_t L_27;
		L_27 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_28;
		L_28 = SpanHelpers_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2EAE0D843D45D653200D77CD60C0034A404551C2(L_25, L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryExtensions_IndexOf_TisIl2CppFullySharedGenericAny_m52AABD71B8E92C641CA6A21594127FE9BFC0B605_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_span, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t4B57FD5365DEEB73C0EDDA52693FD505D9C5AC84 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T_t4B57FD5365DEEB73C0EDDA52693FD505D9C5AC84);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_5 = ___0_span;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = ((  Il2CppFullySharedGenericAny* (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>(L_6);
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_as_ref<uint8_t>((Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___1_value : &___1_value));
		int32_t L_9 = *((uint8_t*)L_8);
		int32_t L_10;
		L_10 = ((  int32_t (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_11;
		L_11 = SpanHelpers_IndexOf_mB37566B16F2F4C7D14E1CD6EA781AC67110E8C4C(L_7, (uint8_t)L_9, L_10, NULL);
		return L_11;
	}

IL_003b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_17 = ___0_span;
		Il2CppFullySharedGenericAny* L_18;
		L_18 = ((  Il2CppFullySharedGenericAny* (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_17, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppChar* L_19;
		L_19 = il2cpp_unsafe_as_ref<Il2CppChar>(L_18);
		Il2CppChar* L_20;
		L_20 = il2cpp_unsafe_as_ref<Il2CppChar>((Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___1_value : &___1_value));
		int32_t L_21 = *((uint16_t*)L_20);
		int32_t L_22;
		L_22 = ((  int32_t (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_23;
		L_23 = SpanHelpers_IndexOf_m1EBE4594F5288D2297A3A8E8E4F365BE4BD211DC(L_19, (Il2CppChar)L_21, L_22, NULL);
		return L_23;
	}

IL_0076:
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_24 = ___0_span;
		Il2CppFullySharedGenericAny* L_25;
		L_25 = ((  Il2CppFullySharedGenericAny* (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_24, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___1_value : &___1_value), SizeOf_T_t4B57FD5365DEEB73C0EDDA52693FD505D9C5AC84);
		int32_t L_27;
		L_27 = ((  int32_t (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_28;
		L_28 = InvokerFuncInvoker3< int32_t, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), NULL, L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_26: *(void**)L_26), L_27);
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryExtensions_IndexOf_TisIl2CppFullySharedGenericAny_m3C3B9E68C98F7415F488C1E6E1487F9110EAD146_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tE4E2EDCCF448194DCFB21F9DE62D0622FE4A6AE5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T_tE4E2EDCCF448194DCFB21F9DE62D0622FE4A6AE5);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_5 = ___0_span;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = ((  Il2CppFullySharedGenericAny* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>(L_6);
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_as_ref<uint8_t>((Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___1_value : &___1_value));
		int32_t L_9 = *((uint8_t*)L_8);
		int32_t L_10;
		L_10 = ((  int32_t (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_11;
		L_11 = SpanHelpers_IndexOf_mB37566B16F2F4C7D14E1CD6EA781AC67110E8C4C(L_7, (uint8_t)L_9, L_10, NULL);
		return L_11;
	}

IL_003b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_17 = ___0_span;
		Il2CppFullySharedGenericAny* L_18;
		L_18 = ((  Il2CppFullySharedGenericAny* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_17, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppChar* L_19;
		L_19 = il2cpp_unsafe_as_ref<Il2CppChar>(L_18);
		Il2CppChar* L_20;
		L_20 = il2cpp_unsafe_as_ref<Il2CppChar>((Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___1_value : &___1_value));
		int32_t L_21 = *((uint16_t*)L_20);
		int32_t L_22;
		L_22 = ((  int32_t (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_23;
		L_23 = SpanHelpers_IndexOf_m1EBE4594F5288D2297A3A8E8E4F365BE4BD211DC(L_19, (Il2CppChar)L_21, L_22, NULL);
		return L_23;
	}

IL_0076:
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_24 = ___0_span;
		Il2CppFullySharedGenericAny* L_25;
		L_25 = ((  Il2CppFullySharedGenericAny* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_24, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___1_value : &___1_value), SizeOf_T_tE4E2EDCCF448194DCFB21F9DE62D0622FE4A6AE5);
		int32_t L_27;
		L_27 = ((  int32_t (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_28;
		L_28 = InvokerFuncInvoker3< int32_t, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), NULL, L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_26: *(void**)L_26), L_27);
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryExtensions_IsTypeComparableAsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m64FAB0403DCD80C51788DF3CD7390E44F6228CA7_gshared (uint64_t* ___0_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003c;
		}
	}

IL_0036:
	{
		uint64_t* L_10 = ___0_size;
		*((int64_t*)L_10) = (int64_t)((int64_t)1);
		return (bool)1;
	}

IL_003c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_14, NULL);
		if (L_15)
		{
			goto IL_008d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (L_20)
		{
			goto IL_008d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		if (!L_25)
		{
			goto IL_0093;
		}
	}

IL_008d:
	{
		uint64_t* L_26 = ___0_size;
		*((int64_t*)L_26) = (int64_t)((int64_t)2);
		return (bool)1;
	}

IL_0093:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		bool L_31;
		L_31 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_28, L_30, NULL);
		if (L_31)
		{
			goto IL_00c9;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
		bool L_36;
		L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
		if (!L_36)
		{
			goto IL_00cf;
		}
	}

IL_00c9:
	{
		uint64_t* L_37 = ___0_size;
		*((int64_t*)L_37) = (int64_t)((int64_t)4);
		return (bool)1;
	}

IL_00cf:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		bool L_42;
		L_42 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_39, L_41, NULL);
		if (L_42)
		{
			goto IL_0105;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		bool L_47;
		L_47 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_44, L_46, NULL);
		if (!L_47)
		{
			goto IL_010b;
		}
	}

IL_0105:
	{
		uint64_t* L_48 = ___0_size;
		*((int64_t*)L_48) = (int64_t)((int64_t)8);
		return (bool)1;
	}

IL_010b:
	{
		uint64_t* L_49 = ___0_size;
		*((int64_t*)L_49) = (int64_t)((int64_t)0);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryExtensions_IsTypeComparableAsBytes_TisIl2CppFullySharedGenericAny_m222C2D308418E5EF828B7DB3393EF84053FBA614_gshared (uint64_t* ___0_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003c;
		}
	}

IL_0036:
	{
		uint64_t* L_10 = ___0_size;
		*((int64_t*)L_10) = (int64_t)((int64_t)1);
		return (bool)1;
	}

IL_003c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_14, NULL);
		if (L_15)
		{
			goto IL_008d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (L_20)
		{
			goto IL_008d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		if (!L_25)
		{
			goto IL_0093;
		}
	}

IL_008d:
	{
		uint64_t* L_26 = ___0_size;
		*((int64_t*)L_26) = (int64_t)((int64_t)2);
		return (bool)1;
	}

IL_0093:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		bool L_31;
		L_31 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_28, L_30, NULL);
		if (L_31)
		{
			goto IL_00c9;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
		bool L_36;
		L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
		if (!L_36)
		{
			goto IL_00cf;
		}
	}

IL_00c9:
	{
		uint64_t* L_37 = ___0_size;
		*((int64_t*)L_37) = (int64_t)((int64_t)4);
		return (bool)1;
	}

IL_00cf:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		bool L_42;
		L_42 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_39, L_41, NULL);
		if (L_42)
		{
			goto IL_0105;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		bool L_47;
		L_47 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_44, L_46, NULL);
		if (!L_47)
		{
			goto IL_010b;
		}
	}

IL_0105:
	{
		uint64_t* L_48 = ___0_size;
		*((int64_t*)L_48) = (int64_t)((int64_t)8);
		return (bool)1;
	}

IL_010b:
	{
		uint64_t* L_49 = ___0_size;
		*((int64_t*)L_49) = (int64_t)((int64_t)0);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryExtensions_SequenceEqual_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m5C4C602E94DF85548E163F2D3FE9DDCA36C7E3E6_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_span, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppChar));
	}
	{
		bool L_2;
		L_2 = MemoryExtensions_IsTypeComparableAsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m64FAB0403DCD80C51788DF3CD7390E44F6228CA7_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___1_other), il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_004b;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5 = ___0_span;
		Il2CppChar* L_6;
		L_6 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A(L_5, il2cpp_rgctx_method(method->rgctx_data, 5));
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>(L_6);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_8 = ___1_other;
		Il2CppChar* L_9;
		L_9 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A(L_8, il2cpp_rgctx_method(method->rgctx_data, 5));
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_as_ref<uint8_t>(L_9);
		int32_t L_11 = V_0;
		uint64_t L_12 = V_1;
		bool L_13;
		L_13 = SpanHelpers_SequenceEqual_m69781B64721462BCA1ED200A1BB853E9B7026F2E(L_7, L_10, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_11), (int64_t)L_12)), NULL);
		return L_13;
	}

IL_004b:
	{
		return (bool)0;
	}

IL_004d:
	{
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___1_other), il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_006a;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_16 = ___0_span;
		Il2CppChar* L_17;
		L_17 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A(L_16, il2cpp_rgctx_method(method->rgctx_data, 5));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_18 = ___1_other;
		Il2CppChar* L_19;
		L_19 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A(L_18, il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_20 = V_0;
		bool L_21;
		L_21 = SpanHelpers_SequenceEqual_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m15554853B4E39558ED8B1049CF44428A9F9F0774(L_17, L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_21;
	}

IL_006a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryExtensions_SequenceEqual_TisIl2CppFullySharedGenericAny_mF299EB60F4BF8D973B09238DC6FBDBAB11AB0289_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_span, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t2DE6199FAE73F26A0DD7ACA82D97809F013CF22E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t2DE6199FAE73F26A0DD7ACA82D97809F013CF22E);
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t2DE6199FAE73F26A0DD7ACA82D97809F013CF22E);
	memset(V_2, 0, SizeOf_T_t2DE6199FAE73F26A0DD7ACA82D97809F013CF22E);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_t2DE6199FAE73F26A0DD7ACA82D97809F013CF22E);
		il2cpp_codegen_memcpy(L_1, V_2, SizeOf_T_t2DE6199FAE73F26A0DD7ACA82D97809F013CF22E);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_1);
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		bool L_3;
		L_3 = ((  bool (*) (uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&V_1), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = ((  int32_t (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___1_other), il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_004b;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_6 = ___0_span;
		Il2CppFullySharedGenericAny* L_7;
		L_7 = ((  Il2CppFullySharedGenericAny* (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_6, il2cpp_rgctx_method(method->rgctx_data, 5));
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_as_ref<uint8_t>(L_7);
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_9 = ___1_other;
		Il2CppFullySharedGenericAny* L_10;
		L_10 = ((  Il2CppFullySharedGenericAny* (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_9, il2cpp_rgctx_method(method->rgctx_data, 5));
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint8_t>(L_10);
		int32_t L_12 = V_0;
		uint64_t L_13 = V_1;
		bool L_14;
		L_14 = SpanHelpers_SequenceEqual_m69781B64721462BCA1ED200A1BB853E9B7026F2E(L_8, L_11, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_12), (int64_t)L_13)), NULL);
		return L_14;
	}

IL_004b:
	{
		return (bool)0;
	}

IL_004d:
	{
		int32_t L_15 = V_0;
		int32_t L_16;
		L_16 = ((  int32_t (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___1_other), il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_006a;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_17 = ___0_span;
		Il2CppFullySharedGenericAny* L_18;
		L_18 = ((  Il2CppFullySharedGenericAny* (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_17, il2cpp_rgctx_method(method->rgctx_data, 5));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_19 = ___1_other;
		Il2CppFullySharedGenericAny* L_20;
		L_20 = ((  Il2CppFullySharedGenericAny* (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_19, il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_21 = V_0;
		bool L_22;
		L_22 = ((  bool (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_18, L_20, L_21, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_22;
	}

IL_006a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryExtensions_StartsWith_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m76F321E1D7752760DAF43A4C381EB0FF3EE16417_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_span, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___1_value), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppChar));
	}
	{
		bool L_2;
		L_2 = MemoryExtensions_IsTypeComparableAsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m64FAB0403DCD80C51788DF3CD7390E44F6228CA7_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_3) > ((int32_t)L_4)))
		{
			goto IL_004b;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5 = ___0_span;
		Il2CppChar* L_6;
		L_6 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A(L_5, il2cpp_rgctx_method(method->rgctx_data, 5));
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>(L_6);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_8 = ___1_value;
		Il2CppChar* L_9;
		L_9 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A(L_8, il2cpp_rgctx_method(method->rgctx_data, 5));
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_as_ref<uint8_t>(L_9);
		int32_t L_11 = V_0;
		uint64_t L_12 = V_1;
		bool L_13;
		L_13 = SpanHelpers_SequenceEqual_m69781B64721462BCA1ED200A1BB853E9B7026F2E(L_7, L_10, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_11), (int64_t)L_12)), NULL);
		return L_13;
	}

IL_004b:
	{
		return (bool)0;
	}

IL_004d:
	{
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_14) > ((int32_t)L_15)))
		{
			goto IL_006a;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_16 = ___0_span;
		Il2CppChar* L_17;
		L_17 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A(L_16, il2cpp_rgctx_method(method->rgctx_data, 5));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_18 = ___1_value;
		Il2CppChar* L_19;
		L_19 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A(L_18, il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_20 = V_0;
		bool L_21;
		L_21 = SpanHelpers_SequenceEqual_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m15554853B4E39558ED8B1049CF44428A9F9F0774(L_17, L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_21;
	}

IL_006a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryExtensions_StartsWith_TisIl2CppFullySharedGenericAny_mA46C6198DF93174F9C3A14C2DAF4AB07990DE103_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_span, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tADE12AD8AE20158C0A27A331A59A5BC3F351D772 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tADE12AD8AE20158C0A27A331A59A5BC3F351D772);
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tADE12AD8AE20158C0A27A331A59A5BC3F351D772);
	memset(V_2, 0, SizeOf_T_tADE12AD8AE20158C0A27A331A59A5BC3F351D772);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___1_value), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_tADE12AD8AE20158C0A27A331A59A5BC3F351D772);
		il2cpp_codegen_memcpy(L_1, V_2, SizeOf_T_tADE12AD8AE20158C0A27A331A59A5BC3F351D772);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_1);
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		bool L_3;
		L_3 = ((  bool (*) (uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&V_1), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = ((  int32_t (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_4) > ((int32_t)L_5)))
		{
			goto IL_004b;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_6 = ___0_span;
		Il2CppFullySharedGenericAny* L_7;
		L_7 = ((  Il2CppFullySharedGenericAny* (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_6, il2cpp_rgctx_method(method->rgctx_data, 5));
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_as_ref<uint8_t>(L_7);
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_9 = ___1_value;
		Il2CppFullySharedGenericAny* L_10;
		L_10 = ((  Il2CppFullySharedGenericAny* (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_9, il2cpp_rgctx_method(method->rgctx_data, 5));
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint8_t>(L_10);
		int32_t L_12 = V_0;
		uint64_t L_13 = V_1;
		bool L_14;
		L_14 = SpanHelpers_SequenceEqual_m69781B64721462BCA1ED200A1BB853E9B7026F2E(L_8, L_11, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_12), (int64_t)L_13)), NULL);
		return L_14;
	}

IL_004b:
	{
		return (bool)0;
	}

IL_004d:
	{
		int32_t L_15 = V_0;
		int32_t L_16;
		L_16 = ((  int32_t (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_15) > ((int32_t)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_17 = ___0_span;
		Il2CppFullySharedGenericAny* L_18;
		L_18 = ((  Il2CppFullySharedGenericAny* (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_17, il2cpp_rgctx_method(method->rgctx_data, 5));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_19 = ___1_value;
		Il2CppFullySharedGenericAny* L_20;
		L_20 = ((  Il2CppFullySharedGenericAny* (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_19, il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_21 = V_0;
		bool L_22;
		L_22 = ((  bool (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_18, L_20, L_21, il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_22;
	}

IL_006a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryMarshal_AsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2514AE8C52CF9D758D1E0E3F2CF2ECDE027D5396_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_0 = ___0_span;
		Il2CppChar* L_1;
		L_1 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527(L_0, il2cpp_rgctx_method(method->rgctx_data, 3));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3;
		L_3 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Il2CppChar>();
		if (((int64_t)L_3 * (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 * (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_5), L_2, ((int32_t)il2cpp_codegen_multiply(L_3, L_4)), Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_gshared (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ___0_span, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F L_0 = ___0_span;
		uint16_t* L_1;
		L_1 = MemoryMarshal_GetReference_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m658F27CD8382523E3AA10A147039FD111CB9CBF6(L_0, il2cpp_rgctx_method(method->rgctx_data, 3));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3;
		L_3 = ReadOnlySpan_1_get_Length_m339FDCE1FC17C2B97AEA44937294504AF706F7FF_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<uint16_t>();
		if (((int64_t)L_3 * (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 * (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_5), L_2, ((int32_t)il2cpp_codegen_multiply(L_3, L_4)), ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_gshared (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ___0_span, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_0 = ___0_span;
		uint32_t* L_1;
		L_1 = MemoryMarshal_GetReference_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m189525FD0C59640C6106337AFC1D11B96258C796(L_0, il2cpp_rgctx_method(method->rgctx_data, 3));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3;
		L_3 = ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<uint32_t>();
		if (((int64_t)L_3 * (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 * (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_5), L_2, ((int32_t)il2cpp_codegen_multiply(L_3, L_4)), ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_m8F3347AA857E0A38C9CF99955901D246DB18D8FA_gshared (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_span, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_3 = ___0_span;
		Il2CppFullySharedGenericStruct* L_4;
		L_4 = ((  Il2CppFullySharedGenericStruct* (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		int32_t L_6;
		L_6 = ((  int32_t (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_7;
		L_7 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (((int64_t)L_6 * (int64_t)L_7 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_6 * (int64_t)L_7 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_multiply(L_6, L_7)), ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_mF17987979FA677881AF5A25ECF5A4A8FECDC7FC5_gshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_3 = ___0_span;
		Il2CppFullySharedGenericStruct* L_4;
		L_4 = ((  Il2CppFullySharedGenericStruct* (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		int32_t L_6;
		L_6 = ((  int32_t (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_7;
		L_7 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (((int64_t)L_6 * (int64_t)L_7 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_6 * (int64_t)L_7 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_multiply(L_6, L_7)), Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryMarshal_CreateReadOnlySpan_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6AC28EB03E267661349B40C5A925602DAC3F1C11_gshared (Il2CppChar* ___0_reference, int32_t ___1_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppChar* L_0 = ___0_reference;
		int32_t L_1 = ___1_length;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2;
		memset((&L_2), 0, sizeof(L_2));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_2), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_gshared (uint32_t* ___0_reference, int32_t ___1_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		uint32_t* L_0 = ___0_reference;
		int32_t L_1 = ___1_length;
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_2;
		memset((&L_2), 0, sizeof(L_2));
		ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_inline((&L_2), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC MemoryMarshal_CreateReadOnlySpan_TisIl2CppFullySharedGenericAny_m5D509016837091D760A6EF9B0F6F74F5534D991F_gshared (Il2CppFullySharedGenericAny* ___0_reference, int32_t ___1_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_reference;
		int32_t L_1 = ___1_length;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_2;
		memset((&L_2), 0, sizeof(L_2));
		ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline((&L_2), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetNonNullPinnableReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3BA1CF7AEF4608078C01A049B6E239285AB817C0_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>((void*)((intptr_t)1));
		return L_1;
	}

IL_0011:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2 = ___0_span;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3 = L_2.____pointer;
		V_0 = L_3;
		uint8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetNonNullPinnableReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C8488546C6A279988F746DA62507F05B3827209_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>((void*)((intptr_t)1));
		return L_1;
	}

IL_0011:
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_span;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3 = L_2.____pointer;
		V_0 = L_3;
		uint8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* MemoryMarshal_GetNonNullPinnableReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m5B5EDB51A1433BC61982377EE20FD01FD879D77E_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Il2CppChar* L_1;
		L_1 = il2cpp_unsafe_as_ref<Il2CppChar>((void*)((intptr_t)1));
		return L_1;
	}

IL_0011:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___0_span;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3 = L_2.____pointer;
		V_0 = L_3;
		Il2CppChar* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* MemoryMarshal_GetNonNullPinnableReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m77B70401B37FCAA324528DEA0949494FCE944D9B_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Il2CppChar* L_1;
		L_1 = il2cpp_unsafe_as_ref<Il2CppChar>((void*)((intptr_t)1));
		return L_1;
	}

IL_0011:
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___0_span;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3 = L_2.____pointer;
		V_0 = L_3;
		Il2CppChar* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* MemoryMarshal_GetNonNullPinnableReference_TisIl2CppFullySharedGenericAny_m5F701949B67B52EC46C7BEF1B3AA97A1108B63E9_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_1;
		L_1 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((void*)((intptr_t)1));
		return L_1;
	}

IL_0011:
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_2 = ___0_span;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_3 = L_2.____pointer;
		V_0 = L_3;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* MemoryMarshal_GetNonNullPinnableReference_TisIl2CppFullySharedGenericAny_m55AAB3DF8B968E91EDD900E978018892F333B4C4_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_1;
		L_1 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((void*)((intptr_t)1));
		return L_1;
	}

IL_0011:
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2 = ___0_span;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_3 = L_2.____pointer;
		V_0 = L_3;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_span;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1 = L_0.____pointer;
		V_0 = L_1;
		uint8_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_0 = ___0_span;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1 = L_0.____pointer;
		V_0 = L_1;
		uint8_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4C181D41EF4A4EC432CD3610B2969041E6F2F7A_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___0_span;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1 = L_0.____pointer;
		V_0 = L_1;
		Il2CppChar* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_0 = ___0_span;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1 = L_0.____pointer;
		V_0 = L_1;
		Il2CppChar* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* MemoryMarshal_GetReference_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFC9D303E66CF269E3E7B9C5E375C066446C3022C_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_0 = ___0_span;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_1 = L_0.____pointer;
		V_0 = L_1;
		int32_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* MemoryMarshal_GetReference_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m658F27CD8382523E3AA10A147039FD111CB9CBF6_gshared (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F L_0 = ___0_span;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_1 = L_0.____pointer;
		V_0 = L_1;
		uint16_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* MemoryMarshal_GetReference_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m189525FD0C59640C6106337AFC1D11B96258C796_gshared (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_0 = ___0_span;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_1 = L_0.____pointer;
		V_0 = L_1;
		uint32_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_0 = ___0_span;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1 = L_0.____pointer;
		V_0 = L_1;
		Il2CppFullySharedGenericAny* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_m5144BD426181728CA94C44B8778ECDF811B77843_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_0 = ___0_span;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1 = L_0.____pointer;
		V_0 = L_1;
		Il2CppFullySharedGenericAny* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_GetAllocArrayFromChannel_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8C6368A8BD660D735D0A67B197CCF776A20393DB_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	{
		int32_t L_0 = ___0_channel;
		int32_t L_1 = ___0_channel;
		int32_t L_2;
		L_2 = Mesh_DefaultDimensionForChannel_mCE2BFE4516CB37EA677E8671997D986FF654C130(L_1, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3;
		L_3 = Mesh_GetAllocArrayFromChannel_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB9160ED046579DD87EF4BE48FB46C293273919A2(__this, L_0, (int32_t)0, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		goto IL_0012;
	}

IL_0012:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* Mesh_GetAllocArrayFromChannel_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mF09A6C626C11FDD32A523134B13E0654A37B9E9B_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_0 = NULL;
	{
		int32_t L_0 = ___0_channel;
		int32_t L_1 = ___0_channel;
		int32_t L_2;
		L_2 = Mesh_DefaultDimensionForChannel_mCE2BFE4516CB37EA677E8671997D986FF654C130(L_1, NULL);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_3;
		L_3 = Mesh_GetAllocArrayFromChannel_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m0D5663B28C29E5FBEB421D61D57B2DF1D471C2F4(__this, L_0, (int32_t)0, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		goto IL_0012;
	}

IL_0012:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Mesh_GetAllocArrayFromChannel_TisIl2CppFullySharedGenericAny_m050419C7516E0BBC3C711672C69E02E2348167A7_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = ___0_channel;
		int32_t L_1 = ___0_channel;
		int32_t L_2;
		L_2 = Mesh_DefaultDimensionForChannel_mCE2BFE4516CB37EA677E8671997D986FF654C130(L_1, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3;
		L_3 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_0, (int32_t)0, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		goto IL_0012;
	}

IL_0012:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Mesh_GetAllocArrayFromChannel_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m72075F645F848EBDDA48A31CCCA7B6D760B7C28E_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_2 = NULL;
	{
		bool L_0;
		L_0 = Mesh_get_canAccess_m97F255BBB8C009D643920E2D095B6DB8868E3572(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___0_channel;
		bool L_3;
		L_3 = Mesh_HasVertexAttribute_m6FA9574E4DEE19158535F93281791AD6FB550595(__this, L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___0_channel;
		int32_t L_6 = ___1_format;
		int32_t L_7 = ___2_dim;
		RuntimeArray* L_8;
		L_8 = Mesh_GetAllocArrayFromChannelImpl_m30C7972CA5A67CD01EBBDDE2FD8F48CE2F8F86F6(__this, L_5, L_6, L_7, NULL);
		V_2 = ((Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)Castclass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___0_channel;
		Mesh_PrintErrorCantAccessChannel_mD80AC1870BC51714BE0C97B15D3E3D4EC42AC85E(__this, L_9, NULL);
	}

IL_0035:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_10 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)0);
		V_2 = L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_GetAllocArrayFromChannel_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB9160ED046579DD87EF4BE48FB46C293273919A2_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	{
		bool L_0;
		L_0 = Mesh_get_canAccess_m97F255BBB8C009D643920E2D095B6DB8868E3572(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___0_channel;
		bool L_3;
		L_3 = Mesh_HasVertexAttribute_m6FA9574E4DEE19158535F93281791AD6FB550595(__this, L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___0_channel;
		int32_t L_6 = ___1_format;
		int32_t L_7 = ___2_dim;
		RuntimeArray* L_8;
		L_8 = Mesh_GetAllocArrayFromChannelImpl_m30C7972CA5A67CD01EBBDDE2FD8F48CE2F8F86F6(__this, L_5, L_6, L_7, NULL);
		V_2 = ((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)Castclass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___0_channel;
		Mesh_PrintErrorCantAccessChannel_mD80AC1870BC51714BE0C97B15D3E3D4EC42AC85E(__this, L_9, NULL);
	}

IL_0035:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)0);
		V_2 = L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* Mesh_GetAllocArrayFromChannel_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m0D5663B28C29E5FBEB421D61D57B2DF1D471C2F4_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_2 = NULL;
	{
		bool L_0;
		L_0 = Mesh_get_canAccess_m97F255BBB8C009D643920E2D095B6DB8868E3572(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___0_channel;
		bool L_3;
		L_3 = Mesh_HasVertexAttribute_m6FA9574E4DEE19158535F93281791AD6FB550595(__this, L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___0_channel;
		int32_t L_6 = ___1_format;
		int32_t L_7 = ___2_dim;
		RuntimeArray* L_8;
		L_8 = Mesh_GetAllocArrayFromChannelImpl_m30C7972CA5A67CD01EBBDDE2FD8F48CE2F8F86F6(__this, L_5, L_6, L_7, NULL);
		V_2 = ((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)Castclass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___0_channel;
		Mesh_PrintErrorCantAccessChannel_mD80AC1870BC51714BE0C97B15D3E3D4EC42AC85E(__this, L_9, NULL);
	}

IL_0035:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_10 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)0);
		V_2 = L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Mesh_GetAllocArrayFromChannel_TisIl2CppFullySharedGenericAny_m8B7685BD0F7A25A9C8D727A229B5E14195FF0832_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	{
		bool L_0;
		L_0 = Mesh_get_canAccess_m97F255BBB8C009D643920E2D095B6DB8868E3572(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___0_channel;
		bool L_3;
		L_3 = Mesh_HasVertexAttribute_m6FA9574E4DEE19158535F93281791AD6FB550595(__this, L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___0_channel;
		int32_t L_6 = ___1_format;
		int32_t L_7 = ___2_dim;
		RuntimeArray* L_8;
		L_8 = Mesh_GetAllocArrayFromChannelImpl_m30C7972CA5A67CD01EBBDDE2FD8F48CE2F8F86F6(__this, L_5, L_6, L_7, NULL);
		V_2 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)Castclass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___0_channel;
		Mesh_PrintErrorCantAccessChannel_mD80AC1870BC51714BE0C97B15D3E3D4EC42AC85E(__this, L_9, NULL);
	}

IL_0035:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)0);
		V_2 = L_10;
		goto IL_003e;
	}

IL_003e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetListForChannel_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m75054A04FEDF611053F08A3AB54C0EFCEC104971_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_buffer, int32_t ___1_capacity, int32_t ___2_channel, int32_t ___3_dim, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___0_buffer;
		int32_t L_1 = ___1_capacity;
		int32_t L_2 = ___2_channel;
		int32_t L_3 = ___3_dim;
		Mesh_GetListForChannel_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC051E1416B4FAD036D26589F95566F03BFFEC4D0(__this, L_0, L_1, L_2, L_3, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetListForChannel_TisIl2CppFullySharedGenericAny_m3C0314E4FE25C35582147104F12720CA05C96C12_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_buffer, int32_t ___1_capacity, int32_t ___2_channel, int32_t ___3_dim, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_buffer;
		int32_t L_1 = ___1_capacity;
		int32_t L_2 = ___2_channel;
		int32_t L_3 = ___3_dim;
		((  void (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_0, L_1, L_2, L_3, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetListForChannel_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC051E1416B4FAD036D26589F95566F03BFFEC4D0_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_buffer, int32_t ___1_capacity, int32_t ___2_channel, int32_t ___3_dim, int32_t ___4_channelType, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___0_buffer;
		NullCheck(L_0);
		List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		bool L_1;
		L_1 = Mesh_get_canAccess_m97F255BBB8C009D643920E2D095B6DB8868E3572(__this, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___2_channel;
		Mesh_PrintErrorCantAccessChannel_mD80AC1870BC51714BE0C97B15D3E3D4EC42AC85E(__this, L_3, NULL);
		goto IL_004a;
	}

IL_0020:
	{
		int32_t L_4 = ___2_channel;
		bool L_5;
		L_5 = Mesh_HasVertexAttribute_m6FA9574E4DEE19158535F93281791AD6FB550595(__this, L_4, NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		goto IL_004a;
	}

IL_0030:
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_7 = ___0_buffer;
		int32_t L_8 = ___1_capacity;
		NoAllocHelpers_EnsureListElemCount_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCC69B853EEBECBAF3DCBFD8A0B26691430128057(L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_9 = ___2_channel;
		int32_t L_10 = ___4_channelType;
		int32_t L_11 = ___3_dim;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_12 = ___0_buffer;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_13;
		L_13 = NoAllocHelpers_ExtractArrayFromList_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3240EFAF30E1B4FED168A81B9F7A60401304D6C1_inline(L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		Mesh_GetArrayFromChannelImpl_mBCA166B62E25425D987638F2B4876613D113E66E(__this, L_9, L_10, L_11, (RuntimeArray*)L_13, NULL);
	}

IL_004a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetListForChannel_TisIl2CppFullySharedGenericAny_m4C9366727752A458145A53F5AB1CFE318304E369_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_buffer, int32_t ___1_capacity, int32_t ___2_channel, int32_t ___3_dim, int32_t ___4_channelType, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_buffer;
		NullCheck(L_0);
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		bool L_1;
		L_1 = Mesh_get_canAccess_m97F255BBB8C009D643920E2D095B6DB8868E3572(__this, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___2_channel;
		Mesh_PrintErrorCantAccessChannel_mD80AC1870BC51714BE0C97B15D3E3D4EC42AC85E(__this, L_3, NULL);
		goto IL_004a;
	}

IL_0020:
	{
		int32_t L_4 = ___2_channel;
		bool L_5;
		L_5 = Mesh_HasVertexAttribute_m6FA9574E4DEE19158535F93281791AD6FB550595(__this, L_4, NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		goto IL_004a;
	}

IL_0030:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_7 = ___0_buffer;
		int32_t L_8 = ___1_capacity;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_9 = ___2_channel;
		int32_t L_10 = ___4_channelType;
		int32_t L_11 = ___3_dim;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_12 = ___0_buffer;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13;
		L_13 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		Mesh_GetArrayFromChannelImpl_mBCA166B62E25425D987638F2B4876613D113E66E(__this, L_9, L_10, L_11, (RuntimeArray*)L_13, NULL);
	}

IL_004a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetUVsImpl_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3E1A3BC6C031ACC6AADE8D351A25CC3766047B5B_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_uvIndex, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___1_uvs, int32_t ___2_dim, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___1_uvs;
		V_0 = (bool)((((RuntimeObject*)(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB76C1A87204BBFDC1EB8755ECBEA3E6B651710A2)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7ECFB57A0D1B5CE741045B6B75AB6521BC5B5C0F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0019:
	{
		int32_t L_3 = ___0_uvIndex;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = ___0_uvIndex;
		G_B5_0 = ((((int32_t)L_4) > ((int32_t)7))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 1;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0033:
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_7 = ___1_uvs;
		int32_t L_8;
		L_8 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C(__this, NULL);
		int32_t L_9 = ___0_uvIndex;
		int32_t L_10;
		L_10 = Mesh_GetUVChannel_m52936A342F9C96EB7F0214A2F310018E1A25A689(L_9, NULL);
		int32_t L_11 = ___2_dim;
		Mesh_GetListForChannel_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m75054A04FEDF611053F08A3AB54C0EFCEC104971(__this, L_7, L_8, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetUVsImpl_TisIl2CppFullySharedGenericAny_m75DB6782EC9B884817276EAF8AE73E3B6A67C436_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_uvIndex, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___1_uvs, int32_t ___2_dim, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___1_uvs;
		V_0 = (bool)((((RuntimeObject*)(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB76C1A87204BBFDC1EB8755ECBEA3E6B651710A2)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7ECFB57A0D1B5CE741045B6B75AB6521BC5B5C0F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0019:
	{
		int32_t L_3 = ___0_uvIndex;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = ___0_uvIndex;
		G_B5_0 = ((((int32_t)L_4) > ((int32_t)7))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 1;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0033:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_7 = ___1_uvs;
		int32_t L_8;
		L_8 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C(__this, NULL);
		int32_t L_9 = ___0_uvIndex;
		int32_t L_10;
		L_10 = Mesh_GetUVChannel_m52936A342F9C96EB7F0214A2F310018E1A25A689(L_9, NULL);
		int32_t L_11 = ___2_dim;
		((  void (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_7, L_8, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetArrayForChannel_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m098572BAF5EE15608694C1DF6CCB1E98C0F79DC9_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___1_values, int32_t ___2_flags, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ___1_values;
		int32_t L_1;
		L_1 = NoAllocHelpers_SafeLength_m4EC7245A2215693CE163E3F6ECFB105D742087DF((RuntimeArray*)L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___0_channel;
		int32_t L_3 = ___0_channel;
		int32_t L_4;
		L_4 = Mesh_DefaultDimensionForChannel_mCE2BFE4516CB37EA677E8671997D986FF654C130(L_3, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = ___1_values;
		int32_t L_6 = V_0;
		int32_t L_7 = V_0;
		int32_t L_8 = ___2_flags;
		Mesh_SetSizedArrayForChannel_mBF8A0B7A6E58552C4142CD22FF31E7A0E125EC93(__this, L_2, (int32_t)0, L_4, (RuntimeArray*)L_5, L_6, 0, L_7, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetArrayForChannel_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5FABB4DB3FDD7E9CC0DEB1F9C59DFC855DC9BD81_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___1_values, int32_t ___2_flags, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___1_values;
		int32_t L_1;
		L_1 = NoAllocHelpers_SafeLength_m4EC7245A2215693CE163E3F6ECFB105D742087DF((RuntimeArray*)L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___0_channel;
		int32_t L_3 = ___0_channel;
		int32_t L_4;
		L_4 = Mesh_DefaultDimensionForChannel_mCE2BFE4516CB37EA677E8671997D986FF654C130(L_3, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = ___1_values;
		int32_t L_6 = V_0;
		int32_t L_7 = V_0;
		int32_t L_8 = ___2_flags;
		Mesh_SetSizedArrayForChannel_mBF8A0B7A6E58552C4142CD22FF31E7A0E125EC93(__this, L_2, (int32_t)0, L_4, (RuntimeArray*)L_5, L_6, 0, L_7, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetArrayForChannel_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2FC472762F9B6300501AECCA6B09907BE23881B8_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___1_values, int32_t ___2_flags, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___1_values;
		int32_t L_1;
		L_1 = NoAllocHelpers_SafeLength_m4EC7245A2215693CE163E3F6ECFB105D742087DF((RuntimeArray*)L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___0_channel;
		int32_t L_3 = ___0_channel;
		int32_t L_4;
		L_4 = Mesh_DefaultDimensionForChannel_mCE2BFE4516CB37EA677E8671997D986FF654C130(L_3, NULL);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_5 = ___1_values;
		int32_t L_6 = V_0;
		int32_t L_7 = V_0;
		int32_t L_8 = ___2_flags;
		Mesh_SetSizedArrayForChannel_mBF8A0B7A6E58552C4142CD22FF31E7A0E125EC93(__this, L_2, (int32_t)0, L_4, (RuntimeArray*)L_5, L_6, 0, L_7, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetArrayForChannel_TisIl2CppFullySharedGenericAny_mD800FD5A0D51609D7A33848B32F5E5FB8ABD7AA8_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, int32_t ___2_flags, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___1_values;
		int32_t L_1;
		L_1 = NoAllocHelpers_SafeLength_m4EC7245A2215693CE163E3F6ECFB105D742087DF((RuntimeArray*)L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___0_channel;
		int32_t L_3 = ___0_channel;
		int32_t L_4;
		L_4 = Mesh_DefaultDimensionForChannel_mCE2BFE4516CB37EA677E8671997D986FF654C130(L_3, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___1_values;
		int32_t L_6 = V_0;
		int32_t L_7 = V_0;
		int32_t L_8 = ___2_flags;
		Mesh_SetSizedArrayForChannel_mBF8A0B7A6E58552C4142CD22FF31E7A0E125EC93(__this, L_2, (int32_t)0, L_4, (RuntimeArray*)L_5, L_6, 0, L_7, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetArrayForChannel_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mF15F7E92DAD56CAA1EB2DD6DB0113D94DAC6DA0F_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___3_values, int32_t ___4_flags, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ___3_values;
		int32_t L_1;
		L_1 = NoAllocHelpers_SafeLength_m4EC7245A2215693CE163E3F6ECFB105D742087DF((RuntimeArray*)L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___0_channel;
		int32_t L_3 = ___1_format;
		int32_t L_4 = ___2_dim;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_5 = ___3_values;
		int32_t L_6 = V_0;
		int32_t L_7 = V_0;
		int32_t L_8 = ___4_flags;
		Mesh_SetSizedArrayForChannel_mBF8A0B7A6E58552C4142CD22FF31E7A0E125EC93(__this, L_2, L_3, L_4, (RuntimeArray*)L_5, L_6, 0, L_7, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetArrayForChannel_TisIl2CppFullySharedGenericAny_m42AC46A1F8F6B302B09438B8B72F2845F8550B55_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___3_values, int32_t ___4_flags, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___3_values;
		int32_t L_1;
		L_1 = NoAllocHelpers_SafeLength_m4EC7245A2215693CE163E3F6ECFB105D742087DF((RuntimeArray*)L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___0_channel;
		int32_t L_3 = ___1_format;
		int32_t L_4 = ___2_dim;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___3_values;
		int32_t L_6 = V_0;
		int32_t L_7 = V_0;
		int32_t L_8 = ___4_flags;
		Mesh_SetSizedArrayForChannel_mBF8A0B7A6E58552C4142CD22FF31E7A0E125EC93(__this, L_2, L_3, L_4, (RuntimeArray*)L_5, L_6, 0, L_7, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8F7DC4CDB7167CE6FB5836C46CD04502103FCDBC_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___1_values, int32_t ___2_start, int32_t ___3_length, int32_t ___4_flags, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___0_channel;
		int32_t L_1 = ___0_channel;
		int32_t L_2;
		L_2 = Mesh_DefaultDimensionForChannel_mCE2BFE4516CB37EA677E8671997D986FF654C130(L_1, NULL);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = ___1_values;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4;
		L_4 = NoAllocHelpers_ExtractArrayFromList_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA4886D846FD5578DC9261B5CB7BE47D6FD70498D_inline(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_5 = ___1_values;
		int32_t L_6;
		L_6 = NoAllocHelpers_SafeLength_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB85A915B5401A23E2802BF2945052148967220E2(L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_7 = ___2_start;
		int32_t L_8 = ___3_length;
		int32_t L_9 = ___4_flags;
		Mesh_SetSizedArrayForChannel_mBF8A0B7A6E58552C4142CD22FF31E7A0E125EC93(__this, L_0, (int32_t)0, L_2, (RuntimeArray*)L_4, L_6, L_7, L_8, L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC2CC3E5A92817BE4B0B4489EB56CD4B188C6B7E4_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___1_values, int32_t ___2_start, int32_t ___3_length, int32_t ___4_flags, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___0_channel;
		int32_t L_1 = ___0_channel;
		int32_t L_2;
		L_2 = Mesh_DefaultDimensionForChannel_mCE2BFE4516CB37EA677E8671997D986FF654C130(L_1, NULL);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_3 = ___1_values;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4;
		L_4 = NoAllocHelpers_ExtractArrayFromList_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3240EFAF30E1B4FED168A81B9F7A60401304D6C1_inline(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_5 = ___1_values;
		int32_t L_6;
		L_6 = NoAllocHelpers_SafeLength_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m201A65A21E6A7CC7D1A0C35A7D5CEBE2DD8A49B2(L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_7 = ___2_start;
		int32_t L_8 = ___3_length;
		int32_t L_9 = ___4_flags;
		Mesh_SetSizedArrayForChannel_mBF8A0B7A6E58552C4142CD22FF31E7A0E125EC93(__this, L_0, (int32_t)0, L_2, (RuntimeArray*)L_4, L_6, L_7, L_8, L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisIl2CppFullySharedGenericAny_mCBF1727F7B52ABD22194E2082DC9CC8BEBB3B410_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___1_values, int32_t ___2_start, int32_t ___3_length, int32_t ___4_flags, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___0_channel;
		int32_t L_1 = ___0_channel;
		int32_t L_2;
		L_2 = Mesh_DefaultDimensionForChannel_mCE2BFE4516CB37EA677E8671997D986FF654C130(L_1, NULL);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = ___1_values;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4;
		L_4 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_5 = ___1_values;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_7 = ___2_start;
		int32_t L_8 = ___3_length;
		int32_t L_9 = ___4_flags;
		Mesh_SetSizedArrayForChannel_mBF8A0B7A6E58552C4142CD22FF31E7A0E125EC93(__this, L_0, (int32_t)0, L_2, (RuntimeArray*)L_4, L_6, L_7, L_8, L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m8A21E236DB17FF876D11B7092FBFDAB184BDEF46_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___3_values, int32_t ___4_start, int32_t ___5_length, int32_t ___6_flags, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___0_channel;
		int32_t L_1 = ___1_format;
		int32_t L_2 = ___2_dim;
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_3 = ___3_values;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_4;
		L_4 = NoAllocHelpers_ExtractArrayFromList_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m55444175C4EC5B38827E5C10E65A408D81421E55_inline(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_5 = ___3_values;
		int32_t L_6;
		L_6 = NoAllocHelpers_SafeLength_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mDE7B561CE172B3EB697DE30C3A79C67F70018E6F(L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_7 = ___4_start;
		int32_t L_8 = ___5_length;
		int32_t L_9 = ___6_flags;
		Mesh_SetSizedArrayForChannel_mBF8A0B7A6E58552C4142CD22FF31E7A0E125EC93(__this, L_0, L_1, L_2, (RuntimeArray*)L_4, L_6, L_7, L_8, L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC5F005A2C8491C9C9E68663E4A501DC3A7E9DDDC_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___3_values, int32_t ___4_start, int32_t ___5_length, int32_t ___6_flags, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___0_channel;
		int32_t L_1 = ___1_format;
		int32_t L_2 = ___2_dim;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_3 = ___3_values;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4;
		L_4 = NoAllocHelpers_ExtractArrayFromList_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3240EFAF30E1B4FED168A81B9F7A60401304D6C1_inline(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_5 = ___3_values;
		int32_t L_6;
		L_6 = NoAllocHelpers_SafeLength_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m201A65A21E6A7CC7D1A0C35A7D5CEBE2DD8A49B2(L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_7 = ___4_start;
		int32_t L_8 = ___5_length;
		int32_t L_9 = ___6_flags;
		Mesh_SetSizedArrayForChannel_mBF8A0B7A6E58552C4142CD22FF31E7A0E125EC93(__this, L_0, L_1, L_2, (RuntimeArray*)L_4, L_6, L_7, L_8, L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisIl2CppFullySharedGenericAny_m8CD03D0C8BED9E29E6B5AB8556BDFDD8EA1C0D7C_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___3_values, int32_t ___4_start, int32_t ___5_length, int32_t ___6_flags, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___0_channel;
		int32_t L_1 = ___1_format;
		int32_t L_2 = ___2_dim;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = ___3_values;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4;
		L_4 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_5 = ___3_values;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_7 = ___4_start;
		int32_t L_8 = ___5_length;
		int32_t L_9 = ___6_flags;
		Mesh_SetSizedArrayForChannel_mBF8A0B7A6E58552C4142CD22FF31E7A0E125EC93(__this, L_0, L_1, L_2, (RuntimeArray*)L_4, L_6, L_7, L_8, L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUvsImpl_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6A0DAC2B9AEC9F456719D378C17E22716998E131_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_uvIndex, int32_t ___1_dim, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___2_uvs, int32_t ___3_start, int32_t ___4_length, int32_t ___5_flags, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_uvIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___0_uvIndex;
		G_B3_0 = ((((int32_t)L_1) > ((int32_t)7))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46, NULL);
		goto IL_0034;
	}

IL_001e:
	{
		int32_t L_3 = ___0_uvIndex;
		int32_t L_4;
		L_4 = Mesh_GetUVChannel_m52936A342F9C96EB7F0214A2F310018E1A25A689(L_3, NULL);
		int32_t L_5 = ___1_dim;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_6 = ___2_uvs;
		int32_t L_7 = ___3_start;
		int32_t L_8 = ___4_length;
		int32_t L_9 = ___5_flags;
		Mesh_SetListForChannel_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC5F005A2C8491C9C9E68663E4A501DC3A7E9DDDC(__this, L_4, (int32_t)0, L_5, L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0034:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUvsImpl_TisIl2CppFullySharedGenericAny_m47B046E09149554CB1AD7C35FBFC128C4C9C914E_gshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_uvIndex, int32_t ___1_dim, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___2_uvs, int32_t ___3_start, int32_t ___4_length, int32_t ___5_flags, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_uvIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___0_uvIndex;
		G_B3_0 = ((((int32_t)L_1) > ((int32_t)7))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46, NULL);
		goto IL_0034;
	}

IL_001e:
	{
		int32_t L_3 = ___0_uvIndex;
		int32_t L_4;
		L_4 = Mesh_GetUVChannel_m52936A342F9C96EB7F0214A2F310018E1A25A689(L_3, NULL);
		int32_t L_5 = ___1_dim;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_6 = ___2_uvs;
		int32_t L_7 = ___3_start;
		int32_t L_8 = ___4_length;
		int32_t L_9 = ___5_flags;
		((  void (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t, int32_t, int32_t, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_4, (int32_t)0, L_5, L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0034:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventsHelper_SendEnterLeave_TisRuntimeObject_TisRuntimeObject_mA9FDCD2BEADD3CCAA145F8A362AC0AF11F7CD58F_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_previousTopElementUnderMouse, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___1_currentTopElementUnderMouse, RuntimeObject* ___2_triggerEvent, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_mousePosition, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_1 = NULL;
	int32_t V_2 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_3 = NULL;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* V_4 = NULL;
	bool V_5 = false;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	int32_t V_14 = 0;
	RuntimeObject* V_15 = NULL;
	bool V_16 = false;
	int32_t G_B3_0 = 0;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_previousTopElementUnderMouse;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___0_previousTopElementUnderMouse;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(L_1, NULL);
		G_B3_0 = ((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		V_5 = (bool)G_B3_0;
		bool L_3 = V_5;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		___0_previousTopElementUnderMouse = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)NULL;
	}

IL_001b:
	{
		V_0 = 0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4 = ___0_previousTopElementUnderMouse;
		V_1 = L_4;
		goto IL_0037;
	}

IL_0021:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_6 = V_1;
		NullCheck(L_6);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_7;
		L_7 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_6, NULL);
		V_6 = L_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8;
		L_8 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_6), NULL);
		V_1 = L_8;
	}

IL_0037:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_9 = V_1;
		V_7 = (bool)((!(((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_9) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_10 = V_7;
		if (L_10)
		{
			goto IL_0021;
		}
	}
	{
		V_2 = 0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_11 = ___1_currentTopElementUnderMouse;
		V_3 = L_11;
		goto IL_005d;
	}

IL_0047:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13 = V_3;
		NullCheck(L_13);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_14;
		L_14 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_13, NULL);
		V_6 = L_14;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15;
		L_15 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_6), NULL);
		V_3 = L_15;
	}

IL_005d:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_16 = V_3;
		V_8 = (bool)((!(((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_16) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_17 = V_8;
		if (L_17)
		{
			goto IL_0047;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_18 = ___0_previousTopElementUnderMouse;
		V_1 = L_18;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_19 = ___1_currentTopElementUnderMouse;
		V_3 = L_19;
		goto IL_00c3;
	}

IL_006d:
	{
		RuntimeObject* L_20 = ___2_triggerEvent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = ___3_mousePosition;
		RuntimeObject* L_22;
		L_22 = MouseEventBase_1_GetPooled_mF2E1FA826FA805E436D829345BBC0A65ADB0BF0B(L_20, L_21, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_9 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{
				{
					RuntimeObject* L_23 = V_9;
					if (!L_23)
					{
						goto IL_00ad;
					}
				}
				{
					RuntimeObject* L_24 = V_9;
					NullCheck((RuntimeObject*)L_24);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_24);
				}

IL_00ad:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_25 = V_9;
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_26 = V_1;
			NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_25);
			EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_25, L_26, NULL);
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_27 = V_1;
			RuntimeObject* L_28 = V_9;
			NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_27);
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(5, (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_27, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_28);
			goto IL_00ae;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ae:
	{
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_30 = V_1;
		NullCheck(L_30);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_31;
		L_31 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_30, NULL);
		V_6 = L_31;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_32;
		L_32 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_6), NULL);
		V_1 = L_32;
	}

IL_00c3:
	{
		int32_t L_33 = V_0;
		int32_t L_34 = V_2;
		V_10 = (bool)((((int32_t)L_33) > ((int32_t)L_34))? 1 : 0);
		bool L_35 = V_10;
		if (L_35)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var);
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_37;
		L_37 = VisualElementListPool_Get_m99F3D55FC85A740A48A062146D40D59F50107CC2(L_36, NULL);
		V_4 = L_37;
		goto IL_00f6;
	}

IL_00d7:
	{
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_38 = V_4;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_39 = V_3;
		NullCheck(L_38);
		List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_inline(L_38, L_39, List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var);
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_41 = V_3;
		NullCheck(L_41);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_42;
		L_42 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_41, NULL);
		V_6 = L_42;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_43;
		L_43 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_6), NULL);
		V_3 = L_43;
	}

IL_00f6:
	{
		int32_t L_44 = V_2;
		int32_t L_45 = V_0;
		V_11 = (bool)((((int32_t)L_44) > ((int32_t)L_45))? 1 : 0);
		bool L_46 = V_11;
		if (L_46)
		{
			goto IL_00d7;
		}
	}
	{
		goto IL_016d;
	}

IL_0102:
	{
		RuntimeObject* L_47 = ___2_triggerEvent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = ___3_mousePosition;
		RuntimeObject* L_49;
		L_49 = MouseEventBase_1_GetPooled_mF2E1FA826FA805E436D829345BBC0A65ADB0BF0B(L_47, L_48, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_12 = L_49;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_012c:
			{
				{
					RuntimeObject* L_50 = V_12;
					if (!L_50)
					{
						goto IL_0142;
					}
				}
				{
					RuntimeObject* L_51 = V_12;
					NullCheck((RuntimeObject*)L_51);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_51);
				}

IL_0142:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_52 = V_12;
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_53 = V_1;
			NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_52);
			EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_52, L_53, NULL);
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_54 = V_1;
			RuntimeObject* L_55 = V_12;
			NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_54);
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(5, (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_54, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_55);
			goto IL_0143;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0143:
	{
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_56 = V_4;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_57 = V_3;
		NullCheck(L_56);
		List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_inline(L_56, L_57, List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_58 = V_1;
		NullCheck(L_58);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_59;
		L_59 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_58, NULL);
		V_6 = L_59;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_60;
		L_60 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_6), NULL);
		V_1 = L_60;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_61 = V_3;
		NullCheck(L_61);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_62;
		L_62 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_61, NULL);
		V_6 = L_62;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_63;
		L_63 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_6), NULL);
		V_3 = L_63;
	}

IL_016d:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_64 = V_1;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_65 = V_3;
		V_13 = (bool)((((int32_t)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_64) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_65))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_66 = V_13;
		if (L_66)
		{
			goto IL_0102;
		}
	}
	{
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_67 = V_4;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_inline(L_67, List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_RuntimeMethod_var);
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_68, 1));
		goto IL_01df;
	}

IL_0187:
	{
		RuntimeObject* L_69 = ___2_triggerEvent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70 = ___3_mousePosition;
		RuntimeObject* L_71;
		L_71 = MouseEventBase_1_GetPooled_mF2E1FA826FA805E436D829345BBC0A65ADB0BF0B(L_69, L_70, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_15 = L_71;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01c1:
			{
				{
					RuntimeObject* L_72 = V_15;
					if (!L_72)
					{
						goto IL_01d7;
					}
				}
				{
					RuntimeObject* L_73 = V_15;
					NullCheck((RuntimeObject*)L_73);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_73);
				}

IL_01d7:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_74 = V_15;
			List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_75 = V_4;
			int32_t L_76 = V_14;
			NullCheck(L_75);
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_77;
			L_77 = List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092(L_75, L_76, List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
			NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_74);
			EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_74, L_77, NULL);
			List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_78 = V_4;
			int32_t L_79 = V_14;
			NullCheck(L_78);
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_80;
			L_80 = List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092(L_78, L_79, List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
			RuntimeObject* L_81 = V_15;
			NullCheck((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_80);
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(5, (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_80, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_81);
			goto IL_01d8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01d8:
	{
		int32_t L_82 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_82, 1));
	}

IL_01df:
	{
		int32_t L_83 = V_14;
		V_16 = (bool)((((int32_t)((((int32_t)L_83) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_84 = V_16;
		if (L_84)
		{
			goto IL_0187;
		}
	}
	{
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_85 = V_4;
		il2cpp_codegen_runtime_class_init_inline(VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var);
		VisualElementListPool_Release_mAF4ED38CC4F9A6E58B06F4B0BD13611F7DECBCFA(L_85, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiColumnController_BindCellItem_TisRuntimeObject_mB0270A9F745F2AE0DE677DFA715D859D4C285D8B_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_rowIndex, Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* ___2_column, RuntimeObject* ___3_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* L_0 = ___2_column;
		NullCheck(L_0);
		Action_2_tA1EAD43A5C76FF3E77D1705EC83B9AB7B1BE7D88* L_1;
		L_1 = Column_get_bindCell_m87B54CF94A95D41669E1B1E9F845C3E53B37C847_inline(L_0, NULL);
		V_0 = (bool)((!(((RuntimeObject*)(Action_2_tA1EAD43A5C76FF3E77D1705EC83B9AB7B1BE7D88*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* L_3 = ___2_column;
		NullCheck(L_3);
		Action_2_tA1EAD43A5C76FF3E77D1705EC83B9AB7B1BE7D88* L_4;
		L_4 = Column_get_bindCell_m87B54CF94A95D41669E1B1E9F845C3E53B37C847_inline(L_3, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_5 = ___0_ve;
		int32_t L_6 = ___1_rowIndex;
		NullCheck(L_4);
		Action_2_Invoke_mF5036A6D1FF31DA2E4CB571F6A0F904796417719_inline(L_4, L_5, L_6, NULL);
		goto IL_002b;
	}

IL_0020:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = ___0_ve;
		Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* L_8 = ___2_column;
		RuntimeObject* L_9 = ___3_item;
		il2cpp_codegen_runtime_class_init_inline(MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6_il2cpp_TypeInfo_var);
		MultiColumnController_DefaultBindCellItem_TisRuntimeObject_mE043596FF4C1439ECEEDFA1307911F3AB0902343(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiColumnController_BindCellItem_TisIl2CppFullySharedGenericAny_m33A460026F65F44B391C25C4A6B19810267BE782_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, int32_t ___1_rowIndex, Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* ___2_column, Il2CppFullySharedGenericAny ___3_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t170498605EF2E76236CB0B1E3C9AD153B9B4723B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t170498605EF2E76236CB0B1E3C9AD153B9B4723B);
	bool V_0 = false;
	{
		Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* L_0 = ___2_column;
		NullCheck(L_0);
		Action_2_tA1EAD43A5C76FF3E77D1705EC83B9AB7B1BE7D88* L_1;
		L_1 = Column_get_bindCell_m87B54CF94A95D41669E1B1E9F845C3E53B37C847_inline(L_0, NULL);
		V_0 = (bool)((!(((RuntimeObject*)(Action_2_tA1EAD43A5C76FF3E77D1705EC83B9AB7B1BE7D88*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* L_3 = ___2_column;
		NullCheck(L_3);
		Action_2_tA1EAD43A5C76FF3E77D1705EC83B9AB7B1BE7D88* L_4;
		L_4 = Column_get_bindCell_m87B54CF94A95D41669E1B1E9F845C3E53B37C847_inline(L_3, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_5 = ___0_ve;
		int32_t L_6 = ___1_rowIndex;
		NullCheck(L_4);
		Action_2_Invoke_mF5036A6D1FF31DA2E4CB571F6A0F904796417719_inline(L_4, L_5, L_6, NULL);
		goto IL_002b;
	}

IL_0020:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = ___0_ve;
		Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* L_8 = ___2_column;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_item : &___3_item), SizeOf_T_t170498605EF2E76236CB0B1E3C9AD153B9B4723B);
		il2cpp_codegen_runtime_class_init_inline(MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6_il2cpp_TypeInfo_var);
		InvokerActionInvoker3< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_7, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_9: *(void**)L_9));
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiColumnController_BindItem_TisRuntimeObject_m8EE2F2FAA5DE37984AA5FBF42183354742556537_gshared (MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_element, int32_t ___1_index, RuntimeObject* ___2_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA48C3C80A6FB19382E0268E36BA1D3ACFBDF700C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tDED90A5957122B27D452CE2D6BF2102E19B274AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t6C561189597D7102947B2C2D0FCE829F1CFCE163_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResolvedStyle_t6A3530BA6147B091C278593F21F86B09CD42BE89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* V_2 = NULL;
	ColumnData_t0AB07CB43923527FF3700146C0F98D09B673492A* V_3 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_4 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_5 = NULL;
	bool V_6 = false;
	{
		V_0 = 0;
		MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D* L_0 = __this->___m_MultiColumnHeader;
		NullCheck(L_0);
		Columns_t487EAF3B634F6D919D58F1927099A8883964831B* L_1;
		L_1 = MultiColumnCollectionHeader_get_columns_mCD478DC5065BA9B43AD13D998169055EAF1C3655_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Columns_get_visibleList_m4E86EF55B73DA013C449A7C1D9777002AF1496AC(L_1, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tDED90A5957122B27D452CE2D6BF2102E19B274AA_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ae:
			{
				{
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a1_1;
			}

IL_001f_1:
			{
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* L_7;
				L_7 = InterfaceFuncInvoker0< Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* >::Invoke(0, IEnumerator_1_t6C561189597D7102947B2C2D0FCE829F1CFCE163_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D* L_8 = __this->___m_MultiColumnHeader;
				NullCheck(L_8);
				Dictionary_2_t1C6F670EE6B3EEEEFF2CBA243476B8AC9C173D11* L_9;
				L_9 = MultiColumnCollectionHeader_get_columnDataMap_mA525250831644003B806C2732E14BDA37BC1A862_inline(L_8, NULL);
				Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* L_10 = V_2;
				NullCheck(L_9);
				bool L_11;
				L_11 = Dictionary_2_TryGetValue_mA48C3C80A6FB19382E0268E36BA1D3ACFBDF700C(L_9, L_10, (&V_3), Dictionary_2_TryGetValue_mA48C3C80A6FB19382E0268E36BA1D3ACFBDF700C_RuntimeMethod_var);
				V_6 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
				bool L_12 = V_6;
				if (!L_12)
				{
					goto IL_0045_1;
				}
			}
			{
				goto IL_00a1_1;
			}

IL_0045_1:
			{
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13 = ___0_element;
				int32_t L_14 = V_0;
				int32_t L_15 = L_14;
				V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
				NullCheck(L_13);
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_16;
				L_16 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693(L_13, L_15, NULL);
				V_4 = L_16;
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_17 = V_4;
				il2cpp_codegen_runtime_class_init_inline(MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6_il2cpp_TypeInfo_var);
				PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 L_18 = ((MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6_StaticFields*)il2cpp_codegen_static_fields_for(MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6_il2cpp_TypeInfo_var))->___bindableElementPropertyName;
				NullCheck(L_17);
				RuntimeObject* L_19;
				L_19 = VisualElement_GetProperty_m55B38972BE5AC52737BE671560381BDC2C8EAAD2(L_17, L_18, NULL);
				V_5 = ((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)IsInstClass((RuntimeObject*)L_19, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var));
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_20 = V_5;
				int32_t L_21 = ___1_index;
				Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* L_22 = V_2;
				RuntimeObject* L_23 = ___2_item;
				MultiColumnController_BindCellItem_TisRuntimeObject_mB0270A9F745F2AE0DE677DFA715D859D4C285D8B(L_20, L_21, L_22, L_23, il2cpp_rgctx_method(method->rgctx_data, 1));
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_24 = V_4;
				NullCheck(L_24);
				RuntimeObject* L_25;
				L_25 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_24, NULL);
				ColumnData_t0AB07CB43923527FF3700146C0F98D09B673492A* L_26 = V_3;
				NullCheck(L_26);
				MultiColumnHeaderColumn_t6F44266EE1B6EEB83465A7FE3BA6A6C7CBF8F9B4* L_27;
				L_27 = ColumnData_get_control_m2104649E1052F0506708BD93DC9DDAE2CA34B700_inline(L_26, NULL);
				NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_27);
				RuntimeObject* L_28;
				L_28 = VisualElement_get_resolvedStyle_m3885B7534A94E0BCE024A9621465A0F273DA0AEB((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_27, NULL);
				NullCheck(L_28);
				float L_29;
				L_29 = InterfaceFuncInvoker0< float >::Invoke(75, IResolvedStyle_t6A3530BA6147B091C278593F21F86B09CD42BE89_il2cpp_TypeInfo_var, L_28);
				StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_30;
				L_30 = StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019(L_29, NULL);
				NullCheck(L_25);
				InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(159, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_25, L_30);
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_31 = V_4;
				PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 L_32 = ((MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6_StaticFields*)il2cpp_codegen_static_fields_for(MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6_il2cpp_TypeInfo_var))->___k_BoundColumnVePropertyName;
				Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* L_33 = V_2;
				NullCheck(L_31);
				VisualElement_SetProperty_m2EB182A4E57AD33CACC3DC0209DCDB5D8773F7E6(L_31, L_32, (RuntimeObject*)L_33, NULL);
			}

IL_00a1_1:
			{
				RuntimeObject* L_34 = V_1;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_001f_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiColumnController_BindItem_TisIl2CppFullySharedGenericAny_mFC31CD60C0ED70140EC840BBFDD7FD65621EF78A_gshared (MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_element, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA48C3C80A6FB19382E0268E36BA1D3ACFBDF700C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tDED90A5957122B27D452CE2D6BF2102E19B274AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t6C561189597D7102947B2C2D0FCE829F1CFCE163_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResolvedStyle_t6A3530BA6147B091C278593F21F86B09CD42BE89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t4DA842B8215564E17902861D7059B972EDBFF51E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T_t4DA842B8215564E17902861D7059B972EDBFF51E);
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* V_2 = NULL;
	ColumnData_t0AB07CB43923527FF3700146C0F98D09B673492A* V_3 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_4 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_5 = NULL;
	bool V_6 = false;
	{
		V_0 = 0;
		MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D* L_0 = __this->___m_MultiColumnHeader;
		NullCheck(L_0);
		Columns_t487EAF3B634F6D919D58F1927099A8883964831B* L_1;
		L_1 = MultiColumnCollectionHeader_get_columns_mCD478DC5065BA9B43AD13D998169055EAF1C3655_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Columns_get_visibleList_m4E86EF55B73DA013C449A7C1D9777002AF1496AC(L_1, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tDED90A5957122B27D452CE2D6BF2102E19B274AA_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ae:
			{
				{
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a1_1;
			}

IL_001f_1:
			{
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* L_7;
				L_7 = InterfaceFuncInvoker0< Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* >::Invoke(0, IEnumerator_1_t6C561189597D7102947B2C2D0FCE829F1CFCE163_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D* L_8 = __this->___m_MultiColumnHeader;
				NullCheck(L_8);
				Dictionary_2_t1C6F670EE6B3EEEEFF2CBA243476B8AC9C173D11* L_9;
				L_9 = MultiColumnCollectionHeader_get_columnDataMap_mA525250831644003B806C2732E14BDA37BC1A862_inline(L_8, NULL);
				Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* L_10 = V_2;
				NullCheck(L_9);
				bool L_11;
				L_11 = Dictionary_2_TryGetValue_mA48C3C80A6FB19382E0268E36BA1D3ACFBDF700C(L_9, L_10, (&V_3), Dictionary_2_TryGetValue_mA48C3C80A6FB19382E0268E36BA1D3ACFBDF700C_RuntimeMethod_var);
				V_6 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
				bool L_12 = V_6;
				if (!L_12)
				{
					goto IL_0045_1;
				}
			}
			{
				goto IL_00a1_1;
			}

IL_0045_1:
			{
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13 = ___0_element;
				int32_t L_14 = V_0;
				int32_t L_15 = L_14;
				V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
				NullCheck(L_13);
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_16;
				L_16 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693(L_13, L_15, NULL);
				V_4 = L_16;
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_17 = V_4;
				il2cpp_codegen_runtime_class_init_inline(MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6_il2cpp_TypeInfo_var);
				PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 L_18 = ((MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6_StaticFields*)il2cpp_codegen_static_fields_for(MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6_il2cpp_TypeInfo_var))->___bindableElementPropertyName;
				NullCheck(L_17);
				RuntimeObject* L_19;
				L_19 = VisualElement_GetProperty_m55B38972BE5AC52737BE671560381BDC2C8EAAD2(L_17, L_18, NULL);
				V_5 = ((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)IsInstClass((RuntimeObject*)L_19, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var));
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_20 = V_5;
				int32_t L_21 = ___1_index;
				Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* L_22 = V_2;
				il2cpp_codegen_memcpy(L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___2_item : &___2_item), SizeOf_T_t4DA842B8215564E17902861D7059B972EDBFF51E);
				InvokerActionInvoker4< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_20, L_21, L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_23: *(void**)L_23));
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_24 = V_4;
				NullCheck(L_24);
				RuntimeObject* L_25;
				L_25 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_24, NULL);
				ColumnData_t0AB07CB43923527FF3700146C0F98D09B673492A* L_26 = V_3;
				NullCheck(L_26);
				MultiColumnHeaderColumn_t6F44266EE1B6EEB83465A7FE3BA6A6C7CBF8F9B4* L_27;
				L_27 = ColumnData_get_control_m2104649E1052F0506708BD93DC9DDAE2CA34B700_inline(L_26, NULL);
				NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_27);
				RuntimeObject* L_28;
				L_28 = VisualElement_get_resolvedStyle_m3885B7534A94E0BCE024A9621465A0F273DA0AEB((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_27, NULL);
				NullCheck(L_28);
				float L_29;
				L_29 = InterfaceFuncInvoker0< float >::Invoke(75, IResolvedStyle_t6A3530BA6147B091C278593F21F86B09CD42BE89_il2cpp_TypeInfo_var, L_28);
				StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_30;
				L_30 = StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019(L_29, NULL);
				NullCheck(L_25);
				InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(159, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_25, L_30);
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_31 = V_4;
				PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 L_32 = ((MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6_StaticFields*)il2cpp_codegen_static_fields_for(MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6_il2cpp_TypeInfo_var))->___k_BoundColumnVePropertyName;
				Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* L_33 = V_2;
				NullCheck(L_31);
				VisualElement_SetProperty_m2EB182A4E57AD33CACC3DC0209DCDB5D8773F7E6(L_31, L_32, (RuntimeObject*)L_33, NULL);
			}

IL_00a1_1:
			{
				RuntimeObject* L_34 = V_1;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_001f_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiColumnController_DefaultBindCellItem_TisRuntimeObject_mE043596FF4C1439ECEEDFA1307911F3AB0902343_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* ___1_column, RuntimeObject* ___2_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* V_0 = NULL;
	bool V_1 = false;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		V_0 = ((Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70*)IsInstClass((RuntimeObject*)L_0, Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70_il2cpp_TypeInfo_var));
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_3 = V_0;
		NullCheck((___2_item));
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3, (___2_item));
		NullCheck((TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0*)L_3);
		VirtualActionInvoker1< String_t* >::Invoke(201, (TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0*)L_3, L_4);
	}

IL_0026:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiColumnController_DefaultBindCellItem_TisIl2CppFullySharedGenericAny_m9B9DEF49C3CDDF6CD29CA346D626CB62D03854B5_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ve, Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* ___1_column, Il2CppFullySharedGenericAny ___2_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* V_0 = NULL;
	bool V_1 = false;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_ve;
		V_0 = ((Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70*)IsInstClass((RuntimeObject*)L_0, Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70_il2cpp_TypeInfo_var));
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		Label_tC160668F9119CE0F5567021FB208E64A5B1C5B70* L_3 = V_0;
		String_t* L_5;
		L_5 = ConstrainedFuncInvoker0< String_t* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 1), L_4, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___2_item : &___2_item));
		NullCheck((TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0*)L_3);
		VirtualActionInvoker1< String_t* >::Invoke(201, (TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0*)L_3, L_5);
	}

IL_0026:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m80E640F909CF44B11BAA14373E8DA1D738DE6976_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mB0E6C722DFEFFE3B487329BF6927CAE5E1503D89_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5FD897FA0026322EBCFF933FD6C54E43C38A0AC1 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m40BF337036199BB3C5FE16C61E3F9C4B3EB1183F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t5FD897FA0026322EBCFF933FD6C54E43C38A0AC1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t5FD897FA0026322EBCFF933FD6C54E43C38A0AC1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t5FD897FA0026322EBCFF933FD6C54E43C38A0AC1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t5FD897FA0026322EBCFF933FD6C54E43C38A0AC1));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t5FD897FA0026322EBCFF933FD6C54E43C38A0AC1 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t5FD897FA0026322EBCFF933FD6C54E43C38A0AC1 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t5FD897FA0026322EBCFF933FD6C54E43C38A0AC1 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m78078BBD88FE66CA0836BD408C17B7A555CA5238_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9084C95DCF71501F440D82C0A261927C7987EE6F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mFEB8AEAAAFF7FA2C9F9DB47C43E9EBA4FB2B85FA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mCB1ED8108D346EEA8BDCBC77907AE885A5E72441_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mD7CEBD73999042AAC575D52A40749352CD4C0D60_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD9D29EE5CE27F4BFD0168818BF064EC5B3672F39_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m32FF6C84613320EA404369B17E3ED90B58B06049_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9A085600C320307AD71C833F0352693C75103D4C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mDD01532369407B5BA1AC28EFA2E998C47C0AA022_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		void* L_0 = ___0_dataPointer;
		(&V_1)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_1)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_1)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mCD832837FF5CE235B506272835BA049D56968E2F_gshared (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 ___0_nativeArray, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m62C1DF2ADFC9225AEEE2D68AFD87666094291721_gshared (NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 ___0_nativeArray, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8E5335741788115AF07635B3B9C543C6BA1F2D3C_gshared (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___0_nativeArray, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m3687E938D6A361C1C9500F894455AD0E14BBF0C8_gshared (NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 ___0_nativeArray, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B NativeSliceExtensions_Slice_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m3BE9AFF11F3B0C3092F81D506EB518EF8280E369_gshared (NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_mFCA72E41A56CB5CF71EB01A4A4D66B431F8932DA((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 NativeSliceExtensions_Slice_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m67CB4FE693AB4570CB58B357AAB28D0AC4162C93_gshared (NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m546F4FC4F00E93F0730BE9C5DC7648F384B6FB75((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F NativeSliceExtensions_Slice_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mFCFE71D2C05399DB0A2F62F87B9F938E78E964B1_gshared (NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_mD4A144FA99A1B1DFBC1DA2BECE2C44266FF2741C((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF_gshared (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m9BFC93FD998BD41E6249322EDA95916FC779B011((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 NativeSliceExtensions_Slice_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m6FD1AF82FBEB746F5DED414A4AFF4B8EF1E02277_gshared (NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m6834792A2BCD0C959C3236A1656F2E18AFB47D29((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 NativeSliceExtensions_Slice_TisNudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022_m919C4D8334B609FB39E9606391641890DA1F60C2_gshared (NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_mA3430F95264C061E101EC0E3C72042011833A9BC((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A NativeSliceExtensions_Slice_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEE155357C8BB83BD4B7D34471587738A86B0D851_gshared (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m665194100AB694EC232EEFDAC3C87C7647CEBE28((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A NativeSliceExtensions_Slice_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8C003428C63E7D5CEFE423856A5C7DBAB9C048F0_gshared (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___0_thisSlice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_0 = ___0_thisSlice;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m59DAA173E4BF1C15C5C42D00688F3B86EA28048D((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 NativeSliceExtensions_Slice_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m0D7D6BAB64810308797BD6D6C898432E45D4AC4C_gshared (NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m05A3D6C62D3EF51EBE50158889E9C6B1D214588C((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 NativeSliceExtensions_Slice_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mC340C2ABEA2EC5CF29A25C4305EBA75B0A7A6EA8_gshared (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___0_thisSlice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_0 = ___0_thisSlice;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_mC87483602F891B11DD01B19DAF427E8D61C385C6((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceExtensions_Slice_TisIl2CppFullySharedGenericStruct_mFB1AE1A459E87B8E3C3986EF14F956E30EAF24A3_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m313B1A91AB4ADBA821C074187D67957126F93DFF((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceExtensions_Slice_TisIl2CppFullySharedGenericStruct_m8604EAC32FCFF874A6AA4097703CF1DA1EFA00DE_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_thisSlice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_thisSlice;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m4C0C75BC6633B56253FD4A7CD7F38A34E73C6253((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 NativeSliceExtensions_Slice_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_m877677D420E575DCBE695DCB60B1AF3FE9C1E81F_gshared (NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tEE0716F057E5AB90C1E3B19EA5CC04D624CFC9C7 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m60F25657F5AE104ED7F2F956B948FE7C704EDB5D((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 NativeSliceExtensions_Slice_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_mA902AF6CBD285F1A7F631E533330F582E702AEE0_gshared (NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tA322013FCE7ECBB07A30418AAB23BE082C4E46D6 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m7A0D0D8A1439A72F1514624217FAB4B88C113BFD((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mFE6F19196458580AE39F48B36CA1E4FB3E242032_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length = L_16;
		NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m209A5CA848B5D71860FF727A488EBB61699F029D_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length = L_16;
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mF7B7FA019164962E7BF9FDB47A4AB92199BF9DDA_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length = L_16;
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisIl2CppFullySharedGenericStruct_mE65C843FF57523BD4FDD1642C5D01EE096A9E2E0_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_length;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___2_length;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.int32_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
		int32_t L_7 = ___1_stride;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___1_stride;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52));
		int32_t L_14 = ___1_stride;
		(&V_3)->___m_Stride = L_14;
		void* L_15 = ___0_dataPointer;
		(&V_3)->___m_Buffer = (uint8_t*)L_15;
		int32_t L_16 = ___2_length;
		(&V_3)->___m_Length = L_16;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m6BD8C7B6687079F4D938B1D123852D1B1DB738D2_gshared (NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m1D5DB0F0A202A5CBC424E412F2371F118D6716B9_gshared (NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_m7130837ADE7AB97C8D108E52DA01A1BDB7E38C9F_gshared (NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m96BF1DA7D07BBC9CBB70382DC0B3582F3E927D38_gshared (NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m0363D0A70C0868B740951975373BBE4502FCA03C_gshared (NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisNudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022_mA28ABDFFEBBBE1B3463D9D30DD91C5FD554E2D6E_gshared (NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m6587359875DD85AF7B9BD3317FADF46E4DEA3918_gshared (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m46659EC4AFC5B6616D666FC149A4290A40382A8C_gshared (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_mA02C024D486D564B699E82DF81B47C556F78B96C_gshared (NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_m09A026CC0643E2A0214AFF9A3C5DDBF9CBD63024_gshared (NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_mF3128B9DF1FB9E59D3C89E07478F86936C03E2B5_gshared (NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m2D36E1680EC31E78C2BC8BEC532706B4BA4BAC0C_gshared (NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mD9AC766A8FD8ADED06FA02A938EBEC9A12432838_gshared (NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tAF349534A3BD2A4AC09D9555714E39314906CB3F L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC9D932B1F59928C2C2D4CAFDBEB2FD0BDC46241A_gshared (NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m8BE452E031BAA5D0737B2D915B3ED0932A4C3492_gshared (NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t7591FC942F923C6C3D5066DBCE25E2B91AAD3BD8 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisNudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022_m3C73B4A268E6EF19731588FC96256341D1482190_gshared (NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m25D2FEAD1520E2DEEBA11E8A6BF32EFCEC42D9EA_gshared (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mBA68ADCEE03FE9686B3E1093209D25043E18946D_gshared (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_m8FB8E5DCE79D10E8CBF71676376F40449AD3EB5F_gshared (NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_m8AFD952643487BBF08BE2CB7CE45BCF3C9652815_gshared (NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 ___0_nativeSlice, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_t4207DB5E16E1EF9068326562E97E3AA675F0DAF9 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_EnsureListElemCount_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCC69B853EEBECBAF3DCBFD8A0B26691430128057_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_list, int32_t ___1_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* V_4 = NULL;
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___0_list;
		V_0 = (bool)((((RuntimeObject*)(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___1_count;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_002c:
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_6 = ___0_list;
		NullCheck(L_6);
		List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_inline(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_7 = ___0_list;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Capacity_m6D4F92DC79D33023D68B3408D6464723C8AA83A9(L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_9 = ___1_count;
		V_2 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_11 = ___0_list;
		int32_t L_12 = ___1_count;
		NullCheck(L_11);
		List_1_set_Capacity_m4349F707AFD29359D197EE27DD358DF37C12E2F8(L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0048:
	{
		int32_t L_13 = ___1_count;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_14 = ___0_list;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_inline(L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_3 = (bool)((((int32_t)((((int32_t)L_13) == ((int32_t)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_007b;
		}
	}
	{
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D** L_17;
		L_17 = UnsafeUtility_As_TisList_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_TisListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D_mCF5F8927BE5A0D9A4F9E7858A43AE6987DA7C753_inline((&___0_list), il2cpp_rgctx_method(method->rgctx_data, 5));
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_18 = *((ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D**)L_17);
		V_4 = L_18;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_19 = V_4;
		int32_t L_20 = ___1_count;
		NullCheck(L_19);
		L_19->____size = L_20;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_21 = V_4;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_22 = L_21;
		NullCheck(L_22);
		int32_t L_23 = L_22->____version;
		NullCheck(L_22);
		L_22->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_EnsureListElemCount_TisIl2CppFullySharedGenericAny_m28F7CCEFA354ED25B6E156C88890C5D01F5D9B6B_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, int32_t ___1_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* V_4 = NULL;
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		V_0 = (bool)((((RuntimeObject*)(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___1_count;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_002c:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_6 = ___0_list;
		NullCheck(L_6);
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_7 = ___0_list;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_9 = ___1_count;
		V_2 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_11 = ___0_list;
		int32_t L_12 = ___1_count;
		NullCheck(L_11);
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0048:
	{
		int32_t L_13 = ___1_count;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_14 = ___0_list;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_3 = (bool)((((int32_t)((((int32_t)L_13) == ((int32_t)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_007b;
		}
	}
	{
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C** L_17;
		L_17 = ((  ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C** (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))((&___0_list), il2cpp_rgctx_method(method->rgctx_data, 5));
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_18 = *((ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C**)L_17);
		V_4 = L_18;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_19 = V_4;
		int32_t L_20 = ___1_count;
		NullCheck(L_19);
		L_19->____size = L_20;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_21 = V_4;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_22 = L_21;
		NullCheck(L_22);
		int32_t L_23 = L_22->____version;
		NullCheck(L_22);
		L_22->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* NoAllocHelpers_ExtractArrayFromList_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m55444175C4EC5B38827E5C10E65A408D81421E55_gshared (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* V_0 = NULL;
	bool V_1 = false;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_2 = NULL;
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_0 = ___0_list;
		V_1 = (bool)((((RuntimeObject*)(List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)NULL;
		goto IL_001d;
	}

IL_000d:
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* L_3;
		L_3 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A_m8E19F1360520F8CCB29F8B4FA9A743197F324203((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* L_4 = V_0;
		NullCheck(L_4);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_5 = L_4->____items;
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* NoAllocHelpers_ExtractArrayFromList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4AAC237725FD42066F40BCFA27A194003603208C_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442* V_0 = NULL;
	bool V_1 = false;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___0_list;
		V_1 = (bool)((((RuntimeObject*)(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		goto IL_001d;
	}

IL_000d:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442* L_3;
		L_3 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442_m32094283939C75A047F5F7EC76EE93ACA2AC0F66((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		ListPrivateFieldAccess_1_t2E9C2B51AED8E58F37A72FA38B8E132B0FDB0442* L_4 = V_0;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->____items;
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* NoAllocHelpers_ExtractArrayFromList_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m94EB8197B54F97258F5E5D32716FB2C46B6A9BD0_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* V_0 = NULL;
	bool V_1 = false;
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* V_2 = NULL;
	{
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_0 = ___0_list;
		V_1 = (bool)((((RuntimeObject*)(List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)NULL;
		goto IL_001d;
	}

IL_000d:
	{
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_3;
		L_3 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281_m2CE6D666DDD840E471D8B3CB46F0FA6403AE56FA((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_4 = V_0;
		NullCheck(L_4);
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_5 = L_4->____items;
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NoAllocHelpers_ExtractArrayFromList_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA4886D846FD5578DC9261B5CB7BE47D6FD70498D_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* V_0 = NULL;
	bool V_1 = false;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___0_list;
		V_1 = (bool)((((RuntimeObject*)(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL;
		goto IL_001d;
	}

IL_000d:
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = ___0_list;
		ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* L_3;
		L_3 = UnsafeUtility_As_TisListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15_m3974617E3625DC4E1CE4E10AF326F3D5CDDC5FDF((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* L_4 = V_0;
		NullCheck(L_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = L_4->____items;
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* NoAllocHelpers_ExtractArrayFromList_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3240EFAF30E1B4FED168A81B9F7A60401304D6C1_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* V_0 = NULL;
	bool V_1 = false;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_2 = NULL;
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___0_list;
		V_1 = (bool)((((RuntimeObject*)(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)NULL;
		goto IL_001d;
	}

IL_000d:
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_3;
		L_3 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D_mF34BB00F023AE7858824BB59AD1C866292E6BC07((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_4 = V_0;
		NullCheck(L_4);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_5 = L_4->____items;
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* NoAllocHelpers_ExtractArrayFromList_TisIl2CppFullySharedGenericAny_m86C3B8CC91B7D7314F277C8EE09559E89700607E_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* V_0 = NULL;
	bool V_1 = false;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		V_1 = (bool)((((RuntimeObject*)(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
		goto IL_001d;
	}

IL_000d:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_3;
		L_3 = ((  ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_4 = V_0;
		NullCheck(L_4);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = L_4->____items;
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListContents_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m7A14E78563B72D165D0B4A58591E7D8CF2AE542B_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* ___0_list, ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC ___1_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* V_0 = NULL;
	{
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_0 = ___0_list;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_1;
		L_1 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281_m2CE6D666DDD840E471D8B3CB46F0FA6403AE56FA((RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_2 = V_0;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_3;
		L_3 = ReadOnlySpan_1_ToArray_m52B9C5497E426BA0C6D18FE069D501F7F6B0570F((&___1_span), il2cpp_rgctx_method(method->rgctx_data, 4));
		NullCheck(L_2);
		L_2->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____items), (void*)L_3);
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_4 = V_0;
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m8A8468ECDACBD86AE7FF53413628E0446F662397_inline((&___1_span), il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_4);
		L_4->____size = L_5;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_6 = V_0;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->____version;
		NullCheck(L_7);
		L_7->____version = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListContents_TisIl2CppFullySharedGenericAny_mF46DE29CC6CC8E6A7CAA86D0FB91CDDAE4DF29EE_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___1_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* V_0 = NULL;
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_1;
		L_1 = ((  ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_2 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3;
		L_3 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___1_span), il2cpp_rgctx_method(method->rgctx_data, 4));
		NullCheck(L_2);
		L_2->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____items), (void*)L_3);
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_4 = V_0;
		int32_t L_5;
		L_5 = ((  int32_t (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))((&___1_span), il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_4);
		L_4->____size = L_5;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_6 = V_0;
		ListPrivateFieldAccess_1_t60D467CC7A297D7CDDDAEEE566EC72A82A938A6C* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->____version;
		NullCheck(L_7);
		L_7->____version = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mC69AC2FE59E4ED2C813055058FCB5D28E30EA2DA_gshared (List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* V_0 = NULL;
	{
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_mE73EFFF82CD84954143CA69B13EA7C22DBCDFE82(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_size;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		List_1_t2EF0515F9247C0F480F55BF3E296366A47CB0324* L_3 = ___0_list;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_4;
		L_4 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281_m2CE6D666DDD840E471D8B3CB46F0FA6403AE56FA((RuntimeObject*)L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_4;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_5 = V_0;
		int32_t L_6 = ___1_size;
		NullCheck(L_5);
		L_5->____size = L_6;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_7 = V_0;
		ListPrivateFieldAccess_1_t2F943BF42A882282BEE01E013ABAC0591E1A7281* L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9 = L_8->____version;
		NullCheck(L_8);
		L_8->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisIl2CppFullySharedGenericStruct_mDDE45120A34583A64D84E8FDC700E61266084864_gshared (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ListPrivateFieldAccess_1_tAFBE76D1846D83A45C3F8E1CAE1C1261F0C455E2* V_0 = NULL;
	{
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2 = ___1_size;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_3 = ___0_list;
		ListPrivateFieldAccess_1_tAFBE76D1846D83A45C3F8E1CAE1C1261F0C455E2* L_4;
		L_4 = ((  ListPrivateFieldAccess_1_tAFBE76D1846D83A45C3F8E1CAE1C1261F0C455E2* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((RuntimeObject*)L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_4;
		ListPrivateFieldAccess_1_tAFBE76D1846D83A45C3F8E1CAE1C1261F0C455E2* L_5 = V_0;
		int32_t L_6 = ___1_size;
		NullCheck(L_5);
		L_5->____size = L_6;
		ListPrivateFieldAccess_1_tAFBE76D1846D83A45C3F8E1CAE1C1261F0C455E2* L_7 = V_0;
		ListPrivateFieldAccess_1_tAFBE76D1846D83A45C3F8E1CAE1C1261F0C455E2* L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9 = L_8->____version;
		NullCheck(L_8);
		L_8->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mDE7B561CE172B3EB697DE30C3A79C67F70018E6F_gshared (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___0_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_1 = ___0_values;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m97646F93DD10BF861C66A0E05E73D1BA94B76143_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m910F55DA116EEF0221ADFF22689A9842AC46C5FE_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = ___0_values;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB85A915B5401A23E2802BF2945052148967220E2_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = ___0_values;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m201A65A21E6A7CC7D1A0C35A7D5CEBE2DD8A49B2_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_1 = ___0_values;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisIl2CppFullySharedGenericAny_mD1DA27D7DEDDDE717B58255E05299BE55E56F095_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = ___0_values;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindFirstObjectByType_TisRuntimeObject_mC5927319EB5B80095EFBA653D414D6F8AA87DC0A_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Object_FindFirstObjectByType_mC479B3C54E61550A6A405DC1BCF0CBA2BA8FC66F(L_1, (int32_t)0, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF704B54D833421164E45E576DFD279921246BCEA);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_original;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_CheckNullArgument_m4D03BBBD975CCCCB3F9438864E3E8BF54E1E3F26(L_0, _stringLiteralF704B54D833421164E45E576DFD279921246BCEA, NULL);
		RuntimeObject* L_1 = ___0_original;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Object_Internal_CloneSingle_m24ECA1416702930DF5C316EA8B70D575315B636A((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_1, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_3 = V_0;
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* L_6 = (UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var)));
		UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1C09770F25C8580FC7F6623067ACD12EBA570614)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_003e:
	{
		RuntimeObject* L_7 = V_0;
		V_2 = L_7;
		goto IL_0042;
	}

IL_0042:
	{
		RuntimeObject* L_8 = V_2;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_original;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_parent;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = Object_Instantiate_TisRuntimeObject_mDC5AD8BD13FE50E98B67B956C048367F4E8C6F94(L_0, L_1, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mDC5AD8BD13FE50E98B67B956C048367F4E8C6F94_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, bool ___2_worldPositionStays, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_original;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_parent;
		bool L_2 = ___2_worldPositionStays;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = Object_Instantiate_m99F2A72EF6BFE09E6CF4FCF6207C5BCFAD1D76CF((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, L_1, L_2, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_0016;
	}

IL_0016:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_original;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___2_rotation;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = Object_Instantiate_m99C9917ED3F7B2B9C569B55F52411620B52DA19D((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, L_1, L_2, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_0016;
	}

IL_0016:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC_mA394CA588280E4927890676FB2E18D80909B05F3_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mF52C0D18465701E27B2CF0B6A64B025842122BD9_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m8AB03480CE50441C2EE915E24FC36FF49311AB26_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mD8F9F62D3F0BFC1368C3A6B26F0E472E5502C7FA_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m6B2055062515332A8330B3257EFDB4887D6021D4_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m7AA071BF4FF634076D9EE7FA6B9AE7AE5A65A28E_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mC8496C117806D8E867957A17B97A53B57B40A87A_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m1BEFD6F94F5C94EDA0D005A99C98C964B9B1B912_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mFE9BE91D601114E259477098EAE7879677828756_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mA1777DB79A2A1372D456E86895D9A2AAA7C59A8D_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m6701010CE0AE59D323F8F84FA6A579A2CE35CF53_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m859CD9F9709DBD2E03CB29355B0C9C2B08469B4E_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m309B2553946691818BFF63A15C8D21B9E3FA07A1_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m03544BB4EA485F1A33BE31007B4F94ADB5C9A431_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m653C2A2A678F773BC2953D6F9FFDF03F1475B2E7_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m95615FDABAA0BBCA1036F8BD1F3BAF844140765D_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisRuntimeObject_m94D49D355E334CDD36397BAB547B14945A3DCF6C_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, RuntimeObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		RuntimeObject** L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, RuntimeObject**, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		RuntimeObject** L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		RuntimeObject** L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, RuntimeObject**, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			RuntimeObject** L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		RuntimeObject** L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, RuntimeObject**, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			RuntimeObject** L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mA7BB80DB28ADB84C1E180CDC2F995BE6C48D69C3_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mC7435512D91CB55EDFF2DC84814D602C1E3F8314_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m6AE998E2A2414E44DF5A20027B6933A388C3DB2C_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mF637FB3B593396B2317F0D3A6C3410DCAE2A8BD4_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m3EA26E78F7808B1525260D8542CDB1230C757464_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m1A32A7F8799DCAD993E3F1C842E67E080C304D0B_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m70EC4F0D01A015CBECA96E482D19AD88909A35AD_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_mBECD934FD3E1E9EDC2367DED244DF3F44D5CAB7B_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m087A4C698125FFAF67CD6BEB1C897C50D18891ED_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m7802CB6BD0332ABDAFBCD002B6083980CF481ECF_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m0A70E62F81EEFA6AEB1FB1859F4D64F5048076AF_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mD1CAAEEAA93627445BC47DF2AFF9321DA3FF3F7A_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m82E1163312014F427FA69527D395D1F1B2A16A4B_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mC68B89261EA1BB8A1DC4C6A9150A9148B63E7369_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m483FD952658280DFA2D296C9549CA875ED22FF42_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m45E297908E8E8D846B2D7C4958D20500355B0CA7_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m3C0CB18CE87403E33C37F6278C5A7038E0C86017_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_mF2FFD43AA026A0FD177F43C2A25E890C619D2919_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mA676859F5D9456675642EF987D26EC2C4C414E83_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m62275DD2F8069694D40BA4D6F4C3200D7FEB1EF1_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m9B92F7028C96F990CC5C76746FC6C486E6ED9720_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m487A110E4985E524A1CBD80EDF0EC7724409C0F8_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m7EC34B7D12DF0F5320B417C6951CA8EB7353753C_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m0E24B89E2F70614D92B3C8565F23D6B12CC5EF47_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m93BA1BAB12267DAB13BB9A99A4920B56AA4E144D_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB5359D594E93CA95CF77DB06AAF03392747BD182_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m99F73E835319493D6FCCA0EA552CBD3D831E62F4_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mAC5B0B2329C8E652BC4D51548546E0EA28D31899_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mE09C9181C89D1B1B8AD102ED803CD10EFF657ADE_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAB864971AC0E9E1928498A48F062AB1FDA74EA10_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3< bool, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisIl2CppFullySharedGenericAny_mF1E2CE4C83C60AC29C925BB4548F6186E2FB27EC_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Il2CppFullySharedGenericAny* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_10;
	memset((&V_10), 0, sizeof(V_10));
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_0046:
	{
		RuntimeObject* L_8 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		Il2CppFullySharedGenericAny* L_11 = ___1_container;
		String_t* L_12;
		L_12 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker3< bool, Il2CppFullySharedGenericAny*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_10, L_11, L_12, (&V_1));
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_7 = (bool)G_B5_0;
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		Il2CppFullySharedGenericAny* L_16 = ___1_container;
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_15, (RuntimeObject*)__this, L_16);
		goto IL_0084;
	}

IL_007a:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_0084:
	{
		goto IL_016c;
	}

IL_008a:
	{
		RuntimeObject* L_17 = ___0_properties;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 7)));
		RuntimeObject* L_18 = V_8;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_19 = V_8;
		Il2CppFullySharedGenericAny* L_20 = ___1_container;
		int32_t L_21;
		L_21 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = InterfaceFuncInvoker3< bool, Il2CppFullySharedGenericAny*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 7), L_19, L_20, L_21, (&V_1));
		G_B12_0 = ((int32_t)(L_22));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25;
		L_25 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_26;
		L_26 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_10 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_10), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_27 = V_1;
			Il2CppFullySharedGenericAny* L_28 = ___1_container;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (RuntimeObject*)__this, L_28);
			goto IL_00e6;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00e9:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00f3:
	{
		goto IL_016c;
	}

IL_00f6:
	{
		RuntimeObject* L_29 = ___0_properties;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 9)));
		RuntimeObject* L_30 = V_11;
		if (!L_30)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_31 = V_11;
		Il2CppFullySharedGenericAny* L_32 = ___1_container;
		RuntimeObject* L_33;
		L_33 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker3Invoker< bool, Il2CppFullySharedGenericAny*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 9), L_31, L_32, L_33, (&V_1));
		G_B22_0 = ((int32_t)(L_34));
		goto IL_0117;
	}

IL_0116:
	{
		G_B22_0 = 0;
	}

IL_0117:
	{
		V_12 = (bool)G_B22_0;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_0155;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		RuntimeObject* L_37;
		L_37 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_38;
		L_38 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		V_13 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0143:
			{
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				return;
			}
		});
		try
		{
			RuntimeObject* L_39 = V_1;
			Il2CppFullySharedGenericAny* L_40 = ___1_container;
			NullCheck((RuntimeObject*)L_39);
			InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_39, (RuntimeObject*)__this, L_40);
			goto IL_0152;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0152:
	{
		goto IL_015f;
	}

IL_0155:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_015f:
	{
		goto IL_016c;
	}

IL_0162:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_016c;
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisStyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mCE1CE49F6C98BA9A1D9720C0503BDF83571C846C_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2* ___0_property, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2* L_0 = ___0_property;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_1 = ___1_container;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2* L_7 = ___0_property;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2*, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*, int32_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_12;
		L_12 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		int32_t L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		int32_t L_14 = V_6;
		NullCheck(L_12);
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2* L_19 = ___0_property;
		NullCheck(L_19);
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_t7163C8871E308D49C7E7B29E17F5E721302458D2* L_23 = ___0_property;
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_24 = ___1_container;
		int32_t L_25 = V_0;
		NullCheck(L_23);
		VirtualActionInvoker2< StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC*, int32_t >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mAD42E2A5148440AD1DD60E62D0DE2BBF0F3BD4B9_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087* ___0_property, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087* L_0 = ___0_property;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_1 = ___1_container;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087* L_7 = ___0_property;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087*, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, int32_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_12;
		L_12 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		int32_t L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		int32_t L_14 = V_6;
		NullCheck(L_12);
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087* L_19 = ___0_property;
		NullCheck(L_19);
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_tAA3F1A96BA2F3D7F3A0C6C656071C7A87D205087* L_23 = ___0_property;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_24 = ___1_container;
		int32_t L_25 = V_0;
		NullCheck(L_23);
		VirtualActionInvoker2< StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, int32_t >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_TisRuntimeObject_mAEF24FC2133CE510A333A4825BA0896808F110D9_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC* ___0_property, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC* L_0 = ___0_property;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_1 = ___1_container;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC* L_7 = ___0_property;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC*, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, RuntimeObject** >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisRuntimeObject_mD4CD5E0ECCA048DFCC4C4C71A78ED65C87C34C01((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_12;
		L_12 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		RuntimeObject* L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_14 = V_6;
		NullCheck(L_12);
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisRuntimeObject_m3580153F4048DF075DB593BDB3C4A63FA439FC39((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC* L_19 = ___0_property;
		NullCheck(L_19);
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_t21F410EBD5DA39F8762D32DEBD0C6A38FEDE34BC* L_23 = ___0_property;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_24 = ___1_container;
		RuntimeObject* L_25 = V_0;
		NullCheck(L_23);
		VirtualActionInvoker2< StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, RuntimeObject* >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m515538C8CC1CF1A23FF50D0CE0FFDF1DD8F470D4_gshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, Property_2_tB2B25D50A07137613571C599F2D927783128F4B2* ___0_property, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	PropertyScope_t1C89396D637F6426CAFCC8F4BAFC4B56E035A3CD V_7;
	memset((&V_7), 0, sizeof(V_7));
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		Property_2_tB2B25D50A07137613571C599F2D927783128F4B2* L_0 = ___0_property;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_1 = ___1_container;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* >::Invoke(14, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = __this->___m_PathIndex;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_2), NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Property_2_tB2B25D50A07137613571C599F2D927783128F4B2* L_7 = ___0_property;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_8 = ___1_container;
		GenericVirtualActionInvoker3< Property_2_tB2B25D50A07137613571C599F2D927783128F4B2*, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*, int32_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), __this, L_7, L_8, (&V_0));
		goto IL_00d8;
	}

IL_0038:
	{
		bool L_9;
		L_9 = PropertyBag_TryGetPropertyBagForValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m61AF9DE342919DD59CD9CC07D069DEE07629F67E((&V_0), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_11;
		L_11 = TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_12;
		L_12 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		int32_t L_13 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		int32_t L_14 = V_6;
		NullCheck(L_12);
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_12, L_13, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 0;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0079;
		}
	}
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
		goto IL_00d8;
	}

IL_0079:
	{
		Property_2_tB2B25D50A07137613571C599F2D927783128F4B2* L_17 = ___0_property;
		PropertyScope__ctor_m28FF99A84F7744DB6A9997E02B733ADB10DEA6AF((&V_7), __this, (RuntimeObject*)L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{
				PropertyScope_Dispose_m815F8B5CF2665D576232AE370026021C576F7922((&V_7), NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_8), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_18 = V_8;
			PropertyContainer_Accept_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mECB26B6AD8323EC326585F2EA43B7CBBA7944441((RuntimeObject*)__this, (&V_0), L_18, il2cpp_rgctx_method(method->rgctx_data, 13));
			goto IL_00a8;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		Property_2_tB2B25D50A07137613571C599F2D927783128F4B2* L_19 = ___0_property;
		NullCheck(L_19);
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(13, L_19);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		bool L_21;
		L_21 = PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline(__this, NULL);
		G_B14_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_9 = (bool)G_B14_0;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		Property_2_tB2B25D50A07137613571C599F2D927783128F4B2* L_23 = ___0_property;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_24 = ___1_container;
		int32_t L_25 = V_0;
		NullCheck(L_23);
		VirtualActionInvoker2< StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*, int32_t >::Invoke(15, L_23, L_24, L_25);
	}

IL_00cb:
	{
		goto IL_00d8;
	}

IL_00ce:
	{
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, (int32_t)4, NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mA4E81D6FCE503DBD502BA499708344410F60DA4E_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline(__this, ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) 
{
	{
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_0 = __this->___U3ChierarchyU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_value, const RuntimeMethod* method) 
{
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_value;
		__this->___U3CelementTargetU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CelementTargetU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_tA1EAD43A5C76FF3E77D1705EC83B9AB7B1BE7D88* Column_get_bindCell_m87B54CF94A95D41669E1B1E9F845C3E53B37C847_inline (Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A* __this, const RuntimeMethod* method) 
{
	{
		Action_2_tA1EAD43A5C76FF3E77D1705EC83B9AB7B1BE7D88* L_0 = __this->___m_BindCell;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Columns_t487EAF3B634F6D919D58F1927099A8883964831B* MultiColumnCollectionHeader_get_columns_mCD478DC5065BA9B43AD13D998169055EAF1C3655_inline (MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D* __this, const RuntimeMethod* method) 
{
	{
		Columns_t487EAF3B634F6D919D58F1927099A8883964831B* L_0 = __this->___U3CcolumnsU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t1C6F670EE6B3EEEEFF2CBA243476B8AC9C173D11* MultiColumnCollectionHeader_get_columnDataMap_mA525250831644003B806C2732E14BDA37BC1A862_inline (MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t1C6F670EE6B3EEEEFF2CBA243476B8AC9C173D11* L_0 = __this->___U3CcolumnDataMapU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MultiColumnHeaderColumn_t6F44266EE1B6EEB83465A7FE3BA6A6C7CBF8F9B4* ColumnData_get_control_m2104649E1052F0506708BD93DC9DDAE2CA34B700_inline (ColumnData_t0AB07CB43923527FF3700146C0F98D09B673492A* __this, const RuntimeMethod* method) 
{
	{
		MultiColumnHeaderColumn_t6F44266EE1B6EEB83465A7FE3BA6A6C7CBF8F9B4* L_0 = __this->___U3CcontrolU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) 
{
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0 = __this->___U3CPathU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Kind;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CReturnCodeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CPropertyU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline (PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLengthU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PathVisitor_get_ReadonlyVisit_m334145CFBF9EEF857FD8CB6213633BD513B82904_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CReadonlyVisitU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		goto IL_0037;
	}

IL_0037:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		float* L_4;
		L_4 = il2cpp_unsafe_as_ref<float>(L_3);
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	memset(V_0, 0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_1);
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		NullCheck((RuntimeObject*)L_3);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0037:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		Il2CppFullySharedGenericAny* L_10;
		L_10 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_9);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_11;
		memset((&L_11), 0, sizeof(L_11));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_11), L_10);
		__this->____pointer = L_11;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_array;
		NullCheck(L_12);
		__this->____length = ((int32_t)(((RuntimeArray*)L_12)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5BFF79141064122141ED34283347A634B9DF577D_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Il2CppChar* L_11;
		L_11 = il2cpp_unsafe_as_ref<Il2CppChar>(L_10);
		int32_t L_12 = ___1_start;
		Il2CppChar* L_13;
		L_13 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_11, L_12);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	memset(V_0, 0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_3);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0042:
	{
		int32_t L_10 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___0_array;
		NullCheck(L_11);
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_12 = ___2_length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14 = ___1_start;
		if ((!(((uint32_t)L_12) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = ___0_array;
		NullCheck((RuntimeArray*)L_15);
		uint8_t* L_16;
		L_16 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_15, NULL);
		Il2CppFullySharedGenericAny* L_17;
		L_17 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_16);
		int32_t L_18 = ___1_start;
		Il2CppFullySharedGenericAny* L_19;
		L_19 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(L_17, L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_20;
		memset((&L_20), 0, sizeof(L_20));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_20), L_19);
		__this->____pointer = L_20;
		int32_t L_21 = ___2_length;
		__this->____length = L_21;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MemoryExtensions_IsTypeComparableAsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m64FAB0403DCD80C51788DF3CD7390E44F6228CA7_gshared_inline (uint64_t* ___0_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003c;
		}
	}

IL_0036:
	{
		uint64_t* L_10 = ___0_size;
		*((int64_t*)L_10) = (int64_t)((int64_t)1);
		return (bool)1;
	}

IL_003c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_14, NULL);
		if (L_15)
		{
			goto IL_008d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (L_20)
		{
			goto IL_008d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		if (!L_25)
		{
			goto IL_0093;
		}
	}

IL_008d:
	{
		uint64_t* L_26 = ___0_size;
		*((int64_t*)L_26) = (int64_t)((int64_t)2);
		return (bool)1;
	}

IL_0093:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		bool L_31;
		L_31 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_28, L_30, NULL);
		if (L_31)
		{
			goto IL_00c9;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
		bool L_36;
		L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
		if (!L_36)
		{
			goto IL_00cf;
		}
	}

IL_00c9:
	{
		uint64_t* L_37 = ___0_size;
		*((int64_t*)L_37) = (int64_t)((int64_t)4);
		return (bool)1;
	}

IL_00cf:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		bool L_42;
		L_42 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_39, L_41, NULL);
		if (L_42)
		{
			goto IL_0105;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		bool L_47;
		L_47 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_44, L_46, NULL);
		if (!L_47)
		{
			goto IL_010b;
		}
	}

IL_0105:
	{
		uint64_t* L_48 = ___0_size;
		*((int64_t*)L_48) = (int64_t)((int64_t)8);
		return (bool)1;
	}

IL_010b:
	{
		uint64_t* L_49 = ___0_size;
		*((int64_t*)L_49) = (int64_t)((int64_t)0);
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m339FDCE1FC17C2B97AEA44937294504AF706F7FF_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_ptr;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* NoAllocHelpers_ExtractArrayFromList_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3240EFAF30E1B4FED168A81B9F7A60401304D6C1_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* V_0 = NULL;
	bool V_1 = false;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_2 = NULL;
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_0 = ___0_list;
		V_1 = (bool)((((RuntimeObject*)(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)NULL;
		goto IL_001d;
	}

IL_000d:
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_3;
		L_3 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D_mF34BB00F023AE7858824BB59AD1C866292E6BC07((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		ListPrivateFieldAccess_1_t53688B2A9D9ACB2645C9EC09B87E3F7F8664F00D* L_4 = V_0;
		NullCheck(L_4);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_5 = L_4->____items;
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NoAllocHelpers_ExtractArrayFromList_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA4886D846FD5578DC9261B5CB7BE47D6FD70498D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* V_0 = NULL;
	bool V_1 = false;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___0_list;
		V_1 = (bool)((((RuntimeObject*)(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL;
		goto IL_001d;
	}

IL_000d:
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = ___0_list;
		ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* L_3;
		L_3 = UnsafeUtility_As_TisListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15_m3974617E3625DC4E1CE4E10AF326F3D5CDDC5FDF((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		ListPrivateFieldAccess_1_tB10A515CB3B61BE07629DF2C16DC289B7AF82B15* L_4 = V_0;
		NullCheck(L_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = L_4->____items;
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* NoAllocHelpers_ExtractArrayFromList_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m55444175C4EC5B38827E5C10E65A408D81421E55_gshared_inline (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* V_0 = NULL;
	bool V_1 = false;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_2 = NULL;
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_0 = ___0_list;
		V_1 = (bool)((((RuntimeObject*)(List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)NULL;
		goto IL_001d;
	}

IL_000d:
	{
		List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* L_3;
		L_3 = UnsafeUtility_As_TisListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A_m8E19F1360520F8CCB29F8B4FA9A743197F324203((RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		ListPrivateFieldAccess_1_t81F55330C2FC8FFF91FC25D10AF7FC2724CCEC6A* L_4 = V_0;
		NullCheck(L_4);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_5 = L_4->____items;
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m88484A213EB00FF7254FE3DB935BFB06DD3F5753_gshared_inline (Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75* __this, RuntimeObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject** UnsafeUtility_As_TisRuntimeObject_TisRuntimeObject_m427D45188F037E6A44060E2DC34BCD470560D8C9_gshared_inline (RuntimeObject** ___0_from, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_from;
		return (RuntimeObject**)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m8A8468ECDACBD86AE7FF53413628E0446F662397_gshared_inline (ReadOnlySpan_1_tEAF479AB1B366DD09B770333CBF4B8EBAFA8D3CC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m97646F93DD10BF861C66A0E05E73D1BA94B76143_gshared_inline (List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mB145F76964DE36569385F83F550741253F97BC8B_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t14492BDEFA66B94D1A35E842BFAB7898518438E4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_0 = NULL;
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_0 = ((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m735F17A1CDBD434E62378EBF10F8B56495139E17_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC1A46C3724D2DAD269AF6BD39D20DE59150FDF28_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = __this->___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_other;
		float L_2 = L_1.___x;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		float L_3 = __this->___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_other;
		float L_5 = L_4.___y;
		G_B3_0 = ((((float)L_3) == ((float)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}

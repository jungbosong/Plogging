#include "pch-cpp.hpp"

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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Cube
struct Cube_tDC12F504933679A8D0D36BB40D624F09216A10F2;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// LineManager
struct LineManager_tA2082DD0E526890137CB63339340AAF233E12A47;
// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// ReadJson
struct ReadJson_tAA721B791030E8DBE5768E58002EA46CA4E35FDB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// RouteManager
struct RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringReader
struct StringReader_t74E352C280EAC22C878867444978741F19E1F895;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// MiniJSON.Json/Parser
struct Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE;
// MiniJSON.Json/Serializer
struct Serializer_t1A3A74BEDA18296ABEABE544E7F5EB2729E13353;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU2CU5D_t469708E84B24DAB3E509BDEC941060C69370193E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_t1A3A74BEDA18296ABEABE544E7F5EB2729E13353_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral03866053362F95DEC3E3D8A996202E984AB3D631;
IL2CPP_EXTERN_C String_t* _stringLiteral0DDAD54D21374ABAFD43718FB62AB34258A8EF89;
IL2CPP_EXTERN_C String_t* _stringLiteral0E5C45732CF934F82F95E76B7B0C6479BEB9F2D1;
IL2CPP_EXTERN_C String_t* _stringLiteral20CB7D0E357ACAA05869BEB26A86C598A7F73A99;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74;
IL2CPP_EXTERN_C String_t* _stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654;
IL2CPP_EXTERN_C String_t* _stringLiteral52D8B9245A2A273A4683E8EE2EBD1BCC9F0D8B50;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5F629B25BE4F48980C1EDD2471AE2A239A980D35;
IL2CPP_EXTERN_C String_t* _stringLiteral6496937B5293CB485DAA9B917BBD89522937BA83;
IL2CPP_EXTERN_C String_t* _stringLiteral77BA5E25678420F932ACED9EFECA6756A0CD1BEA;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7E178D61714E19CBB83E719AA7023581493C3C4D;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA;
IL2CPP_EXTERN_C String_t* _stringLiteral8DFFF6900D69E4D0083974E14DBF4DEB5AAF8ED2;
IL2CPP_EXTERN_C String_t* _stringLiteral8EB2132CE272234E27570467898FF2518A0F8E29;
IL2CPP_EXTERN_C String_t* _stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D;
IL2CPP_EXTERN_C String_t* _stringLiteralAB749AAA5299535EF848A018B13E790AD52957AA;
IL2CPP_EXTERN_C String_t* _stringLiteralAF76631C9924DA21CC9961B508E27EB5D8012412;
IL2CPP_EXTERN_C String_t* _stringLiteralAF9D54DA42D3AA95F1A72643B0653BC1378A501B;
IL2CPP_EXTERN_C String_t* _stringLiteralB033FD2F890CA8FC2F620F48B8407DD98B58052F;
IL2CPP_EXTERN_C String_t* _stringLiteralB1CE20834084DE198D78F4901EBE3F2DF71A6E3B;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBB1CC10AED50492665B69D0FCC8FD4C533A4DB0E;
IL2CPP_EXTERN_C String_t* _stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralDE4B18746D8537B3DBC33A9C056EC373A32AF173;
IL2CPP_EXTERN_C String_t* _stringLiteralE12CB0AF6D20B39CEC0E75469FA0FEC7A353CE66;
IL2CPP_EXTERN_C String_t* _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF629C9F7121957F68B7F7F029EACD359DDC374E0;
IL2CPP_EXTERN_C String_t* _stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE;
IL2CPP_EXTERN_C String_t* _stringLiteralFAB639A1C081D1A3905A90D6C40DE1707713FA65;
IL2CPP_EXTERN_C String_t* _stringLiteralFFF5D9012BCFFBEAA5464767D33316F836B5371C;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineManager_tA2082DD0E526890137CB63339340AAF233E12A47_m3CA9C5F5848756DDC72D2461C565FDB79D60EC53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137_mEBFB1ECE0E50EB1B3F707C29491FD5DD8B6E9AD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct DoubleU5BU2CU5D_t469708E84B24DAB3E509BDEC941060C69370193E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
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
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Single>
struct  List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____items_1)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__items_1() const { return ____items_1; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_StaticFields, ____emptyArray_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// MiniJSON.Json
struct  Json_tA4225262398BCFF89305B7BEE12FFB1BC9090758  : public RuntimeObject
{
public:

public:
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct  String_t  : public RuntimeObject
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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// MiniJSON.Json/Parser
struct  Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE  : public RuntimeObject
{
public:
	// System.IO.StringReader MiniJSON.Json/Parser::json
	StringReader_t74E352C280EAC22C878867444978741F19E1F895 * ___json_1;

public:
	inline static int32_t get_offset_of_json_1() { return static_cast<int32_t>(offsetof(Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE, ___json_1)); }
	inline StringReader_t74E352C280EAC22C878867444978741F19E1F895 * get_json_1() const { return ___json_1; }
	inline StringReader_t74E352C280EAC22C878867444978741F19E1F895 ** get_address_of_json_1() { return &___json_1; }
	inline void set_json_1(StringReader_t74E352C280EAC22C878867444978741F19E1F895 * value)
	{
		___json_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_1), (void*)value);
	}
};


// MiniJSON.Json/Serializer
struct  Serializer_t1A3A74BEDA18296ABEABE544E7F5EB2729E13353  : public RuntimeObject
{
public:
	// System.Text.StringBuilder MiniJSON.Json/Serializer::builder
	StringBuilder_t * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(Serializer_t1A3A74BEDA18296ABEABE544E7F5EB2729E13353, ___builder_0)); }
	inline StringBuilder_t * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___builder_0), (void*)value);
	}
};


// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Decimal
struct  Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.Int16
struct  Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.SByte
struct  SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// System.IO.TextReader
struct  TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
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
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
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


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// System.Exception
struct  Exception_t  : public RuntimeObject
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

// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
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


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.RectOffset
struct  RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StringReader
struct  StringReader_t74E352C280EAC22C878867444978741F19E1F895  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.String System.IO.StringReader::_s
	String_t* ____s_4;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_5;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_6;

public:
	inline static int32_t get_offset_of__s_4() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____s_4)); }
	inline String_t* get__s_4() const { return ____s_4; }
	inline String_t** get_address_of__s_4() { return &____s_4; }
	inline void set__s_4(String_t* value)
	{
		____s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____s_4), (void*)value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____length_6)); }
	inline int32_t get__length_6() const { return ____length_6; }
	inline int32_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int32_t value)
	{
		____length_6 = value;
	}
};


// MiniJSON.Json/Parser/TOKEN
struct  TOKEN_tFCED4BC8C12135EC8C467EE277073E58BFC3A007 
{
public:
	// System.Int32 MiniJSON.Json/Parser/TOKEN::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TOKEN_tFCED4BC8C12135EC8C467EE277073E58BFC3A007, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GUIStyle
struct  GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.LineRenderer
struct  LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Cube
struct  Cube_tDC12F504933679A8D0D36BB40D624F09216A10F2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Cube::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_4;
	// System.Int32 Cube::pointCount
	int32_t ___pointCount_5;
	// System.String Cube::lastStringColor
	String_t* ___lastStringColor_6;

public:
	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(Cube_tDC12F504933679A8D0D36BB40D624F09216A10F2, ___text_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_4() const { return ___text_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_4), (void*)value);
	}

	inline static int32_t get_offset_of_pointCount_5() { return static_cast<int32_t>(offsetof(Cube_tDC12F504933679A8D0D36BB40D624F09216A10F2, ___pointCount_5)); }
	inline int32_t get_pointCount_5() const { return ___pointCount_5; }
	inline int32_t* get_address_of_pointCount_5() { return &___pointCount_5; }
	inline void set_pointCount_5(int32_t value)
	{
		___pointCount_5 = value;
	}

	inline static int32_t get_offset_of_lastStringColor_6() { return static_cast<int32_t>(offsetof(Cube_tDC12F504933679A8D0D36BB40D624F09216A10F2, ___lastStringColor_6)); }
	inline String_t* get_lastStringColor_6() const { return ___lastStringColor_6; }
	inline String_t** get_address_of_lastStringColor_6() { return &___lastStringColor_6; }
	inline void set_lastStringColor_6(String_t* value)
	{
		___lastStringColor_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastStringColor_6), (void*)value);
	}
};


// LineManager
struct  LineManager_tA2082DD0E526890137CB63339340AAF233E12A47  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// RouteManager LineManager::routeManager
	RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137 * ___routeManager_4;
	// UnityEngine.GameObject LineManager::spherePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___spherePrefab_5;
	// UnityEngine.Transform LineManager::parent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent_6;
	// UnityEngine.LineRenderer LineManager::lineRenderer
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lineRenderer_7;
	// System.Collections.Generic.List`1<System.Single> LineManager::latitudeList
	List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___latitudeList_8;
	// System.Collections.Generic.List`1<System.Single> LineManager::longitudeList
	List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___longitudeList_9;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> LineManager::objPositionList
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___objPositionList_10;
	// System.Int32 LineManager::pointCount
	int32_t ___pointCount_11;

public:
	inline static int32_t get_offset_of_routeManager_4() { return static_cast<int32_t>(offsetof(LineManager_tA2082DD0E526890137CB63339340AAF233E12A47, ___routeManager_4)); }
	inline RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137 * get_routeManager_4() const { return ___routeManager_4; }
	inline RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137 ** get_address_of_routeManager_4() { return &___routeManager_4; }
	inline void set_routeManager_4(RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137 * value)
	{
		___routeManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___routeManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_spherePrefab_5() { return static_cast<int32_t>(offsetof(LineManager_tA2082DD0E526890137CB63339340AAF233E12A47, ___spherePrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_spherePrefab_5() const { return ___spherePrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_spherePrefab_5() { return &___spherePrefab_5; }
	inline void set_spherePrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___spherePrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spherePrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_parent_6() { return static_cast<int32_t>(offsetof(LineManager_tA2082DD0E526890137CB63339340AAF233E12A47, ___parent_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_parent_6() const { return ___parent_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_parent_6() { return &___parent_6; }
	inline void set_parent_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___parent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_6), (void*)value);
	}

	inline static int32_t get_offset_of_lineRenderer_7() { return static_cast<int32_t>(offsetof(LineManager_tA2082DD0E526890137CB63339340AAF233E12A47, ___lineRenderer_7)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lineRenderer_7() const { return ___lineRenderer_7; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lineRenderer_7() { return &___lineRenderer_7; }
	inline void set_lineRenderer_7(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lineRenderer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineRenderer_7), (void*)value);
	}

	inline static int32_t get_offset_of_latitudeList_8() { return static_cast<int32_t>(offsetof(LineManager_tA2082DD0E526890137CB63339340AAF233E12A47, ___latitudeList_8)); }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * get_latitudeList_8() const { return ___latitudeList_8; }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA ** get_address_of_latitudeList_8() { return &___latitudeList_8; }
	inline void set_latitudeList_8(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * value)
	{
		___latitudeList_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latitudeList_8), (void*)value);
	}

	inline static int32_t get_offset_of_longitudeList_9() { return static_cast<int32_t>(offsetof(LineManager_tA2082DD0E526890137CB63339340AAF233E12A47, ___longitudeList_9)); }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * get_longitudeList_9() const { return ___longitudeList_9; }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA ** get_address_of_longitudeList_9() { return &___longitudeList_9; }
	inline void set_longitudeList_9(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * value)
	{
		___longitudeList_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___longitudeList_9), (void*)value);
	}

	inline static int32_t get_offset_of_objPositionList_10() { return static_cast<int32_t>(offsetof(LineManager_tA2082DD0E526890137CB63339340AAF233E12A47, ___objPositionList_10)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_objPositionList_10() const { return ___objPositionList_10; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_objPositionList_10() { return &___objPositionList_10; }
	inline void set_objPositionList_10(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___objPositionList_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objPositionList_10), (void*)value);
	}

	inline static int32_t get_offset_of_pointCount_11() { return static_cast<int32_t>(offsetof(LineManager_tA2082DD0E526890137CB63339340AAF233E12A47, ___pointCount_11)); }
	inline int32_t get_pointCount_11() const { return ___pointCount_11; }
	inline int32_t* get_address_of_pointCount_11() { return &___pointCount_11; }
	inline void set_pointCount_11(int32_t value)
	{
		___pointCount_11 = value;
	}
};


// ReadJson
struct  ReadJson_tAA721B791030E8DBE5768E58002EA46CA4E35FDB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// RouteManager
struct  RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// LineManager RouteManager::lineManager
	LineManager_tA2082DD0E526890137CB63339340AAF233E12A47 * ___lineManager_4;
	// System.String RouteManager::pointCount
	String_t* ___pointCount_5;
	// System.String RouteManager::latitudes
	String_t* ___latitudes_6;
	// System.String RouteManager::longitudes
	String_t* ___longitudes_7;
	// System.Collections.Generic.List`1<System.Single> RouteManager::latitudeList
	List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___latitudeList_8;
	// System.Collections.Generic.List`1<System.Single> RouteManager::longitudeList
	List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___longitudeList_9;

public:
	inline static int32_t get_offset_of_lineManager_4() { return static_cast<int32_t>(offsetof(RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137, ___lineManager_4)); }
	inline LineManager_tA2082DD0E526890137CB63339340AAF233E12A47 * get_lineManager_4() const { return ___lineManager_4; }
	inline LineManager_tA2082DD0E526890137CB63339340AAF233E12A47 ** get_address_of_lineManager_4() { return &___lineManager_4; }
	inline void set_lineManager_4(LineManager_tA2082DD0E526890137CB63339340AAF233E12A47 * value)
	{
		___lineManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_pointCount_5() { return static_cast<int32_t>(offsetof(RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137, ___pointCount_5)); }
	inline String_t* get_pointCount_5() const { return ___pointCount_5; }
	inline String_t** get_address_of_pointCount_5() { return &___pointCount_5; }
	inline void set_pointCount_5(String_t* value)
	{
		___pointCount_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointCount_5), (void*)value);
	}

	inline static int32_t get_offset_of_latitudes_6() { return static_cast<int32_t>(offsetof(RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137, ___latitudes_6)); }
	inline String_t* get_latitudes_6() const { return ___latitudes_6; }
	inline String_t** get_address_of_latitudes_6() { return &___latitudes_6; }
	inline void set_latitudes_6(String_t* value)
	{
		___latitudes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latitudes_6), (void*)value);
	}

	inline static int32_t get_offset_of_longitudes_7() { return static_cast<int32_t>(offsetof(RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137, ___longitudes_7)); }
	inline String_t* get_longitudes_7() const { return ___longitudes_7; }
	inline String_t** get_address_of_longitudes_7() { return &___longitudes_7; }
	inline void set_longitudes_7(String_t* value)
	{
		___longitudes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___longitudes_7), (void*)value);
	}

	inline static int32_t get_offset_of_latitudeList_8() { return static_cast<int32_t>(offsetof(RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137, ___latitudeList_8)); }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * get_latitudeList_8() const { return ___latitudeList_8; }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA ** get_address_of_latitudeList_8() { return &___latitudeList_8; }
	inline void set_latitudeList_8(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * value)
	{
		___latitudeList_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latitudeList_8), (void*)value);
	}

	inline static int32_t get_offset_of_longitudeList_9() { return static_cast<int32_t>(offsetof(RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137, ___longitudeList_9)); }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * get_longitudeList_9() const { return ___longitudeList_9; }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA ** get_address_of_longitudeList_9() { return &___longitudeList_9; }
	inline void set_longitudeList_9(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * value)
	{
		___longitudeList_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___longitudeList_9), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Double[0...,0...]
struct DoubleU5BU2CU5D_t469708E84B24DAB3E509BDEC941060C69370193E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
	inline double GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, double value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, double value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
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
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_gshared (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_gshared (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, float ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void Cube::appendToText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cube_appendToText_m4396A04E15079E3F8062CA5109A145CC17042AAF (Cube_tDC12F504933679A8D0D36BB40D624F09216A10F2 * __this, String_t* ___line0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared)(__this, ___fieldName0, method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_gshared)(__this, ___methodName0, ___args1, method);
}
// UnityEngine.GUIStyle UnityEngine.GUIStyle::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUIStyle_op_Implicit_m2D426804727C2889352794E14E9B96BF8D3149BA (String_t* ___str0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style2, const RuntimeMethod* method);
// System.Void Cube::ChangeColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cube_ChangeColor_mC996D058A8EA36ADD5EF10BFD26423DFAE56E697 (Cube_tDC12F504933679A8D0D36BB40D624F09216A10F2 * __this, String_t* ___newColor0, const RuntimeMethod* method);
// System.Void Cube::showHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cube_showHostMainWindow_m6FD311F6CCB591215D0B5EE2DE06899577A32E23 (Cube_tDC12F504933679A8D0D36BB40D624F09216A10F2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Unload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Unload_m9C24A6A57DB889FFB5C6F447BAA3FF192A04E885 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Object MiniJSON.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_m0C859F2B5F4F846DE4C1BA6A25C1F5CDE0A4E225 (String_t* ___jsonString0, const RuntimeMethod* method);
// System.String MiniJSON.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_mBEDF816D5B952D6C2EDFEE5475395CD4249BDB9C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<RouteManager>()
inline RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137 * Component_GetComponent_TisRouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137_mEBFB1ECE0E50EB1B3F707C29491FD5DD8B6E9AD7 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.LineRenderer::SetWidth(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetWidth_m99E4B8A35922D1B273283BF04A3E3D9EAED781A4 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, float ___start0, float ___end1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 RouteManager::GetPointCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RouteManager_GetPointCount_m37E2BD991FB1C56832F4FFB6C7CC70208A8548F9 (RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LineRenderer::get_positionCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LineRenderer_get_positionCount_m599A1E6BE97C3E5C88164D171628D38D86F09E01 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, const RuntimeMethod* method);
// System.Void LineManager::CreateObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineManager_CreateObjects_mE2FA802747F081B8A7E3DBB48C56CA35F1D06353 (LineManager_tA2082DD0E526890137CB63339340AAF233E12A47 * __this, const RuntimeMethod* method);
// System.Void LineManager::SetPointPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineManager_SetPointPosition_m8FD1D7FFCC4AACA74BD9C689523FB6DB7502A018 (LineManager_tA2082DD0E526890137CB63339340AAF233E12A47 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
inline float List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  float (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, int32_t, const RuntimeMethod*))List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_gshared_inline)(__this, ___index0, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// System.Void LineManager::ChangeObjectPosition(UnityEngine.GameObject,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineManager_ChangeObjectPosition_m55F2CCEE3813E1F4102A96FCC754B70EDEF4A66F (LineManager_tA2082DD0E526890137CB63339340AAF233E12A47 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj0, float ___nowLatitude1, float ___nowLongitude2, float ___nextLatitude3, float ___nextLongitude4, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, const RuntimeMethod*))List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___index0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
inline void List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared)(__this, method);
}
// System.Void ReadJson::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadJson_Load_m8552047011A6FCD458AE6A14340B3502D86E0BC1 (ReadJson_tAA721B791030E8DBE5768E58002EA46CA4E35FDB * __this, const RuntimeMethod* method);
// System.String System.IO.File::ReadAllText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_m8C621C34562CAE1435A2221B3E369BEF1D0ED8BC (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Object MiniJSON.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Json_Deserialize_m699D585677C2862DBAFA44EC31F8B6BEFB90970A (String_t* ___json0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
inline RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
inline int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<LineManager>()
inline LineManager_tA2082DD0E526890137CB63339340AAF233E12A47 * Component_GetComponent_TisLineManager_tA2082DD0E526890137CB63339340AAF233E12A47_m3CA9C5F5848756DDC72D2461C565FDB79D60EC53 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  LineManager_tA2082DD0E526890137CB63339340AAF233E12A47 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void RouteManager::GetRouteData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RouteManager_GetRouteData_mA908EC50FAE878ADBDE0061E5CB5ED2545AE0A62 (RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Single> RouteManager::ParsingData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * RouteManager_ParsingData_mDD49746F6E3DF9D2ED11A47ED468A3E1DE2ACE22 (RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137 * __this, String_t* ___data0, const RuntimeMethod* method);
// System.Void RouteManager::PrintList(System.Collections.Generic.List`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RouteManager_PrintList_m8A43F127172B9952E72E4ADA73FE8036509F3DE1 (RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137 * __this, List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___data0, const RuntimeMethod* method);
// System.Void LineManager::DrawLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineManager_DrawLine_m0B0215E9B29B7E1604651A1A0F96FF9119B5C8BD (LineManager_tA2082DD0E526890137CB63339340AAF233E12A47 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared)(__this, ___methodName0, ___args1, method);
}
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F (String_t* ___s0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::Add(!0)
inline void List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, float ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, float, const RuntimeMethod*))List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
inline int32_t List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_gshared_inline)(__this, method);
}
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE (StringReader_t74E352C280EAC22C878867444978741F19E1F895 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m4E1732BA0BD698178125471DC1511219299898F8 (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, String_t* ___jsonString0, const RuntimeMethod* method);
// System.Object MiniJSON.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_m59151796F1BD6D3E46D554A49EF34BCDB403AA79 (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, const RuntimeMethod* method);
// System.Void System.IO.TextReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader_Dispose_mDF1DCFD8FBE94A453EB2350DB7173027420BA5F8 (TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * __this, const RuntimeMethod* method);
// MiniJSON.Json/Parser/TOKEN MiniJSON.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m889CBAFA9C9DDDE25A59F5CD4BC592654A1CA567 (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, const RuntimeMethod* method);
// System.String MiniJSON.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m0D81629614AB969C04BBD74965821A39E1573D63 (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Object MiniJSON.Json/Parser::ParseByToken(MiniJSON.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m911C011FACC990674C6B917558E12B9DA2CBE444 (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, int32_t ___token0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Object MiniJSON.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_m2A376DA74162CDEE4A283B5BD92FCF80E066A04E (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> MiniJSON.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * Parser_ParseObject_mDDD2FB38855612FD864DBA2DFEA9C11BF73DC39E (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Object> MiniJSON.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Parser_ParseArray_m652900CDFFD881DF9449BDD372556C340DCD75D3 (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Char MiniJSON.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m02DE23E038D31DE928B6F89B149590A35209D4A1 (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344 (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___val0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643 (String_t* ___value0, int32_t ___fromBase1, const RuntimeMethod* method);
// System.String MiniJSON.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m7DA018BF5C404FE6FB873F46E721A512FD63ED2F (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m6EA988890D7F9954EA49A7227E60B3C674930650 (String_t* ___s0, int64_t* ___result1, const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m9152D976CDFE0B30C7E251DDD04EAD6BBD0800B0 (String_t* ___s0, double* ___result1, const RuntimeMethod* method);
// System.Char MiniJSON.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_mC5C7804B362B6A163532B53F1D9270D8F7F8C55A (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC (int32_t ___value0, const RuntimeMethod* method);
// System.Boolean MiniJSON.Json/Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_mC0D8CFAB5531BC6B513F269FB4DDB1A306D580DA (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_m8C75236AFAB8FFF856DA2BFE53BC84F9C7E05AA1 (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_mE358C3CEC17F0D9F2158C5D09F9BD1CB6B760F84 (Serializer_t1A3A74BEDA18296ABEABE544E7F5EB2729E13353 * __this, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_mBE0C676D8B5F4EBD76E9019A7FE931F8BB2416EE (Serializer_t1A3A74BEDA18296ABEABE544E7F5EB2729E13353 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_m8EF870ACEA27199F33FA1B647B801C3E026CF31F (Serializer_t1A3A74BEDA18296ABEABE544E7F5EB2729E13353 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m72FB41798EAB678E1064FC4DC830E3F34EB72302 (Serializer_t1A3A74BEDA18296ABEABE544E7F5EB2729E13353 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m8B5E760CF414451768C00F044DBC2B36A028E1D4 (Serializer_t1A3A74BEDA18296ABEABE544E7F5EB2729E13353 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m20D11252CFA7B52079C618491BCB3AFE22332BC4 (Serializer_t1A3A74BEDA18296ABEABE544E7F5EB2729E13353 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m0B80BF2883121B16934DF6F71590CAE15442A5BC (Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mF6F0642EA16CAB414EEA621DEAA519527DA64284 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.String System.Double::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C (double* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void Cube::appendToText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cube_appendToText_m4396A04E15079E3F8062CA5109A145CC17042AAF (Cube_tDC12F504933679A8D0D36BB40D624F09216A10F2 * __this, String_t* ___line0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// void appendToText(string line) { text.text += line + "\n"; }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_text_4();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = L_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_1);
		String_t* L_3 = ___line0;
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, L_3, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// void appendToText(string line) { text.text += line + "\n"; }
		return;
	}
}
// System.Void Cube::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cube_Update_m7A81C6F3625ACAB2DEBA548F1A765383F060CFEC (Cube_tDC12F504933679A8D0D36BB40D624F09216A10F2 * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(0, Time.deltaTime*10, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_0, (0.0f), ((float)il2cpp_codegen_multiply((float)L_1, (float)(10.0f))), (0.0f), /*hidden argument*/NULL);
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_2;
		L_2 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0037;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.Escape)) Application.Quit();
		bool L_3;
		L_3 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)27), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.Escape)) Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void Cube::ChangeColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cube_ChangeColor_mC996D058A8EA36ADD5EF10BFD26423DFAE56E697 (Cube_tDC12F504933679A8D0D36BB40D624F09216A10F2 * __this, String_t* ___newColor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB033FD2F890CA8FC2F620F48B8407DD98B58052F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAB639A1C081D1A3905A90D6C40DE1707713FA65);
		s_Il2CppMethodInitialized = true;
	}
	{
		// appendToText( "Chancing Color to " + newColor );
		String_t* L_0 = ___newColor0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralFAB639A1C081D1A3905A90D6C40DE1707713FA65, L_0, /*hidden argument*/NULL);
		Cube_appendToText_m4396A04E15079E3F8062CA5109A145CC17042AAF(__this, L_1, /*hidden argument*/NULL);
		// lastStringColor = newColor;
		String_t* L_2 = ___newColor0;
		__this->set_lastStringColor_6(L_2);
		// if (newColor == "red") GetComponent<Renderer>().material.color = Color.red;
		String_t* L_3 = ___newColor0;
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// if (newColor == "red") GetComponent<Renderer>().material.color = Color.red;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_5;
		L_5 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		NullCheck(L_5);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6;
		L_6 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_5, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		L_7 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		NullCheck(L_6);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_6, L_7, /*hidden argument*/NULL);
		return;
	}

IL_003b:
	{
		// else if (newColor == "blue") GetComponent<Renderer>().material.color = Color.blue;
		String_t* L_8 = ___newColor0;
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		// else if (newColor == "blue") GetComponent<Renderer>().material.color = Color.blue;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_10;
		L_10 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		NullCheck(L_10);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11;
		L_11 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_10, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		NullCheck(L_11);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_11, L_12, /*hidden argument*/NULL);
		return;
	}

IL_005e:
	{
		// else if (newColor == "yellow") GetComponent<Renderer>().material.color = Color.yellow;
		String_t* L_13 = ___newColor0;
		bool L_14;
		L_14 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_13, _stringLiteralB033FD2F890CA8FC2F620F48B8407DD98B58052F, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0081;
		}
	}
	{
		// else if (newColor == "yellow") GetComponent<Renderer>().material.color = Color.yellow;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_15;
		L_15 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		NullCheck(L_15);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16;
		L_16 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_15, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17;
		L_17 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		NullCheck(L_16);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_16, L_17, /*hidden argument*/NULL);
		return;
	}

IL_0081:
	{
		// else GetComponent<Renderer>().material.color = Color.black;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_18;
		L_18 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		NullCheck(L_18);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19;
		L_19 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_18, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		L_20 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		NullCheck(L_19);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_19, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Cube::showHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cube_showHostMainWindow_m6FD311F6CCB591215D0B5EE2DE06899577A32E23 (Cube_tDC12F504933679A8D0D36BB40D624F09216A10F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E5C45732CF934F82F95E76B7B0C6479BEB9F2D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F629B25BE4F48980C1EDD2471AE2A239A980D35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFF5D9012BCFFBEAA5464767D33316F836B5371C);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	Exception_t * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// AndroidJavaClass jc = new AndroidJavaClass("com.company.product.OverrideUnityActivity");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral0E5C45732CF934F82F95E76B7B0C6479BEB9F2D1, /*hidden argument*/NULL);
		// AndroidJavaObject overrideActivity = jc.GetStatic<AndroidJavaObject>("instance");
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_0, _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		V_0 = L_1;
		// overrideActivity.Call("showMainActivity", lastStringColor);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		String_t* L_5 = __this->get_lastStringColor_6();
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_2);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_2, _stringLiteral5F629B25BE4F48980C1EDD2471AE2A239A980D35, L_4, /*hidden argument*/NULL);
		// pointCount = overrideActivity.Call<int>("GetPointCount");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_6 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7;
		L_7 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_6);
		int32_t L_8;
		L_8 = AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A(L_6, _stringLiteralFFF5D9012BCFFBEAA5464767D33316F836B5371C, L_7, /*hidden argument*/AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		__this->set_pointCount_5(L_8);
		// } catch(Exception e)
		goto IL_0061;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0047;
		}
		throw e;
	}

CATCH_0047:
	{ // begin catch(System.Exception)
		// } catch(Exception e)
		V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// appendToText("Exception during showHostMainWindow");
		Cube_appendToText_m4396A04E15079E3F8062CA5109A145CC17042AAF(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8DFFF6900D69E4D0083974E14DBF4DEB5AAF8ED2)), /*hidden argument*/NULL);
		// appendToText(e.Message);
		Exception_t * L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_9);
		Cube_appendToText_m4396A04E15079E3F8062CA5109A145CC17042AAF(__this, L_10, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0061;
	} // end catch (depth: 1)

IL_0061:
	{
		// }
		return;
	}
}
// System.Void Cube::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cube_OnGUI_m057AD3DB5DD78ECF289FA689638A9F5C98C70BB2 (Cube_tDC12F504933679A8D0D36BB40D624F09216A10F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D8B9245A2A273A4683E8EE2EBD1BCC9F0D8B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EB2132CE272234E27570467898FF2518A0F8E29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE12CB0AF6D20B39CEC0E75469FA0FEC7A353CE66);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	{
		// GUIStyle style = new GUIStyle("button");
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0;
		L_0 = GUIStyle_op_Implicit_m2D426804727C2889352794E14E9B96BF8D3149BA(_stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// style.fontSize = 30;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_2 = V_0;
		NullCheck(L_2);
		GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6(L_2, ((int32_t)30), /*hidden argument*/NULL);
		// if (GUI.Button(new Rect(10, 10, 200, 100), "Red", style)) ChangeColor("red");
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_3), (10.0f), (10.0f), (200.0f), (100.0f), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A(L_3, _stringLiteral77FA365523C8AD1C1BCB07FE41D0BA9D232632F4, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		// if (GUI.Button(new Rect(10, 10, 200, 100), "Red", style)) ChangeColor("red");
		Cube_ChangeColor_mC996D058A8EA36ADD5EF10BFD26423DFAE56E697(__this, _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// if (GUI.Button(new Rect(10, 110, 200, 100), "Blue", style)) ChangeColor("blue");
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_6), (10.0f), (110.0f), (200.0f), (100.0f), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A(L_6, _stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_007a;
		}
	}
	{
		// if (GUI.Button(new Rect(10, 110, 200, 100), "Blue", style)) ChangeColor("blue");
		Cube_ChangeColor_mC996D058A8EA36ADD5EF10BFD26423DFAE56E697(__this, _stringLiteral9B736A9739934A4ACD0D222F5EDAB3AB0209F008, /*hidden argument*/NULL);
	}

IL_007a:
	{
		// if (GUI.Button(new Rect(10, 300, 400, 100), "Show Main With Color", style)) showHostMainWindow();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_9), (10.0f), (300.0f), (400.0f), (100.0f), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A(L_9, _stringLiteral8EB2132CE272234E27570467898FF2518A0F8E29, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00a6;
		}
	}
	{
		// if (GUI.Button(new Rect(10, 300, 400, 100), "Show Main With Color", style)) showHostMainWindow();
		Cube_showHostMainWindow_m6FD311F6CCB591215D0B5EE2DE06899577A32E23(__this, /*hidden argument*/NULL);
	}

IL_00a6:
	{
		// if (GUI.Button(new Rect(10, 400, 400, 100), "Unload", style)) Application.Unload();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_12), (10.0f), (400.0f), (400.0f), (100.0f), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A(L_12, _stringLiteralE12CB0AF6D20B39CEC0E75469FA0FEC7A353CE66, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00d1;
		}
	}
	{
		// if (GUI.Button(new Rect(10, 400, 400, 100), "Unload", style)) Application.Unload();
		Application_Unload_m9C24A6A57DB889FFB5C6F447BAA3FF192A04E885(/*hidden argument*/NULL);
	}

IL_00d1:
	{
		// if (GUI.Button(new Rect(440, 400, 400, 100), "Quit", style)) Application.Quit();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_15), (440.0f), (400.0f), (400.0f), (100.0f), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A(L_15, _stringLiteral52D8B9245A2A273A4683E8EE2EBD1BCC9F0D8B50, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00fc;
		}
	}
	{
		// if (GUI.Button(new Rect(440, 400, 400, 100), "Quit", style)) Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
	}

IL_00fc:
	{
		// }
		return;
	}
}
// System.Void Cube::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cube__ctor_m6544EEAA5C47298B0E2AF77CE54857E6D4549A4D (Cube_tDC12F504933679A8D0D36BB40D624F09216A10F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string lastStringColor = "";
		__this->set_lastStringColor_6(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Object MiniJSON.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Json_Deserialize_m699D585677C2862DBAFA44EC31F8B6BEFB90970A (String_t* ___json0, const RuntimeMethod* method)
{
	{
		// if (json == null) {
		String_t* L_0 = ___json0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_0005:
	{
		// return Parser.Parse(json);
		String_t* L_1 = ___json0;
		RuntimeObject * L_2;
		L_2 = Parser_Parse_m0C859F2B5F4F846DE4C1BA6A25C1F5CDE0A4E225(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String MiniJSON.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_m39431EDE1526C8634DECB4F2FECF100067432169 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		// return Serializer.Serialize(obj);
		RuntimeObject * L_0 = ___obj0;
		String_t* L_1;
		L_1 = Serializer_Serialize_mBEDF816D5B952D6C2EDFEE5475395CD4249BDB9C(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void LineManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineManager_Awake_m4E88F545E1107D14E441EE5F5F3DC87008B10543 (LineManager_tA2082DD0E526890137CB63339340AAF233E12A47 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137_mEBFB1ECE0E50EB1B3F707C29491FD5DD8B6E9AD7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// routeManager = routeManager.GetComponent<RouteManager>();
		RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137 * L_0 = __this->get_routeManager_4();
		NullCheck(L_0);
		RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137 * L_1;
		L_1 = Component_GetComponent_TisRouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137_mEBFB1ECE0E50EB1B3F707C29491FD5DD8B6E9AD7(L_0, /*hidden argument*/Component_GetComponent_TisRouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137_mEBFB1ECE0E50EB1B3F707C29491FD5DD8B6E9AD7_RuntimeMethod_var);
		__this->set_routeManager_4(L_1);
		// lineRenderer = this.GetComponent<LineRenderer>();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_2;
		L_2 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(__this, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		__this->set_lineRenderer_7(L_2);
		// lineRenderer.SetWidth(4f, 4f);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_3 = __this->get_lineRenderer_7();
		NullCheck(L_3);
		LineRenderer_SetWidth_m99E4B8A35922D1B273283BF04A3E3D9EAED781A4(L_3, (4.0f), (4.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LineManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineManager_Start_mD8D8E4CCA1B5329A2290DF160AF607AE03419EC8 (LineManager_tA2082DD0E526890137CB63339340AAF233E12A47 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void LineManager::DrawLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineManager_DrawLine_m0B0215E9B29B7E1604651A1A0F96FF9119B5C8BD (LineManager_tA2082DD0E526890137CB63339340AAF233E12A47 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03866053362F95DEC3E3D8A996202E984AB3D631);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DDAD54D21374ABAFD43718FB62AB34258A8EF89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE4B18746D8537B3DBC33A9C056EC373A32AF173);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Debug.Log("Draw Line");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralDE4B18746D8537B3DBC33A9C056EC373A32AF173, /*hidden argument*/NULL);
		// pointCount = routeManager.GetPointCount();
		RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137 * L_0 = __this->get_routeManager_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = RouteManager_GetPointCount_m37E2BD991FB1C56832F4FFB6C7CC70208A8548F9(L_0, /*hidden argument*/NULL);
		__this->set_pointCount_11(L_1);
		// Debug.Log("pointCount: " + pointCount);
		int32_t* L_2 = __this->get_address_of_pointCount_11();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0DDAD54D21374ABAFD43718FB62AB34258A8EF89, L_3, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// lineRenderer.positionCount = pointCount;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_5 = __this->get_lineRenderer_7();
		int32_t L_6 = __this->get_pointCount_11();
		NullCheck(L_5);
		LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_5, L_6, /*hidden argument*/NULL);
		// Debug.Log("positionCount: " + lineRenderer.positionCount);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_7 = __this->get_lineRenderer_7();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = LineRenderer_get_positionCount_m599A1E6BE97C3E5C88164D171628D38D86F09E01(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9;
		L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral03866053362F95DEC3E3D8A996202E984AB3D631, L_9, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_10, /*hidden argument*/NULL);
		// latitudeList = routeManager.latitudeList;
		RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137 * L_11 = __this->get_routeManager_4();
		NullCheck(L_11);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_12 = L_11->get_latitudeList_8();
		__this->set_latitudeList_8(L_12);
		// longitudeList = routeManager.longitudeList;
		RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137 * L_13 = __this->get_routeManager_4();
		NullCheck(L_13);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_14 = L_13->get_longitudeList_9();
		__this->set_longitudeList_9(L_14);
		// CreateObjects();
		LineManager_CreateObjects_mE2FA802747F081B8A7E3DBB48C56CA35F1D06353(__this, /*hidden argument*/NULL);
		// SetPointPosition();
		LineManager_SetPointPosition_m8FD1D7FFCC4AACA74BD9C689523FB6DB7502A018(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LineManager::CreateObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineManager_CreateObjects_mE2FA802747F081B8A7E3DBB48C56CA35F1D06353 (LineManager_tA2082DD0E526890137CB63339340AAF233E12A47 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20CB7D0E357ACAA05869BEB26A86C598A7F73A99);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	{
		// Debug.Log("Create Objects");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral20CB7D0E357ACAA05869BEB26A86C598A7F73A99, /*hidden argument*/NULL);
		// float nowLatitude = latitudeList[0];
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_0 = __this->get_latitudeList_8();
		NullCheck(L_0);
		float L_1;
		L_1 = List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_inline(L_0, 0, /*hidden argument*/List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var);
		V_0 = L_1;
		// float nowLongitude = longitudeList[0];
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_2 = __this->get_longitudeList_9();
		NullCheck(L_2);
		float L_3;
		L_3 = List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_inline(L_2, 0, /*hidden argument*/List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var);
		V_1 = L_3;
		// for (int i = 0; i < pointCount; i++)
		V_2 = 0;
		goto IL_007c;
	}

IL_0028:
	{
		// GameObject sphereObj = Instantiate(spherePrefab, parent);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_spherePrefab_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_parent_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_4, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		V_3 = L_6;
		// ChangeObjectPosition(sphereObj, nowLatitude, nowLongitude, latitudeList[i], longitudeList[i]);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_3;
		float L_8 = V_0;
		float L_9 = V_1;
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_10 = __this->get_latitudeList_8();
		int32_t L_11 = V_2;
		NullCheck(L_10);
		float L_12;
		L_12 = List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_13 = __this->get_longitudeList_9();
		int32_t L_14 = V_2;
		NullCheck(L_13);
		float L_15;
		L_15 = List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_inline(L_13, L_14, /*hidden argument*/List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var);
		LineManager_ChangeObjectPosition_m55F2CCEE3813E1F4102A96FCC754B70EDEF4A66F(__this, L_7, L_8, L_9, L_12, L_15, /*hidden argument*/NULL);
		// objPositionList.Add(sphereObj.transform.position);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_16 = __this->get_objPositionList_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_3;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_16, L_19, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// sphereObj.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = V_3;
		NullCheck(L_20);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_20, (bool)1, /*hidden argument*/NULL);
		// for (int i = 0; i < pointCount; i++)
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_007c:
	{
		// for (int i = 0; i < pointCount; i++)
		int32_t L_22 = V_2;
		int32_t L_23 = __this->get_pointCount_11();
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0028;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LineManager::ChangeObjectPosition(UnityEngine.GameObject,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineManager_ChangeObjectPosition_m55F2CCEE3813E1F4102A96FCC754B70EDEF4A66F (LineManager_tA2082DD0E526890137CB63339340AAF233E12A47 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj0, float ___nowLatitude1, float ___nowLongitude2, float ___nextLatitude3, float ___nextLongitude4, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float destinationLatitude = nextLatitude - nowLatitude;
		float L_0 = ___nextLatitude3;
		float L_1 = ___nowLatitude1;
		V_0 = ((float)il2cpp_codegen_subtract((float)L_0, (float)L_1));
		// float destinationLongitude = nextLongitude - nowLongitude;
		float L_2 = ___nextLongitude4;
		float L_3 = ___nowLongitude2;
		V_1 = ((float)il2cpp_codegen_subtract((float)L_2, (float)L_3));
		// Vector3 destination = new Vector3(destinationLongitude * 10000, -5f, destinationLatitude * 10000);
		float L_4 = V_1;
		float L_5 = V_0;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), ((float)il2cpp_codegen_multiply((float)L_4, (float)(10000.0f))), (-5.0f), ((float)il2cpp_codegen_multiply((float)L_5, (float)(10000.0f))), /*hidden argument*/NULL);
		// obj.transform.position = parent.position + destination;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = ___obj0;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_parent_6();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LineManager::SetPointPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineManager_SetPointPosition_m8FD1D7FFCC4AACA74BD9C689523FB6DB7502A018 (LineManager_tA2082DD0E526890137CB63339340AAF233E12A47 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB749AAA5299535EF848A018B13E790AD52957AA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Debug.Log("Set Point Position");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralAB749AAA5299535EF848A018B13E790AD52957AA, /*hidden argument*/NULL);
		// for(int i = 0; i < objPositionList.Count; i++)
		V_0 = 0;
		goto IL_002a;
	}

IL_000e:
	{
		// lineRenderer.SetPosition(i, objPositionList[i]);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_0 = __this->get_lineRenderer_7();
		int32_t L_1 = V_0;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_2 = __this->get_objPositionList_10();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		NullCheck(L_0);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_0, L_1, L_4, /*hidden argument*/NULL);
		// for(int i = 0; i < objPositionList.Count; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_002a:
	{
		// for(int i = 0; i < objPositionList.Count; i++)
		int32_t L_6 = V_0;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_7 = __this->get_objPositionList_10();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline(L_7, /*hidden argument*/List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LineManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineManager__ctor_m5DFCBA7F0C41264E2AF591AEC20B4336A74FE4B3 (LineManager_tA2082DD0E526890137CB63339340AAF233E12A47 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<float> latitudeList = new List<float>();
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_0 = (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)il2cpp_codegen_object_new(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var);
		List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C(L_0, /*hidden argument*/List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_RuntimeMethod_var);
		__this->set_latitudeList_8(L_0);
		// List<float> longitudeList  = new List<float>();
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_1 = (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)il2cpp_codegen_object_new(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var);
		List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C(L_1, /*hidden argument*/List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_RuntimeMethod_var);
		__this->set_longitudeList_9(L_1);
		// List<Vector3> objPositionList = new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_2 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_2, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		__this->set_objPositionList_10(L_2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ReadJson::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadJson_Start_m1C808C52D7D69E7C665152FC57786872B3EDBE80 (ReadJson_tAA721B791030E8DBE5768E58002EA46CA4E35FDB * __this, const RuntimeMethod* method)
{
	{
		// Load();
		ReadJson_Load_m8552047011A6FCD458AE6A14340B3502D86E0BC1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ReadJson::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadJson_Load_m8552047011A6FCD458AE6A14340B3502D86E0BC1 (ReadJson_tAA721B791030E8DBE5768E58002EA46CA4E35FDB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU2CU5D_t469708E84B24DAB3E509BDEC941060C69370193E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6496937B5293CB485DAA9B917BBD89522937BA83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77BA5E25678420F932ACED9EFECA6756A0CD1BEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF76631C9924DA21CC9961B508E27EB5D8012412);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1CE20834084DE198D78F4901EBE3F2DF71A6E3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF629C9F7121957F68B7F7F029EACD359DDC374E0);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_1 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_2 = NULL;
	DoubleU5BU2CU5D_t469708E84B24DAB3E509BDEC941060C69370193E* V_3 = NULL;
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_7 = NULL;
	int32_t V_8 = 0;
	{
		// string path = "Assets/Scripts/SampleJson.json";
		// string json = File.ReadAllText(path);
		String_t* L_0;
		L_0 = File_ReadAllText_m8C621C34562CAE1435A2221B3E369BEF1D0ED8BC(_stringLiteralB1CE20834084DE198D78F4901EBE3F2DF71A6E3B, /*hidden argument*/NULL);
		// Debug.Log(json);
		String_t* L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// var feature = new Dictionary<string, object>();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_2 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_2, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		// var geometry = new Dictionary<string, object>();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_3 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_3, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		V_0 = L_3;
		// var list = new List<object>();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_4 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_4, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		V_1 = L_4;
		// double[] pointCoordinates = new double[2];
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_5 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)2);
		V_2 = L_5;
		// double[,] lineCoordinates = new double[2,2];
		il2cpp_array_size_t L_7[] = { (il2cpp_array_size_t)2, (il2cpp_array_size_t)2 };
		DoubleU5BU2CU5D_t469708E84B24DAB3E509BDEC941060C69370193E* L_6 = (DoubleU5BU2CU5D_t469708E84B24DAB3E509BDEC941060C69370193E*)GenArrayNew(DoubleU5BU2CU5D_t469708E84B24DAB3E509BDEC941060C69370193E_il2cpp_TypeInfo_var, L_7);
		V_3 = L_6;
		// var featureCollection = Json.Deserialize(json) as Dictionary<string, object>;
		RuntimeObject * L_8;
		L_8 = Json_Deserialize_m699D585677C2862DBAFA44EC31F8B6BEFB90970A(L_1, /*hidden argument*/NULL);
		// List<object> features = new List<object>();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_9 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_9, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		V_4 = L_9;
		// features  = (List<object>)featureCollection["features"];
		NullCheck(((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_8, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var)));
		RuntimeObject * L_10;
		L_10 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_8, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var)), _stringLiteral6496937B5293CB485DAA9B917BBD89522937BA83, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		V_4 = ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)CastclassClass((RuntimeObject*)L_10, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var));
		// for(int i = 0; i < features.Count; i++)
		V_5 = 0;
		goto IL_0157;
	}

IL_005b:
	{
		// feature = features[i] as Dictionary<string, object>;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		RuntimeObject * L_13;
		L_13 = List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		// Debug.Log(feature);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_14 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_13, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_14, /*hidden argument*/NULL);
		// geometry = feature["geometry"] as Dictionary<string, object>;
		NullCheck(L_14);
		RuntimeObject * L_15;
		L_15 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_14, _stringLiteral77BA5E25678420F932ACED9EFECA6756A0CD1BEA, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		V_0 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_15, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		// list = (List<object>)geometry["coordinates"];
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_16 = V_0;
		NullCheck(L_16);
		RuntimeObject * L_17;
		L_17 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_16, _stringLiteralF629C9F7121957F68B7F7F029EACD359DDC374E0, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		V_1 = ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)CastclassClass((RuntimeObject*)L_17, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var));
		// if(geometry["type"].ToString() == "Point")
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_18 = V_0;
		NullCheck(L_18);
		RuntimeObject * L_19;
		L_19 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_18, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		bool L_21;
		L_21 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, _stringLiteralAF76631C9924DA21CC9961B508E27EB5D8012412, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00f6;
		}
	}
	{
		// Debug.Log(geometry["type"]);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_22 = V_0;
		NullCheck(L_22);
		RuntimeObject * L_23;
		L_23 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_22, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_23, /*hidden argument*/NULL);
		// pointCoordinates[0] = (double)list[0];
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_24 = V_2;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_25 = V_1;
		NullCheck(L_25);
		RuntimeObject * L_26;
		L_26 = List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline(L_25, 0, /*hidden argument*/List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((*(double*)((double*)UnBox(L_26, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))));
		// Debug.Log(pointCoordinates[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_27 = V_2;
		NullCheck(L_27);
		int32_t L_28 = 0;
		double L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		double L_30 = L_29;
		RuntimeObject * L_31 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_30);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_31, /*hidden argument*/NULL);
		// pointCoordinates[1] = (double)list[1];
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_32 = V_2;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_33 = V_1;
		NullCheck(L_33);
		RuntimeObject * L_34;
		L_34 = List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline(L_33, 1, /*hidden argument*/List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((*(double*)((double*)UnBox(L_34, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))));
		// Debug.Log(pointCoordinates[1]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_35 = V_2;
		NullCheck(L_35);
		int32_t L_36 = 1;
		double L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		double L_38 = L_37;
		RuntimeObject * L_39 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_38);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_39, /*hidden argument*/NULL);
		// }
		goto IL_0151;
	}

IL_00f6:
	{
		// for(int row = 0; row <2; row++)
		V_6 = 0;
		goto IL_014c;
	}

IL_00fb:
	{
		// var items = (List<object>)list[row];
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_40 = V_1;
		int32_t L_41 = V_6;
		NullCheck(L_40);
		RuntimeObject * L_42;
		L_42 = List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline(L_40, L_41, /*hidden argument*/List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		V_7 = ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)CastclassClass((RuntimeObject*)L_42, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var));
		// for(int col = 0; col <2; col++)
		V_8 = 0;
		goto IL_0141;
	}

IL_010f:
	{
		// lineCoordinates[row, col] = (double)items[col];
		DoubleU5BU2CU5D_t469708E84B24DAB3E509BDEC941060C69370193E* L_43 = V_3;
		int32_t L_44 = V_6;
		int32_t L_45 = V_8;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_46 = V_7;
		int32_t L_47 = V_8;
		NullCheck(L_46);
		RuntimeObject * L_48;
		L_48 = List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline(L_46, L_47, /*hidden argument*/List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		NullCheck(L_43);
		(L_43)->SetAt(L_44, L_45, ((*(double*)((double*)UnBox(L_48, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))));
		// Debug.Log(lineCoordinates[row,col]);
		DoubleU5BU2CU5D_t469708E84B24DAB3E509BDEC941060C69370193E* L_49 = V_3;
		int32_t L_50 = V_6;
		int32_t L_51 = V_8;
		NullCheck(L_49);
		double L_52;
		L_52 = (L_49)->GetAt(L_50, L_51);
		double L_53 = L_52;
		RuntimeObject * L_54 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_53);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_54, /*hidden argument*/NULL);
		// for(int col = 0; col <2; col++)
		int32_t L_55 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_0141:
	{
		// for(int col = 0; col <2; col++)
		int32_t L_56 = V_8;
		if ((((int32_t)L_56) < ((int32_t)2)))
		{
			goto IL_010f;
		}
	}
	{
		// for(int row = 0; row <2; row++)
		int32_t L_57 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
	}

IL_014c:
	{
		// for(int row = 0; row <2; row++)
		int32_t L_58 = V_6;
		if ((((int32_t)L_58) < ((int32_t)2)))
		{
			goto IL_00fb;
		}
	}

IL_0151:
	{
		// for(int i = 0; i < features.Count; i++)
		int32_t L_59 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
	}

IL_0157:
	{
		// for(int i = 0; i < features.Count; i++)
		int32_t L_60 = V_5;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_61 = V_4;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_61, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		if ((((int32_t)L_60) < ((int32_t)L_62)))
		{
			goto IL_005b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ReadJson::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadJson__ctor_mB3BF7AAFA5B159C8797FFE7056E5CCBC6C93C203 (ReadJson_tAA721B791030E8DBE5768E58002EA46CA4E35FDB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Int32 RouteManager::GetPointCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RouteManager_GetPointCount_m37E2BD991FB1C56832F4FFB6C7CC70208A8548F9 (RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137 * __this, const RuntimeMethod* method)
{
	{
		// return int.Parse(pointCount);
		String_t* L_0 = __this->get_pointCount_5();
		int32_t L_1;
		L_1 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void RouteManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RouteManager_Awake_mE776B9D13AE0D6C1520A3F72F50D548F587D50B2 (RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineManager_tA2082DD0E526890137CB63339340AAF233E12A47_m3CA9C5F5848756DDC72D2461C565FDB79D60EC53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lineManager = lineManager.GetComponent<LineManager>();
		LineManager_tA2082DD0E526890137CB63339340AAF233E12A47 * L_0 = __this->get_lineManager_4();
		NullCheck(L_0);
		LineManager_tA2082DD0E526890137CB63339340AAF233E12A47 * L_1;
		L_1 = Component_GetComponent_TisLineManager_tA2082DD0E526890137CB63339340AAF233E12A47_m3CA9C5F5848756DDC72D2461C565FDB79D60EC53(L_0, /*hidden argument*/Component_GetComponent_TisLineManager_tA2082DD0E526890137CB63339340AAF233E12A47_m3CA9C5F5848756DDC72D2461C565FDB79D60EC53_RuntimeMethod_var);
		__this->set_lineManager_4(L_1);
		// }
		return;
	}
}
// System.Void RouteManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RouteManager_Start_mEDD05886F372824BE29038664349EEFD5101E66A (RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137 * __this, const RuntimeMethod* method)
{
	{
		// GetRouteData();
		RouteManager_GetRouteData_mA908EC50FAE878ADBDE0061E5CB5ED2545AE0A62(__this, /*hidden argument*/NULL);
		// latitudeList = ParsingData(latitudes);
		String_t* L_0 = __this->get_latitudes_6();
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_1;
		L_1 = RouteManager_ParsingData_mDD49746F6E3DF9D2ED11A47ED468A3E1DE2ACE22(__this, L_0, /*hidden argument*/NULL);
		__this->set_latitudeList_8(L_1);
		// longitudeList = ParsingData(longitudes);
		String_t* L_2 = __this->get_longitudes_7();
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_3;
		L_3 = RouteManager_ParsingData_mDD49746F6E3DF9D2ED11A47ED468A3E1DE2ACE22(__this, L_2, /*hidden argument*/NULL);
		__this->set_longitudeList_9(L_3);
		// PrintList(latitudeList);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_4 = __this->get_latitudeList_8();
		RouteManager_PrintList_m8A43F127172B9952E72E4ADA73FE8036509F3DE1(__this, L_4, /*hidden argument*/NULL);
		// PrintList(longitudeList);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_5 = __this->get_longitudeList_9();
		RouteManager_PrintList_m8A43F127172B9952E72E4ADA73FE8036509F3DE1(__this, L_5, /*hidden argument*/NULL);
		// lineManager.DrawLine();
		LineManager_tA2082DD0E526890137CB63339340AAF233E12A47 * L_6 = __this->get_lineManager_4();
		NullCheck(L_6);
		LineManager_DrawLine_m0B0215E9B29B7E1604651A1A0F96FF9119B5C8BD(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RouteManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RouteManager_Update_m5F6FDC1B88D7BEF1A56F44494B4BC17D75B9DAAD (RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137 * __this, const RuntimeMethod* method)
{
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0017;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.Escape)) Application.Quit();
		bool L_1;
		L_1 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)27), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.Escape)) Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void RouteManager::GetRouteData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RouteManager_GetRouteData_mA908EC50FAE878ADBDE0061E5CB5ED2545AE0A62 (RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E5C45732CF934F82F95E76B7B0C6479BEB9F2D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E178D61714E19CBB83E719AA7023581493C3C4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF9D54DA42D3AA95F1A72643B0653BC1378A501B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB1CC10AED50492665B69D0FCC8FD4C533A4DB0E);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// AndroidJavaClass jc = new AndroidJavaClass("com.company.product.OverrideUnityActivity");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral0E5C45732CF934F82F95E76B7B0C6479BEB9F2D1, /*hidden argument*/NULL);
		// AndroidJavaObject overrideActivity = jc.GetStatic<AndroidJavaObject>("instance");
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_0, _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		V_0 = L_1;
		// pointCount = overrideActivity.Call<string>("getPointCount");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3;
		L_3 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_2, _stringLiteral7E178D61714E19CBB83E719AA7023581493C3C4D, L_3, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		__this->set_pointCount_5(L_4);
		// latitudes = overrideActivity.Call<string>("getLatitudes");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_5 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6;
		L_6 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_7;
		L_7 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_5, _stringLiteralBB1CC10AED50492665B69D0FCC8FD4C533A4DB0E, L_6, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		__this->set_latitudes_6(L_7);
		// longitudes = overrideActivity.Call<string>("getLongitudes");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9;
		L_9 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_8);
		String_t* L_10;
		L_10 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_8, _stringLiteralAF9D54DA42D3AA95F1A72643B0653BC1378A501B, L_9, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		__this->set_longitudes_7(L_10);
		// } catch(Exception e)
		goto IL_005c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0059;
		}
		throw e;
	}

CATCH_0059:
	{ // begin catch(System.Exception)
		// } catch(Exception e)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005c;
	} // end catch (depth: 1)

IL_005c:
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.Single> RouteManager::ParsingData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * RouteManager_ParsingData_mDD49746F6E3DF9D2ED11A47ED468A3E1DE2ACE22 (RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137 * __this, String_t* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * V_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// List<float> resultList = new List<float>();
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_0 = (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)il2cpp_codegen_object_new(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var);
		List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C(L_0, /*hidden argument*/List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_RuntimeMethod_var);
		V_0 = L_0;
		// string[] parsedData = data.Split(',');
		String_t* L_1 = ___data0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4;
		L_4 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_1, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// for(int i = 1; i < parsedData.Length; i++)
		V_2 = 1;
		goto IL_002e;
	}

IL_001c:
	{
		// resultList.Add(float.Parse(parsedData[i]));
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_5 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		float L_10;
		L_10 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A(L_5, L_10, /*hidden argument*/List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var);
		// for(int i = 1; i < parsedData.Length; i++)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_002e:
	{
		// for(int i = 1; i < parsedData.Length; i++)
		int32_t L_12 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		// return resultList;
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_14 = V_0;
		return L_14;
	}
}
// System.Void RouteManager::PrintList(System.Collections.Generic.List`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RouteManager_PrintList_m8A43F127172B9952E72E4ADA73FE8036509F3DE1 (RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137 * __this, List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for(int i = 0; i < data.Count; i++)
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// Debug.Log(data[i]);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_0 = ___data0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		float L_2;
		L_2 = List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var);
		float L_3 = L_2;
		RuntimeObject * L_4 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// for(int i = 0; i < data.Count; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0019:
	{
		// for(int i = 0; i < data.Count; i++)
		int32_t L_6 = V_0;
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_7 = ___data0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_inline(L_7, /*hidden argument*/List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RouteManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RouteManager__ctor_m4104BE2D87B2EDABF8400B8C7427D38EF9E454CB (RouteManager_tB8A08B5977B7C91565A6573CE3DE86059CE05137 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string pointCount = "5";
		__this->set_pointCount_5(_stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE);
		// public List<float> latitudeList = new List<float>();
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_0 = (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)il2cpp_codegen_object_new(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var);
		List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C(L_0, /*hidden argument*/List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_RuntimeMethod_var);
		__this->set_latitudeList_8(L_0);
		// public List<float> longitudeList = new List<float>();
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_1 = (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)il2cpp_codegen_object_new(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var);
		List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C(L_1, /*hidden argument*/List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_RuntimeMethod_var);
		__this->set_longitudeList_9(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Boolean MiniJSON.Json/Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_mC0D8CFAB5531BC6B513F269FB4DDB1A306D580DA (Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Char.IsWhiteSpace(c) || WORD_BREAK.IndexOf(c) != -1;
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		NullCheck(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA);
		int32_t L_3;
		L_3 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA, L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001a:
	{
		return (bool)1;
	}
}
// System.Void MiniJSON.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m4E1732BA0BD698178125471DC1511219299898F8 (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Parser(string jsonString) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// json = new StringReader(jsonString);
		String_t* L_0 = ___jsonString0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = (StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)il2cpp_codegen_object_new(StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE(L_1, L_0, /*hidden argument*/NULL);
		__this->set_json_1(L_1);
		// }
		return;
	}
}
// System.Object MiniJSON.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_m0C859F2B5F4F846DE4C1BA6A25C1F5CDE0A4E225 (String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (var instance = new Parser(jsonString)) {
		String_t* L_0 = ___jsonString0;
		Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * L_1 = (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE *)il2cpp_codegen_object_new(Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE_il2cpp_TypeInfo_var);
		Parser__ctor_m4E1732BA0BD698178125471DC1511219299898F8(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		// return instance.ParseValue();
		Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = Parser_ParseValue_m59151796F1BD6D3E46D554A49EF34BCDB403AA79(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_LEAVE(0x1A, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		{
			Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0019;
			}
		}

IL_0013:
		{
			Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_5);
		}

IL_0019:
		{
			IL2CPP_END_FINALLY(16)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		// }
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void MiniJSON.Json/Parser::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_Dispose_mAA3BFFD7355890D49D822235E90A2344EBDBE6C5 (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, const RuntimeMethod* method)
{
	{
		// json.Dispose();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		TextReader_Dispose_mDF1DCFD8FBE94A453EB2350DB7173027420BA5F8(L_0, /*hidden argument*/NULL);
		// json = null;
		__this->set_json_1((StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)NULL);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> MiniJSON.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * Parser_ParseObject_mDDD2FB38855612FD864DBA2DFEA9C11BF73DC39E (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Dictionary<string, object> table = new Dictionary<string, object>();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_0, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
	}

IL_0012:
	{
		// switch (NextToken) {
		int32_t L_3;
		L_3 = Parser_get_NextToken_m889CBAFA9C9DDDE25A59F5CD4BC592654A1CA567(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_002a;
	}

IL_0026:
	{
		// return null;
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_0028:
	{
		// return table;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_7 = V_0;
		return L_7;
	}

IL_002a:
	{
		// string name = ParseString();
		String_t* L_8;
		L_8 = Parser_ParseString_m0D81629614AB969C04BBD74965821A39E1573D63(__this, /*hidden argument*/NULL);
		V_1 = L_8;
		// if (name == null) {
		String_t* L_9 = V_1;
		if (L_9)
		{
			goto IL_0036;
		}
	}
	{
		// return null;
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_0036:
	{
		// if (NextToken != TOKEN.COLON) {
		int32_t L_10;
		L_10 = Parser_get_NextToken_m889CBAFA9C9DDDE25A59F5CD4BC592654A1CA567(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_10) == ((int32_t)5)))
		{
			goto IL_0041;
		}
	}
	{
		// return null;
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_0041:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_11 = __this->get_json_1();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		// table[name] = ParseValue();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_13 = V_0;
		String_t* L_14 = V_1;
		RuntimeObject * L_15;
		L_15 = Parser_ParseValue_m59151796F1BD6D3E46D554A49EF34BCDB403AA79(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_13, L_14, L_15, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		// break;
		goto IL_0012;
	}
}
// System.Collections.Generic.List`1<System.Object> MiniJSON.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Parser_ParseArray_m652900CDFFD881DF9449BDD372556C340DCD75D3 (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		// List<object> array = new List<object>();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_0, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// var parsing = true;
		V_1 = (bool)1;
		goto IL_003f;
	}

IL_0016:
	{
		// TOKEN nextToken = NextToken;
		int32_t L_3;
		L_3 = Parser_get_NextToken_m889CBAFA9C9DDDE25A59F5CD4BC592654A1CA567(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0030;
	}

IL_002a:
	{
		// return null;
		return (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)NULL;
	}

IL_002c:
	{
		// parsing = false;
		V_1 = (bool)0;
		// break;
		goto IL_003f;
	}

IL_0030:
	{
		// object value = ParseByToken(nextToken);
		int32_t L_7 = V_2;
		RuntimeObject * L_8;
		L_8 = Parser_ParseByToken_m911C011FACC990674C6B917558E12B9DA2CBE444(__this, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		// array.Add(value);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_9 = V_0;
		RuntimeObject * L_10 = V_3;
		NullCheck(L_9);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_9, L_10, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
	}

IL_003f:
	{
		// while (parsing) {
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0016;
		}
	}
	{
		// return array;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_12 = V_0;
		return L_12;
	}
}
// System.Object MiniJSON.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_m59151796F1BD6D3E46D554A49EF34BCDB403AA79 (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// TOKEN nextToken = NextToken;
		int32_t L_0;
		L_0 = Parser_get_NextToken_m889CBAFA9C9DDDE25A59F5CD4BC592654A1CA567(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// return ParseByToken(nextToken);
		int32_t L_1 = V_0;
		RuntimeObject * L_2;
		L_2 = Parser_ParseByToken_m911C011FACC990674C6B917558E12B9DA2CBE444(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object MiniJSON.Json/Parser::ParseByToken(MiniJSON.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m911C011FACC990674C6B917558E12B9DA2CBE444 (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, int32_t ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_0062;
			}
			case 4:
			{
				goto IL_0062;
			}
			case 5:
			{
				goto IL_0062;
			}
			case 6:
			{
				goto IL_0036;
			}
			case 7:
			{
				goto IL_003d;
			}
			case 8:
			{
				goto IL_0052;
			}
			case 9:
			{
				goto IL_0059;
			}
			case 10:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_0036:
	{
		// return ParseString();
		String_t* L_1;
		L_1 = Parser_ParseString_m0D81629614AB969C04BBD74965821A39E1573D63(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_003d:
	{
		// return ParseNumber();
		RuntimeObject * L_2;
		L_2 = Parser_ParseNumber_m2A376DA74162CDEE4A283B5BD92FCF80E066A04E(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0044:
	{
		// return ParseObject();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_3;
		L_3 = Parser_ParseObject_mDDD2FB38855612FD864DBA2DFEA9C11BF73DC39E(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_004b:
	{
		// return ParseArray();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_4;
		L_4 = Parser_ParseArray_m652900CDFFD881DF9449BDD372556C340DCD75D3(__this, /*hidden argument*/NULL);
		return L_4;
	}

IL_0052:
	{
		// return true;
		bool L_5 = ((bool)1);
		RuntimeObject * L_6 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_0059:
	{
		// return false;
		bool L_7 = ((bool)0);
		RuntimeObject * L_8 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_0060:
	{
		// return null;
		return NULL;
	}

IL_0062:
	{
		// return null;
		return NULL;
	}
}
// System.String MiniJSON.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m0D81629614AB969C04BBD74965821A39E1573D63 (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// StringBuilder s = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// bool parsing = true;
		V_2 = (bool)1;
		goto IL_0137;
	}

IL_0019:
	{
		// if (json.Peek() == -1) {
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_3 = __this->get_json_1();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_013d;
	}

IL_002e:
	{
		// c = NextChar;
		Il2CppChar L_5;
		L_5 = Parser_get_NextChar_m02DE23E038D31DE928B6F89B149590A35209D4A1(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_0044;
		}
	}
	{
		Il2CppChar L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)92))))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_012f;
	}

IL_0044:
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_0137;
	}

IL_004b:
	{
		// if (json.Peek() == -1) {
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_8 = __this->get_json_1();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0060;
		}
	}
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_0137;
	}

IL_0060:
	{
		// c = NextChar;
		Il2CppChar L_10;
		L_10 = Parser_get_NextChar_m02DE23E038D31DE928B6F89B149590A35209D4A1(__this, /*hidden argument*/NULL);
		V_1 = L_10;
		Il2CppChar L_11 = V_1;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_0080;
		}
	}
	{
		Il2CppChar L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)34))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)47))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)92))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0137;
	}

IL_0080:
	{
		Il2CppChar L_15 = V_1;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_0094;
		}
	}
	{
		Il2CppChar L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)98))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)102))))
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0137;
	}

IL_0094:
	{
		Il2CppChar L_18 = V_1;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)110))))
		{
			goto IL_00d6;
		}
	}
	{
		Il2CppChar L_19 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_00e1;
			}
			case 1:
			{
				goto IL_0137;
			}
			case 2:
			{
				goto IL_00ec;
			}
			case 3:
			{
				goto IL_00f7;
			}
		}
	}
	{
		goto IL_0137;
	}

IL_00b7:
	{
		// s.Append(c);
		StringBuilder_t * L_20 = V_0;
		Il2CppChar L_21 = V_1;
		NullCheck(L_20);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_20, L_21, /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00c1:
	{
		// s.Append('\b');
		StringBuilder_t * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_23, 8, /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00cb:
	{
		// s.Append('\f');
		StringBuilder_t * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_t * L_26;
		L_26 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_25, ((int32_t)12), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00d6:
	{
		// s.Append('\n');
		StringBuilder_t * L_27 = V_0;
		NullCheck(L_27);
		StringBuilder_t * L_28;
		L_28 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_27, ((int32_t)10), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00e1:
	{
		// s.Append('\r');
		StringBuilder_t * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_t * L_30;
		L_30 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_29, ((int32_t)13), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00ec:
	{
		// s.Append('\t');
		StringBuilder_t * L_31 = V_0;
		NullCheck(L_31);
		StringBuilder_t * L_32;
		L_32 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_31, ((int32_t)9), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00f7:
	{
		// var hex = new char[4];
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_33 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)4);
		V_3 = L_33;
		// for (int i=0; i< 4; i++) {
		V_4 = 0;
		goto IL_0113;
	}

IL_0103:
	{
		// hex[i] = NextChar;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_34 = V_3;
		int32_t L_35 = V_4;
		Il2CppChar L_36;
		L_36 = Parser_get_NextChar_m02DE23E038D31DE928B6F89B149590A35209D4A1(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (Il2CppChar)L_36);
		// for (int i=0; i< 4; i++) {
		int32_t L_37 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_0113:
	{
		// for (int i=0; i< 4; i++) {
		int32_t L_38 = V_4;
		if ((((int32_t)L_38) < ((int32_t)4)))
		{
			goto IL_0103;
		}
	}
	{
		// s.Append((char) Convert.ToInt32(new string(hex), 16));
		StringBuilder_t * L_39 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_40 = V_3;
		String_t* L_41;
		L_41 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_42;
		L_42 = Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643(L_41, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_39);
		StringBuilder_t * L_43;
		L_43 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_39, ((int32_t)((uint16_t)L_42)), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_012f:
	{
		// s.Append(c);
		StringBuilder_t * L_44 = V_0;
		Il2CppChar L_45 = V_1;
		NullCheck(L_44);
		StringBuilder_t * L_46;
		L_46 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_44, L_45, /*hidden argument*/NULL);
	}

IL_0137:
	{
		// while (parsing) {
		bool L_47 = V_2;
		if (L_47)
		{
			goto IL_0019;
		}
	}

IL_013d:
	{
		// return s.ToString();
		StringBuilder_t * L_48 = V_0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_48);
		return L_49;
	}
}
// System.Object MiniJSON.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_m2A376DA74162CDEE4A283B5BD92FCF80E066A04E (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	double V_1 = 0.0;
	int64_t V_2 = 0;
	{
		// string number = NextWord;
		String_t* L_0;
		L_0 = Parser_get_NextWord_m7DA018BF5C404FE6FB873F46E721A512FD63ED2F(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (number.IndexOf('.') == -1) {
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_1, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0022;
		}
	}
	{
		// Int64.TryParse(number, out parsedInt);
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = Int64_TryParse_m6EA988890D7F9954EA49A7227E60B3C674930650(L_3, (int64_t*)(&V_2), /*hidden argument*/NULL);
		// return parsedInt;
		int64_t L_5 = V_2;
		int64_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_0022:
	{
		// Double.TryParse(number, out parsedDouble);
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Double_TryParse_m9152D976CDFE0B30C7E251DDD04EAD6BBD0800B0(L_8, (double*)(&V_1), /*hidden argument*/NULL);
		// return parsedDouble;
		double L_10 = V_1;
		double L_11 = L_10;
		RuntimeObject * L_12 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Void MiniJSON.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_m8C75236AFAB8FFF856DA2BFE53BC84F9C7E05AA1 (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_001c;
	}

IL_0002:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		// if (json.Peek() == -1) {
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_2 = __this->get_json_1();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_2);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}

IL_001c:
	{
		// while (Char.IsWhiteSpace(PeekChar)) {
		Il2CppChar L_4;
		L_4 = Parser_get_PeekChar_mC5C7804B362B6A163532B53F1D9270D8F7F8C55A(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0002;
		}
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Char MiniJSON.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_mC5C7804B362B6A163532B53F1D9270D8F7F8C55A (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToChar(json.Peek());
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Char MiniJSON.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m02DE23E038D31DE928B6F89B149590A35209D4A1 (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToChar(json.Read());
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String MiniJSON.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m7DA018BF5C404FE6FB873F46E721A512FD63ED2F (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		// StringBuilder word = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0023;
	}

IL_0008:
	{
		// word.Append(NextChar);
		StringBuilder_t * L_1 = V_0;
		Il2CppChar L_2;
		L_2 = Parser_get_NextChar_m02DE23E038D31DE928B6F89B149590A35209D4A1(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_t * L_3;
		L_3 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_1, L_2, /*hidden argument*/NULL);
		// if (json.Peek() == -1) {
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_4 = __this->get_json_1();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_4);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0030;
		}
	}

IL_0023:
	{
		// while (!IsWordBreak(PeekChar)) {
		Il2CppChar L_6;
		L_6 = Parser_get_PeekChar_mC5C7804B362B6A163532B53F1D9270D8F7F8C55A(__this, /*hidden argument*/NULL);
		bool L_7;
		L_7 = Parser_IsWordBreak_mC0D8CFAB5531BC6B513F269FB4DDB1A306D580DA(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0008;
		}
	}

IL_0030:
	{
		// return word.ToString();
		StringBuilder_t * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// MiniJSON.Json/Parser/TOKEN MiniJSON.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m889CBAFA9C9DDDE25A59F5CD4BC592654A1CA567 (Parser_t42496E5FE87A7DEAC02D447CB3F6A8752FE2A7BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	String_t* V_1 = NULL;
	{
		// EatWhitespace();
		Parser_EatWhitespace_m8C75236AFAB8FFF856DA2BFE53BC84F9C7E05AA1(__this, /*hidden argument*/NULL);
		// if (json.Peek() == -1) {
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0016;
		}
	}
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
	}

IL_0016:
	{
		// switch (PeekChar) {
		Il2CppChar L_2;
		L_2 = Parser_get_PeekChar_mC5C7804B362B6A163532B53F1D9270D8F7F8C55A(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)91)))))
		{
			goto IL_0096;
		}
	}
	{
		Il2CppChar L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)34))))
		{
			case 0:
			{
				goto IL_00d5;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_00db;
			}
			case 3:
			{
				goto IL_00db;
			}
			case 4:
			{
				goto IL_00db;
			}
			case 5:
			{
				goto IL_00db;
			}
			case 6:
			{
				goto IL_00db;
			}
			case 7:
			{
				goto IL_00db;
			}
			case 8:
			{
				goto IL_00db;
			}
			case 9:
			{
				goto IL_00db;
			}
			case 10:
			{
				goto IL_00c7;
			}
			case 11:
			{
				goto IL_00d9;
			}
			case 12:
			{
				goto IL_00db;
			}
			case 13:
			{
				goto IL_00db;
			}
			case 14:
			{
				goto IL_00d9;
			}
			case 15:
			{
				goto IL_00d9;
			}
			case 16:
			{
				goto IL_00d9;
			}
			case 17:
			{
				goto IL_00d9;
			}
			case 18:
			{
				goto IL_00d9;
			}
			case 19:
			{
				goto IL_00d9;
			}
			case 20:
			{
				goto IL_00d9;
			}
			case 21:
			{
				goto IL_00d9;
			}
			case 22:
			{
				goto IL_00d9;
			}
			case 23:
			{
				goto IL_00d9;
			}
			case 24:
			{
				goto IL_00d7;
			}
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)91))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)93))))
		{
			goto IL_00b9;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)123))))
		{
			goto IL_00a7;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)125))))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_00db;
	}

IL_00a7:
	{
		// return TOKEN.CURLY_OPEN;
		return (int32_t)(1);
	}

IL_00a9:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_9 = __this->get_json_1();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		// return TOKEN.CURLY_CLOSE;
		return (int32_t)(2);
	}

IL_00b7:
	{
		// return TOKEN.SQUARED_OPEN;
		return (int32_t)(3);
	}

IL_00b9:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_11 = __this->get_json_1();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		// return TOKEN.SQUARED_CLOSE;
		return (int32_t)(4);
	}

IL_00c7:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_13 = __this->get_json_1();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_13);
		// return TOKEN.COMMA;
		return (int32_t)(6);
	}

IL_00d5:
	{
		// return TOKEN.STRING;
		return (int32_t)(7);
	}

IL_00d7:
	{
		// return TOKEN.COLON;
		return (int32_t)(5);
	}

IL_00d9:
	{
		// return TOKEN.NUMBER;
		return (int32_t)(8);
	}

IL_00db:
	{
		// switch (NextWord) {
		String_t* L_15;
		L_15 = Parser_get_NextWord_m7DA018BF5C404FE6FB873F46E721A512FD63ED2F(__this, /*hidden argument*/NULL);
		V_1 = L_15;
		String_t* L_16 = V_1;
		if (!L_16)
		{
			goto IL_0117;
		}
	}
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_17, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_19, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0111;
		}
	}
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_21, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0114;
		}
	}
	{
		goto IL_0117;
	}

IL_010e:
	{
		// return TOKEN.FALSE;
		return (int32_t)(((int32_t)10));
	}

IL_0111:
	{
		// return TOKEN.TRUE;
		return (int32_t)(((int32_t)9));
	}

IL_0114:
	{
		// return TOKEN.NULL;
		return (int32_t)(((int32_t)11));
	}

IL_0117:
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
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
// System.Void MiniJSON.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_mE358C3CEC17F0D9F2158C5D09F9BD1CB6B760F84 (Serializer_t1A3A74BEDA18296ABEABE544E7F5EB2729E13353 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Serializer() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// builder = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_builder_0(L_0);
		// }
		return;
	}
}
// System.String MiniJSON.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_mBEDF816D5B952D6C2EDFEE5475395CD4249BDB9C (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_t1A3A74BEDA18296ABEABE544E7F5EB2729E13353_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var instance = new Serializer();
		Serializer_t1A3A74BEDA18296ABEABE544E7F5EB2729E13353 * L_0 = (Serializer_t1A3A74BEDA18296ABEABE544E7F5EB2729E13353 *)il2cpp_codegen_object_new(Serializer_t1A3A74BEDA18296ABEABE544E7F5EB2729E13353_il2cpp_TypeInfo_var);
		Serializer__ctor_mE358C3CEC17F0D9F2158C5D09F9BD1CB6B760F84(L_0, /*hidden argument*/NULL);
		// instance.SerializeValue(obj);
		Serializer_t1A3A74BEDA18296ABEABE544E7F5EB2729E13353 * L_1 = L_0;
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_1);
		Serializer_SerializeValue_mBE0C676D8B5F4EBD76E9019A7FE931F8BB2416EE(L_1, L_2, /*hidden argument*/NULL);
		// return instance.builder.ToString();
		NullCheck(L_1);
		StringBuilder_t * L_3 = L_1->get_builder_0();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}
}
// System.Void MiniJSON.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_mBE0C676D8B5F4EBD76E9019A7FE931F8BB2416EE (Serializer_t1A3A74BEDA18296ABEABE544E7F5EB2729E13353 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t * G_B7_0 = NULL;
	StringBuilder_t * G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t * G_B8_1 = NULL;
	{
		// if (value == null) {
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// builder.Append("null");
		StringBuilder_t * L_1 = __this->get_builder_0();
		NullCheck(L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		// } else if ((asStr = value as string) != null) {
		return;
	}

IL_0015:
	{
		// } else if ((asStr = value as string) != null) {
		RuntimeObject * L_3 = ___value0;
		String_t* L_4 = ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
		V_2 = L_4;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// SerializeString(asStr);
		String_t* L_5 = V_2;
		Serializer_SerializeString_m8EF870ACEA27199F33FA1B647B801C3E026CF31F(__this, L_5, /*hidden argument*/NULL);
		// } else if (value is bool) {
		return;
	}

IL_0027:
	{
		// } else if (value is bool) {
		RuntimeObject * L_6 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_0050;
		}
	}
	{
		// builder.Append((bool) value ? "true" : "false");
		StringBuilder_t * L_7 = __this->get_builder_0();
		RuntimeObject * L_8 = ___value0;
		G_B6_0 = L_7;
		if (((*(bool*)((bool*)UnBox(L_8, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_7;
			goto IL_0044;
		}
	}
	{
		G_B8_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B8_1 = G_B6_0;
		goto IL_0049;
	}

IL_0044:
	{
		G_B8_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B8_1 = G_B7_0;
	}

IL_0049:
	{
		NullCheck(G_B8_1);
		StringBuilder_t * L_9;
		L_9 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		// } else if ((asList = value as IList) != null) {
		return;
	}

IL_0050:
	{
		// } else if ((asList = value as IList) != null) {
		RuntimeObject * L_10 = ___value0;
		RuntimeObject* L_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		V_0 = L_11;
		if (!L_11)
		{
			goto IL_0062;
		}
	}
	{
		// SerializeArray(asList);
		RuntimeObject* L_12 = V_0;
		Serializer_SerializeArray_m72FB41798EAB678E1064FC4DC830E3F34EB72302(__this, L_12, /*hidden argument*/NULL);
		// } else if ((asDict = value as IDictionary) != null) {
		return;
	}

IL_0062:
	{
		// } else if ((asDict = value as IDictionary) != null) {
		RuntimeObject * L_13 = ___value0;
		RuntimeObject* L_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var));
		V_1 = L_14;
		if (!L_14)
		{
			goto IL_0074;
		}
	}
	{
		// SerializeObject(asDict);
		RuntimeObject* L_15 = V_1;
		Serializer_SerializeObject_m8B5E760CF414451768C00F044DBC2B36A028E1D4(__this, L_15, /*hidden argument*/NULL);
		// } else if (value is char) {
		return;
	}

IL_0074:
	{
		// } else if (value is char) {
		RuntimeObject * L_16 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_16, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		// SerializeString(new string((char) value, 1));
		RuntimeObject * L_17 = ___value0;
		String_t* L_18;
		L_18 = String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED(NULL, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_17, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))), 1, /*hidden argument*/NULL);
		Serializer_SerializeString_m8EF870ACEA27199F33FA1B647B801C3E026CF31F(__this, L_18, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_008f:
	{
		// SerializeOther(value);
		RuntimeObject * L_19 = ___value0;
		Serializer_SerializeOther_m20D11252CFA7B52079C618491BCB3AFE22332BC4(__this, L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m8B5E760CF414451768C00F044DBC2B36A028E1D4 (Serializer_t1A3A74BEDA18296ABEABE544E7F5EB2729E13353 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// bool first = true;
		V_0 = (bool)1;
		// builder.Append('{');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)123), /*hidden argument*/NULL);
		// foreach (object e in obj.Keys) {
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005f;
		}

IL_001e:
		{
			// foreach (object e in obj.Keys) {
			RuntimeObject* L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject * L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_5);
			V_2 = L_6;
			// if (!first) {
			bool L_7 = V_0;
			if (L_7)
			{
				goto IL_0036;
			}
		}

IL_0028:
		{
			// builder.Append(',');
			StringBuilder_t * L_8 = __this->get_builder_0();
			NullCheck(L_8);
			StringBuilder_t * L_9;
			L_9 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_8, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0036:
		{
			// SerializeString(e.ToString());
			RuntimeObject * L_10 = V_2;
			NullCheck(L_10);
			String_t* L_11;
			L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
			Serializer_SerializeString_m8EF870ACEA27199F33FA1B647B801C3E026CF31F(__this, L_11, /*hidden argument*/NULL);
			// builder.Append(':');
			StringBuilder_t * L_12 = __this->get_builder_0();
			NullCheck(L_12);
			StringBuilder_t * L_13;
			L_13 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_12, ((int32_t)58), /*hidden argument*/NULL);
			// SerializeValue(obj[e]);
			RuntimeObject* L_14 = ___obj0;
			RuntimeObject * L_15 = V_2;
			NullCheck(L_14);
			RuntimeObject * L_16;
			L_16 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_14, L_15);
			Serializer_SerializeValue_mBE0C676D8B5F4EBD76E9019A7FE931F8BB2416EE(__this, L_16, /*hidden argument*/NULL);
			// first = false;
			V_0 = (bool)0;
		}

IL_005f:
		{
			// foreach (object e in obj.Keys) {
			RuntimeObject* L_17 = V_1;
			NullCheck(L_17);
			bool L_18;
			L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_17);
			if (L_18)
			{
				goto IL_001e;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x7A, FINALLY_0069);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0069;
	}

FINALLY_0069:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_19 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_19, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_20 = V_3;
			if (!L_20)
			{
				goto IL_0079;
			}
		}

IL_0073:
		{
			RuntimeObject* L_21 = V_3;
			NullCheck(L_21);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_21);
		}

IL_0079:
		{
			IL2CPP_END_FINALLY(105)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(105)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
	}

IL_007a:
	{
		// builder.Append('}');
		StringBuilder_t * L_22 = __this->get_builder_0();
		NullCheck(L_22);
		StringBuilder_t * L_23;
		L_23 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_22, ((int32_t)125), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m72FB41798EAB678E1064FC4DC830E3F34EB72302 (Serializer_t1A3A74BEDA18296ABEABE544E7F5EB2729E13353 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// builder.Append('[');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)91), /*hidden argument*/NULL);
		// bool first = true;
		V_0 = (bool)1;
		// foreach (object obj in anArray) {
		RuntimeObject* L_2 = ___anArray0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003a;
		}

IL_0019:
		{
			// foreach (object obj in anArray) {
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			// if (!first) {
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_0031;
			}
		}

IL_0023:
		{
			// builder.Append(',');
			StringBuilder_t * L_7 = __this->get_builder_0();
			NullCheck(L_7);
			StringBuilder_t * L_8;
			L_8 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_7, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0031:
		{
			// SerializeValue(obj);
			RuntimeObject * L_9 = V_2;
			Serializer_SerializeValue_mBE0C676D8B5F4EBD76E9019A7FE931F8BB2416EE(__this, L_9, /*hidden argument*/NULL);
			// first = false;
			V_0 = (bool)0;
		}

IL_003a:
		{
			// foreach (object obj in anArray) {
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			bool L_11;
			L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0019;
			}
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x55, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_13 = V_3;
			if (!L_13)
			{
				goto IL_0054;
			}
		}

IL_004e:
		{
			RuntimeObject* L_14 = V_3;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_14);
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(68)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x55, IL_0055)
	}

IL_0055:
	{
		// builder.Append(']');
		StringBuilder_t * L_15 = __this->get_builder_0();
		NullCheck(L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_15, ((int32_t)93), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MiniJSON.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_m8EF870ACEA27199F33FA1B647B801C3E026CF31F (Serializer_t1A3A74BEDA18296ABEABE544E7F5EB2729E13353 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE727BF366E3CC855B808D806440542BF7152AF19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		// builder.Append('\"');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)34), /*hidden argument*/NULL);
		// char[] charArray = str.ToCharArray();
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3;
		L_3 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(L_2, /*hidden argument*/NULL);
		// foreach (var c in charArray) {
		V_0 = L_3;
		V_1 = 0;
		goto IL_012d;
	}

IL_001c:
	{
		// foreach (var c in charArray) {
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		Il2CppChar L_8 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)8)))
		{
			case 0:
			{
				goto IL_007b;
			}
			case 1:
			{
				goto IL_00cd;
			}
			case 2:
			{
				goto IL_00a7;
			}
			case 3:
			{
				goto IL_00e0;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_00ba;
			}
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_004f;
		}
	}
	{
		Il2CppChar L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_00e0;
	}

IL_004f:
	{
		// builder.Append("\\\"");
		StringBuilder_t * L_11 = __this->get_builder_0();
		NullCheck(L_11);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_11, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_0065:
	{
		// builder.Append("\\\\");
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_t * L_14;
		L_14 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_13, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_007b:
	{
		// builder.Append("\\b");
		StringBuilder_t * L_15 = __this->get_builder_0();
		NullCheck(L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_15, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_0091:
	{
		// builder.Append("\\f");
		StringBuilder_t * L_17 = __this->get_builder_0();
		NullCheck(L_17);
		StringBuilder_t * L_18;
		L_18 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_17, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00a7:
	{
		// builder.Append("\\n");
		StringBuilder_t * L_19 = __this->get_builder_0();
		NullCheck(L_19);
		StringBuilder_t * L_20;
		L_20 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_19, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00ba:
	{
		// builder.Append("\\r");
		StringBuilder_t * L_21 = __this->get_builder_0();
		NullCheck(L_21);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_21, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00cd:
	{
		// builder.Append("\\t");
		StringBuilder_t * L_23 = __this->get_builder_0();
		NullCheck(L_23);
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_23, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00e0:
	{
		// int codepoint = Convert.ToInt32(c);
		Il2CppChar L_25 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = Convert_ToInt32_m0B80BF2883121B16934DF6F71590CAE15442A5BC(L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		// if ((codepoint >= 32) && (codepoint <= 126)) {
		int32_t L_27 = V_3;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)32))))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)126))))
		{
			goto IL_0100;
		}
	}
	{
		// builder.Append(c);
		StringBuilder_t * L_29 = __this->get_builder_0();
		Il2CppChar L_30 = V_2;
		NullCheck(L_29);
		StringBuilder_t * L_31;
		L_31 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_29, L_30, /*hidden argument*/NULL);
		// } else {
		goto IL_0129;
	}

IL_0100:
	{
		// builder.Append("\\u");
		StringBuilder_t * L_32 = __this->get_builder_0();
		NullCheck(L_32);
		StringBuilder_t * L_33;
		L_33 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_32, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, /*hidden argument*/NULL);
		// builder.Append(codepoint.ToString("x4"));
		StringBuilder_t * L_34 = __this->get_builder_0();
		String_t* L_35;
		L_35 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)(&V_3), _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19, /*hidden argument*/NULL);
		NullCheck(L_34);
		StringBuilder_t * L_36;
		L_36 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_34, L_35, /*hidden argument*/NULL);
	}

IL_0129:
	{
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_012d:
	{
		// foreach (var c in charArray) {
		int32_t L_38 = V_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_39 = V_0;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		// builder.Append('\"');
		StringBuilder_t * L_40 = __this->get_builder_0();
		NullCheck(L_40);
		StringBuilder_t * L_41;
		L_41 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_40, ((int32_t)34), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MiniJSON.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m20D11252CFA7B52079C618491BCB3AFE22332BC4 (Serializer_t1A3A74BEDA18296ABEABE544E7F5EB2729E13353 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	double V_1 = 0.0;
	{
		// if (value is float) {
		RuntimeObject * L_0 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		// builder.Append(((float) value).ToString("R"));
		StringBuilder_t * L_1 = __this->get_builder_0();
		RuntimeObject * L_2 = ___value0;
		V_0 = ((*(float*)((float*)UnBox(L_2, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))));
		String_t* L_3;
		L_3 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_0), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_t * L_4;
		L_4 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, L_3, /*hidden argument*/NULL);
		// } else if (value is int
		return;
	}

IL_0028:
	{
		// } else if (value is int
		//     || value is uint
		//     || value is long
		//     || value is sbyte
		//     || value is byte
		//     || value is short
		//     || value is ushort
		//     || value is ulong) {
		RuntimeObject * L_5 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_6 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_7 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_8 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_9 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_10 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_11 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_11, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_12 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_12, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))
		{
			goto IL_0076;
		}
	}

IL_0068:
	{
		// builder.Append(value);
		StringBuilder_t * L_13 = __this->get_builder_0();
		RuntimeObject * L_14 = ___value0;
		NullCheck(L_13);
		StringBuilder_t * L_15;
		L_15 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F(L_13, L_14, /*hidden argument*/NULL);
		// } else if (value is double
		return;
	}

IL_0076:
	{
		// } else if (value is double
		//     || value is decimal) {
		RuntimeObject * L_16 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_16, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_0086;
		}
	}
	{
		RuntimeObject * L_17 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_17, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var)))
		{
			goto IL_00a6;
		}
	}

IL_0086:
	{
		// builder.Append(Convert.ToDouble(value).ToString("R"));
		StringBuilder_t * L_18 = __this->get_builder_0();
		RuntimeObject * L_19 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		double L_20;
		L_20 = Convert_ToDouble_mF6F0642EA16CAB414EEA621DEAA519527DA64284(L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		String_t* L_21;
		L_21 = Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C((double*)(&V_1), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, /*hidden argument*/NULL);
		NullCheck(L_18);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_18, L_21, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_00a6:
	{
		// SerializeString(value.ToString());
		RuntimeObject * L_23 = ___value0;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		Serializer_SerializeString_m8EF870ACEA27199F33FA1B647B801C3E026CF31F(__this, L_24, /*hidden argument*/NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get__items_1();
		int32_t L_3 = ___index0;
		float L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_2, (int32_t)L_3);
		return (float)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_2, (int32_t)L_3);
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}

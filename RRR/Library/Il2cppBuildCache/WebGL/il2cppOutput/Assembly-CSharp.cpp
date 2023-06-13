#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Level/Platform>
struct List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Level/Platform[]
struct PlatformU5BU5D_t0C750CCB44336A00E6963BD4AE997F9BA4454615;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9;
// ButtonController
struct ButtonController_t0D27B81A3DC32EC27023C3CD654D850B38C7F1C7;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// ControlsWindow
struct ControlsWindow_tBC14BBCB1BFD357E2CB8E852D6DD329EEC444900;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameAssets
struct GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191;
// GameHandler
struct GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GameOverWindow
struct GameOverWindow_tD8FABC4BD8EE7545589759C31EE0B5CEC6872B3A;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Level
struct Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93;
// LoaderUpdate
struct LoaderUpdate_t1C703620C60A3AFA20D9EFF1F653FB17BBD1E61B;
// MainMenuWindow
struct MainMenuWindow_t82149054BBB1D5F43C52DE21D8CA7523FAB9F3BA;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// QuizCorrect
struct QuizCorrect_tF43E788CB4CC493850F3CD151ED838959A75C879;
// QuizIncorrect
struct QuizIncorrect_t1421A3C817D236930786AEFBDE43C66AA881056E;
// QuizWindow
struct QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// ScoreWindow
struct ScoreWindow_t0A6F76DD706EE74431B3D9354A4DA58E420D621A;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
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
// Level/Platform
struct Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scene_tDAB301C5EA69A8F320BA4612E5E232D83D3E3877_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7;
IL2CPP_EXTERN_C String_t* _stringLiteral18F69B17FB5C436E81B2B1B248117FD40D3EB55D;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral2C14F31D21F9D2E7631935FA609E23FDC4C023F4;
IL2CPP_EXTERN_C String_t* _stringLiteral2C409218DCC1BB00148BB5E9DB58BC18B97AD4C1;
IL2CPP_EXTERN_C String_t* _stringLiteral3508B7E87DFB62F0AE74252DB0E3BA819109C5DB;
IL2CPP_EXTERN_C String_t* _stringLiteral375A90A563EC7556B68514B85C38318C73D8965F;
IL2CPP_EXTERN_C String_t* _stringLiteral378195167FEB4327A6BE4F2B3555152C47A4AA10;
IL2CPP_EXTERN_C String_t* _stringLiteral3857B7441BD50E0764FE14FC90E670838E34E30A;
IL2CPP_EXTERN_C String_t* _stringLiteral3A0DA487F4A195CE9A357D38CD41768F5EA8FC6D;
IL2CPP_EXTERN_C String_t* _stringLiteral4C0BC247C3D8715498B46A5D74050241244A0DB8;
IL2CPP_EXTERN_C String_t* _stringLiteral4C250151FC920B1AF20213AC4D5E4ECFBC0FEF6C;
IL2CPP_EXTERN_C String_t* _stringLiteral59CABCB9E7941A7EEBB3AFAA4E50FB4BF8C816E7;
IL2CPP_EXTERN_C String_t* _stringLiteral6B8315E0582A311629B7BB8332DC5B78A771470C;
IL2CPP_EXTERN_C String_t* _stringLiteral70DFB3A443EFAAF00DA135342763575F1A90FA54;
IL2CPP_EXTERN_C String_t* _stringLiteral719DC4C792BEE02C4C7BAB1D974D09000F87BB1B;
IL2CPP_EXTERN_C String_t* _stringLiteral77AB304C525C6F2544A3C79D96FFC85BDFB2DB7B;
IL2CPP_EXTERN_C String_t* _stringLiteral7EC99B45D8DF5951409BACB669E0464FC0C8BDFD;
IL2CPP_EXTERN_C String_t* _stringLiteral7FA07AC5487C3E8AD8B677D98584B55323B4F0C3;
IL2CPP_EXTERN_C String_t* _stringLiteral8686D0B5C64050EA2F56228A140E2AB25D3D685C;
IL2CPP_EXTERN_C String_t* _stringLiteral926805D0262C2F202FC038E8DABF52F82FFCCF2E;
IL2CPP_EXTERN_C String_t* _stringLiteral937055BB7C257894131D85407D3C2EE0BAEA540E;
IL2CPP_EXTERN_C String_t* _stringLiteral97F41D1AF7B0F563DD2107F2C514DB35D0755E67;
IL2CPP_EXTERN_C String_t* _stringLiteral9994C9B4F7A06ADE00231A27A560CDBC3E149EA5;
IL2CPP_EXTERN_C String_t* _stringLiteral9CC0B6598903209E16BB9DB4D5D0EE4989C2C01B;
IL2CPP_EXTERN_C String_t* _stringLiteralA9A24904570014231D749F59E9F42236243C516A;
IL2CPP_EXTERN_C String_t* _stringLiteralB465B56BFB60F8E0F41685A37F3D8288034FBE25;
IL2CPP_EXTERN_C String_t* _stringLiteralBE28D7DB77A918998881EFF2DA70C88CB3BCE3E5;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9;
IL2CPP_EXTERN_C String_t* _stringLiteralC82A549882D1C4A3840391C8A2AF16F9116DF809;
IL2CPP_EXTERN_C String_t* _stringLiteralC9F9D36E4743CB422A65D7FBD91655C2D8F09341;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCC1E184B89FD6AFDD5155BECBCA4B15BEF35C8FF;
IL2CPP_EXTERN_C String_t* _stringLiteralCDB0AA791188ED698594172A4885A29E682938C0;
IL2CPP_EXTERN_C String_t* _stringLiteralD0A9568E6B1ED6F60D81A512B77806C25BDA3532;
IL2CPP_EXTERN_C String_t* _stringLiteralD58B1AD0AAA970EE00253A4A8D25136F5D224EEF;
IL2CPP_EXTERN_C String_t* _stringLiteralDD96EBE25F31CFACED60B7E687F3DF5761966518;
IL2CPP_EXTERN_C String_t* _stringLiteralDFC4172B6D5B9AB05FC9DE352CB9747A4B928CEE;
IL2CPP_EXTERN_C String_t* _stringLiteralE5B18889A153297502509074E23C0A5B9845CB0A;
IL2CPP_EXTERN_C String_t* _stringLiteralE6AEB4B4AEED64C30C8DFC6A8F3259F66B64EC22;
IL2CPP_EXTERN_C String_t* _stringLiteralF45FFA3E3A0F8F8B4B08F185B413331C4EDB9F1C;
IL2CPP_EXTERN_C String_t* _stringLiteralF8B78A22916C49F2EF0D72EA40139498F3D7A240;
IL2CPP_EXTERN_C String_t* _stringLiteralFC31849999CD0EF6FDBD6E0C92E0094DD27A0D03;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ControlsWindow_Player_OnStartedPlaying_m2BC6565C5647D6322CBAD113D076E69B1607CFFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameOverWindow_QuizWindow_OnGameOver_mB566E4ED02A485372ED29DE5F8F6C2C7666EDF60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Level_Player_OnDied_m8AEE73BEFABEB6D529F57D632134405A59886876_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Level_Player_OnStartedPlaying_m4D73C79E401A6DF1F41B90C557C0AEE26E2C391B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Level_Player_OnVaxContact_m61E1299BFEAA61DA6FCDB10D0D5C9942F751C1A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Level_Player_OnVirusContact_m7AC628C91918535BBD4E4D936DC2EAEB7508BAA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m20229880EA913B9DF4C3F92E18B6E9B4CB23CB3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mE3B4E761645D240291D9165D133E7496494CB3EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m164B1E761E98E07BC3725C56B1A17F127EFDF241_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m69234ADEA4012B54B3F98E699EAB48914B684196_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m66DEE033516AFCC910392824B58A62C73B998BA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuizCorrect_QuizWindow_OnCorrect_m4B4C9D493D189B474D7AE7B63951F5DAE19341A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuizIncorrect_QuizWindow_OnIncorrect_mC86666853D82D13AB311B73551B6E6AF8C9921A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuizWindow_Player_OnDied_mA40E619026F0C9A9BBC75A970CDE4A3CB0F4EE14_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
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


// System.Collections.Generic.List`1<Level/Platform>
struct List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PlatformU5BU5D_t0C750CCB44336A00E6963BD4AE997F9BA4454615* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8, ____items_1)); }
	inline PlatformU5BU5D_t0C750CCB44336A00E6963BD4AE997F9BA4454615* get__items_1() const { return ____items_1; }
	inline PlatformU5BU5D_t0C750CCB44336A00E6963BD4AE997F9BA4454615** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PlatformU5BU5D_t0C750CCB44336A00E6963BD4AE997F9BA4454615* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PlatformU5BU5D_t0C750CCB44336A00E6963BD4AE997F9BA4454615* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8_StaticFields, ____emptyArray_5)); }
	inline PlatformU5BU5D_t0C750CCB44336A00E6963BD4AE997F9BA4454615* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PlatformU5BU5D_t0C750CCB44336A00E6963BD4AE997F9BA4454615** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PlatformU5BU5D_t0C750CCB44336A00E6963BD4AE997F9BA4454615* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_2), (void*)value);
	}
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

// Level/Platform
struct Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE  : public RuntimeObject
{
public:
	// UnityEngine.Transform Level/Platform::platformTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___platformTransform_0;
	// UnityEngine.Transform Level/Platform::virusTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___virusTransform_1;
	// UnityEngine.Transform Level/Platform::virusOnPfTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___virusOnPfTransform_2;

public:
	inline static int32_t get_offset_of_platformTransform_0() { return static_cast<int32_t>(offsetof(Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE, ___platformTransform_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_platformTransform_0() const { return ___platformTransform_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_platformTransform_0() { return &___platformTransform_0; }
	inline void set_platformTransform_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___platformTransform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___platformTransform_0), (void*)value);
	}

	inline static int32_t get_offset_of_virusTransform_1() { return static_cast<int32_t>(offsetof(Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE, ___virusTransform_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_virusTransform_1() const { return ___virusTransform_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_virusTransform_1() { return &___virusTransform_1; }
	inline void set_virusTransform_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___virusTransform_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___virusTransform_1), (void*)value);
	}

	inline static int32_t get_offset_of_virusOnPfTransform_2() { return static_cast<int32_t>(offsetof(Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE, ___virusOnPfTransform_2)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_virusOnPfTransform_2() const { return ___virusOnPfTransform_2; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_virusOnPfTransform_2() { return &___virusOnPfTransform_2; }
	inline void set_virusOnPfTransform_2(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___virusOnPfTransform_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___virusOnPfTransform_2), (void*)value);
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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

// UnityEngine.RigidbodyType2D
struct RigidbodyType2D_tEF016AC6D4D54AF47773D68E833159CC995DF1E9 
{
public:
	// System.Int32 UnityEngine.RigidbodyType2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyType2D_tEF016AC6D4D54AF47773D68E833159CC995DF1E9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Level/Difficulty
struct Difficulty_t1FE58AA9E3412EB5FEB01FE99B17E94CAB3F0111 
{
public:
	// System.Int32 Level/Difficulty::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Difficulty_t1FE58AA9E3412EB5FEB01FE99B17E94CAB3F0111, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Level/State
struct State_t7E3D5C5CF1AB58139FC1912111BF96FCB485A8D9 
{
public:
	// System.Int32 Level/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t7E3D5C5CF1AB58139FC1912111BF96FCB485A8D9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Loader/Scene
struct Scene_tDAB301C5EA69A8F320BA4612E5E232D83D3E3877 
{
public:
	// System.Int32 Loader/Scene::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Scene_tDAB301C5EA69A8F320BA4612E5E232D83D3E3877, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Player/State
struct State_t0A0F5EB073C99B0900CC10EABA558B8CF7645AFE 
{
public:
	// System.Int32 Player/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t0A0F5EB073C99B0900CC10EABA558B8CF7645AFE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// QuizWindow/State
struct State_t27ED529C90FF5D4EB0E63B8271552D9DB4047811 
{
public:
	// System.Int32 QuizWindow/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t27ED529C90FF5D4EB0E63B8271552D9DB4047811, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Loader
struct Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182  : public RuntimeObject
{
public:

public:
};

struct Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182_StaticFields
{
public:
	// Loader/Scene Loader::targetScene
	int32_t ___targetScene_0;

public:
	inline static int32_t get_offset_of_targetScene_0() { return static_cast<int32_t>(offsetof(Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182_StaticFields, ___targetScene_0)); }
	inline int32_t get_targetScene_0() const { return ___targetScene_0; }
	inline int32_t* get_address_of_targetScene_0() { return &___targetScene_0; }
	inline void set_targetScene_0(int32_t value)
	{
		___targetScene_0 = value;
	}
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

// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// ButtonController
struct ButtonController_t0D27B81A3DC32EC27023C3CD654D850B38C7F1C7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ControlsWindow
struct ControlsWindow_tBC14BBCB1BFD357E2CB8E852D6DD329EEC444900  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// GameAssets
struct GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform GameAssets::pfPlatform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___pfPlatform_5;
	// UnityEngine.Transform GameAssets::pfVirus
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___pfVirus_6;
	// UnityEngine.Transform GameAssets::pfVirusEmpty
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___pfVirusEmpty_7;
	// UnityEngine.Transform GameAssets::pfVax
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___pfVax_8;

public:
	inline static int32_t get_offset_of_pfPlatform_5() { return static_cast<int32_t>(offsetof(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191, ___pfPlatform_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_pfPlatform_5() const { return ___pfPlatform_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_pfPlatform_5() { return &___pfPlatform_5; }
	inline void set_pfPlatform_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___pfPlatform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pfPlatform_5), (void*)value);
	}

	inline static int32_t get_offset_of_pfVirus_6() { return static_cast<int32_t>(offsetof(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191, ___pfVirus_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_pfVirus_6() const { return ___pfVirus_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_pfVirus_6() { return &___pfVirus_6; }
	inline void set_pfVirus_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___pfVirus_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pfVirus_6), (void*)value);
	}

	inline static int32_t get_offset_of_pfVirusEmpty_7() { return static_cast<int32_t>(offsetof(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191, ___pfVirusEmpty_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_pfVirusEmpty_7() const { return ___pfVirusEmpty_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_pfVirusEmpty_7() { return &___pfVirusEmpty_7; }
	inline void set_pfVirusEmpty_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___pfVirusEmpty_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pfVirusEmpty_7), (void*)value);
	}

	inline static int32_t get_offset_of_pfVax_8() { return static_cast<int32_t>(offsetof(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191, ___pfVax_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_pfVax_8() const { return ___pfVax_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_pfVax_8() { return &___pfVax_8; }
	inline void set_pfVax_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___pfVax_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pfVax_8), (void*)value);
	}
};

struct GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_StaticFields
{
public:
	// GameAssets GameAssets::instance
	GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_StaticFields, ___instance_4)); }
	inline GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * get_instance_4() const { return ___instance_4; }
	inline GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// GameHandler
struct GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// GameOverWindow
struct GameOverWindow_tD8FABC4BD8EE7545589759C31EE0B5CEC6872B3A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text GameOverWindow::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_4;

public:
	inline static int32_t get_offset_of_scoreText_4() { return static_cast<int32_t>(offsetof(GameOverWindow_tD8FABC4BD8EE7545589759C31EE0B5CEC6872B3A, ___scoreText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_4() const { return ___scoreText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_4() { return &___scoreText_4; }
	inline void set_scoreText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_4), (void*)value);
	}
};


// Level
struct Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Level::PLATFORM_MOVE_SPEED
	float ___PLATFORM_MOVE_SPEED_17;
	// System.Collections.Generic.List`1<Level/Platform> Level::platformList
	List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 * ___platformList_23;
	// System.Int32 Level::platformsSpawned
	int32_t ___platformsSpawned_24;
	// System.Single Level::difficultyFactor
	float ___difficultyFactor_25;
	// System.Single Level::score
	float ___score_26;
	// Level/State Level::state
	int32_t ___state_27;
	// System.Single Level::platformSpawnTimer
	float ___platformSpawnTimer_28;
	// System.Single Level::platformSpawnTimerMax
	float ___platformSpawnTimerMax_29;
	// System.Single Level::adjustDifficultyTimerVirus
	float ___adjustDifficultyTimerVirus_30;
	// System.Single Level::adjustDifficultyTimerVirusMax
	float ___adjustDifficultyTimerVirusMax_31;
	// System.Single Level::adjustDifficultyTimerVax
	float ___adjustDifficultyTimerVax_32;
	// System.Single Level::adjustDifficultyTimerVaxMax
	float ___adjustDifficultyTimerVaxMax_33;

public:
	inline static int32_t get_offset_of_PLATFORM_MOVE_SPEED_17() { return static_cast<int32_t>(offsetof(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93, ___PLATFORM_MOVE_SPEED_17)); }
	inline float get_PLATFORM_MOVE_SPEED_17() const { return ___PLATFORM_MOVE_SPEED_17; }
	inline float* get_address_of_PLATFORM_MOVE_SPEED_17() { return &___PLATFORM_MOVE_SPEED_17; }
	inline void set_PLATFORM_MOVE_SPEED_17(float value)
	{
		___PLATFORM_MOVE_SPEED_17 = value;
	}

	inline static int32_t get_offset_of_platformList_23() { return static_cast<int32_t>(offsetof(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93, ___platformList_23)); }
	inline List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 * get_platformList_23() const { return ___platformList_23; }
	inline List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 ** get_address_of_platformList_23() { return &___platformList_23; }
	inline void set_platformList_23(List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 * value)
	{
		___platformList_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___platformList_23), (void*)value);
	}

	inline static int32_t get_offset_of_platformsSpawned_24() { return static_cast<int32_t>(offsetof(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93, ___platformsSpawned_24)); }
	inline int32_t get_platformsSpawned_24() const { return ___platformsSpawned_24; }
	inline int32_t* get_address_of_platformsSpawned_24() { return &___platformsSpawned_24; }
	inline void set_platformsSpawned_24(int32_t value)
	{
		___platformsSpawned_24 = value;
	}

	inline static int32_t get_offset_of_difficultyFactor_25() { return static_cast<int32_t>(offsetof(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93, ___difficultyFactor_25)); }
	inline float get_difficultyFactor_25() const { return ___difficultyFactor_25; }
	inline float* get_address_of_difficultyFactor_25() { return &___difficultyFactor_25; }
	inline void set_difficultyFactor_25(float value)
	{
		___difficultyFactor_25 = value;
	}

	inline static int32_t get_offset_of_score_26() { return static_cast<int32_t>(offsetof(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93, ___score_26)); }
	inline float get_score_26() const { return ___score_26; }
	inline float* get_address_of_score_26() { return &___score_26; }
	inline void set_score_26(float value)
	{
		___score_26 = value;
	}

	inline static int32_t get_offset_of_state_27() { return static_cast<int32_t>(offsetof(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93, ___state_27)); }
	inline int32_t get_state_27() const { return ___state_27; }
	inline int32_t* get_address_of_state_27() { return &___state_27; }
	inline void set_state_27(int32_t value)
	{
		___state_27 = value;
	}

	inline static int32_t get_offset_of_platformSpawnTimer_28() { return static_cast<int32_t>(offsetof(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93, ___platformSpawnTimer_28)); }
	inline float get_platformSpawnTimer_28() const { return ___platformSpawnTimer_28; }
	inline float* get_address_of_platformSpawnTimer_28() { return &___platformSpawnTimer_28; }
	inline void set_platformSpawnTimer_28(float value)
	{
		___platformSpawnTimer_28 = value;
	}

	inline static int32_t get_offset_of_platformSpawnTimerMax_29() { return static_cast<int32_t>(offsetof(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93, ___platformSpawnTimerMax_29)); }
	inline float get_platformSpawnTimerMax_29() const { return ___platformSpawnTimerMax_29; }
	inline float* get_address_of_platformSpawnTimerMax_29() { return &___platformSpawnTimerMax_29; }
	inline void set_platformSpawnTimerMax_29(float value)
	{
		___platformSpawnTimerMax_29 = value;
	}

	inline static int32_t get_offset_of_adjustDifficultyTimerVirus_30() { return static_cast<int32_t>(offsetof(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93, ___adjustDifficultyTimerVirus_30)); }
	inline float get_adjustDifficultyTimerVirus_30() const { return ___adjustDifficultyTimerVirus_30; }
	inline float* get_address_of_adjustDifficultyTimerVirus_30() { return &___adjustDifficultyTimerVirus_30; }
	inline void set_adjustDifficultyTimerVirus_30(float value)
	{
		___adjustDifficultyTimerVirus_30 = value;
	}

	inline static int32_t get_offset_of_adjustDifficultyTimerVirusMax_31() { return static_cast<int32_t>(offsetof(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93, ___adjustDifficultyTimerVirusMax_31)); }
	inline float get_adjustDifficultyTimerVirusMax_31() const { return ___adjustDifficultyTimerVirusMax_31; }
	inline float* get_address_of_adjustDifficultyTimerVirusMax_31() { return &___adjustDifficultyTimerVirusMax_31; }
	inline void set_adjustDifficultyTimerVirusMax_31(float value)
	{
		___adjustDifficultyTimerVirusMax_31 = value;
	}

	inline static int32_t get_offset_of_adjustDifficultyTimerVax_32() { return static_cast<int32_t>(offsetof(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93, ___adjustDifficultyTimerVax_32)); }
	inline float get_adjustDifficultyTimerVax_32() const { return ___adjustDifficultyTimerVax_32; }
	inline float* get_address_of_adjustDifficultyTimerVax_32() { return &___adjustDifficultyTimerVax_32; }
	inline void set_adjustDifficultyTimerVax_32(float value)
	{
		___adjustDifficultyTimerVax_32 = value;
	}

	inline static int32_t get_offset_of_adjustDifficultyTimerVaxMax_33() { return static_cast<int32_t>(offsetof(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93, ___adjustDifficultyTimerVaxMax_33)); }
	inline float get_adjustDifficultyTimerVaxMax_33() const { return ___adjustDifficultyTimerVaxMax_33; }
	inline float* get_address_of_adjustDifficultyTimerVaxMax_33() { return &___adjustDifficultyTimerVaxMax_33; }
	inline void set_adjustDifficultyTimerVaxMax_33(float value)
	{
		___adjustDifficultyTimerVaxMax_33 = value;
	}
};

struct Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_StaticFields
{
public:
	// Level Level::instance
	Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_StaticFields, ___instance_4)); }
	inline Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * get_instance_4() const { return ___instance_4; }
	inline Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// LoaderUpdate
struct LoaderUpdate_t1C703620C60A3AFA20D9EFF1F653FB17BBD1E61B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// MainMenuWindow
struct MainMenuWindow_t82149054BBB1D5F43C52DE21D8CA7523FAB9F3BA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Player::speed
	float ___speed_4;
	// System.Single Player::jump
	float ___jump_5;
	// System.EventHandler Player::OnDied
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___OnDied_6;
	// System.EventHandler Player::OnStartedPlaying
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___OnStartedPlaying_7;
	// System.EventHandler Player::OnVirusContact
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___OnVirusContact_8;
	// System.EventHandler Player::OnVaxContact
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___OnVaxContact_9;
	// Player/State Player::state
	int32_t ___state_10;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_jump_5() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___jump_5)); }
	inline float get_jump_5() const { return ___jump_5; }
	inline float* get_address_of_jump_5() { return &___jump_5; }
	inline void set_jump_5(float value)
	{
		___jump_5 = value;
	}

	inline static int32_t get_offset_of_OnDied_6() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___OnDied_6)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_OnDied_6() const { return ___OnDied_6; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_OnDied_6() { return &___OnDied_6; }
	inline void set_OnDied_6(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___OnDied_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDied_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnStartedPlaying_7() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___OnStartedPlaying_7)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_OnStartedPlaying_7() const { return ___OnStartedPlaying_7; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_OnStartedPlaying_7() { return &___OnStartedPlaying_7; }
	inline void set_OnStartedPlaying_7(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___OnStartedPlaying_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStartedPlaying_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnVirusContact_8() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___OnVirusContact_8)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_OnVirusContact_8() const { return ___OnVirusContact_8; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_OnVirusContact_8() { return &___OnVirusContact_8; }
	inline void set_OnVirusContact_8(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___OnVirusContact_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVirusContact_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnVaxContact_9() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___OnVaxContact_9)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_OnVaxContact_9() const { return ___OnVaxContact_9; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_OnVaxContact_9() { return &___OnVaxContact_9; }
	inline void set_OnVaxContact_9(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___OnVaxContact_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVaxContact_9), (void*)value);
	}

	inline static int32_t get_offset_of_state_10() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___state_10)); }
	inline int32_t get_state_10() const { return ___state_10; }
	inline int32_t* get_address_of_state_10() { return &___state_10; }
	inline void set_state_10(int32_t value)
	{
		___state_10 = value;
	}
};

struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields
{
public:
	// Player Player::instance
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___instance_11;

public:
	inline static int32_t get_offset_of_instance_11() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields, ___instance_11)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_instance_11() const { return ___instance_11; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_instance_11() { return &___instance_11; }
	inline void set_instance_11(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___instance_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_11), (void*)value);
	}
};


// QuizCorrect
struct QuizCorrect_tF43E788CB4CC493850F3CD151ED838959A75C879  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text QuizCorrect::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_4;
	// UnityEngine.UI.Text QuizCorrect::quizAnswerText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___quizAnswerText_5;

public:
	inline static int32_t get_offset_of_scoreText_4() { return static_cast<int32_t>(offsetof(QuizCorrect_tF43E788CB4CC493850F3CD151ED838959A75C879, ___scoreText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_4() const { return ___scoreText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_4() { return &___scoreText_4; }
	inline void set_scoreText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_4), (void*)value);
	}

	inline static int32_t get_offset_of_quizAnswerText_5() { return static_cast<int32_t>(offsetof(QuizCorrect_tF43E788CB4CC493850F3CD151ED838959A75C879, ___quizAnswerText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_quizAnswerText_5() const { return ___quizAnswerText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_quizAnswerText_5() { return &___quizAnswerText_5; }
	inline void set_quizAnswerText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___quizAnswerText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quizAnswerText_5), (void*)value);
	}
};


// QuizIncorrect
struct QuizIncorrect_t1421A3C817D236930786AEFBDE43C66AA881056E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text QuizIncorrect::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_4;
	// UnityEngine.UI.Text QuizIncorrect::quizAnswerText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___quizAnswerText_5;

public:
	inline static int32_t get_offset_of_scoreText_4() { return static_cast<int32_t>(offsetof(QuizIncorrect_t1421A3C817D236930786AEFBDE43C66AA881056E, ___scoreText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_4() const { return ___scoreText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_4() { return &___scoreText_4; }
	inline void set_scoreText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_4), (void*)value);
	}

	inline static int32_t get_offset_of_quizAnswerText_5() { return static_cast<int32_t>(offsetof(QuizIncorrect_t1421A3C817D236930786AEFBDE43C66AA881056E, ___quizAnswerText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_quizAnswerText_5() const { return ___quizAnswerText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_quizAnswerText_5() { return &___quizAnswerText_5; }
	inline void set_quizAnswerText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___quizAnswerText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quizAnswerText_5), (void*)value);
	}
};


// QuizWindow
struct QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text QuizWindow::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_4;
	// UnityEngine.UI.Text QuizWindow::Ans1Text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Ans1Text_5;
	// UnityEngine.UI.Text QuizWindow::Ans2Text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Ans2Text_6;
	// UnityEngine.UI.Text QuizWindow::Ans3Text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Ans3Text_7;
	// UnityEngine.UI.Text QuizWindow::Ans4Text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Ans4Text_8;
	// UnityEngine.UI.Text QuizWindow::Question
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Question_9;
	// UnityEngine.UI.Text QuizWindow::QuizHospitalText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___QuizHospitalText_10;
	// System.String QuizWindow::ANSWER
	String_t* ___ANSWER_11;
	// System.Boolean QuizWindow::Ans1Correct
	bool ___Ans1Correct_12;
	// System.Boolean QuizWindow::Ans2Correct
	bool ___Ans2Correct_13;
	// System.Boolean QuizWindow::Ans3Correct
	bool ___Ans3Correct_14;
	// System.Boolean QuizWindow::Ans4Correct
	bool ___Ans4Correct_15;
	// System.EventHandler QuizWindow::OnCorrect
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___OnCorrect_16;
	// System.EventHandler QuizWindow::OnIncorrect
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___OnIncorrect_17;
	// System.EventHandler QuizWindow::OnGameOver
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___OnGameOver_18;
	// QuizWindow/State QuizWindow::state
	int32_t ___state_19;

public:
	inline static int32_t get_offset_of_scoreText_4() { return static_cast<int32_t>(offsetof(QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83, ___scoreText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_4() const { return ___scoreText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_4() { return &___scoreText_4; }
	inline void set_scoreText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_4), (void*)value);
	}

	inline static int32_t get_offset_of_Ans1Text_5() { return static_cast<int32_t>(offsetof(QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83, ___Ans1Text_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Ans1Text_5() const { return ___Ans1Text_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Ans1Text_5() { return &___Ans1Text_5; }
	inline void set_Ans1Text_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Ans1Text_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ans1Text_5), (void*)value);
	}

	inline static int32_t get_offset_of_Ans2Text_6() { return static_cast<int32_t>(offsetof(QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83, ___Ans2Text_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Ans2Text_6() const { return ___Ans2Text_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Ans2Text_6() { return &___Ans2Text_6; }
	inline void set_Ans2Text_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Ans2Text_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ans2Text_6), (void*)value);
	}

	inline static int32_t get_offset_of_Ans3Text_7() { return static_cast<int32_t>(offsetof(QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83, ___Ans3Text_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Ans3Text_7() const { return ___Ans3Text_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Ans3Text_7() { return &___Ans3Text_7; }
	inline void set_Ans3Text_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Ans3Text_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ans3Text_7), (void*)value);
	}

	inline static int32_t get_offset_of_Ans4Text_8() { return static_cast<int32_t>(offsetof(QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83, ___Ans4Text_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Ans4Text_8() const { return ___Ans4Text_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Ans4Text_8() { return &___Ans4Text_8; }
	inline void set_Ans4Text_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Ans4Text_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ans4Text_8), (void*)value);
	}

	inline static int32_t get_offset_of_Question_9() { return static_cast<int32_t>(offsetof(QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83, ___Question_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Question_9() const { return ___Question_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Question_9() { return &___Question_9; }
	inline void set_Question_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Question_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Question_9), (void*)value);
	}

	inline static int32_t get_offset_of_QuizHospitalText_10() { return static_cast<int32_t>(offsetof(QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83, ___QuizHospitalText_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_QuizHospitalText_10() const { return ___QuizHospitalText_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_QuizHospitalText_10() { return &___QuizHospitalText_10; }
	inline void set_QuizHospitalText_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___QuizHospitalText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QuizHospitalText_10), (void*)value);
	}

	inline static int32_t get_offset_of_ANSWER_11() { return static_cast<int32_t>(offsetof(QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83, ___ANSWER_11)); }
	inline String_t* get_ANSWER_11() const { return ___ANSWER_11; }
	inline String_t** get_address_of_ANSWER_11() { return &___ANSWER_11; }
	inline void set_ANSWER_11(String_t* value)
	{
		___ANSWER_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ANSWER_11), (void*)value);
	}

	inline static int32_t get_offset_of_Ans1Correct_12() { return static_cast<int32_t>(offsetof(QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83, ___Ans1Correct_12)); }
	inline bool get_Ans1Correct_12() const { return ___Ans1Correct_12; }
	inline bool* get_address_of_Ans1Correct_12() { return &___Ans1Correct_12; }
	inline void set_Ans1Correct_12(bool value)
	{
		___Ans1Correct_12 = value;
	}

	inline static int32_t get_offset_of_Ans2Correct_13() { return static_cast<int32_t>(offsetof(QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83, ___Ans2Correct_13)); }
	inline bool get_Ans2Correct_13() const { return ___Ans2Correct_13; }
	inline bool* get_address_of_Ans2Correct_13() { return &___Ans2Correct_13; }
	inline void set_Ans2Correct_13(bool value)
	{
		___Ans2Correct_13 = value;
	}

	inline static int32_t get_offset_of_Ans3Correct_14() { return static_cast<int32_t>(offsetof(QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83, ___Ans3Correct_14)); }
	inline bool get_Ans3Correct_14() const { return ___Ans3Correct_14; }
	inline bool* get_address_of_Ans3Correct_14() { return &___Ans3Correct_14; }
	inline void set_Ans3Correct_14(bool value)
	{
		___Ans3Correct_14 = value;
	}

	inline static int32_t get_offset_of_Ans4Correct_15() { return static_cast<int32_t>(offsetof(QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83, ___Ans4Correct_15)); }
	inline bool get_Ans4Correct_15() const { return ___Ans4Correct_15; }
	inline bool* get_address_of_Ans4Correct_15() { return &___Ans4Correct_15; }
	inline void set_Ans4Correct_15(bool value)
	{
		___Ans4Correct_15 = value;
	}

	inline static int32_t get_offset_of_OnCorrect_16() { return static_cast<int32_t>(offsetof(QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83, ___OnCorrect_16)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_OnCorrect_16() const { return ___OnCorrect_16; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_OnCorrect_16() { return &___OnCorrect_16; }
	inline void set_OnCorrect_16(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___OnCorrect_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCorrect_16), (void*)value);
	}

	inline static int32_t get_offset_of_OnIncorrect_17() { return static_cast<int32_t>(offsetof(QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83, ___OnIncorrect_17)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_OnIncorrect_17() const { return ___OnIncorrect_17; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_OnIncorrect_17() { return &___OnIncorrect_17; }
	inline void set_OnIncorrect_17(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___OnIncorrect_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnIncorrect_17), (void*)value);
	}

	inline static int32_t get_offset_of_OnGameOver_18() { return static_cast<int32_t>(offsetof(QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83, ___OnGameOver_18)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_OnGameOver_18() const { return ___OnGameOver_18; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_OnGameOver_18() { return &___OnGameOver_18; }
	inline void set_OnGameOver_18(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___OnGameOver_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGameOver_18), (void*)value);
	}

	inline static int32_t get_offset_of_state_19() { return static_cast<int32_t>(offsetof(QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83, ___state_19)); }
	inline int32_t get_state_19() const { return ___state_19; }
	inline int32_t* get_address_of_state_19() { return &___state_19; }
	inline void set_state_19(int32_t value)
	{
		___state_19 = value;
	}
};

struct QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83_StaticFields
{
public:
	// QuizWindow QuizWindow::instance
	QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * ___instance_20;

public:
	inline static int32_t get_offset_of_instance_20() { return static_cast<int32_t>(offsetof(QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83_StaticFields, ___instance_20)); }
	inline QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * get_instance_20() const { return ___instance_20; }
	inline QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 ** get_address_of_instance_20() { return &___instance_20; }
	inline void set_instance_20(QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * value)
	{
		___instance_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_20), (void*)value);
	}
};


// ScoreWindow
struct ScoreWindow_t0A6F76DD706EE74431B3D9354A4DA58E420D621A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text ScoreWindow::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_4;
	// UnityEngine.UI.Text ScoreWindow::highscoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___highscoreText_5;

public:
	inline static int32_t get_offset_of_scoreText_4() { return static_cast<int32_t>(offsetof(ScoreWindow_t0A6F76DD706EE74431B3D9354A4DA58E420D621A, ___scoreText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_4() const { return ___scoreText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_4() { return &___scoreText_4; }
	inline void set_scoreText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_4), (void*)value);
	}

	inline static int32_t get_offset_of_highscoreText_5() { return static_cast<int32_t>(offsetof(ScoreWindow_t0A6F76DD706EE74431B3D9354A4DA58E420D621A, ___highscoreText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_highscoreText_5() const { return ___highscoreText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_highscoreText_5() { return &___highscoreText_5; }
	inline void set_highscoreText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___highscoreText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___highscoreText_5), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
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
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
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
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC (const RuntimeMethod* method);
// System.Void Loader::Load(Loader/Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader_Load_mF11408CB2C41CD5BEAE02A8C4E9504A1DB0D18C9 (int32_t ___scene0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void ControlsWindow::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlsWindow_Show_m8B57EAEB94DCCC62EAB11EDF63A0C75BF62A0F7F (ControlsWindow_tBC14BBCB1BFD357E2CB8E852D6DD329EEC444900 * __this, const RuntimeMethod* method);
// Player Player::GetInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * Player_GetInstance_mBB6CF3140AB1B9C1A486222A593C0D54328EDEAD_inline (const RuntimeMethod* method);
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Player::add_OnStartedPlaying(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_add_OnStartedPlaying_m4C22367EBF3A3EE6FA8324A77CA06CCCFB7D7AF3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// System.Void ControlsWindow::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlsWindow_Hide_m8EACA9AA314D8D5FFCF1327031DDB680DFE89244 (ControlsWindow_tBC14BBCB1BFD357E2CB8E852D6DD329EEC444900 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, String_t* ___n0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void GameOverWindow::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverWindow_Hide_mE60CB5DAA2339F908C5B18FC579931D95F14C893 (GameOverWindow_tD8FABC4BD8EE7545589759C31EE0B5CEC6872B3A * __this, const RuntimeMethod* method);
// QuizWindow QuizWindow::GetInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * QuizWindow_GetInstance_m48A11CA7407695FCDA79707757AB037802A66D57_inline (const RuntimeMethod* method);
// System.Void QuizWindow::add_OnGameOver(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_add_OnGameOver_m62B05F4A0E26EE73FFB2B162E3A54BC90CFCA2B3 (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// Level Level::GetInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * Level_GetInstance_m82F4BF9EE650FFA520A93635D8C21869568E3289_inline (const RuntimeMethod* method);
// System.Int32 Level::GetScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Level_GetScore_m4F7BFA6D497E1EE72B97512AC861950D52CFD7B9 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void GameOverWindow::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverWindow_Show_m5845AB1B160585421E31D3A8B122E87140AF5882 (GameOverWindow_tD8FABC4BD8EE7545589759C31EE0B5CEC6872B3A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Level/Platform>::.ctor()
inline void List_1__ctor_m164B1E761E98E07BC3725C56B1A17F127EFDF241 (List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void Level::SetDifficulty(Level/Difficulty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_SetDifficulty_m7047871166A5240697EF27AB798F74AF8D476485 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, int32_t ___difficulty0, const RuntimeMethod* method);
// Level/Difficulty Level::GetDifficulty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Level_GetDifficulty_m60F958C5A7EAF0B978D00B730CC3FD61DD34D453 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method);
// System.Void Level::CreatePlatformGaps(System.Single,System.Single,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_CreatePlatformGaps_mA7DA1CC2F666C398A187D7B44AE4ADFFA3FF1D9E (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, float ___gapPosX10, float ___gapPosX21, float ___yPosition2, bool ___VIRUS_loc3, bool ___Not_First_pf4, const RuntimeMethod* method);
// System.Void Player::add_OnDied(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_add_OnDied_m985B6B6C1F4C05111BEB636640BCD789EA8DDA94 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// System.Void Player::add_OnVaxContact(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_add_OnVaxContact_mE05C2236338869BB478B0F428BC9202E6B872F91 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// System.Void Player::add_OnVirusContact(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_add_OnVirusContact_m6245D0F1888DB584BD97D9955CFEE7DFF6AFDE8E (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Level/Platform>::get_Item(System.Int32)
inline Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * List_1_get_Item_m66DEE033516AFCC910392824B58A62C73B998BA3_inline (List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * (*) (List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Single Level/Platform::GetYPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Platform_GetYPosition_m6313C498E639C834501D73B95DAFA534DF10487E (Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Level/Platform>::get_Count()
inline int32_t List_1_get_Count_m69234ADEA4012B54B3F98E699EAB48914B684196_inline (List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void Level::SetPlatformsSpawnedAndScore(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_SetPlatformsSpawnedAndScore_m9B1F4B152BA438D7C4B598969A9B96211F799F53 (int32_t ___platformsSpawned0, int32_t ___score1, const RuntimeMethod* method);
// System.Boolean Level::TrySetNewHighscore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Level_TrySetNewHighscore_mF6F80928319A110D69C808207EF31FA84CBE8027 (int32_t ___score0, const RuntimeMethod* method);
// System.Void Level::HandlePlatformMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_HandlePlatformMovement_mEAA8B7E84E338C6B8C636D1A1013CCA453323742 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method);
// System.Void Level::HandlePlatformSpawning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_HandlePlatformSpawning_m0204DF74705A77B79F20286B8C4D8CD848AA4308 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05 (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * __this, const RuntimeMethod* method);
// System.Void Level/Platform::Move(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Move_mD37AF1265591A30DA5190FE4928DE3AE5E10C3AA (Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * __this, float ___PLATFORM_MOVE_SPEED0, const RuntimeMethod* method);
// System.Void Level/Platform::DestroySelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_DestroySelf_m0DD1C75F58E19E869FB0677883A9316A44E3E3B6 (Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<Level/Platform>::Remove(!0)
inline bool List_1_Remove_mE3B4E761645D240291D9165D133E7496494CB3EC (List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 * __this, Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 *, Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Level::CreatePlatform(System.Single,System.Single,System.Single,System.Boolean,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_CreatePlatform_m6994F620975A713872C9A22712CF48C14F3E0099 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, float ___width0, float ___yPosition1, float ___xPosition2, bool ___VIRUS3, bool ___VIRUS_pf4, float ___xPositionVirus_pf5, const RuntimeMethod* method);
// GameAssets GameAssets::GetInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * GameAssets_GetInstance_mD3A14244E7CA075B8B8FF32FDEAF7E26CB2112E6_inline (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Transform>(!!0)
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___original0, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_size(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_size_m92E5651D28AC04743795244ACC1E3F5FABCF1B49 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.BoxCollider2D::set_size(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollider2D_set_size_m8460A38ADDD4BE82BE1F416DE3D7AFB87EBA6760 (BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Collider2D::set_offset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider2D_set_offset_m496DDE5487C59E9E8D6B468E8918EE1EFC625E38 (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void Level::AddVirusOnPlatform(System.Single,System.Single,System.Single,System.Boolean,System.Single,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_AddVirusOnPlatform_mBDB395F8D7AC4078361194BC978048569DA47AE3 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, float ___width0, float ___yPosition1, float ___xPosition2, bool ___VIRUS_pf3, float ___xPositionVirus_pf4, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___virus5, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___platform6, const RuntimeMethod* method);
// System.Void Level/Platform::.ctor(UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_m1699CCAFD9979E7D74D6A51DEA2FE0C719B1ED11 (Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___platformTransform0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___virusTransform1, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___virusOnPfTransform2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Level/Platform>::Add(!0)
inline void List_1_Add_m20229880EA913B9DF4C3F92E18B6E9B4CB23CB3B (List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 * __this, Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 *, Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void Loader::LoadTargetScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader_LoadTargetScene_m7B225121C1645E1484C20E9A728D4DE65D56F0E7 (const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::set_bodyType(UnityEngine.RigidbodyType2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF (const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void QuizCorrect::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizCorrect_Hide_mE54193431A3BAF7787D8B5285CBB08A4955AC52B (QuizCorrect_tF43E788CB4CC493850F3CD151ED838959A75C879 * __this, const RuntimeMethod* method);
// System.Void QuizWindow::add_OnCorrect(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_add_OnCorrect_m76352004F669A69692478E6BD13E3B754462E602 (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// System.String QuizWindow::getAnswer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* QuizWindow_getAnswer_m25C9A660189483998D16B7B4D4479E897600DDBC_inline (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, const RuntimeMethod* method);
// System.Void QuizCorrect::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizCorrect_Show_m63A0E172B995406F3EBFF10F41F2F73CA6A901C8 (QuizCorrect_tF43E788CB4CC493850F3CD151ED838959A75C879 * __this, const RuntimeMethod* method);
// System.Void QuizIncorrect::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizIncorrect_Hide_mB4DCB4C195BFDD0A8C10D7AB4D5F934ED7F506EC (QuizIncorrect_t1421A3C817D236930786AEFBDE43C66AA881056E * __this, const RuntimeMethod* method);
// System.Void QuizWindow::add_OnIncorrect(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_add_OnIncorrect_m3A2A9FE1109EABCF10D4520C8C1B6C7E957C81E4 (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// System.Void QuizIncorrect::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizIncorrect_Show_mC813B08B2B7C0AE5BDAA36C9A1D9CA3BBE705AE2 (QuizIncorrect_t1421A3C817D236930786AEFBDE43C66AA881056E * __this, const RuntimeMethod* method);
// System.Void QuizWindow::SetQuizAns(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_SetQuizAns_m330A9FBFDE73FCB6DEF566E45AEADE512518DAE7 (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, int32_t ___correctAns0, const RuntimeMethod* method);
// System.Void QuizWindow::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_Hide_mD1062BA7AAA300B8FDA25ADE62AB7E8B30ED3DF5 (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, const RuntimeMethod* method);
// System.Void QuizWindow::QuizQuestion(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_QuizQuestion_m43CE066344949C69BFBD3DB34CA0E8CC2F58D783 (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, int32_t ___question0, const RuntimeMethod* method);
// System.Void QuizWindow::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_Show_m5D919FC3AF0877A069FFA893FA15F199DB05B42C (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
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
// System.Void ButtonController::ButtonMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonController_ButtonMainMenu_m2325C7E5041F51CEEA6618CC70FE26BE4B40E10D (ButtonController_t0D27B81A3DC32EC27023C3CD654D850B38C7F1C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C409218DCC1BB00148BB5E9DB58BC18B97AD4C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9994C9B4F7A06ADE00231A27A560CDBC3E149EA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("quizTaken", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral9994C9B4F7A06ADE00231A27A560CDBC3E149EA5, 0, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("platformsSpawned", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral2C409218DCC1BB00148BB5E9DB58BC18B97AD4C1, 0, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("score", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, 0, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// Loader.Load(Loader.Scene.MainMenuScene);
		Loader_Load_mF11408CB2C41CD5BEAE02A8C4E9504A1DB0D18C9(2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonController::ButtonRetry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonController_ButtonRetry_m82A833899F3D15A4E8029FBFB3C727F3EE147387 (ButtonController_t0D27B81A3DC32EC27023C3CD654D850B38C7F1C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C409218DCC1BB00148BB5E9DB58BC18B97AD4C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9994C9B4F7A06ADE00231A27A560CDBC3E149EA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("quizTaken", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral9994C9B4F7A06ADE00231A27A560CDBC3E149EA5, 0, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("platformsSpawned", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral2C409218DCC1BB00148BB5E9DB58BC18B97AD4C1, 0, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("score", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, 0, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// Loader.Load(Loader.Scene.Scene);
		Loader_Load_mF11408CB2C41CD5BEAE02A8C4E9504A1DB0D18C9(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonController::ButtonContinuePlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonController_ButtonContinuePlaying_m0C300A540C426AB9CFADBF9A342CA3C987E6521B (ButtonController_t0D27B81A3DC32EC27023C3CD654D850B38C7F1C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9994C9B4F7A06ADE00231A27A560CDBC3E149EA5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("quizTaken", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral9994C9B4F7A06ADE00231A27A560CDBC3E149EA5, 1, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// Loader.Load(Loader.Scene.Scene);
		Loader_Load_mF11408CB2C41CD5BEAE02A8C4E9504A1DB0D18C9(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonController__ctor_m36749A05CC35FB6DE62764596A93D54AC73713F3 (ButtonController_t0D27B81A3DC32EC27023C3CD654D850B38C7F1C7 * __this, const RuntimeMethod* method)
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
// System.Void ControlsWindow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlsWindow_Start_mD9D3E51E51F9F0619447355573B36972C036CFFA (ControlsWindow_tBC14BBCB1BFD357E2CB8E852D6DD329EEC444900 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlsWindow_Player_OnStartedPlaying_m2BC6565C5647D6322CBAD113D076E69B1607CFFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Show();
		ControlsWindow_Show_m8B57EAEB94DCCC62EAB11EDF63A0C75BF62A0F7F(__this, /*hidden argument*/NULL);
		// Player.GetInstance().OnStartedPlaying += Player_OnStartedPlaying;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_0;
		L_0 = Player_GetInstance_mBB6CF3140AB1B9C1A486222A593C0D54328EDEAD_inline(/*hidden argument*/NULL);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_1, __this, (intptr_t)((intptr_t)ControlsWindow_Player_OnStartedPlaying_m2BC6565C5647D6322CBAD113D076E69B1607CFFF_RuntimeMethod_var), /*hidden argument*/NULL);
		Player_add_OnStartedPlaying_m4C22367EBF3A3EE6FA8324A77CA06CCCFB7D7AF3(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ControlsWindow::Player_OnStartedPlaying(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlsWindow_Player_OnStartedPlaying_m2BC6565C5647D6322CBAD113D076E69B1607CFFF (ControlsWindow_tBC14BBCB1BFD357E2CB8E852D6DD329EEC444900 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	{
		// Hide();
		ControlsWindow_Hide_m8EACA9AA314D8D5FFCF1327031DDB680DFE89244(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ControlsWindow::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlsWindow_Hide_m8EACA9AA314D8D5FFCF1327031DDB680DFE89244 (ControlsWindow_tBC14BBCB1BFD357E2CB8E852D6DD329EEC444900 * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ControlsWindow::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlsWindow_Show_m8B57EAEB94DCCC62EAB11EDF63A0C75BF62A0F7F (ControlsWindow_tBC14BBCB1BFD357E2CB8E852D6DD329EEC444900 * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ControlsWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlsWindow__ctor_mC42F89316E6EEBA099499F4E240A3E476C3C8545 (ControlsWindow_tBC14BBCB1BFD357E2CB8E852D6DD329EEC444900 * __this, const RuntimeMethod* method)
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
// GameAssets GameAssets::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * GameAssets_GetInstance_mD3A14244E7CA075B8B8FF32FDEAF7E26CB2112E6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_0 = ((GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_StaticFields*)il2cpp_codegen_static_fields_for(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var))->get_instance_4();
		return L_0;
	}
}
// System.Void GameAssets::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameAssets_Awake_mD6B51A0C92826F2F7E8FA9A71C17EF7FD4571049 (GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_StaticFields*)il2cpp_codegen_static_fields_for(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// }
		return;
	}
}
// System.Void GameAssets::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameAssets__ctor_mAC95D70B1B0407D5FDC330BAA4E0B7B2EAFFA40A (GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * __this, const RuntimeMethod* method)
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
// System.Void GameHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_Start_m78B61BE18B716B2039EAE293F99DFD5CC0219FF2 (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral375A90A563EC7556B68514B85C38318C73D8965F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("GameHandler.Start");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral375A90A563EC7556B68514B85C38318C73D8965F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler__ctor_m99B62501A237CFBFE117E822D074F35D036E79A2 (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method)
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
// System.Void GameOverWindow::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverWindow_Awake_mEF7284309E0D8A2B388BE268AEB7FEC2A741C256 (GameOverWindow_tD8FABC4BD8EE7545589759C31EE0B5CEC6872B3A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59CABCB9E7941A7EEBB3AFAA4E50FB4BF8C816E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreText = transform.Find("scoreText").GetComponent<Text>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_0, _stringLiteral59CABCB9E7941A7EEBB3AFAA4E50FB4BF8C816E7, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2;
		L_2 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_1, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_scoreText_4(L_2);
		// }
		return;
	}
}
// System.Void GameOverWindow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverWindow_Start_m75B5E17B951DA9FEC95A2DCE9D5D812AAEF81737 (GameOverWindow_tD8FABC4BD8EE7545589759C31EE0B5CEC6872B3A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOverWindow_QuizWindow_OnGameOver_mB566E4ED02A485372ED29DE5F8F6C2C7666EDF60_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Hide();
		GameOverWindow_Hide_mE60CB5DAA2339F908C5B18FC579931D95F14C893(__this, /*hidden argument*/NULL);
		// QuizWindow.GetInstance().OnGameOver += QuizWindow_OnGameOver;
		QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * L_0;
		L_0 = QuizWindow_GetInstance_m48A11CA7407695FCDA79707757AB037802A66D57_inline(/*hidden argument*/NULL);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_1, __this, (intptr_t)((intptr_t)GameOverWindow_QuizWindow_OnGameOver_mB566E4ED02A485372ED29DE5F8F6C2C7666EDF60_RuntimeMethod_var), /*hidden argument*/NULL);
		QuizWindow_add_OnGameOver_m62B05F4A0E26EE73FFB2B162E3A54BC90CFCA2B3(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOverWindow::QuizWindow_OnGameOver(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverWindow_QuizWindow_OnGameOver_mB566E4ED02A485372ED29DE5F8F6C2C7666EDF60 (GameOverWindow_tD8FABC4BD8EE7545589759C31EE0B5CEC6872B3A * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// scoreText.text = "Score: " + Level.GetInstance().GetScore().ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_scoreText_4();
		Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * L_1;
		L_1 = Level_GetInstance_m82F4BF9EE650FFA520A93635D8C21869568E3289_inline(/*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Level_GetScore_m4F7BFA6D497E1EE72B97512AC861950D52CFD7B9(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_3, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// Show();
		GameOverWindow_Show_m5845AB1B160585421E31D3A8B122E87140AF5882(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOverWindow::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverWindow_Hide_mE60CB5DAA2339F908C5B18FC579931D95F14C893 (GameOverWindow_tD8FABC4BD8EE7545589759C31EE0B5CEC6872B3A * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOverWindow::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverWindow_Show_m5845AB1B160585421E31D3A8B122E87140AF5882 (GameOverWindow_tD8FABC4BD8EE7545589759C31EE0B5CEC6872B3A * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOverWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverWindow__ctor_m1DD69C5143C582336B5AB1B7185AF5C05F41861A (GameOverWindow_tD8FABC4BD8EE7545589759C31EE0B5CEC6872B3A * __this, const RuntimeMethod* method)
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
// Level Level::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * Level_GetInstance_m82F4BF9EE650FFA520A93635D8C21869568E3289 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * L_0 = ((Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_il2cpp_TypeInfo_var))->get_instance_4();
		return L_0;
	}
}
// System.Void Level::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_Awake_mC6C384A2E19370DA624C0359E8A387098344C95A (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m164B1E761E98E07BC3725C56B1A17F127EFDF241_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C409218DCC1BB00148BB5E9DB58BC18B97AD4C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9994C9B4F7A06ADE00231A27A560CDBC3E149EA5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// platformList = new List<Platform>();
		List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 * L_0 = (List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 *)il2cpp_codegen_object_new(List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8_il2cpp_TypeInfo_var);
		List_1__ctor_m164B1E761E98E07BC3725C56B1A17F127EFDF241(L_0, /*hidden argument*/List_1__ctor_m164B1E761E98E07BC3725C56B1A17F127EFDF241_RuntimeMethod_var);
		__this->set_platformList_23(L_0);
		// state = State.WaitingToStart;
		__this->set_state_27(0);
		// if (PlayerPrefs.GetInt("quizTaken") == 0)
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9994C9B4F7A06ADE00231A27A560CDBC3E149EA5, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		// SetDifficulty(Difficulty.Easy);
		Level_SetDifficulty_m7047871166A5240697EF27AB798F74AF8D476485(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002c:
	{
		// platformsSpawned = PlayerPrefs.GetInt("platformsSpawned");
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral2C409218DCC1BB00148BB5E9DB58BC18B97AD4C1, /*hidden argument*/NULL);
		__this->set_platformsSpawned_24(L_2);
		// SetDifficulty(GetDifficulty());
		int32_t L_3;
		L_3 = Level_GetDifficulty_m60F958C5A7EAF0B978D00B730CC3FD61DD34D453(__this, /*hidden argument*/NULL);
		Level_SetDifficulty_m7047871166A5240697EF27AB798F74AF8D476485(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Level::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_Start_m3AFB1BB04202925E1F69EF40CB6006AF3CBFA16B (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level_Player_OnDied_m8AEE73BEFABEB6D529F57D632134405A59886876_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level_Player_OnStartedPlaying_m4D73C79E401A6DF1F41B90C557C0AEE26E2C391B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level_Player_OnVaxContact_m61E1299BFEAA61DA6FCDB10D0D5C9942F751C1A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level_Player_OnVirusContact_m7AC628C91918535BBD4E4D936DC2EAEB7508BAA0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CreatePlatformGaps(-40f, 40f, -20f, false, false);
		Level_CreatePlatformGaps_mA7DA1CC2F666C398A187D7B44AE4ADFFA3FF1D9E(__this, (-40.0f), (40.0f), (-20.0f), (bool)0, (bool)0, /*hidden argument*/NULL);
		// Player.GetInstance().OnDied += Player_OnDied;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_0;
		L_0 = Player_GetInstance_mBB6CF3140AB1B9C1A486222A593C0D54328EDEAD_inline(/*hidden argument*/NULL);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_1, __this, (intptr_t)((intptr_t)Level_Player_OnDied_m8AEE73BEFABEB6D529F57D632134405A59886876_RuntimeMethod_var), /*hidden argument*/NULL);
		Player_add_OnDied_m985B6B6C1F4C05111BEB636640BCD789EA8DDA94(L_0, L_1, /*hidden argument*/NULL);
		// Player.GetInstance().OnStartedPlaying += Player_OnStartedPlaying;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_2;
		L_2 = Player_GetInstance_mBB6CF3140AB1B9C1A486222A593C0D54328EDEAD_inline(/*hidden argument*/NULL);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_3, __this, (intptr_t)((intptr_t)Level_Player_OnStartedPlaying_m4D73C79E401A6DF1F41B90C557C0AEE26E2C391B_RuntimeMethod_var), /*hidden argument*/NULL);
		Player_add_OnStartedPlaying_m4C22367EBF3A3EE6FA8324A77CA06CCCFB7D7AF3(L_2, L_3, /*hidden argument*/NULL);
		// Player.GetInstance().OnVaxContact += Player_OnVaxContact;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_4;
		L_4 = Player_GetInstance_mBB6CF3140AB1B9C1A486222A593C0D54328EDEAD_inline(/*hidden argument*/NULL);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_5 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_5, __this, (intptr_t)((intptr_t)Level_Player_OnVaxContact_m61E1299BFEAA61DA6FCDB10D0D5C9942F751C1A1_RuntimeMethod_var), /*hidden argument*/NULL);
		Player_add_OnVaxContact_mE05C2236338869BB478B0F428BC9202E6B872F91(L_4, L_5, /*hidden argument*/NULL);
		// Player.GetInstance().OnVirusContact += Player_OnVirusContact;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_6;
		L_6 = Player_GetInstance_mBB6CF3140AB1B9C1A486222A593C0D54328EDEAD_inline(/*hidden argument*/NULL);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_7, __this, (intptr_t)((intptr_t)Level_Player_OnVirusContact_m7AC628C91918535BBD4E4D936DC2EAEB7508BAA0_RuntimeMethod_var), /*hidden argument*/NULL);
		Player_add_OnVirusContact_m6245D0F1888DB584BD97D9955CFEE7DFF6AFDE8E(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Level::Player_OnVirusContact(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_Player_OnVirusContact_m7AC628C91918535BBD4E4D936DC2EAEB7508BAA0 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m69234ADEA4012B54B3F98E699EAB48914B684196_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m66DEE033516AFCC910392824B58A62C73B998BA3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * V_1 = NULL;
	{
		// for (int i = 0; i < platformList.Count; i += 3)
		V_0 = 0;
		goto IL_0042;
	}

IL_0004:
	{
		// Platform platform = platformList[i];
		List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 * L_0 = __this->get_platformList_23();
		int32_t L_1 = V_0;
		Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * L_2;
		L_2 = List_1_get_Item_m66DEE033516AFCC910392824B58A62C73B998BA3_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m66DEE033516AFCC910392824B58A62C73B998BA3_RuntimeMethod_var);
		V_1 = L_2;
		// if (platform.GetYPosition() <= DIST_Y_POSITION_TO_SPAWN)
		Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * L_3 = V_1;
		float L_4;
		L_4 = Platform_GetYPosition_m6313C498E639C834501D73B95DAFA534DF10487E(L_3, /*hidden argument*/NULL);
		if ((!(((float)L_4) <= ((float)(-30.0f)))))
		{
			goto IL_003e;
		}
	}
	{
		// platformSpawnTimer = ((platform.GetYPosition() + PLATFORM_GAP_Y) / (SPAWN_Y_POSITION - DIST_Y_POSITION_TO_SPAWN)) * (30 / pf_speed_adjust);
		Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * L_5 = V_1;
		float L_6;
		L_6 = Platform_GetYPosition_m6313C498E639C834501D73B95DAFA534DF10487E(L_5, /*hidden argument*/NULL);
		__this->set_platformSpawnTimer_28(((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_add((float)L_6, (float)(30.0f)))/(float)(-30.0f))), (float)(0.5f))));
		// break;
		goto IL_0050;
	}

IL_003e:
	{
		// for (int i = 0; i < platformList.Count; i += 3)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)3));
	}

IL_0042:
	{
		// for (int i = 0; i < platformList.Count; i += 3)
		int32_t L_8 = V_0;
		List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 * L_9 = __this->get_platformList_23();
		int32_t L_10;
		L_10 = List_1_get_Count_m69234ADEA4012B54B3F98E699EAB48914B684196_inline(L_9, /*hidden argument*/List_1_get_Count_m69234ADEA4012B54B3F98E699EAB48914B684196_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}

IL_0050:
	{
		// platformSpawnTimerMax = 30 / pf_speed_adjust;
		__this->set_platformSpawnTimerMax_29((0.5f));
		// adjustDifficultyTimerVirus = adjustDifficultyTimerVirusMax;
		float L_11 = __this->get_adjustDifficultyTimerVirusMax_31();
		__this->set_adjustDifficultyTimerVirus_30(L_11);
		// SetDifficulty(Difficulty.Adjust);
		Level_SetDifficulty_m7047871166A5240697EF27AB798F74AF8D476485(__this, 4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Level::Player_OnVaxContact(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_Player_OnVaxContact_m61E1299BFEAA61DA6FCDB10D0D5C9942F751C1A1 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m69234ADEA4012B54B3F98E699EAB48914B684196_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m66DEE033516AFCC910392824B58A62C73B998BA3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * V_1 = NULL;
	{
		// for (int i = 0; i < platformList.Count; i+=3)
		V_0 = 0;
		goto IL_0042;
	}

IL_0004:
	{
		// Platform platform = platformList[i];
		List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 * L_0 = __this->get_platformList_23();
		int32_t L_1 = V_0;
		Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * L_2;
		L_2 = List_1_get_Item_m66DEE033516AFCC910392824B58A62C73B998BA3_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m66DEE033516AFCC910392824B58A62C73B998BA3_RuntimeMethod_var);
		V_1 = L_2;
		// if (platform.GetYPosition() <= DIST_Y_POSITION_TO_SPAWN)
		Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * L_3 = V_1;
		float L_4;
		L_4 = Platform_GetYPosition_m6313C498E639C834501D73B95DAFA534DF10487E(L_3, /*hidden argument*/NULL);
		if ((!(((float)L_4) <= ((float)(-30.0f)))))
		{
			goto IL_003e;
		}
	}
	{
		// platformSpawnTimer = ((platform.GetYPosition() + PLATFORM_GAP_Y) / (SPAWN_Y_POSITION - DIST_Y_POSITION_TO_SPAWN)) * (30 / pf_speed_easy);
		Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * L_5 = V_1;
		float L_6;
		L_6 = Platform_GetYPosition_m6313C498E639C834501D73B95DAFA534DF10487E(L_5, /*hidden argument*/NULL);
		__this->set_platformSpawnTimer_28(((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_add((float)L_6, (float)(30.0f)))/(float)(-30.0f))), (float)(1.5f))));
		// break;
		goto IL_0050;
	}

IL_003e:
	{
		// for (int i = 0; i < platformList.Count; i+=3)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)3));
	}

IL_0042:
	{
		// for (int i = 0; i < platformList.Count; i+=3)
		int32_t L_8 = V_0;
		List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 * L_9 = __this->get_platformList_23();
		int32_t L_10;
		L_10 = List_1_get_Count_m69234ADEA4012B54B3F98E699EAB48914B684196_inline(L_9, /*hidden argument*/List_1_get_Count_m69234ADEA4012B54B3F98E699EAB48914B684196_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}

IL_0050:
	{
		// platformSpawnTimerMax = 30 / pf_speed_easy;
		__this->set_platformSpawnTimerMax_29((1.5f));
		// adjustDifficultyTimerVax = adjustDifficultyTimerVaxMax;
		float L_11 = __this->get_adjustDifficultyTimerVaxMax_33();
		__this->set_adjustDifficultyTimerVax_32(L_11);
		// SetDifficulty(Difficulty.Easy);
		Level_SetDifficulty_m7047871166A5240697EF27AB798F74AF8D476485(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Level::Player_OnStartedPlaying(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_Player_OnStartedPlaying_m4D73C79E401A6DF1F41B90C557C0AEE26E2C391B (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	{
		// state = State.Playing;
		__this->set_state_27(1);
		// }
		return;
	}
}
// System.Void Level::Player_OnDied(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_Player_OnDied_m8AEE73BEFABEB6D529F57D632134405A59886876 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	{
		// state = State.PlayerDead;
		__this->set_state_27(2);
		// SetPlatformsSpawnedAndScore(platformsSpawned, GetScore());
		int32_t L_0 = __this->get_platformsSpawned_24();
		int32_t L_1;
		L_1 = Level_GetScore_m4F7BFA6D497E1EE72B97512AC861950D52CFD7B9(__this, /*hidden argument*/NULL);
		Level_SetPlatformsSpawnedAndScore_m9B1F4B152BA438D7C4B598969A9B96211F799F53(L_0, L_1, /*hidden argument*/NULL);
		// TrySetNewHighscore(GetScore());
		int32_t L_2;
		L_2 = Level_GetScore_m4F7BFA6D497E1EE72B97512AC861950D52CFD7B9(__this, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Level_TrySetNewHighscore_mF6F80928319A110D69C808207EF31FA84CBE8027(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Level::SetPlatformsSpawnedAndScore(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_SetPlatformsSpawnedAndScore_m9B1F4B152BA438D7C4B598969A9B96211F799F53 (int32_t ___platformsSpawned0, int32_t ___score1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C409218DCC1BB00148BB5E9DB58BC18B97AD4C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9994C9B4F7A06ADE00231A27A560CDBC3E149EA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(PlayerPrefs.GetInt("quizTaken") == 0)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9994C9B4F7A06ADE00231A27A560CDBC3E149EA5, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		// PlayerPrefs.SetInt("platformsSpawned", platformsSpawned);
		int32_t L_1 = ___platformsSpawned0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral2C409218DCC1BB00148BB5E9DB58BC18B97AD4C1, L_1, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("score", score);
		int32_t L_2 = ___score1;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, L_2, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// }
		return;
	}

IL_0028:
	{
		// PlayerPrefs.SetInt("platformsSpawned", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral2C409218DCC1BB00148BB5E9DB58BC18B97AD4C1, 0, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("score", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, 0, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Level::TrySetNewHighscore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Level_TrySetNewHighscore_mF6F80928319A110D69C808207EF31FA84CBE8027 (int32_t ___score0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int currentHighscore = PlayerPrefs.GetInt("highscore");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (score > currentHighscore)
		int32_t L_1 = ___score0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		// PlayerPrefs.SetInt("highscore", score);
		int32_t L_3 = ___score0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7, L_3, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_0021:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Level::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_Update_mE24714067EF415E478F5F157E367C3C4D5B6BAD5 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method)
{
	{
		// if (state == State.Playing)
		int32_t L_0 = __this->get_state_27();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		// HandlePlatformMovement();
		Level_HandlePlatformMovement_mEAA8B7E84E338C6B8C636D1A1013CCA453323742(__this, /*hidden argument*/NULL);
		// HandlePlatformSpawning();
		Level_HandlePlatformSpawning_m0204DF74705A77B79F20286B8C4D8CD848AA4308(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Level::HandlePlatformSpawning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_HandlePlatformSpawning_m0204DF74705A77B79F20286B8C4D8CD848AA4308 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * V_4 = NULL;
	{
		// platformSpawnTimer -= Time.deltaTime;
		float L_0 = __this->get_platformSpawnTimer_28();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_platformSpawnTimer_28(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// adjustDifficultyTimerVax -= Time.deltaTime;
		float L_2 = __this->get_adjustDifficultyTimerVax_32();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_adjustDifficultyTimerVax_32(((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)));
		// adjustDifficultyTimerVirus -= Time.deltaTime;
		float L_4 = __this->get_adjustDifficultyTimerVirus_30();
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_adjustDifficultyTimerVirus_30(((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)));
		// if (platformSpawnTimer < 0)
		float L_6 = __this->get_platformSpawnTimer_28();
		if ((!(((float)L_6) < ((float)(0.0f)))))
		{
			goto IL_00a8;
		}
	}
	{
		// platformSpawnTimer += platformSpawnTimerMax;
		float L_7 = __this->get_platformSpawnTimer_28();
		float L_8 = __this->get_platformSpawnTimerMax_29();
		__this->set_platformSpawnTimer_28(((float)il2cpp_codegen_add((float)L_7, (float)L_8)));
		// float minLeftEdgePos = -70.0f;
		// float maxRightEdgePos1 = 30.0f;
		V_0 = (30.0f);
		// float maxRightEdgePos2 = 70.0f;
		V_1 = (70.0f);
		// float gapPosX1 = Random.Range(minLeftEdgePos, maxRightEdgePos1);
		float L_9 = V_0;
		float L_10;
		L_10 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-70.0f), L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		// float gapPosX2 = Random.Range(gapPosX1 + 20.0f, maxRightEdgePos2);
		float L_11 = V_2;
		float L_12 = V_1;
		float L_13;
		L_13 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((float)il2cpp_codegen_add((float)L_11, (float)(20.0f))), L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		// System.Random rnd = new System.Random();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_14 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_14, /*hidden argument*/NULL);
		V_4 = L_14;
		// CreatePlatformGaps(gapPosX1, gapPosX2, SPAWN_Y_POSITION, rnd.Next(2) == 0, true);
		float L_15 = V_2;
		float L_16 = V_3;
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_17 = V_4;
		int32_t L_18;
		L_18 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32) */, L_17, 2);
		Level_CreatePlatformGaps_mA7DA1CC2F666C398A187D7B44AE4ADFFA3FF1D9E(__this, L_15, L_16, (-60.0f), (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0), (bool)1, /*hidden argument*/NULL);
		// SetDifficulty(GetDifficulty());
		int32_t L_19;
		L_19 = Level_GetDifficulty_m60F958C5A7EAF0B978D00B730CC3FD61DD34D453(__this, /*hidden argument*/NULL);
		Level_SetDifficulty_m7047871166A5240697EF27AB798F74AF8D476485(__this, L_19, /*hidden argument*/NULL);
	}

IL_00a8:
	{
		// }
		return;
	}
}
// System.Void Level::HandlePlatformMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_HandlePlatformMovement_mEAA8B7E84E338C6B8C636D1A1013CCA453323742 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mE3B4E761645D240291D9165D133E7496494CB3EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m69234ADEA4012B54B3F98E699EAB48914B684196_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m66DEE033516AFCC910392824B58A62C73B998BA3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * V_1 = NULL;
	{
		// for (int i = 0; i < platformList.Count; i++)
		V_0 = 0;
		goto IL_0045;
	}

IL_0004:
	{
		// Platform platform = platformList[i];
		List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 * L_0 = __this->get_platformList_23();
		int32_t L_1 = V_0;
		Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * L_2;
		L_2 = List_1_get_Item_m66DEE033516AFCC910392824B58A62C73B998BA3_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m66DEE033516AFCC910392824B58A62C73B998BA3_RuntimeMethod_var);
		V_1 = L_2;
		// platform.Move(PLATFORM_MOVE_SPEED);
		Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * L_3 = V_1;
		float L_4 = __this->get_PLATFORM_MOVE_SPEED_17();
		Platform_Move_mD37AF1265591A30DA5190FE4928DE3AE5E10C3AA(L_3, L_4, /*hidden argument*/NULL);
		// if (platform.GetYPosition() > DESTROY_Y_POSITION)
		Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * L_5 = V_1;
		float L_6;
		L_6 = Platform_GetYPosition_m6313C498E639C834501D73B95DAFA534DF10487E(L_5, /*hidden argument*/NULL);
		if ((!(((float)L_6) > ((float)(60.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		// platform.DestroySelf();
		Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * L_7 = V_1;
		Platform_DestroySelf_m0DD1C75F58E19E869FB0677883A9316A44E3E3B6(L_7, /*hidden argument*/NULL);
		// platformList.Remove(platform);
		List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 * L_8 = __this->get_platformList_23();
		Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * L_9 = V_1;
		bool L_10;
		L_10 = List_1_Remove_mE3B4E761645D240291D9165D133E7496494CB3EC(L_8, L_9, /*hidden argument*/List_1_Remove_mE3B4E761645D240291D9165D133E7496494CB3EC_RuntimeMethod_var);
		// i--;
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
	}

IL_0041:
	{
		// for (int i = 0; i < platformList.Count; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0045:
	{
		// for (int i = 0; i < platformList.Count; i++)
		int32_t L_13 = V_0;
		List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 * L_14 = __this->get_platformList_23();
		int32_t L_15;
		L_15 = List_1_get_Count_m69234ADEA4012B54B3F98E699EAB48914B684196_inline(L_14, /*hidden argument*/List_1_get_Count_m69234ADEA4012B54B3F98E699EAB48914B684196_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Level::SetDifficulty(Level/Difficulty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_SetDifficulty_m7047871166A5240697EF27AB798F74AF8D476485 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, int32_t ___difficulty0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float factor = 0.5f;
		V_0 = (0.5f);
		int32_t L_0 = ___difficulty0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_0079;
			}
			case 3:
			{
				goto IL_00a5;
			}
			case 4:
			{
				goto IL_00d1;
			}
		}
	}
	{
		return;
	}

IL_0021:
	{
		// PLATFORM_MOVE_SPEED = pf_speed_easy;
		__this->set_PLATFORM_MOVE_SPEED_17((20.0f));
		// platformSpawnTimerMax = 30 / PLATFORM_MOVE_SPEED;
		float L_1 = __this->get_PLATFORM_MOVE_SPEED_17();
		__this->set_platformSpawnTimerMax_29(((float)((float)(30.0f)/(float)L_1)));
		// difficultyFactor = factor * PLATFORM_MOVE_SPEED;
		float L_2 = V_0;
		float L_3 = __this->get_PLATFORM_MOVE_SPEED_17();
		__this->set_difficultyFactor_25(((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)));
		// break;
		return;
	}

IL_004d:
	{
		// PLATFORM_MOVE_SPEED = pf_speed_medium;
		__this->set_PLATFORM_MOVE_SPEED_17((25.0f));
		// platformSpawnTimerMax = 30 / PLATFORM_MOVE_SPEED;
		float L_4 = __this->get_PLATFORM_MOVE_SPEED_17();
		__this->set_platformSpawnTimerMax_29(((float)((float)(30.0f)/(float)L_4)));
		// difficultyFactor = factor * PLATFORM_MOVE_SPEED;
		float L_5 = V_0;
		float L_6 = __this->get_PLATFORM_MOVE_SPEED_17();
		__this->set_difficultyFactor_25(((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)));
		// break;
		return;
	}

IL_0079:
	{
		// PLATFORM_MOVE_SPEED = pf_speed_hard;
		__this->set_PLATFORM_MOVE_SPEED_17((30.0f));
		// platformSpawnTimerMax = 30 / PLATFORM_MOVE_SPEED;
		float L_7 = __this->get_PLATFORM_MOVE_SPEED_17();
		__this->set_platformSpawnTimerMax_29(((float)((float)(30.0f)/(float)L_7)));
		// difficultyFactor = factor * PLATFORM_MOVE_SPEED;
		float L_8 = V_0;
		float L_9 = __this->get_PLATFORM_MOVE_SPEED_17();
		__this->set_difficultyFactor_25(((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)));
		// break;
		return;
	}

IL_00a5:
	{
		// PLATFORM_MOVE_SPEED = pf_speed_impossible;
		__this->set_PLATFORM_MOVE_SPEED_17((40.0f));
		// platformSpawnTimerMax = 30 / PLATFORM_MOVE_SPEED;
		float L_10 = __this->get_PLATFORM_MOVE_SPEED_17();
		__this->set_platformSpawnTimerMax_29(((float)((float)(30.0f)/(float)L_10)));
		// difficultyFactor = factor * PLATFORM_MOVE_SPEED;
		float L_11 = V_0;
		float L_12 = __this->get_PLATFORM_MOVE_SPEED_17();
		__this->set_difficultyFactor_25(((float)il2cpp_codegen_multiply((float)L_11, (float)L_12)));
		// break;
		return;
	}

IL_00d1:
	{
		// PLATFORM_MOVE_SPEED = pf_speed_adjust;
		__this->set_PLATFORM_MOVE_SPEED_17((60.0f));
		// platformSpawnTimerMax = 30 / PLATFORM_MOVE_SPEED;
		float L_13 = __this->get_PLATFORM_MOVE_SPEED_17();
		__this->set_platformSpawnTimerMax_29(((float)((float)(30.0f)/(float)L_13)));
		// difficultyFactor = factor * PLATFORM_MOVE_SPEED;
		float L_14 = V_0;
		float L_15 = __this->get_PLATFORM_MOVE_SPEED_17();
		__this->set_difficultyFactor_25(((float)il2cpp_codegen_multiply((float)L_14, (float)L_15)));
		// }
		return;
	}
}
// Level/Difficulty Level::GetDifficulty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Level_GetDifficulty_m60F958C5A7EAF0B978D00B730CC3FD61DD34D453 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(adjustDifficultyTimerVax > 0)
		float L_0 = __this->get_adjustDifficultyTimerVax_32();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_001a;
		}
	}
	{
		// platformSpawnTimer = 30 / pf_speed_easy;
		__this->set_platformSpawnTimer_28((1.5f));
		// return Difficulty.Easy;
		return (int32_t)(0);
	}

IL_001a:
	{
		// if (adjustDifficultyTimerVirus > 0)
		float L_1 = __this->get_adjustDifficultyTimerVirus_30();
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0034;
		}
	}
	{
		// platformSpawnTimer = 30 / pf_speed_adjust;
		__this->set_platformSpawnTimer_28((0.5f));
		// return Difficulty.Adjust;
		return (int32_t)(4);
	}

IL_0034:
	{
		// if (GameObject.Find("Player").transform.position.y < -25)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		if ((!(((float)L_5) < ((float)(-25.0f)))))
		{
			goto IL_0061;
		}
	}
	{
		// platformSpawnTimer = 30 / pf_speed_adjust;
		__this->set_platformSpawnTimer_28((0.5f));
		// return Difficulty.Adjust;
		return (int32_t)(4);
	}

IL_0061:
	{
		// if (platformsSpawned >= 45) {
		int32_t L_6 = __this->get_platformsSpawned_24();
		if ((((int32_t)L_6) < ((int32_t)((int32_t)45))))
		{
			goto IL_0078;
		}
	}
	{
		// platformSpawnTimer = 30 / pf_speed_impossible;
		__this->set_platformSpawnTimer_28((0.75f));
		// return Difficulty.Impossible;
		return (int32_t)(3);
	}

IL_0078:
	{
		// if (platformsSpawned >= 30) {
		int32_t L_7 = __this->get_platformsSpawned_24();
		if ((((int32_t)L_7) < ((int32_t)((int32_t)30))))
		{
			goto IL_008f;
		}
	}
	{
		// platformSpawnTimer = 30 / pf_speed_hard;
		__this->set_platformSpawnTimer_28((1.0f));
		// return Difficulty.Hard;
		return (int32_t)(2);
	}

IL_008f:
	{
		// if (platformsSpawned >= 15) {
		int32_t L_8 = __this->get_platformsSpawned_24();
		if ((((int32_t)L_8) < ((int32_t)((int32_t)15))))
		{
			goto IL_00a6;
		}
	}
	{
		// platformSpawnTimer = 30 / pf_speed_medium;
		__this->set_platformSpawnTimer_28((1.20000005f));
		// return Difficulty.Medium;
		return (int32_t)(1);
	}

IL_00a6:
	{
		// platformSpawnTimer = 30 / pf_speed_easy;
		__this->set_platformSpawnTimer_28((1.5f));
		// return Difficulty.Easy;
		return (int32_t)(0);
	}
}
// System.Void Level::CreatePlatformGaps(System.Single,System.Single,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_CreatePlatformGaps_mA7DA1CC2F666C398A187D7B44AE4ADFFA3FF1D9E (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, float ___gapPosX10, float ___gapPosX21, float ___yPosition2, bool ___VIRUS_loc3, bool ___Not_First_pf4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * V_11 = NULL;
	bool G_B2_0 = false;
	float G_B2_1 = 0.0f;
	float G_B2_2 = 0.0f;
	float G_B2_3 = 0.0f;
	Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * G_B2_4 = NULL;
	bool G_B1_0 = false;
	float G_B1_1 = 0.0f;
	float G_B1_2 = 0.0f;
	float G_B1_3 = 0.0f;
	Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * G_B1_4 = NULL;
	int32_t G_B3_0 = 0;
	bool G_B3_1 = false;
	float G_B3_2 = 0.0f;
	float G_B3_3 = 0.0f;
	float G_B3_4 = 0.0f;
	Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * G_B3_5 = NULL;
	int32_t G_B5_0 = 0;
	float G_B5_1 = 0.0f;
	float G_B5_2 = 0.0f;
	float G_B5_3 = 0.0f;
	Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * G_B5_4 = NULL;
	int32_t G_B4_0 = 0;
	float G_B4_1 = 0.0f;
	float G_B4_2 = 0.0f;
	float G_B4_3 = 0.0f;
	Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * G_B4_4 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	float G_B6_2 = 0.0f;
	float G_B6_3 = 0.0f;
	float G_B6_4 = 0.0f;
	Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * G_B6_5 = NULL;
	int32_t G_B8_0 = 0;
	float G_B8_1 = 0.0f;
	float G_B8_2 = 0.0f;
	float G_B8_3 = 0.0f;
	Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * G_B8_4 = NULL;
	int32_t G_B7_0 = 0;
	float G_B7_1 = 0.0f;
	float G_B7_2 = 0.0f;
	float G_B7_3 = 0.0f;
	Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * G_B7_4 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	float G_B9_2 = 0.0f;
	float G_B9_3 = 0.0f;
	float G_B9_4 = 0.0f;
	Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * G_B9_5 = NULL;
	{
		// float platformWidthLeft = SCREEN_WIDTH + gapPosX1 - GAP_SIZE * 0.5f;
		float L_0 = ___gapPosX10;
		V_0 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)(100.0f), (float)L_0)), (float)(7.5f)));
		// float platformWidthRight = SCREEN_WIDTH - gapPosX2 - GAP_SIZE * 0.5f;
		float L_1 = ___gapPosX21;
		V_1 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(100.0f), (float)L_1)), (float)(7.5f)));
		// float platformWidthMiddle = SCREEN_WIDTH * 2 - platformWidthLeft - platformWidthRight - GAP_SIZE * 2;
		float L_2 = V_0;
		float L_3 = V_1;
		V_2 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(200.0f), (float)L_2)), (float)L_3)), (float)(30.0f)));
		// float platformXPositionLeft = -SCREEN_WIDTH;
		V_3 = (-100.0f);
		// float platformXPositionMiddle = gapPosX1 + GAP_SIZE * 0.5f;
		float L_4 = ___gapPosX10;
		V_4 = ((float)il2cpp_codegen_add((float)L_4, (float)(7.5f)));
		// float platformXPositionRight = gapPosX2 + GAP_SIZE * 0.5f;
		float L_5 = ___gapPosX21;
		V_5 = ((float)il2cpp_codegen_add((float)L_5, (float)(7.5f)));
		// float minLeftEdgePos = -85.0f;
		// float maxRightEdgePos = 85.0f;
		V_6 = (85.0f);
		// float minDistFromPlatformEdge = 10.0f; //how close a virus can spawn to a gap in the platforms
		V_7 = (10.0f);
		// float xPositionVirus_pf1 = Random.Range(minLeftEdgePos, gapPosX1 - (GAP_SIZE * 0.5f) - minDistFromPlatformEdge);
		float L_6 = ___gapPosX10;
		float L_7 = V_7;
		float L_8;
		L_8 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-85.0f), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_6, (float)(7.5f))), (float)L_7)), /*hidden argument*/NULL);
		V_8 = L_8;
		// float xPositionVirus_pf2 = Random.Range(gapPosX1 + (GAP_SIZE * 0.5f) + minDistFromPlatformEdge, gapPosX2 - (GAP_SIZE * 0.5f) - minDistFromPlatformEdge);
		float L_9 = ___gapPosX10;
		float L_10 = V_7;
		float L_11 = ___gapPosX21;
		float L_12 = V_7;
		float L_13;
		L_13 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_9, (float)(7.5f))), (float)L_10)), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_11, (float)(7.5f))), (float)L_12)), /*hidden argument*/NULL);
		V_9 = L_13;
		// float xPositionVirus_pf3 = Random.Range(gapPosX2 + (GAP_SIZE * 0.5f) + minDistFromPlatformEdge, maxRightEdgePos);
		float L_14 = ___gapPosX21;
		float L_15 = V_7;
		float L_16 = V_6;
		float L_17;
		L_17 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_14, (float)(7.5f))), (float)L_15)), L_16, /*hidden argument*/NULL);
		V_10 = L_17;
		// System.Random rnd = new System.Random();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_18 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_18, /*hidden argument*/NULL);
		V_11 = L_18;
		// CreatePlatform(platformWidthLeft, yPosition, platformXPositionLeft, VIRUS_loc, Not_First_pf && rnd.Next(2) == 0, xPositionVirus_pf1); //Left platform
		float L_19 = V_0;
		float L_20 = ___yPosition2;
		float L_21 = V_3;
		bool L_22 = ___VIRUS_loc3;
		bool L_23 = ___Not_First_pf4;
		G_B1_0 = L_22;
		G_B1_1 = L_21;
		G_B1_2 = L_20;
		G_B1_3 = L_19;
		G_B1_4 = __this;
		if (!L_23)
		{
			G_B2_0 = L_22;
			G_B2_1 = L_21;
			G_B2_2 = L_20;
			G_B2_3 = L_19;
			G_B2_4 = __this;
			goto IL_00b4;
		}
	}
	{
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_24 = V_11;
		int32_t L_25;
		L_25 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32) */, L_24, 2);
		G_B3_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_00b5:
	{
		float L_26 = V_8;
		Level_CreatePlatform_m6994F620975A713872C9A22712CF48C14F3E0099(G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, (bool)G_B3_0, L_26, /*hidden argument*/NULL);
		// CreatePlatform(platformWidthMiddle, yPosition, platformXPositionMiddle, VIRUS_loc == false, Not_First_pf && rnd.Next(2) == 0, xPositionVirus_pf2); //Middle platform
		float L_27 = V_2;
		float L_28 = ___yPosition2;
		float L_29 = V_4;
		bool L_30 = ___VIRUS_loc3;
		bool L_31 = ___Not_First_pf4;
		G_B4_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		G_B4_1 = L_29;
		G_B4_2 = L_28;
		G_B4_3 = L_27;
		G_B4_4 = __this;
		if (!L_31)
		{
			G_B5_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
			G_B5_1 = L_29;
			G_B5_2 = L_28;
			G_B5_3 = L_27;
			G_B5_4 = __this;
			goto IL_00d7;
		}
	}
	{
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_32 = V_11;
		int32_t L_33;
		L_33 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32) */, L_32, 2);
		G_B6_0 = ((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		goto IL_00d8;
	}

IL_00d7:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
	}

IL_00d8:
	{
		float L_34 = V_9;
		Level_CreatePlatform_m6994F620975A713872C9A22712CF48C14F3E0099(G_B6_5, G_B6_4, G_B6_3, G_B6_2, (bool)G_B6_1, (bool)G_B6_0, L_34, /*hidden argument*/NULL);
		// CreatePlatform(platformWidthRight, yPosition, platformXPositionRight, false, Not_First_pf && rnd.Next(2) == 0, xPositionVirus_pf3); //Right platform
		float L_35 = V_1;
		float L_36 = ___yPosition2;
		float L_37 = V_5;
		bool L_38 = ___Not_First_pf4;
		G_B7_0 = 0;
		G_B7_1 = L_37;
		G_B7_2 = L_36;
		G_B7_3 = L_35;
		G_B7_4 = __this;
		if (!L_38)
		{
			G_B8_0 = 0;
			G_B8_1 = L_37;
			G_B8_2 = L_36;
			G_B8_3 = L_35;
			G_B8_4 = __this;
			goto IL_00f6;
		}
	}
	{
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_39 = V_11;
		int32_t L_40;
		L_40 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32) */, L_39, 2);
		G_B9_0 = ((((int32_t)L_40) == ((int32_t)0))? 1 : 0);
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		G_B9_4 = G_B7_3;
		G_B9_5 = G_B7_4;
		goto IL_00f7;
	}

IL_00f6:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
		G_B9_4 = G_B8_3;
		G_B9_5 = G_B8_4;
	}

IL_00f7:
	{
		float L_41 = V_10;
		Level_CreatePlatform_m6994F620975A713872C9A22712CF48C14F3E0099(G_B9_5, G_B9_4, G_B9_3, G_B9_2, (bool)G_B9_1, (bool)G_B9_0, L_41, /*hidden argument*/NULL);
		// platformsSpawned++;
		int32_t L_42 = __this->get_platformsSpawned_24();
		__this->set_platformsSpawned_24(((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1)));
		// }
		return;
	}
}
// System.Void Level::CreatePlatform(System.Single,System.Single,System.Single,System.Boolean,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_CreatePlatform_m6994F620975A713872C9A22712CF48C14F3E0099 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, float ___width0, float ___yPosition1, float ___xPosition2, bool ___VIRUS3, bool ___VIRUS_pf4, float ___xPositionVirus_pf5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_2 = NULL;
	{
		// Transform platform = Instantiate(GameAssets.GetInstance().pfPlatform);
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_0;
		L_0 = GameAssets_GetInstance_mD3A14244E7CA075B8B8FF32FDEAF7E26CB2112E6_inline(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_pfPlatform_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762(L_1, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762_RuntimeMethod_var);
		V_0 = L_2;
		// platform.position = new Vector3(xPosition, yPosition);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = V_0;
		float L_4 = ___xPosition2;
		float L_5 = ___yPosition1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_6), L_4, L_5, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_6, /*hidden argument*/NULL);
		// SpriteRenderer platformSpriteRenderer = platform.GetComponent<SpriteRenderer>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = V_0;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_8;
		L_8 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(L_7, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		// platformSpriteRenderer.size = new Vector2(width, PLATFORM_HEIGHT);
		float L_9 = ___width0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_10), L_9, (4.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_size_m92E5651D28AC04743795244ACC1E3F5FABCF1B49(L_8, L_10, /*hidden argument*/NULL);
		// BoxCollider2D platformBoxCollider = platform.GetComponent<BoxCollider2D>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = V_0;
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_12;
		L_12 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(L_11, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		// platformBoxCollider.size = new Vector2(width, PLATFORM_HEIGHT);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_13 = L_12;
		float L_14 = ___width0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_15), L_14, (4.0f), /*hidden argument*/NULL);
		BoxCollider2D_set_size_m8460A38ADDD4BE82BE1F416DE3D7AFB87EBA6760(L_13, L_15, /*hidden argument*/NULL);
		// platformBoxCollider.offset = new Vector2(width * 0.5f, 0f);
		float L_16 = ___width0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_17), ((float)il2cpp_codegen_multiply((float)L_16, (float)(0.5f))), (0.0f), /*hidden argument*/NULL);
		Collider2D_set_offset_m496DDE5487C59E9E8D6B468E8918EE1EFC625E38(L_13, L_17, /*hidden argument*/NULL);
		// if (VIRUS)
		bool L_18 = ___VIRUS3;
		if (!L_18)
		{
			goto IL_00c8;
		}
	}
	{
		// Transform virus = Instantiate(GameAssets.GetInstance().pfVirus);
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_19;
		L_19 = GameAssets_GetInstance_mD3A14244E7CA075B8B8FF32FDEAF7E26CB2112E6_inline(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = L_19->get_pfVirus_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762(L_20, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762_RuntimeMethod_var);
		V_1 = L_21;
		// virus.position = new Vector3(xPosition + width + GAP_VIRUS_POS, yPosition);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = V_1;
		float L_23 = ___xPosition2;
		float L_24 = ___width0;
		float L_25 = ___yPosition1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_26), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_23, (float)L_24)), (float)(5.25f))), L_25, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_22, L_26, /*hidden argument*/NULL);
		// BoxCollider2D virusBoxCollider = virus.GetComponent<BoxCollider2D>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = V_1;
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_28;
		L_28 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(L_27, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		// virusBoxCollider.size = new Vector2(VIRUS_WIDTH, VIRUS_HEIGHT);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_29 = L_28;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_30), (4.5f), (4.5f), /*hidden argument*/NULL);
		BoxCollider2D_set_size_m8460A38ADDD4BE82BE1F416DE3D7AFB87EBA6760(L_29, L_30, /*hidden argument*/NULL);
		// virusBoxCollider.offset = new Vector2(VIRUS_WIDTH * 0.5f, 0f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_31), (2.25f), (0.0f), /*hidden argument*/NULL);
		Collider2D_set_offset_m496DDE5487C59E9E8D6B468E8918EE1EFC625E38(L_29, L_31, /*hidden argument*/NULL);
		// AddVirusOnPlatform(width, yPosition, xPosition, VIRUS_pf, xPositionVirus_pf, virus, platform);
		float L_32 = ___width0;
		float L_33 = ___yPosition1;
		float L_34 = ___xPosition2;
		bool L_35 = ___VIRUS_pf4;
		float L_36 = ___xPositionVirus_pf5;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38 = V_0;
		Level_AddVirusOnPlatform_mBDB395F8D7AC4078361194BC978048569DA47AE3(__this, L_32, L_33, L_34, L_35, L_36, L_37, L_38, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00c8:
	{
		// Transform virus = Instantiate(GameAssets.GetInstance().pfVirusEmpty);
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_39;
		L_39 = GameAssets_GetInstance_mD3A14244E7CA075B8B8FF32FDEAF7E26CB2112E6_inline(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40 = L_39->get_pfVirusEmpty_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762(L_40, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762_RuntimeMethod_var);
		V_2 = L_41;
		// virus.position = new Vector3(xPosition + width + 5.0f, yPosition);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42 = V_2;
		float L_43 = ___xPosition2;
		float L_44 = ___width0;
		float L_45 = ___yPosition1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_46), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_43, (float)L_44)), (float)(5.0f))), L_45, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_42, L_46, /*hidden argument*/NULL);
		// AddVirusOnPlatform(width, yPosition, xPosition, VIRUS_pf, xPositionVirus_pf, virus, platform);
		float L_47 = ___width0;
		float L_48 = ___yPosition1;
		float L_49 = ___xPosition2;
		bool L_50 = ___VIRUS_pf4;
		float L_51 = ___xPositionVirus_pf5;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53 = V_0;
		Level_AddVirusOnPlatform_mBDB395F8D7AC4078361194BC978048569DA47AE3(__this, L_47, L_48, L_49, L_50, L_51, L_52, L_53, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Level::AddVirusOnPlatform(System.Single,System.Single,System.Single,System.Boolean,System.Single,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_AddVirusOnPlatform_mBDB395F8D7AC4078361194BC978048569DA47AE3 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, float ___width0, float ___yPosition1, float ___xPosition2, bool ___VIRUS_pf3, float ___xPositionVirus_pf4, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___virus5, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___platform6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m20229880EA913B9DF4C3F92E18B6E9B4CB23CB3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_2 = NULL;
	Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * V_3 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_4 = NULL;
	Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * V_5 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_6 = NULL;
	Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * V_7 = NULL;
	{
		// float min_pf_width = 8 * VIRUS_WIDTH;
		V_0 = (36.0f);
		// System.Random rnd = new System.Random();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_0, /*hidden argument*/NULL);
		// int virus_or_vax = rnd.Next(2);
		int32_t L_1;
		L_1 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32) */, L_0, 2);
		V_1 = L_1;
		// if (VIRUS_pf && width > min_pf_width && virus_or_vax == 0)
		bool L_2 = ___VIRUS_pf3;
		if (!L_2)
		{
			goto IL_0088;
		}
	}
	{
		float L_3 = ___width0;
		float L_4 = V_0;
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_0088;
		}
	}
	{
		// Transform virus_pf = Instantiate(GameAssets.GetInstance().pfVirus);
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_6;
		L_6 = GameAssets_GetInstance_mD3A14244E7CA075B8B8FF32FDEAF7E26CB2112E6_inline(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = L_6->get_pfVirus_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762(L_7, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762_RuntimeMethod_var);
		V_2 = L_8;
		// virus_pf.position = new Vector3(xPositionVirus_pf, yPosition + PLATFORM_HEIGHT * 1.5f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = V_2;
		float L_10 = ___xPositionVirus_pf4;
		float L_11 = ___yPosition1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_12), L_10, ((float)il2cpp_codegen_add((float)L_11, (float)(6.0f))), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_12, /*hidden argument*/NULL);
		// BoxCollider2D virusBoxCollider = virus_pf.GetComponent<BoxCollider2D>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = V_2;
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_14;
		L_14 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(L_13, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		// virusBoxCollider.size = new Vector2(VIRUS_WIDTH, VIRUS_HEIGHT);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_15 = L_14;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_16), (4.5f), (4.5f), /*hidden argument*/NULL);
		BoxCollider2D_set_size_m8460A38ADDD4BE82BE1F416DE3D7AFB87EBA6760(L_15, L_16, /*hidden argument*/NULL);
		// virusBoxCollider.offset = new Vector2(VIRUS_WIDTH * 0.5f, 0f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_17), (2.25f), (0.0f), /*hidden argument*/NULL);
		Collider2D_set_offset_m496DDE5487C59E9E8D6B468E8918EE1EFC625E38(L_15, L_17, /*hidden argument*/NULL);
		// Platform pf = new Platform(platform, virus, virus_pf);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = ___platform6;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = ___virus5;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = V_2;
		Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * L_21 = (Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE *)il2cpp_codegen_object_new(Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE_il2cpp_TypeInfo_var);
		Platform__ctor_m1699CCAFD9979E7D74D6A51DEA2FE0C719B1ED11(L_21, L_18, L_19, L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		// platformList.Add(pf);
		List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 * L_22 = __this->get_platformList_23();
		Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * L_23 = V_3;
		List_1_Add_m20229880EA913B9DF4C3F92E18B6E9B4CB23CB3B(L_22, L_23, /*hidden argument*/List_1_Add_m20229880EA913B9DF4C3F92E18B6E9B4CB23CB3B_RuntimeMethod_var);
		// }
		return;
	}

IL_0088:
	{
		// else if (VIRUS_pf && width > min_pf_width && virus_or_vax != 0)
		bool L_24 = ___VIRUS_pf3;
		if (!L_24)
		{
			goto IL_0104;
		}
	}
	{
		float L_25 = ___width0;
		float L_26 = V_0;
		if ((!(((float)L_25) > ((float)L_26))))
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_27 = V_1;
		if (!L_27)
		{
			goto IL_0104;
		}
	}
	{
		// Transform vax_pf = Instantiate(GameAssets.GetInstance().pfVax);
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_28;
		L_28 = GameAssets_GetInstance_mD3A14244E7CA075B8B8FF32FDEAF7E26CB2112E6_inline(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = L_28->get_pfVax_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762(L_29, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762_RuntimeMethod_var);
		V_4 = L_30;
		// vax_pf.position = new Vector3(xPositionVirus_pf, yPosition + PLATFORM_HEIGHT * 1.5f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31 = V_4;
		float L_32 = ___xPositionVirus_pf4;
		float L_33 = ___yPosition1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_34), L_32, ((float)il2cpp_codegen_add((float)L_33, (float)(6.0f))), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_31, L_34, /*hidden argument*/NULL);
		// BoxCollider2D vaxBoxCollider = vax_pf.GetComponent<BoxCollider2D>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35 = V_4;
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_36;
		L_36 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(L_35, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		// vaxBoxCollider.size = new Vector2(VAX_WIDTH, VAX_HEIGHT);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_37 = L_36;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_38), (6.0f), (6.0f), /*hidden argument*/NULL);
		BoxCollider2D_set_size_m8460A38ADDD4BE82BE1F416DE3D7AFB87EBA6760(L_37, L_38, /*hidden argument*/NULL);
		// vaxBoxCollider.offset = new Vector2(0f, 0f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_39), (0.0f), (0.0f), /*hidden argument*/NULL);
		Collider2D_set_offset_m496DDE5487C59E9E8D6B468E8918EE1EFC625E38(L_37, L_39, /*hidden argument*/NULL);
		// Platform pf = new Platform(platform, virus, vax_pf);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40 = ___platform6;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41 = ___virus5;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42 = V_4;
		Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * L_43 = (Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE *)il2cpp_codegen_object_new(Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE_il2cpp_TypeInfo_var);
		Platform__ctor_m1699CCAFD9979E7D74D6A51DEA2FE0C719B1ED11(L_43, L_40, L_41, L_42, /*hidden argument*/NULL);
		V_5 = L_43;
		// platformList.Add(pf);
		List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 * L_44 = __this->get_platformList_23();
		Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * L_45 = V_5;
		List_1_Add_m20229880EA913B9DF4C3F92E18B6E9B4CB23CB3B(L_44, L_45, /*hidden argument*/List_1_Add_m20229880EA913B9DF4C3F92E18B6E9B4CB23CB3B_RuntimeMethod_var);
		// }
		return;
	}

IL_0104:
	{
		// Transform virus_pf = Instantiate(GameAssets.GetInstance().pfVirusEmpty);
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_46;
		L_46 = GameAssets_GetInstance_mD3A14244E7CA075B8B8FF32FDEAF7E26CB2112E6_inline(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47 = L_46->get_pfVirusEmpty_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762(L_47, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762_RuntimeMethod_var);
		V_6 = L_48;
		// virus_pf.position = new Vector3(xPositionVirus_pf, yPosition + PLATFORM_HEIGHT * 2.0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49 = V_6;
		float L_50 = ___xPositionVirus_pf4;
		float L_51 = ___yPosition1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_52), L_50, ((float)il2cpp_codegen_add((float)L_51, (float)(8.0f))), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_49, L_52, /*hidden argument*/NULL);
		// Platform pf = new Platform(platform, virus, virus_pf);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53 = ___platform6;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54 = ___virus5;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55 = V_6;
		Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * L_56 = (Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE *)il2cpp_codegen_object_new(Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE_il2cpp_TypeInfo_var);
		Platform__ctor_m1699CCAFD9979E7D74D6A51DEA2FE0C719B1ED11(L_56, L_53, L_54, L_55, /*hidden argument*/NULL);
		V_7 = L_56;
		// platformList.Add(pf);
		List_1_t594EAAAD074E00C8665EB3C1AA8B29EE0BEF2DB8 * L_57 = __this->get_platformList_23();
		Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * L_58 = V_7;
		List_1_Add_m20229880EA913B9DF4C3F92E18B6E9B4CB23CB3B(L_57, L_58, /*hidden argument*/List_1_Add_m20229880EA913B9DF4C3F92E18B6E9B4CB23CB3B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 Level::GetScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Level_GetScore_m4F7BFA6D497E1EE72B97512AC861950D52CFD7B9 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9994C9B4F7A06ADE00231A27A560CDBC3E149EA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (state == State.WaitingToStart && PlayerPrefs.GetInt("quizTaken") == 0)
		int32_t L_0 = __this->get_state_27();
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9994C9B4F7A06ADE00231A27A560CDBC3E149EA5, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		// score = 0;
		__this->set_score_26((0.0f));
		// return ((int)score);
		float L_2 = __this->get_score_26();
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_2);
	}

IL_0027:
	{
		// if (state == State.WaitingToStart && PlayerPrefs.GetInt("quizTaken") == 1)
		int32_t L_3 = __this->get_state_27();
		if (L_3)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9994C9B4F7A06ADE00231A27A560CDBC3E149EA5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0055;
		}
	}
	{
		// score = PlayerPrefs.GetInt("score");
		int32_t L_5;
		L_5 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, /*hidden argument*/NULL);
		__this->set_score_26(((float)((float)L_5)));
		// return ((int)score);
		float L_6 = __this->get_score_26();
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_6);
	}

IL_0055:
	{
		// if (state == State.Playing)
		int32_t L_7 = __this->get_state_27();
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_007f;
		}
	}
	{
		// score += Time.deltaTime * difficultyFactor;
		float L_8 = __this->get_score_26();
		float L_9;
		L_9 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_10 = __this->get_difficultyFactor_25();
		__this->set_score_26(((float)il2cpp_codegen_add((float)L_8, (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)))));
		// return ((int)score);
		float L_11 = __this->get_score_26();
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_11);
	}

IL_007f:
	{
		// return ((int)score);
		float L_12 = __this->get_score_26();
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_12);
	}
}
// System.Void Level::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level__ctor_mBBC9E192AD5FC6CC5FA5DFA55E8CA13E182C353A (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method)
{
	{
		// private float adjustDifficultyTimerVirusMax = 1.0f;
		__this->set_adjustDifficultyTimerVirusMax_31((1.0f));
		// private float adjustDifficultyTimerVaxMax = 1.0f;
		__this->set_adjustDifficultyTimerVaxMax_33((1.0f));
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
// System.Void Loader::Load(Loader/Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader_Load_mF11408CB2C41CD5BEAE02A8C4E9504A1DB0D18C9 (int32_t ___scene0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scene_tDAB301C5EA69A8F320BA4612E5E232D83D3E3877_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// SceneManager.LoadScene(Scene.LoadingScene.ToString());
		V_0 = 1;
		RuntimeObject * L_0 = Box(Scene_tDAB301C5EA69A8F320BA4612E5E232D83D3E3877_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		V_0 = *(int32_t*)UnBox(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_1, /*hidden argument*/NULL);
		// targetScene = scene;
		int32_t L_2 = ___scene0;
		((Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182_StaticFields*)il2cpp_codegen_static_fields_for(Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182_il2cpp_TypeInfo_var))->set_targetScene_0(L_2);
		// }
		return;
	}
}
// System.Void Loader::LoadTargetScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader_LoadTargetScene_m7B225121C1645E1484C20E9A728D4DE65D56F0E7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scene_tDAB301C5EA69A8F320BA4612E5E232D83D3E3877_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(targetScene.ToString());
		RuntimeObject * L_0 = Box(Scene_tDAB301C5EA69A8F320BA4612E5E232D83D3E3877_il2cpp_TypeInfo_var, (((Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182_StaticFields*)il2cpp_codegen_static_fields_for(Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182_il2cpp_TypeInfo_var))->get_address_of_targetScene_0()));
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		*(((Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182_StaticFields*)il2cpp_codegen_static_fields_for(Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182_il2cpp_TypeInfo_var))->get_address_of_targetScene_0()) = *(int32_t*)UnBox(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_1, /*hidden argument*/NULL);
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
// System.Void LoaderUpdate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoaderUpdate_Update_m9848495F8522025A0B2DADC0FEAAC5312BF85CB8 (LoaderUpdate_t1C703620C60A3AFA20D9EFF1F653FB17BBD1E61B * __this, const RuntimeMethod* method)
{
	{
		// Loader.LoadTargetScene();
		Loader_LoadTargetScene_m7B225121C1645E1484C20E9A728D4DE65D56F0E7(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoaderUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoaderUpdate__ctor_m23E5110FEADE143BBB742830CF13884E791DCEF0 (LoaderUpdate_t1C703620C60A3AFA20D9EFF1F653FB17BBD1E61B * __this, const RuntimeMethod* method)
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
// System.Void MainMenuWindow::ButtonPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuWindow_ButtonPlay_m735A8217C0149EEEB2C11CDCB8D8B9C05D00FBAF (MainMenuWindow_t82149054BBB1D5F43C52DE21D8CA7523FAB9F3BA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9994C9B4F7A06ADE00231A27A560CDBC3E149EA5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("quizTaken", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral9994C9B4F7A06ADE00231A27A560CDBC3E149EA5, 0, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// Loader.Load(Loader.Scene.Scene);
		Loader_Load_mF11408CB2C41CD5BEAE02A8C4E9504A1DB0D18C9(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuWindow::ButtonQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuWindow_ButtonQuit_m4C0252DBC4742E878AF236634A148A98A5B1164B (MainMenuWindow_t82149054BBB1D5F43C52DE21D8CA7523FAB9F3BA * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenuWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuWindow__ctor_m36069D4EB9B3B0D17CCF215650F11728DE48E598 (MainMenuWindow_t82149054BBB1D5F43C52DE21D8CA7523FAB9F3BA * __this, const RuntimeMethod* method)
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
// System.Void Player::add_OnDied(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_add_OnDied_m985B6B6C1F4C05111BEB636640BCD789EA8DDA94 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_OnDied_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_OnDied_6();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Player::remove_OnDied(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_remove_OnDied_m497183C27231C5DA094C76EFE055442B73FC3F70 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_OnDied_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_OnDied_6();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Player::add_OnStartedPlaying(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_add_OnStartedPlaying_m4C22367EBF3A3EE6FA8324A77CA06CCCFB7D7AF3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_OnStartedPlaying_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_OnStartedPlaying_7();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Player::remove_OnStartedPlaying(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_remove_OnStartedPlaying_m39A48BAC53068DCC724B9E35CE014EE023165B44 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_OnStartedPlaying_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_OnStartedPlaying_7();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Player::add_OnVirusContact(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_add_OnVirusContact_m6245D0F1888DB584BD97D9955CFEE7DFF6AFDE8E (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_OnVirusContact_8();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_OnVirusContact_8();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Player::remove_OnVirusContact(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_remove_OnVirusContact_m43CF090482EC5EB3B3634750F61D93B8D4296780 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_OnVirusContact_8();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_OnVirusContact_8();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Player::add_OnVaxContact(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_add_OnVaxContact_mE05C2236338869BB478B0F428BC9202E6B872F91 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_OnVaxContact_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_OnVaxContact_9();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Player::remove_OnVaxContact(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_remove_OnVaxContact_m3D64FE771E506B122845E668AB56CB61DB224E44 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_OnVaxContact_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_OnVaxContact_9();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Player Player::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * Player_GetInstance_mBB6CF3140AB1B9C1A486222A593C0D54328EDEAD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_0 = ((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->get_instance_11();
		return L_0;
	}
}
// System.Void Player::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Awake_m1131F11CF6BF6FBE6454601C7D9A94AC8F468A24 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->set_instance_11(__this);
		// state = State.WaitingToStart;
		__this->set_state_10(0);
		// gameObject.transform.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_2;
		L_2 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(L_1, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B(L_2, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_mBA04F1D6FE3C18037EA95DFAEEAA9977BFD49CD3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (state)
		int32_t L_0 = __this->get_state_10();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_007a;
			}
			case 2:
			{
				goto IL_015c;
			}
		}
	}

IL_0019:
	{
		// if (Input.GetKey(KeyCode.UpArrow) || Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.RightArrow))
		bool L_2;
		L_2 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)273), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0040;
		}
	}
	{
		bool L_3;
		L_3 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)276), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0040;
		}
	}
	{
		bool L_4;
		L_4 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)275), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0172;
		}
	}

IL_0040:
	{
		// state = State.Playing;
		__this->set_state_10(1);
		// gameObject.transform.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_7;
		L_7 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(L_6, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B(L_7, 0, /*hidden argument*/NULL);
		// if (OnStartedPlaying != null) OnStartedPlaying(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8 = __this->get_OnStartedPlaying_7();
		if (!L_8)
		{
			goto IL_0172;
		}
	}
	{
		// if (OnStartedPlaying != null) OnStartedPlaying(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = __this->get_OnStartedPlaying_7();
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_10 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_9, __this, L_10, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_007a:
	{
		// if (Input.GetKey(KeyCode.UpArrow))
		bool L_11;
		L_11 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)273), /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00b0;
		}
	}
	{
		// transform.Translate(Vector2.up * jump * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_14 = __this->get_jump_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_13, L_14, /*hidden argument*/NULL);
		float L_16;
		L_16 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_15, L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_17, /*hidden argument*/NULL);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_12, L_18, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		// if (Input.GetKey(KeyCode.LeftArrow))
		bool L_19;
		L_19 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)276), /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0106;
		}
	}
	{
		// transform.localScale = new Vector3(1, 1, 1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_20, L_21, /*hidden argument*/NULL);
		// transform.Translate(Vector2.left * speed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		L_23 = Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14(/*hidden argument*/NULL);
		float L_24 = __this->get_speed_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25;
		L_25 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_23, L_24, /*hidden argument*/NULL);
		float L_26;
		L_26 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		L_27 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_25, L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_27, /*hidden argument*/NULL);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_22, L_28, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0106:
	{
		// else if (Input.GetKey(KeyCode.RightArrow))
		bool L_29;
		L_29 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)275), /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0172;
		}
	}
	{
		// transform.localScale = new Vector3(-1, 1, 1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_31), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_30, L_31, /*hidden argument*/NULL);
		// transform.Translate(Vector2.right * speed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33;
		L_33 = Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF(/*hidden argument*/NULL);
		float L_34 = __this->get_speed_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35;
		L_35 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_33, L_34, /*hidden argument*/NULL);
		float L_36;
		L_36 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37;
		L_37 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_35, L_36, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_37, /*hidden argument*/NULL);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_32, L_38, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_015c:
	{
		// gameObject.transform.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
		L_39 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_39, /*hidden argument*/NULL);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_41;
		L_41 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(L_40, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B(L_41, 2, /*hidden argument*/NULL);
	}

IL_0172:
	{
		// }
		return;
	}
}
// System.Void Player::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerEnter2D_mAF357F7244427CB9EADB81B5A6C4F0AF481641D0 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3857B7441BD50E0764FE14FC90E670838E34E30A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B8315E0582A311629B7BB8332DC5B78A771470C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral719DC4C792BEE02C4C7BAB1D974D09000F87BB1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral937055BB7C257894131D85407D3C2EE0BAEA540E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB465B56BFB60F8E0F41685A37F3D8288034FBE25);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collider.gameObject.name == "Roof" || collider.gameObject.name == "WallLeft" || collider.gameObject.name == "WallRight")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collider0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral719DC4C792BEE02C4C7BAB1D974D09000F87BB1B, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0045;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___collider0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteral3857B7441BD50E0764FE14FC90E670838E34E30A, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0045;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_8 = ___collider0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, _stringLiteral937055BB7C257894131D85407D3C2EE0BAEA540E, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0065;
		}
	}

IL_0045:
	{
		// state = State.Dead;
		__this->set_state_10(2);
		// if (OnDied != null) OnDied(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_12 = __this->get_OnDied_6();
		if (!L_12)
		{
			goto IL_0065;
		}
	}
	{
		// if (OnDied != null) OnDied(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_13 = __this->get_OnDied_6();
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_14 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_13, __this, L_14, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// if (collider.gameObject.name == "pfVirus(Clone)")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_15 = ___collider0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_15, /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_16, /*hidden argument*/NULL);
		bool L_18;
		L_18 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_17, _stringLiteralB465B56BFB60F8E0F41685A37F3D8288034FBE25, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00a1;
		}
	}
	{
		// if (OnVirusContact != null) OnVirusContact(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_19 = __this->get_OnVirusContact_8();
		if (!L_19)
		{
			goto IL_0095;
		}
	}
	{
		// if (OnVirusContact != null) OnVirusContact(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_20 = __this->get_OnVirusContact_8();
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_21 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_20, __this, L_21, /*hidden argument*/NULL);
	}

IL_0095:
	{
		// collider.gameObject.SetActive(false);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_22 = ___collider0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_22, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_23, (bool)0, /*hidden argument*/NULL);
	}

IL_00a1:
	{
		// if (collider.gameObject.name == "pfVax(Clone)")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_24 = ___collider0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_24, /*hidden argument*/NULL);
		String_t* L_26;
		L_26 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_25, /*hidden argument*/NULL);
		bool L_27;
		L_27 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_26, _stringLiteral6B8315E0582A311629B7BB8332DC5B78A771470C, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00dd;
		}
	}
	{
		// if (OnVaxContact != null) OnVaxContact(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_28 = __this->get_OnVaxContact_9();
		if (!L_28)
		{
			goto IL_00d1;
		}
	}
	{
		// if (OnVaxContact != null) OnVaxContact(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_29 = __this->get_OnVaxContact_9();
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_30 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_29, __this, L_30, /*hidden argument*/NULL);
	}

IL_00d1:
	{
		// collider.gameObject.SetActive(false);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_31 = ___collider0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_31, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_32, (bool)0, /*hidden argument*/NULL);
	}

IL_00dd:
	{
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 3.0f;
		__this->set_speed_4((3.0f));
		// public float jump = 50.0f;
		__this->set_jump_5((50.0f));
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
// System.Void QuizCorrect::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizCorrect_Awake_m10B3922EB23C7080870DD8AA98A93359E1DBFC94 (QuizCorrect_tF43E788CB4CC493850F3CD151ED838959A75C879 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59CABCB9E7941A7EEBB3AFAA4E50FB4BF8C816E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8B78A22916C49F2EF0D72EA40139498F3D7A240);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreText = transform.Find("scoreText").GetComponent<Text>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_0, _stringLiteral59CABCB9E7941A7EEBB3AFAA4E50FB4BF8C816E7, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2;
		L_2 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_1, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_scoreText_4(L_2);
		// quizAnswerText = transform.Find("quizAnswerText").GetComponent<Text>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_3, _stringLiteralF8B78A22916C49F2EF0D72EA40139498F3D7A240, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5;
		L_5 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_4, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_quizAnswerText_5(L_5);
		// }
		return;
	}
}
// System.Void QuizCorrect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizCorrect_Start_m42774805C552E5564CC0877D43441D9117FF40DA (QuizCorrect_tF43E788CB4CC493850F3CD151ED838959A75C879 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuizCorrect_QuizWindow_OnCorrect_m4B4C9D493D189B474D7AE7B63951F5DAE19341A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Hide();
		QuizCorrect_Hide_mE54193431A3BAF7787D8B5285CBB08A4955AC52B(__this, /*hidden argument*/NULL);
		// QuizWindow.GetInstance().OnCorrect += QuizWindow_OnCorrect;
		QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * L_0;
		L_0 = QuizWindow_GetInstance_m48A11CA7407695FCDA79707757AB037802A66D57_inline(/*hidden argument*/NULL);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_1, __this, (intptr_t)((intptr_t)QuizCorrect_QuizWindow_OnCorrect_m4B4C9D493D189B474D7AE7B63951F5DAE19341A9_RuntimeMethod_var), /*hidden argument*/NULL);
		QuizWindow_add_OnCorrect_m76352004F669A69692478E6BD13E3B754462E602(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QuizCorrect::QuizWindow_OnCorrect(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizCorrect_QuizWindow_OnCorrect_m4B4C9D493D189B474D7AE7B63951F5DAE19341A9 (QuizCorrect_tF43E788CB4CC493850F3CD151ED838959A75C879 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3508B7E87DFB62F0AE74252DB0E3BA819109C5DB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// scoreText.text = "Score: " + Level.GetInstance().GetScore().ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_scoreText_4();
		Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * L_1;
		L_1 = Level_GetInstance_m82F4BF9EE650FFA520A93635D8C21869568E3289_inline(/*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Level_GetScore_m4F7BFA6D497E1EE72B97512AC861950D52CFD7B9(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_3, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// quizAnswerText.text = "Correct Answer: " + QuizWindow.GetInstance().getAnswer();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_quizAnswerText_5();
		QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * L_6;
		L_6 = QuizWindow_GetInstance_m48A11CA7407695FCDA79707757AB037802A66D57_inline(/*hidden argument*/NULL);
		String_t* L_7;
		L_7 = QuizWindow_getAnswer_m25C9A660189483998D16B7B4D4479E897600DDBC_inline(L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3508B7E87DFB62F0AE74252DB0E3BA819109C5DB, L_7, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_8);
		// Show();
		QuizCorrect_Show_m63A0E172B995406F3EBFF10F41F2F73CA6A901C8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QuizCorrect::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizCorrect_Hide_mE54193431A3BAF7787D8B5285CBB08A4955AC52B (QuizCorrect_tF43E788CB4CC493850F3CD151ED838959A75C879 * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QuizCorrect::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizCorrect_Show_m63A0E172B995406F3EBFF10F41F2F73CA6A901C8 (QuizCorrect_tF43E788CB4CC493850F3CD151ED838959A75C879 * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QuizCorrect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizCorrect__ctor_mC3AD49A86B103F9AB6BBD433487C2576EEB3E039 (QuizCorrect_tF43E788CB4CC493850F3CD151ED838959A75C879 * __this, const RuntimeMethod* method)
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
// System.Void QuizIncorrect::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizIncorrect_Awake_m0F0371F1DD4008A0B393F4C0311674191A4F885C (QuizIncorrect_t1421A3C817D236930786AEFBDE43C66AA881056E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59CABCB9E7941A7EEBB3AFAA4E50FB4BF8C816E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8B78A22916C49F2EF0D72EA40139498F3D7A240);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreText = transform.Find("scoreText").GetComponent<Text>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_0, _stringLiteral59CABCB9E7941A7EEBB3AFAA4E50FB4BF8C816E7, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2;
		L_2 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_1, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_scoreText_4(L_2);
		// quizAnswerText = transform.Find("quizAnswerText").GetComponent<Text>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_3, _stringLiteralF8B78A22916C49F2EF0D72EA40139498F3D7A240, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5;
		L_5 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_4, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_quizAnswerText_5(L_5);
		// }
		return;
	}
}
// System.Void QuizIncorrect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizIncorrect_Start_m4B81C8B2DA47966DFD09C94C4942A0F4EA17D3BE (QuizIncorrect_t1421A3C817D236930786AEFBDE43C66AA881056E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuizIncorrect_QuizWindow_OnIncorrect_mC86666853D82D13AB311B73551B6E6AF8C9921A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Hide();
		QuizIncorrect_Hide_mB4DCB4C195BFDD0A8C10D7AB4D5F934ED7F506EC(__this, /*hidden argument*/NULL);
		// QuizWindow.GetInstance().OnIncorrect += QuizWindow_OnIncorrect;
		QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * L_0;
		L_0 = QuizWindow_GetInstance_m48A11CA7407695FCDA79707757AB037802A66D57_inline(/*hidden argument*/NULL);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_1, __this, (intptr_t)((intptr_t)QuizIncorrect_QuizWindow_OnIncorrect_mC86666853D82D13AB311B73551B6E6AF8C9921A8_RuntimeMethod_var), /*hidden argument*/NULL);
		QuizWindow_add_OnIncorrect_m3A2A9FE1109EABCF10D4520C8C1B6C7E957C81E4(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QuizIncorrect::QuizWindow_OnIncorrect(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizIncorrect_QuizWindow_OnIncorrect_mC86666853D82D13AB311B73551B6E6AF8C9921A8 (QuizIncorrect_t1421A3C817D236930786AEFBDE43C66AA881056E * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3508B7E87DFB62F0AE74252DB0E3BA819109C5DB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// scoreText.text = "Score: " + Level.GetInstance().GetScore().ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_scoreText_4();
		Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * L_1;
		L_1 = Level_GetInstance_m82F4BF9EE650FFA520A93635D8C21869568E3289_inline(/*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Level_GetScore_m4F7BFA6D497E1EE72B97512AC861950D52CFD7B9(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_3, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// quizAnswerText.text = "Correct Answer: " + QuizWindow.GetInstance().getAnswer();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_quizAnswerText_5();
		QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * L_6;
		L_6 = QuizWindow_GetInstance_m48A11CA7407695FCDA79707757AB037802A66D57_inline(/*hidden argument*/NULL);
		String_t* L_7;
		L_7 = QuizWindow_getAnswer_m25C9A660189483998D16B7B4D4479E897600DDBC_inline(L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3508B7E87DFB62F0AE74252DB0E3BA819109C5DB, L_7, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_8);
		// Show();
		QuizIncorrect_Show_mC813B08B2B7C0AE5BDAA36C9A1D9CA3BBE705AE2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QuizIncorrect::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizIncorrect_Hide_mB4DCB4C195BFDD0A8C10D7AB4D5F934ED7F506EC (QuizIncorrect_t1421A3C817D236930786AEFBDE43C66AA881056E * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QuizIncorrect::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizIncorrect_Show_mC813B08B2B7C0AE5BDAA36C9A1D9CA3BBE705AE2 (QuizIncorrect_t1421A3C817D236930786AEFBDE43C66AA881056E * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QuizIncorrect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizIncorrect__ctor_m1BD6FEA156E989FFBA6B1B16EA85C1F29DBA7DA7 (QuizIncorrect_t1421A3C817D236930786AEFBDE43C66AA881056E * __this, const RuntimeMethod* method)
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
// System.Void QuizWindow::add_OnCorrect(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_add_OnCorrect_m76352004F669A69692478E6BD13E3B754462E602 (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_OnCorrect_16();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_OnCorrect_16();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void QuizWindow::remove_OnCorrect(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_remove_OnCorrect_mAB394EA7BF357A83769F46BD40784584DBA38439 (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_OnCorrect_16();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_OnCorrect_16();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void QuizWindow::add_OnIncorrect(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_add_OnIncorrect_m3A2A9FE1109EABCF10D4520C8C1B6C7E957C81E4 (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_OnIncorrect_17();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_OnIncorrect_17();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void QuizWindow::remove_OnIncorrect(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_remove_OnIncorrect_m3ED80DEC3850A76E02D8F05860A4DF9060E68531 (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_OnIncorrect_17();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_OnIncorrect_17();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void QuizWindow::add_OnGameOver(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_add_OnGameOver_m62B05F4A0E26EE73FFB2B162E3A54BC90CFCA2B3 (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_OnGameOver_18();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_OnGameOver_18();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void QuizWindow::remove_OnGameOver(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_remove_OnGameOver_m91938D032579D8C75D07F7341F780A73598794FB (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_2 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_OnGameOver_18();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var));
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_5 = __this->get_address_of_OnGameOver_18();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_2;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// QuizWindow QuizWindow::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * QuizWindow_GetInstance_m48A11CA7407695FCDA79707757AB037802A66D57 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * L_0 = ((QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83_StaticFields*)il2cpp_codegen_static_fields_for(QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83_il2cpp_TypeInfo_var))->get_instance_20();
		return L_0;
	}
}
// System.Void QuizWindow::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_Awake_mE7A7EF928CC7DC955B37045A3FEC70C852ACAC69 (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59CABCB9E7941A7EEBB3AFAA4E50FB4BF8C816E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83_StaticFields*)il2cpp_codegen_static_fields_for(QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83_il2cpp_TypeInfo_var))->set_instance_20(__this);
		// state = State.TakingQuiz;
		__this->set_state_19(0);
		// scoreText = transform.Find("scoreText").GetComponent<Text>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_0, _stringLiteral59CABCB9E7941A7EEBB3AFAA4E50FB4BF8C816E7, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2;
		L_2 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_1, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_scoreText_4(L_2);
		// }
		return;
	}
}
// System.Void QuizWindow::QuizQuestion(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_QuizQuestion_m43CE066344949C69BFBD3DB34CA0E8CC2F58D783 (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, int32_t ___question0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18F69B17FB5C436E81B2B1B248117FD40D3EB55D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C14F31D21F9D2E7631935FA609E23FDC4C023F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378195167FEB4327A6BE4F2B3555152C47A4AA10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C250151FC920B1AF20213AC4D5E4ECFBC0FEF6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77AB304C525C6F2544A3C79D96FFC85BDFB2DB7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EC99B45D8DF5951409BACB669E0464FC0C8BDFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FA07AC5487C3E8AD8B677D98584B55323B4F0C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8686D0B5C64050EA2F56228A140E2AB25D3D685C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral926805D0262C2F202FC038E8DABF52F82FFCCF2E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97F41D1AF7B0F563DD2107F2C514DB35D0755E67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CC0B6598903209E16BB9DB4D5D0EE4989C2C01B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9A24904570014231D749F59E9F42236243C516A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE28D7DB77A918998881EFF2DA70C88CB3BCE3E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC82A549882D1C4A3840391C8A2AF16F9116DF809);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9F9D36E4743CB422A65D7FBD91655C2D8F09341);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC1E184B89FD6AFDD5155BECBCA4B15BEF35C8FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDB0AA791188ED698594172A4885A29E682938C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0A9568E6B1ED6F60D81A512B77806C25BDA3532);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD58B1AD0AAA970EE00253A4A8D25136F5D224EEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD96EBE25F31CFACED60B7E687F3DF5761966518);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFC4172B6D5B9AB05FC9DE352CB9747A4B928CEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5B18889A153297502509074E23C0A5B9845CB0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6AEB4B4AEED64C30C8DFC6A8F3259F66B64EC22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF45FFA3E3A0F8F8B4B08F185B413331C4EDB9F1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC31849999CD0EF6FDBD6E0C92E0094DD27A0D03);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(question == 0)
		int32_t L_0 = ___question0;
		if (L_0)
		{
			goto IL_005b;
		}
	}
	{
		// Question.text = "What is the best form of face protection for COVID-19?";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_Question_9();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral926805D0262C2F202FC038E8DABF52F82FFCCF2E);
		// Ans1Text.text = "Cloth Masks";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_Ans1Text_5();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteral8686D0B5C64050EA2F56228A140E2AB25D3D685C);
		// Ans2Text.text = "Procedural Masks";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_Ans2Text_6();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteralCDB0AA791188ED698594172A4885A29E682938C0);
		// Ans3Text.text = "Face Shield";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_Ans3Text_7();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteralFC31849999CD0EF6FDBD6E0C92E0094DD27A0D03);
		// Ans4Text.text = "Surgical Mask (N95)";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_Ans4Text_8();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral378195167FEB4327A6BE4F2B3555152C47A4AA10);
		// SetQuizAns(4);
		QuizWindow_SetQuizAns_m330A9FBFDE73FCB6DEF566E45AEADE512518DAE7(__this, 4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_005b:
	{
		// else if(question == 1)
		int32_t L_6 = ___question0;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_00b7;
		}
	}
	{
		// Question.text = "Which blood type is the most susceptible to COVID-19?";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_Question_9();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteral2C14F31D21F9D2E7631935FA609E23FDC4C023F4);
		// Ans1Text.text = "Type A";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_Ans1Text_5();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, _stringLiteralDFC4172B6D5B9AB05FC9DE352CB9747A4B928CEE);
		// Ans2Text.text = "Type B";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_Ans2Text_6();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, _stringLiteralC9F9D36E4743CB422A65D7FBD91655C2D8F09341);
		// Ans3Text.text = "Type AB";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_Ans3Text_7();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, _stringLiteralE5B18889A153297502509074E23C0A5B9845CB0A);
		// Ans4Text.text = "Type O";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_Ans4Text_8();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, _stringLiteralF45FFA3E3A0F8F8B4B08F185B413331C4EDB9F1C);
		// SetQuizAns(1);
		QuizWindow_SetQuizAns_m330A9FBFDE73FCB6DEF566E45AEADE512518DAE7(__this, 1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00b7:
	{
		// else if (question == 2)
		int32_t L_12 = ___question0;
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			goto IL_0113;
		}
	}
	{
		// Question.text = "What does the �19� in �COVID-19� refer to?";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = __this->get_Question_9();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, _stringLiteralDD96EBE25F31CFACED60B7E687F3DF5761966518);
		// Ans1Text.text = "There are 19 variants of the coronavirus.";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_14 = __this->get_Ans1Text_5();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, _stringLiteralCC1E184B89FD6AFDD5155BECBCA4B15BEF35C8FF);
		// Ans2Text.text = "There are 19 symptoms of coronavirus disease.";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = __this->get_Ans2Text_6();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, _stringLiteralD58B1AD0AAA970EE00253A4A8D25136F5D224EEF);
		// Ans3Text.text = "This is the 19th coronavirus pandemic.";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16 = __this->get_Ans3Text_7();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, _stringLiteral4C250151FC920B1AF20213AC4D5E4ECFBC0FEF6C);
		// Ans4Text.text = "Coronavirus & the disease it causes were identified in 2019.";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17 = __this->get_Ans4Text_8();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, _stringLiteralD0A9568E6B1ED6F60D81A512B77806C25BDA3532);
		// SetQuizAns(4);
		QuizWindow_SetQuizAns_m330A9FBFDE73FCB6DEF566E45AEADE512518DAE7(__this, 4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0113:
	{
		// else if (question == 3)
		int32_t L_18 = ___question0;
		if ((!(((uint32_t)L_18) == ((uint32_t)3))))
		{
			goto IL_016f;
		}
	}
	{
		// Question.text = "Effective hand sanitizer contains at least this percentage of alcohol";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = __this->get_Question_9();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, _stringLiteral7FA07AC5487C3E8AD8B677D98584B55323B4F0C3);
		// Ans1Text.text = "30%";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_20 = __this->get_Ans1Text_5();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, _stringLiteralE6AEB4B4AEED64C30C8DFC6A8F3259F66B64EC22);
		// Ans2Text.text = "45%";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = __this->get_Ans2Text_6();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, _stringLiteral7EC99B45D8DF5951409BACB669E0464FC0C8BDFD);
		// Ans3Text.text = "60%";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_22 = __this->get_Ans3Text_7();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, _stringLiteral97F41D1AF7B0F563DD2107F2C514DB35D0755E67);
		// Ans4Text.text = "80%";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = __this->get_Ans4Text_8();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, _stringLiteral18F69B17FB5C436E81B2B1B248117FD40D3EB55D);
		// SetQuizAns(3);
		QuizWindow_SetQuizAns_m330A9FBFDE73FCB6DEF566E45AEADE512518DAE7(__this, 3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_016f:
	{
		// else if (question == 4)
		int32_t L_24 = ___question0;
		if ((!(((uint32_t)L_24) == ((uint32_t)4))))
		{
			goto IL_01ca;
		}
	}
	{
		// Question.text = "Which of these is not a common COVID - 19 symptom?";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_25 = __this->get_Question_9();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, _stringLiteralA9A24904570014231D749F59E9F42236243C516A);
		// Ans1Text.text = "Blurred vision";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_26 = __this->get_Ans1Text_5();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, _stringLiteralBE28D7DB77A918998881EFF2DA70C88CB3BCE3E5);
		// Ans2Text.text = "A cough";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_27 = __this->get_Ans2Text_6();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, _stringLiteral77AB304C525C6F2544A3C79D96FFC85BDFB2DB7B);
		// Ans3Text.text = "Unusual fatigue";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_28 = __this->get_Ans3Text_7();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_28, _stringLiteralC82A549882D1C4A3840391C8A2AF16F9116DF809);
		// Ans4Text.text = "Fever";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_29 = __this->get_Ans4Text_8();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, _stringLiteral9CC0B6598903209E16BB9DB4D5D0EE4989C2C01B);
		// SetQuizAns(1);
		QuizWindow_SetQuizAns_m330A9FBFDE73FCB6DEF566E45AEADE512518DAE7(__this, 1, /*hidden argument*/NULL);
	}

IL_01ca:
	{
		// }
		return;
	}
}
// System.Void QuizWindow::SetQuizAns(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_SetQuizAns_m330A9FBFDE73FCB6DEF566E45AEADE512518DAE7 (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, int32_t ___correctAns0, const RuntimeMethod* method)
{
	{
		// Ans1Correct = false;
		__this->set_Ans1Correct_12((bool)0);
		// Ans2Correct = false;
		__this->set_Ans2Correct_13((bool)0);
		// Ans3Correct = false;
		__this->set_Ans3Correct_14((bool)0);
		// Ans4Correct = false;
		__this->set_Ans4Correct_15((bool)0);
		// if(correctAns == 1)
		int32_t L_0 = ___correctAns0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0039;
		}
	}
	{
		// Ans1Correct = true;
		__this->set_Ans1Correct_12((bool)1);
		// ANSWER = Ans1Text.text;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_Ans1Text_5();
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_1);
		__this->set_ANSWER_11(L_2);
		// }
		return;
	}

IL_0039:
	{
		// else if(correctAns == 2)
		int32_t L_3 = ___correctAns0;
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0056;
		}
	}
	{
		// Ans2Correct = true;
		__this->set_Ans2Correct_13((bool)1);
		// ANSWER = Ans2Text.text;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_Ans2Text_6();
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_4);
		__this->set_ANSWER_11(L_5);
		// }
		return;
	}

IL_0056:
	{
		// else if(correctAns == 3)
		int32_t L_6 = ___correctAns0;
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_0073;
		}
	}
	{
		// Ans3Correct = true;
		__this->set_Ans3Correct_14((bool)1);
		// ANSWER = Ans3Text.text;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_Ans3Text_7();
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_7);
		__this->set_ANSWER_11(L_8);
		// }
		return;
	}

IL_0073:
	{
		// else if (correctAns == 4)
		int32_t L_9 = ___correctAns0;
		if ((!(((uint32_t)L_9) == ((uint32_t)4))))
		{
			goto IL_008f;
		}
	}
	{
		// Ans4Correct = true;
		__this->set_Ans4Correct_15((bool)1);
		// ANSWER = Ans4Text.text;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_Ans4Text_8();
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_10);
		__this->set_ANSWER_11(L_11);
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.String QuizWindow::getAnswer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QuizWindow_getAnswer_m25C9A660189483998D16B7B4D4479E897600DDBC (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, const RuntimeMethod* method)
{
	{
		// return ANSWER;
		String_t* L_0 = __this->get_ANSWER_11();
		return L_0;
	}
}
// System.Void QuizWindow::ButtonQuizAns1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_ButtonQuizAns1_m1F878F520AEE518247E1EBC31AF70C4965CF8461 (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Ans1Correct)
		bool L_0 = __this->get_Ans1Correct_12();
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// state = State.CorrectAnswer;
		__this->set_state_19(1);
		// if (OnCorrect != null) OnCorrect(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = __this->get_OnCorrect_16();
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		// if (OnCorrect != null) OnCorrect(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = __this->get_OnCorrect_16();
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_3 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_2, __this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0029:
	{
		// state = State.IncorrectAnswer;
		__this->set_state_19(2);
		// if (OnIncorrect != null) OnIncorrect(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_4 = __this->get_OnIncorrect_17();
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		// if (OnIncorrect != null) OnIncorrect(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_5 = __this->get_OnIncorrect_17();
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_6 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_5, __this, L_6, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void QuizWindow::ButtonQuizAns2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_ButtonQuizAns2_m06EABD3DDDA0CE475E5AD208B139D123DCE2E0B9 (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Ans2Correct)
		bool L_0 = __this->get_Ans2Correct_13();
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// state = State.CorrectAnswer;
		__this->set_state_19(1);
		// if (OnCorrect != null) OnCorrect(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = __this->get_OnCorrect_16();
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		// if (OnCorrect != null) OnCorrect(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = __this->get_OnCorrect_16();
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_3 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_2, __this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0029:
	{
		// state = State.IncorrectAnswer;
		__this->set_state_19(2);
		// if (OnIncorrect != null) OnIncorrect(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_4 = __this->get_OnIncorrect_17();
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		// if (OnIncorrect != null) OnIncorrect(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_5 = __this->get_OnIncorrect_17();
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_6 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_5, __this, L_6, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void QuizWindow::ButtonQuizAns3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_ButtonQuizAns3_mBCE1D47538A18BE2876DCD6D7E166E53CA642388 (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Ans3Correct)
		bool L_0 = __this->get_Ans3Correct_14();
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// state = State.CorrectAnswer;
		__this->set_state_19(1);
		// if (OnCorrect != null) OnCorrect(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = __this->get_OnCorrect_16();
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		// if (OnCorrect != null) OnCorrect(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = __this->get_OnCorrect_16();
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_3 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_2, __this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0029:
	{
		// state = State.IncorrectAnswer;
		__this->set_state_19(2);
		// if (OnIncorrect != null) OnIncorrect(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_4 = __this->get_OnIncorrect_17();
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		// if (OnIncorrect != null) OnIncorrect(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_5 = __this->get_OnIncorrect_17();
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_6 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_5, __this, L_6, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void QuizWindow::ButtonQuizAns4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_ButtonQuizAns4_m6029970F7F555846762E7B097AA69E845771C342 (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Ans4Correct)
		bool L_0 = __this->get_Ans4Correct_15();
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// state = State.CorrectAnswer;
		__this->set_state_19(1);
		// if (OnCorrect != null) OnCorrect(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = __this->get_OnCorrect_16();
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		// if (OnCorrect != null) OnCorrect(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = __this->get_OnCorrect_16();
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_3 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_2, __this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0029:
	{
		// state = State.IncorrectAnswer;
		__this->set_state_19(2);
		// if (OnIncorrect != null) OnIncorrect(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_4 = __this->get_OnIncorrect_17();
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		// if (OnIncorrect != null) OnIncorrect(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_5 = __this->get_OnIncorrect_17();
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_6 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_5, __this, L_6, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void QuizWindow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_Start_m4F47C222EF0A173FDA378FA7D5A64706CF550E24 (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuizWindow_Player_OnDied_mA40E619026F0C9A9BBC75A970CDE4A3CB0F4EE14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Hide();
		QuizWindow_Hide_mD1062BA7AAA300B8FDA25ADE62AB7E8B30ED3DF5(__this, /*hidden argument*/NULL);
		// Player.GetInstance().OnDied += Player_OnDied;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_0;
		L_0 = Player_GetInstance_mBB6CF3140AB1B9C1A486222A593C0D54328EDEAD_inline(/*hidden argument*/NULL);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_1, __this, (intptr_t)((intptr_t)QuizWindow_Player_OnDied_mA40E619026F0C9A9BBC75A970CDE4A3CB0F4EE14_RuntimeMethod_var), /*hidden argument*/NULL);
		Player_add_OnDied_m985B6B6C1F4C05111BEB636640BCD789EA8DDA94(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QuizWindow::Player_OnDied(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_Player_OnDied_mA40E619026F0C9A9BBC75A970CDE4A3CB0F4EE14 (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A0DA487F4A195CE9A357D38CD41768F5EA8FC6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9994C9B4F7A06ADE00231A27A560CDBC3E149EA5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (PlayerPrefs.GetInt("quizTaken") == 0)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9994C9B4F7A06ADE00231A27A560CDBC3E149EA5, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_005d;
		}
	}
	{
		// System.Random rnd = new System.Random();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_1 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_1, /*hidden argument*/NULL);
		// int randQuestion = rnd.Next(5);
		int32_t L_2;
		L_2 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32) */, L_1, 5);
		V_0 = L_2;
		// QuizHospitalText.text = "You passed out and woke up really sick in the hospital!";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_QuizHospitalText_10();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral3A0DA487F4A195CE9A357D38CD41768F5EA8FC6D);
		// QuizQuestion(randQuestion);
		int32_t L_4 = V_0;
		QuizWindow_QuizQuestion_m43CE066344949C69BFBD3DB34CA0E8CC2F58D783(__this, L_4, /*hidden argument*/NULL);
		// scoreText.text = "Score: " + Level.GetInstance().GetScore().ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_scoreText_4();
		Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * L_6;
		L_6 = Level_GetInstance_m82F4BF9EE650FFA520A93635D8C21869568E3289_inline(/*hidden argument*/NULL);
		int32_t L_7;
		L_7 = Level_GetScore_m4F7BFA6D497E1EE72B97512AC861950D52CFD7B9(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		String_t* L_8;
		L_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_8, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_9);
		// Show();
		QuizWindow_Show_m5D919FC3AF0877A069FFA893FA15F199DB05B42C(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_005d:
	{
		// state = State.IncorrectAnswer;
		__this->set_state_19(2);
		// if (OnGameOver != null) OnGameOver(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = __this->get_OnGameOver_18();
		if (!L_10)
		{
			goto IL_007d;
		}
	}
	{
		// if (OnGameOver != null) OnGameOver(this, EventArgs.Empty);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_11 = __this->get_OnGameOver_18();
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_12 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_11, __this, L_12, /*hidden argument*/NULL);
	}

IL_007d:
	{
		// Hide();
		QuizWindow_Hide_mD1062BA7AAA300B8FDA25ADE62AB7E8B30ED3DF5(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QuizWindow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_Update_m4604E1F9B7D6241896877AA037CD427BAD1E0ED7 (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// switch (state)
		int32_t L_0 = __this->get_state_19();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_001a;
			}
			case 2:
			{
				goto IL_0021;
			}
		}
	}
	{
		return;
	}

IL_001a:
	{
		// Hide();
		QuizWindow_Hide_mD1062BA7AAA300B8FDA25ADE62AB7E8B30ED3DF5(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0021:
	{
		// Hide();
		QuizWindow_Hide_mD1062BA7AAA300B8FDA25ADE62AB7E8B30ED3DF5(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void QuizWindow::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_Hide_mD1062BA7AAA300B8FDA25ADE62AB7E8B30ED3DF5 (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QuizWindow::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow_Show_m5D919FC3AF0877A069FFA893FA15F199DB05B42C (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QuizWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizWindow__ctor_m225C4660AA02244D00AB350EEF37AD185DDE9761 (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, const RuntimeMethod* method)
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
// System.Void ScoreWindow::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreWindow_Awake_mAD4EF9B44B331695E60A9FA184AFFC7FE3DD7065 (ScoreWindow_t0A6F76DD706EE74431B3D9354A4DA58E420D621A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C0BC247C3D8715498B46A5D74050241244A0DB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59CABCB9E7941A7EEBB3AFAA4E50FB4BF8C816E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70DFB3A443EFAAF00DA135342763575F1A90FA54);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// scoreText = transform.Find("scoreText").GetComponent<Text>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_0, _stringLiteral59CABCB9E7941A7EEBB3AFAA4E50FB4BF8C816E7, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2;
		L_2 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_1, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_scoreText_4(L_2);
		// highscoreText = transform.Find("highscoreText").GetComponent<Text>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_3, _stringLiteral4C0BC247C3D8715498B46A5D74050241244A0DB8, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5;
		L_5 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_4, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_highscoreText_5(L_5);
		// highscoreText.text = "High Score: " + PlayerPrefs.GetInt("highscore").ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_highscoreText_5();
		int32_t L_7;
		L_7 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7, /*hidden argument*/NULL);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral70DFB3A443EFAAF00DA135342763575F1A90FA54, L_8, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
		// }
		return;
	}
}
// System.Void ScoreWindow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreWindow_Update_mDC948AEAFEE264CBF65AE4E1DE2F3FC497D97AB5 (ScoreWindow_t0A6F76DD706EE74431B3D9354A4DA58E420D621A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// scoreText.text = "Score: " + Level.GetInstance().GetScore().ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_scoreText_4();
		Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * L_1;
		L_1 = Level_GetInstance_m82F4BF9EE650FFA520A93635D8C21869568E3289_inline(/*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Level_GetScore_m4F7BFA6D497E1EE72B97512AC861950D52CFD7B9(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_3, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void ScoreWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreWindow__ctor_m14ADEA0F61FA5F03C12F57E0CD8D55FF9A7BDDAC (ScoreWindow_t0A6F76DD706EE74431B3D9354A4DA58E420D621A * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Level/Platform::.ctor(UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_m1699CCAFD9979E7D74D6A51DEA2FE0C719B1ED11 (Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___platformTransform0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___virusTransform1, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___virusOnPfTransform2, const RuntimeMethod* method)
{
	{
		// public Platform(Transform platformTransform, Transform virusTransform, Transform virusOnPfTransform)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.platformTransform = platformTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___platformTransform0;
		__this->set_platformTransform_0(L_0);
		// this.virusTransform = virusTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___virusTransform1;
		__this->set_virusTransform_1(L_1);
		// this.virusOnPfTransform = virusOnPfTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___virusOnPfTransform2;
		__this->set_virusOnPfTransform_2(L_2);
		// }
		return;
	}
}
// System.Void Level/Platform::Move(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Move_mD37AF1265591A30DA5190FE4928DE3AE5E10C3AA (Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * __this, float ___PLATFORM_MOVE_SPEED0, const RuntimeMethod* method)
{
	{
		// platformTransform.position += new Vector3(0, 1, 0) * PLATFORM_MOVE_SPEED * Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_platformTransform_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		float L_4 = ___PLATFORM_MOVE_SPEED0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_7, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_8, /*hidden argument*/NULL);
		// virusTransform.position += new Vector3(0, 1, 0) * PLATFORM_MOVE_SPEED * Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = __this->get_virusTransform_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = L_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		float L_13 = ___PLATFORM_MOVE_SPEED0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_12, L_13, /*hidden argument*/NULL);
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_14, L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_11, L_16, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_17, /*hidden argument*/NULL);
		// virusOnPfTransform.position += new Vector3(0, 1, 0) * PLATFORM_MOVE_SPEED * Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = __this->get_virusOnPfTransform_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = L_18;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		float L_22 = ___PLATFORM_MOVE_SPEED0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_21, L_22, /*hidden argument*/NULL);
		float L_24;
		L_24 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_23, L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_20, L_25, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_19, L_26, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single Level/Platform::GetYPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Platform_GetYPosition_m6313C498E639C834501D73B95DAFA534DF10487E (Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * __this, const RuntimeMethod* method)
{
	{
		// return platformTransform.position.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_platformTransform_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		return L_2;
	}
}
// System.Void Level/Platform::DestroySelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_DestroySelf_m0DD1C75F58E19E869FB0677883A9316A44E3E3B6 (Platform_t89F08CF75CA1619C11B7C226B86AC6EE908926FE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(platformTransform.gameObject);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_platformTransform_0();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_1, /*hidden argument*/NULL);
		// Destroy(virusTransform.gameObject);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_virusTransform_1();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
		// Destroy(virusOnPfTransform.gameObject);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_virusOnPfTransform_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * Player_GetInstance_mBB6CF3140AB1B9C1A486222A593C0D54328EDEAD_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_0 = ((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->get_instance_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * QuizWindow_GetInstance_m48A11CA7407695FCDA79707757AB037802A66D57_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * L_0 = ((QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83_StaticFields*)il2cpp_codegen_static_fields_for(QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83_il2cpp_TypeInfo_var))->get_instance_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * Level_GetInstance_m82F4BF9EE650FFA520A93635D8C21869568E3289_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * L_0 = ((Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_StaticFields*)il2cpp_codegen_static_fields_for(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_il2cpp_TypeInfo_var))->get_instance_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * GameAssets_GetInstance_mD3A14244E7CA075B8B8FF32FDEAF7E26CB2112E6_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_0 = ((GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_StaticFields*)il2cpp_codegen_static_fields_for(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var))->get_instance_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* QuizWindow_getAnswer_m25C9A660189483998D16B7B4D4479E897600DDBC_inline (QuizWindow_t132C8CA880794DCF79764AD00AE570974138FD83 * __this, const RuntimeMethod* method)
{
	{
		// return ANSWER;
		String_t* L_0 = __this->get_ANSWER_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
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

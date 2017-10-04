#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_Ball3972794301.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_Paddle763152128.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623.h"
#include "AssemblyU2DCSharp_Brick1619971827.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_LevelManager3355282079.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UnityEngine_Sprite309593783.h"
#include "UnityEngine_UnityEngine_SpriteRenderer1209076198.h"
#include "AssemblyU2DCSharp_Emoji1949083194.h"
#include "AssemblyU2DCSharp_LoseCollider1155462885.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"
#include "AssemblyU2DCSharp_MusicPlayer3223126890.h"

// Ball
struct Ball_t3972794301;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// Paddle
struct Paddle_t763152128;
// System.Object
struct Il2CppObject;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// Brick
struct Brick_t1619971827;
// System.String
struct String_t;
// LevelManager
struct LevelManager_t3355282079;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Object
struct Object_t1021602117;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// Emoji
struct Emoji_t1949083194;
// LoseCollider
struct LoseCollider_t1155462885;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// MusicPlayer
struct MusicPlayer_t3223126890;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisPaddle_t763152128_m1168204893_MethodInfo_var;
extern const uint32_t Ball_Start_m2511773116_MetadataUsageId;
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var;
extern const uint32_t Ball_Update_m2036524005_MetadataUsageId;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var;
extern const uint32_t Ball_OnCollisionExit2D_m1193265372_MetadataUsageId;
extern Il2CppClass* Brick_t1619971827_il2cpp_TypeInfo_var;
extern const uint32_t Brick_Awake_m2395067043_MetadataUsageId;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisBall_t3972794301_m1168048236_MethodInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisLevelManager_t3355282079_m1351033480_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2154845717;
extern const uint32_t Brick_Start_m3679901112_MetadataUsageId;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral451383847;
extern const uint32_t Brick_handleHits_m2601780054_MetadataUsageId;
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570_MethodInfo_var;
extern const uint32_t Brick_LoadSprites_m1048576086_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral2677085426;
extern const uint32_t Emoji_Start_m1772200107_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral339800536;
extern const uint32_t LevelManager_BrickDestroyed_m737389094_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral1414246213;
extern const uint32_t LoseCollider_OnTriggerEnter2D_m554453592_MetadataUsageId;
extern const uint32_t LoseCollider_Start_m1808664848_MetadataUsageId;
extern Il2CppClass* MusicPlayer_t3223126890_il2cpp_TypeInfo_var;
extern const uint32_t MusicPlayer_Awake_m2670478726_MetadataUsageId;
extern const uint32_t Paddle_Start_m1212078847_MetadataUsageId;
extern const uint32_t Paddle_OnCollisionExit2D_m939839217_MetadataUsageId;
extern const uint32_t Paddle_MoveWithMouse_m2465844237_MetadataUsageId;
extern const uint32_t Paddle_AutoPlay_m1445803082_MetadataUsageId;

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Sprite_t309593783 * m_Items[1];

public:
	inline Sprite_t309593783 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t309593783 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t309593783 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Sprite_t309593783 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t309593783 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t309593783 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C"  Il2CppObject * Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Il2CppObject * Object_Instantiate_TisIl2CppObject_m3829784634_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Vector3_t2243707580  p1, Quaternion_t4030073918  p2, const MethodInfo* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::FindObjectOfType<Paddle>()
#define Object_FindObjectOfType_TisPaddle_t763152128_m1168204893(__this /* static, unused */, method) ((  Paddle_t763152128 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3275118058 * Component_get_transform_m2697483695 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m1104419803 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Vector3_op_Subtraction_m2407545601 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C"  bool Input_GetMouseButton_m464100923 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, method) ((  Rigidbody2D_t502193897 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3067419446 (Vector2_t2243707579 * __this, float p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_set_velocity_m3592751374 (Rigidbody2D_t502193897 * __this, Vector2_t2243707579  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Vector3_op_Addition_m3146764857 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m2469242620 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C"  float Random_Range_m2884721203 (Il2CppObject * __this /* static, unused */, float p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, method) ((  AudioSource_t1135106623 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C"  Vector2_t2243707579  Rigidbody2D_get_velocity_m3310151195 (Rigidbody2D_t502193897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  Vector2_op_Addition_m1389598521 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  p0, Vector2_t2243707579  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m353744792 (AudioSource_t1135106623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Component::get_tag()
extern "C"  String_t* Component_get_tag_m357168014 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m1790663636 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::FindObjectOfType<Ball>()
#define Object_FindObjectOfType_TisBall_t3972794301_m1168048236(__this /* static, unused */, method) ((  Ball_t3972794301 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Object::FindObjectOfType<LevelManager>()
#define Object_FindObjectOfType_TisLevelManager_t3355282079_m1351033480(__this /* static, unused */, method) ((  LevelManager_t3355282079 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3)
extern "C"  void AudioSource_PlayClipAtPoint_m1513558507 (Il2CppObject * __this /* static, unused */, AudioClip_t1932558630 * p0, Vector3_t2243707580  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Brick::handleHits()
extern "C"  void Brick_handleHits_m2601780054 (Brick_t1619971827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m920475918 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1756533147 * Component_get_gameObject_m3105766835 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3275118058 * GameObject_get_transform_m909382139 (GameObject_t1756533147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t4030073918  Quaternion_get_identity_m1561886418 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1756533147_m3064851704(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1756533147 * (*) (Il2CppObject * /* static, unused */, GameObject_t1756533147 *, Vector3_t2243707580 , Quaternion_t4030073918 , const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3829784634_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m4145850038 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::BrickDestroyed()
extern "C"  void LevelManager_BrickDestroyed_m737389094 (LevelManager_t3355282079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Brick::LoadSprites()
extern "C"  void Brick_LoadSprites_m1048576086 (Brick_t1619971827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m2856731593 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570(__this, method) ((  SpriteRenderer_t1209076198 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
extern "C"  void SpriteRenderer_set_sprite_m617298623 (SpriteRenderer_t1209076198 * __this, Sprite_t309593783 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1619949821 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SceneManagement.SceneManager::get_sceneCount()
extern "C"  int32_t SceneManager_get_sceneCount_m2895074065 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
extern "C"  void SceneManager_LoadScene_m87258056 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Quit()
extern "C"  void Application_Quit_m3885595876 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::ChangeLevel(System.String)
extern "C"  void LevelManager_ChangeLevel_m1890096788 (LevelManager_t3355282079 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m2402264703 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, Object_t1021602117 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m2330762974 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Paddle::MoveWithMouse()
extern "C"  void Paddle_MoveWithMouse_m2465844237 (Paddle_t763152128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Paddle::AutoPlay()
extern "C"  void Paddle_AutoPlay_m1445803082 (Paddle_t763152128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t2243707580  Input_get_mousePosition_m146923508 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m41137238 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Clamp_m2354025655 (Il2CppObject * __this /* static, unused */, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t2243707580  Vector2_op_Implicit_m176791411 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2243707579  Vector2_op_Implicit_m1064335535 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ball::.ctor()
extern "C"  void Ball__ctor_m1073530660 (Ball_t3972794301 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Ball::Start()
extern "C"  void Ball_Start_m2511773116 (Ball_t3972794301 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ball_Start_m2511773116_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Paddle_t763152128 * L_0 = Object_FindObjectOfType_TisPaddle_t763152128_m1168204893(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPaddle_t763152128_m1168204893_MethodInfo_var);
		__this->set_paddle_2(L_0);
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		Paddle_t763152128 * L_3 = __this->get_paddle_2();
		Transform_t3275118058 * L_4 = Component_get_transform_m2697483695(L_3, /*hidden argument*/NULL);
		Vector3_t2243707580  L_5 = Transform_get_position_m1104419803(L_4, /*hidden argument*/NULL);
		Vector3_t2243707580  L_6 = Vector3_op_Subtraction_m2407545601(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		__this->set_paddleToBallVector_3(L_6);
		return;
	}
}
// System.Void Ball::Update()
extern "C"  void Ball_Update_m2036524005 (Ball_t3972794301 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ball_Update_m2036524005_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButton_m464100923(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		bool L_1 = __this->get_hasStarted_4();
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		__this->set_hasStarted_4((bool)1);
		Rigidbody2D_t502193897 * L_2 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		Vector2_t2243707579  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector2__ctor_m3067419446(&L_3, (3.0f), (10.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0037:
	{
		bool L_4 = __this->get_hasStarted_4();
		if (L_4)
		{
			goto IL_0068;
		}
	}
	{
		Transform_t3275118058 * L_5 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Paddle_t763152128 * L_6 = __this->get_paddle_2();
		Transform_t3275118058 * L_7 = Component_get_transform_m2697483695(L_6, /*hidden argument*/NULL);
		Vector3_t2243707580  L_8 = Transform_get_position_m1104419803(L_7, /*hidden argument*/NULL);
		Vector3_t2243707580  L_9 = __this->get_paddleToBallVector_3();
		Vector3_t2243707580  L_10 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_5, L_10, /*hidden argument*/NULL);
	}

IL_0068:
	{
		return;
	}
}
// System.Void Ball::OnCollisionExit2D(UnityEngine.Collision2D)
extern "C"  void Ball_OnCollisionExit2D_m1193265372 (Ball_t3972794301 * __this, Collision2D_t1539500754 * ___Collision0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ball_OnCollisionExit2D_m1193265372_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = Random_Range_m2884721203(NULL /*static, unused*/, (0.0f), (0.2f), /*hidden argument*/NULL);
		float L_1 = Random_Range_m2884721203(NULL /*static, unused*/, (0.0f), (0.2f), /*hidden argument*/NULL);
		Vector2__ctor_m3067419446((&V_0), L_0, L_1, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_2 = Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var);
		__this->set_audio_5(L_2);
		bool L_3 = __this->get_hasStarted_4();
		if (!L_3)
		{
			goto IL_005e;
		}
	}
	{
		Rigidbody2D_t502193897 * L_4 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		Rigidbody2D_t502193897 * L_5 = L_4;
		Vector2_t2243707579  L_6 = Rigidbody2D_get_velocity_m3310151195(L_5, /*hidden argument*/NULL);
		Vector2_t2243707579  L_7 = V_0;
		Vector2_t2243707579  L_8 = Vector2_op_Addition_m1389598521(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_5, L_8, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_9 = __this->get_audio_5();
		AudioSource_Play_m353744792(L_9, /*hidden argument*/NULL);
	}

IL_005e:
	{
		return;
	}
}
// System.Void Brick::.ctor()
extern "C"  void Brick__ctor_m4067638188 (Brick_t1619971827 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Brick::Awake()
extern "C"  void Brick_Awake_m2395067043 (Brick_t1619971827 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Brick_Awake_m2395067043_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Brick_t1619971827_il2cpp_TypeInfo_var);
		((Brick_t1619971827_StaticFields*)Brick_t1619971827_il2cpp_TypeInfo_var->static_fields)->set_breakableCount_3(0);
		return;
	}
}
// System.Void Brick::Start()
extern "C"  void Brick_Start_m3679901112 (Brick_t1619971827 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Brick_Start_m3679901112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_timesHit_6(0);
		String_t* L_0 = Component_get_tag_m357168014(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_0, _stringLiteral2154845717, /*hidden argument*/NULL);
		__this->set_isBreakable_8(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Ball_t3972794301 * L_2 = Object_FindObjectOfType_TisBall_t3972794301_m1168048236(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisBall_t3972794301_m1168048236_MethodInfo_var);
		__this->set_ball_9(L_2);
		bool L_3 = __this->get_isBreakable_8();
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Brick_t1619971827_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Brick_t1619971827_StaticFields*)Brick_t1619971827_il2cpp_TypeInfo_var->static_fields)->get_breakableCount_3();
		((Brick_t1619971827_StaticFields*)Brick_t1619971827_il2cpp_TypeInfo_var->static_fields)->set_breakableCount_3(((int32_t)((int32_t)L_4+(int32_t)1)));
	}

IL_003f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		LevelManager_t3355282079 * L_5 = Object_FindObjectOfType_TisLevelManager_t3355282079_m1351033480(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisLevelManager_t3355282079_m1351033480_MethodInfo_var);
		__this->set_levelManager_7(L_5);
		return;
	}
}
// System.Void Brick::Update()
extern "C"  void Brick_Update_m1019641951 (Brick_t1619971827 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Brick::OnCollisionExit2D(UnityEngine.Collision2D)
extern "C"  void Brick_OnCollisionExit2D_m976673468 (Brick_t1619971827 * __this, Collision2D_t1539500754 * ___collision0, const MethodInfo* method)
{
	{
		AudioClip_t1932558630 * L_0 = __this->get_crack_4();
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m1513558507(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		bool L_3 = __this->get_isBreakable_8();
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		Brick_handleHits_m2601780054(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void Brick::handleHits()
extern "C"  void Brick_handleHits_m2601780054 (Brick_t1619971827 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Brick_handleHits_m2601780054_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Rigidbody2D_t502193897 * V_1 = NULL;
	Vector2_t2243707579  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2243707579  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector2_t2243707579  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector2_t2243707579  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector2_t2243707579  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector2_t2243707579  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector2_t2243707579  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector2_t2243707579  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector2_t2243707579  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Vector2_t2243707579  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Vector2_t2243707579  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Vector2_t2243707579  V_13;
	memset(&V_13, 0, sizeof(V_13));
	Vector2_t2243707579  V_14;
	memset(&V_14, 0, sizeof(V_14));
	Vector2_t2243707579  V_15;
	memset(&V_15, 0, sizeof(V_15));
	{
		SpriteU5BU5D_t3359083662* L_0 = __this->get_hitSprites_2();
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_0)->max_length))))+(int32_t)1));
		int32_t L_1 = __this->get_timesHit_6();
		__this->set_timesHit_6(((int32_t)((int32_t)L_1+(int32_t)1)));
		int32_t L_2 = __this->get_timesHit_6();
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0077;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Brick_t1619971827_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Brick_t1619971827_StaticFields*)Brick_t1619971827_il2cpp_TypeInfo_var->static_fields)->get_breakableCount_3();
		((Brick_t1619971827_StaticFields*)Brick_t1619971827_il2cpp_TypeInfo_var->static_fields)->set_breakableCount_3(((int32_t)((int32_t)L_4-(int32_t)1)));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral451383847, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_5 = __this->get_smoke_5();
		GameObject_t1756533147 * L_6 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_7 = GameObject_get_transform_m909382139(L_6, /*hidden argument*/NULL);
		Vector3_t2243707580  L_8 = Transform_get_position_m1104419803(L_7, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_9 = Quaternion_get_identity_m1561886418(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_5, L_8, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		GameObject_t1756533147 * L_10 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		LevelManager_t3355282079 * L_11 = __this->get_levelManager_7();
		LevelManager_BrickDestroyed_m737389094(L_11, /*hidden argument*/NULL);
		goto IL_007d;
	}

IL_0077:
	{
		Brick_LoadSprites_m1048576086(__this, /*hidden argument*/NULL);
	}

IL_007d:
	{
		Ball_t3972794301 * L_12 = __this->get_ball_9();
		Rigidbody2D_t502193897 * L_13 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(L_12, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		V_1 = L_13;
		Rigidbody2D_t502193897 * L_14 = V_1;
		Vector2_t2243707579  L_15 = Rigidbody2D_get_velocity_m3310151195(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		float L_16 = (&V_2)->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_17 = fabsf(L_16);
		if ((!(((float)L_17) <= ((float)(3.0f)))))
		{
			goto IL_013a;
		}
	}
	{
		Rigidbody2D_t502193897 * L_18 = V_1;
		Vector2_t2243707579  L_19 = Rigidbody2D_get_velocity_m3310151195(L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		float L_20 = (&V_3)->get_x_0();
		if ((!(((float)L_20) <= ((float)(0.0f)))))
		{
			goto IL_00f2;
		}
	}
	{
		Rigidbody2D_t502193897 * L_21 = V_1;
		Rigidbody2D_t502193897 * L_22 = V_1;
		Vector2_t2243707579  L_23 = Rigidbody2D_get_velocity_m3310151195(L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		float L_24 = (&V_4)->get_x_0();
		Rigidbody2D_t502193897 * L_25 = V_1;
		Vector2_t2243707579  L_26 = Rigidbody2D_get_velocity_m3310151195(L_25, /*hidden argument*/NULL);
		V_5 = L_26;
		float L_27 = (&V_5)->get_y_1();
		Vector2_t2243707579  L_28;
		memset(&L_28, 0, sizeof(L_28));
		Vector2__ctor_m3067419446(&L_28, ((float)((float)L_24-(float)(5.0f))), L_27, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_21, L_28, /*hidden argument*/NULL);
		goto IL_013a;
	}

IL_00f2:
	{
		Rigidbody2D_t502193897 * L_29 = V_1;
		Vector2_t2243707579  L_30 = Rigidbody2D_get_velocity_m3310151195(L_29, /*hidden argument*/NULL);
		V_6 = L_30;
		float L_31 = (&V_6)->get_x_0();
		if ((!(((float)L_31) >= ((float)(0.0f)))))
		{
			goto IL_013a;
		}
	}
	{
		Rigidbody2D_t502193897 * L_32 = V_1;
		Rigidbody2D_t502193897 * L_33 = V_1;
		Vector2_t2243707579  L_34 = Rigidbody2D_get_velocity_m3310151195(L_33, /*hidden argument*/NULL);
		V_7 = L_34;
		float L_35 = (&V_7)->get_x_0();
		Rigidbody2D_t502193897 * L_36 = V_1;
		Vector2_t2243707579  L_37 = Rigidbody2D_get_velocity_m3310151195(L_36, /*hidden argument*/NULL);
		V_8 = L_37;
		float L_38 = (&V_8)->get_y_1();
		Vector2_t2243707579  L_39;
		memset(&L_39, 0, sizeof(L_39));
		Vector2__ctor_m3067419446(&L_39, ((float)((float)L_35+(float)(5.0f))), L_38, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_32, L_39, /*hidden argument*/NULL);
	}

IL_013a:
	{
		Rigidbody2D_t502193897 * L_40 = V_1;
		Vector2_t2243707579  L_41 = Rigidbody2D_get_velocity_m3310151195(L_40, /*hidden argument*/NULL);
		V_9 = L_41;
		float L_42 = (&V_9)->get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_43 = fabsf(L_42);
		if ((!(((float)L_43) <= ((float)(3.0f)))))
		{
			goto IL_01ed;
		}
	}
	{
		Rigidbody2D_t502193897 * L_44 = V_1;
		Vector2_t2243707579  L_45 = Rigidbody2D_get_velocity_m3310151195(L_44, /*hidden argument*/NULL);
		V_10 = L_45;
		float L_46 = (&V_10)->get_y_1();
		if ((!(((float)L_46) <= ((float)(0.0f)))))
		{
			goto IL_01a5;
		}
	}
	{
		Rigidbody2D_t502193897 * L_47 = V_1;
		Rigidbody2D_t502193897 * L_48 = V_1;
		Vector2_t2243707579  L_49 = Rigidbody2D_get_velocity_m3310151195(L_48, /*hidden argument*/NULL);
		V_11 = L_49;
		float L_50 = (&V_11)->get_x_0();
		Rigidbody2D_t502193897 * L_51 = V_1;
		Vector2_t2243707579  L_52 = Rigidbody2D_get_velocity_m3310151195(L_51, /*hidden argument*/NULL);
		V_12 = L_52;
		float L_53 = (&V_12)->get_y_1();
		Vector2_t2243707579  L_54;
		memset(&L_54, 0, sizeof(L_54));
		Vector2__ctor_m3067419446(&L_54, L_50, ((float)((float)L_53-(float)(5.0f))), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_47, L_54, /*hidden argument*/NULL);
		goto IL_01ed;
	}

IL_01a5:
	{
		Rigidbody2D_t502193897 * L_55 = V_1;
		Vector2_t2243707579  L_56 = Rigidbody2D_get_velocity_m3310151195(L_55, /*hidden argument*/NULL);
		V_13 = L_56;
		float L_57 = (&V_13)->get_x_0();
		if ((!(((float)L_57) >= ((float)(0.0f)))))
		{
			goto IL_01ed;
		}
	}
	{
		Rigidbody2D_t502193897 * L_58 = V_1;
		Rigidbody2D_t502193897 * L_59 = V_1;
		Vector2_t2243707579  L_60 = Rigidbody2D_get_velocity_m3310151195(L_59, /*hidden argument*/NULL);
		V_14 = L_60;
		float L_61 = (&V_14)->get_x_0();
		Rigidbody2D_t502193897 * L_62 = V_1;
		Vector2_t2243707579  L_63 = Rigidbody2D_get_velocity_m3310151195(L_62, /*hidden argument*/NULL);
		V_15 = L_63;
		float L_64 = (&V_15)->get_y_1();
		Vector2_t2243707579  L_65;
		memset(&L_65, 0, sizeof(L_65));
		Vector2__ctor_m3067419446(&L_65, L_61, ((float)((float)L_64+(float)(5.0f))), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_58, L_65, /*hidden argument*/NULL);
	}

IL_01ed:
	{
		return;
	}
}
// System.Void Brick::LoadSprites()
extern "C"  void Brick_LoadSprites_m1048576086 (Brick_t1619971827 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Brick_LoadSprites_m1048576086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_timesHit_6();
		V_0 = ((int32_t)((int32_t)L_0-(int32_t)1));
		SpriteU5BU5D_t3359083662* L_1 = __this->get_hitSprites_2();
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		Sprite_t309593783 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		SpriteRenderer_t1209076198 * L_6 = Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570_MethodInfo_var);
		SpriteU5BU5D_t3359083662* L_7 = __this->get_hitSprites_2();
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		Sprite_t309593783 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		SpriteRenderer_set_sprite_m617298623(L_6, L_10, /*hidden argument*/NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void Brick::.cctor()
extern "C"  void Brick__cctor_m753177089 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Emoji::.ctor()
extern "C"  void Emoji__ctor_m2253869911 (Emoji_t1949083194 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Emoji::Start()
extern "C"  void Emoji_Start_m1772200107 (Emoji_t1949083194 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Emoji_Start_m1772200107_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral2677085426, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Emoji::Update()
extern "C"  void Emoji_Update_m4032043012 (Emoji_t1949083194 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void LevelManager::.ctor()
extern "C"  void LevelManager__ctor_m1225645824 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::ChangeLevel(System.String)
extern "C"  void LevelManager_ChangeLevel_m1890096788 (LevelManager_t3355282079 * __this, String_t* ___name0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name0;
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::LoadNextLevel()
extern "C"  void LevelManager_LoadNextLevel_m4205287453 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = SceneManager_get_sceneCount_m2895074065(NULL /*static, unused*/, /*hidden argument*/NULL);
		SceneManager_LoadScene_m87258056(NULL /*static, unused*/, ((int32_t)((int32_t)L_0+(int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::QuitGame()
extern "C"  void LevelManager_QuitGame_m1623654945 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	{
		Application_Quit_m3885595876(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::BrickDestroyed()
extern "C"  void LevelManager_BrickDestroyed_m737389094 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_BrickDestroyed_m737389094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Brick_t1619971827_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Brick_t1619971827_StaticFields*)Brick_t1619971827_il2cpp_TypeInfo_var->static_fields)->get_breakableCount_3();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral339800536, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void LoseCollider::.ctor()
extern "C"  void LoseCollider__ctor_m1456583376 (LoseCollider_t1155462885 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LoseCollider::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void LoseCollider_OnTriggerEnter2D_m554453592 (LoseCollider_t1155462885 * __this, Collider2D_t646061738 * ___trigger0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoseCollider_OnTriggerEnter2D_m554453592_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LevelManager_t3355282079 * L_0 = __this->get_levelManager_2();
		LevelManager_ChangeLevel_m1890096788(L_0, _stringLiteral1414246213, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LoseCollider::Start()
extern "C"  void LoseCollider_Start_m1808664848 (LoseCollider_t1155462885 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoseCollider_Start_m1808664848_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		LevelManager_t3355282079 * L_0 = Object_FindObjectOfType_TisLevelManager_t3355282079_m1351033480(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisLevelManager_t3355282079_m1351033480_MethodInfo_var);
		__this->set_levelManager_2(L_0);
		return;
	}
}
// System.Void LoseCollider::Update()
extern "C"  void LoseCollider_Update_m3649756337 (LoseCollider_t1155462885 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MusicPlayer::.ctor()
extern "C"  void MusicPlayer__ctor_m3135785557 (MusicPlayer_t3223126890 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::Awake()
extern "C"  void MusicPlayer_Awake_m2670478726 (MusicPlayer_t3223126890 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MusicPlayer_Awake_m2670478726_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MusicPlayer_t3223126890_il2cpp_TypeInfo_var);
		MusicPlayer_t3223126890 * L_0 = ((MusicPlayer_t3223126890_StaticFields*)MusicPlayer_t3223126890_il2cpp_TypeInfo_var->static_fields)->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m2402264703(NULL /*static, unused*/, L_0, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		GameObject_t1756533147 * L_2 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		goto IL_0031;
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MusicPlayer_t3223126890_il2cpp_TypeInfo_var);
		((MusicPlayer_t3223126890_StaticFields*)MusicPlayer_t3223126890_il2cpp_TypeInfo_var->static_fields)->set_instance_2(__this);
		GameObject_t1756533147 * L_3 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m2330762974(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void MusicPlayer::Start()
extern "C"  void MusicPlayer_Start_m704446533 (MusicPlayer_t3223126890 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MusicPlayer::Update()
extern "C"  void MusicPlayer_Update_m56837000 (MusicPlayer_t3223126890 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MusicPlayer::.cctor()
extern "C"  void MusicPlayer__cctor_m1372585940 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Paddle::.ctor()
extern "C"  void Paddle__ctor_m1938928499 (Paddle_t763152128 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Paddle::Start()
extern "C"  void Paddle_Start_m1212078847 (Paddle_t763152128 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Paddle_Start_m1212078847_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Ball_t3972794301 * L_0 = Object_FindObjectOfType_TisBall_t3972794301_m1168048236(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisBall_t3972794301_m1168048236_MethodInfo_var);
		__this->set_ball_3(L_0);
		return;
	}
}
// System.Void Paddle::Update()
extern "C"  void Paddle_Update_m257590594 (Paddle_t763152128 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_autoPlay_2();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Paddle_MoveWithMouse_m2465844237(__this, /*hidden argument*/NULL);
		goto IL_001c;
	}

IL_0016:
	{
		Paddle_AutoPlay_m1445803082(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void Paddle::OnCollisionExit2D(UnityEngine.Collision2D)
extern "C"  void Paddle_OnCollisionExit2D_m939839217 (Paddle_t763152128 * __this, Collision2D_t1539500754 * ___collision0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Paddle_OnCollisionExit2D_m939839217_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody2D_t502193897 * V_0 = NULL;
	Vector2_t2243707579  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Ball_t3972794301 * L_0 = __this->get_ball_3();
		Rigidbody2D_t502193897 * L_1 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(L_0, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		V_0 = L_1;
		Rigidbody2D_t502193897 * L_2 = V_0;
		Rigidbody2D_t502193897 * L_3 = V_0;
		Vector2_t2243707579  L_4 = Rigidbody2D_get_velocity_m3310151195(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = (&V_1)->get_x_0();
		Vector2_t2243707579  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector2__ctor_m3067419446(&L_6, L_5, (10.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_2, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Paddle::MoveWithMouse()
extern "C"  void Paddle_MoveWithMouse_m2465844237 (Paddle_t763152128 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Paddle_MoveWithMouse_m2465844237_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_y_2();
		Vector2__ctor_m3067419446((&V_0), (0.5f), L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_3 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_3;
		float L_4 = (&V_3)->get_x_1();
		int32_t L_5 = Screen_get_width_m41137238(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = ((float)((float)((float)((float)L_4/(float)(((float)((float)L_5)))))*(float)(18.0f)));
		float L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_7 = Mathf_Clamp_m2354025655(NULL /*static, unused*/, ((float)((float)L_6-(float)(2.2f))), (0.0f), (15.0f), /*hidden argument*/NULL);
		(&V_0)->set_x_0(L_7);
		Transform_t3275118058 * L_8 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector2_t2243707579  L_9 = V_0;
		Vector3_t2243707580  L_10 = Vector2_op_Implicit_m176791411(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_8, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Paddle::AutoPlay()
extern "C"  void Paddle_AutoPlay_m1445803082 (Paddle_t763152128 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Paddle_AutoPlay_m1445803082_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2243707579  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_y_2();
		Vector2__ctor_m3067419446((&V_0), (0.5f), L_2, /*hidden argument*/NULL);
		Ball_t3972794301 * L_3 = __this->get_ball_3();
		Transform_t3275118058 * L_4 = Component_get_transform_m2697483695(L_3, /*hidden argument*/NULL);
		Vector3_t2243707580  L_5 = Transform_get_position_m1104419803(L_4, /*hidden argument*/NULL);
		Vector2_t2243707579  L_6 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		float L_7 = (&V_2)->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_8 = Mathf_Clamp_m2354025655(NULL /*static, unused*/, L_7, (0.0f), (15.0f), /*hidden argument*/NULL);
		(&V_0)->set_x_0(L_8);
		Transform_t3275118058 * L_9 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector2_t2243707579  L_10 = V_0;
		Vector3_t2243707580  L_11 = Vector2_op_Implicit_m176791411(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_9, L_11, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

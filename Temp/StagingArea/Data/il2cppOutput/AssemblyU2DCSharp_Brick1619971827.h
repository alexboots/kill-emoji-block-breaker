#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// LevelManager
struct LevelManager_t3355282079;
// Ball
struct Ball_t3972794301;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Brick
struct  Brick_t1619971827  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite[] Brick::hitSprites
	SpriteU5BU5D_t3359083662* ___hitSprites_2;
	// UnityEngine.AudioClip Brick::crack
	AudioClip_t1932558630 * ___crack_4;
	// UnityEngine.GameObject Brick::smoke
	GameObject_t1756533147 * ___smoke_5;
	// System.Int32 Brick::timesHit
	int32_t ___timesHit_6;
	// LevelManager Brick::levelManager
	LevelManager_t3355282079 * ___levelManager_7;
	// System.Boolean Brick::isBreakable
	bool ___isBreakable_8;
	// Ball Brick::ball
	Ball_t3972794301 * ___ball_9;

public:
	inline static int32_t get_offset_of_hitSprites_2() { return static_cast<int32_t>(offsetof(Brick_t1619971827, ___hitSprites_2)); }
	inline SpriteU5BU5D_t3359083662* get_hitSprites_2() const { return ___hitSprites_2; }
	inline SpriteU5BU5D_t3359083662** get_address_of_hitSprites_2() { return &___hitSprites_2; }
	inline void set_hitSprites_2(SpriteU5BU5D_t3359083662* value)
	{
		___hitSprites_2 = value;
		Il2CppCodeGenWriteBarrier(&___hitSprites_2, value);
	}

	inline static int32_t get_offset_of_crack_4() { return static_cast<int32_t>(offsetof(Brick_t1619971827, ___crack_4)); }
	inline AudioClip_t1932558630 * get_crack_4() const { return ___crack_4; }
	inline AudioClip_t1932558630 ** get_address_of_crack_4() { return &___crack_4; }
	inline void set_crack_4(AudioClip_t1932558630 * value)
	{
		___crack_4 = value;
		Il2CppCodeGenWriteBarrier(&___crack_4, value);
	}

	inline static int32_t get_offset_of_smoke_5() { return static_cast<int32_t>(offsetof(Brick_t1619971827, ___smoke_5)); }
	inline GameObject_t1756533147 * get_smoke_5() const { return ___smoke_5; }
	inline GameObject_t1756533147 ** get_address_of_smoke_5() { return &___smoke_5; }
	inline void set_smoke_5(GameObject_t1756533147 * value)
	{
		___smoke_5 = value;
		Il2CppCodeGenWriteBarrier(&___smoke_5, value);
	}

	inline static int32_t get_offset_of_timesHit_6() { return static_cast<int32_t>(offsetof(Brick_t1619971827, ___timesHit_6)); }
	inline int32_t get_timesHit_6() const { return ___timesHit_6; }
	inline int32_t* get_address_of_timesHit_6() { return &___timesHit_6; }
	inline void set_timesHit_6(int32_t value)
	{
		___timesHit_6 = value;
	}

	inline static int32_t get_offset_of_levelManager_7() { return static_cast<int32_t>(offsetof(Brick_t1619971827, ___levelManager_7)); }
	inline LevelManager_t3355282079 * get_levelManager_7() const { return ___levelManager_7; }
	inline LevelManager_t3355282079 ** get_address_of_levelManager_7() { return &___levelManager_7; }
	inline void set_levelManager_7(LevelManager_t3355282079 * value)
	{
		___levelManager_7 = value;
		Il2CppCodeGenWriteBarrier(&___levelManager_7, value);
	}

	inline static int32_t get_offset_of_isBreakable_8() { return static_cast<int32_t>(offsetof(Brick_t1619971827, ___isBreakable_8)); }
	inline bool get_isBreakable_8() const { return ___isBreakable_8; }
	inline bool* get_address_of_isBreakable_8() { return &___isBreakable_8; }
	inline void set_isBreakable_8(bool value)
	{
		___isBreakable_8 = value;
	}

	inline static int32_t get_offset_of_ball_9() { return static_cast<int32_t>(offsetof(Brick_t1619971827, ___ball_9)); }
	inline Ball_t3972794301 * get_ball_9() const { return ___ball_9; }
	inline Ball_t3972794301 ** get_address_of_ball_9() { return &___ball_9; }
	inline void set_ball_9(Ball_t3972794301 * value)
	{
		___ball_9 = value;
		Il2CppCodeGenWriteBarrier(&___ball_9, value);
	}
};

struct Brick_t1619971827_StaticFields
{
public:
	// System.Int32 Brick::breakableCount
	int32_t ___breakableCount_3;

public:
	inline static int32_t get_offset_of_breakableCount_3() { return static_cast<int32_t>(offsetof(Brick_t1619971827_StaticFields, ___breakableCount_3)); }
	inline int32_t get_breakableCount_3() const { return ___breakableCount_3; }
	inline int32_t* get_address_of_breakableCount_3() { return &___breakableCount_3; }
	inline void set_breakableCount_3(int32_t value)
	{
		___breakableCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

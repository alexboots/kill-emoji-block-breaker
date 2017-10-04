#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// Paddle
struct Paddle_t763152128;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ball
struct  Ball_t3972794301  : public MonoBehaviour_t1158329972
{
public:
	// Paddle Ball::paddle
	Paddle_t763152128 * ___paddle_2;
	// UnityEngine.Vector3 Ball::paddleToBallVector
	Vector3_t2243707580  ___paddleToBallVector_3;
	// System.Boolean Ball::hasStarted
	bool ___hasStarted_4;
	// UnityEngine.AudioSource Ball::audio
	AudioSource_t1135106623 * ___audio_5;

public:
	inline static int32_t get_offset_of_paddle_2() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___paddle_2)); }
	inline Paddle_t763152128 * get_paddle_2() const { return ___paddle_2; }
	inline Paddle_t763152128 ** get_address_of_paddle_2() { return &___paddle_2; }
	inline void set_paddle_2(Paddle_t763152128 * value)
	{
		___paddle_2 = value;
		Il2CppCodeGenWriteBarrier(&___paddle_2, value);
	}

	inline static int32_t get_offset_of_paddleToBallVector_3() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___paddleToBallVector_3)); }
	inline Vector3_t2243707580  get_paddleToBallVector_3() const { return ___paddleToBallVector_3; }
	inline Vector3_t2243707580 * get_address_of_paddleToBallVector_3() { return &___paddleToBallVector_3; }
	inline void set_paddleToBallVector_3(Vector3_t2243707580  value)
	{
		___paddleToBallVector_3 = value;
	}

	inline static int32_t get_offset_of_hasStarted_4() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___hasStarted_4)); }
	inline bool get_hasStarted_4() const { return ___hasStarted_4; }
	inline bool* get_address_of_hasStarted_4() { return &___hasStarted_4; }
	inline void set_hasStarted_4(bool value)
	{
		___hasStarted_4 = value;
	}

	inline static int32_t get_offset_of_audio_5() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___audio_5)); }
	inline AudioSource_t1135106623 * get_audio_5() const { return ___audio_5; }
	inline AudioSource_t1135106623 ** get_address_of_audio_5() { return &___audio_5; }
	inline void set_audio_5(AudioSource_t1135106623 * value)
	{
		___audio_5 = value;
		Il2CppCodeGenWriteBarrier(&___audio_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

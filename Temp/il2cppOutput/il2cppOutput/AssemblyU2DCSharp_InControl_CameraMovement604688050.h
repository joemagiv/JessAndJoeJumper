#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.CameraMovement
struct  CameraMovement_t604688050  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject InControl.CameraMovement::camera
	GameObject_t3674682005 * ___camera_2;
	// System.Boolean InControl.CameraMovement::playerInTrigger
	bool ___playerInTrigger_3;
	// System.Single InControl.CameraMovement::cameraSpeed
	float ___cameraSpeed_4;

public:
	inline static int32_t get_offset_of_camera_2() { return static_cast<int32_t>(offsetof(CameraMovement_t604688050, ___camera_2)); }
	inline GameObject_t3674682005 * get_camera_2() const { return ___camera_2; }
	inline GameObject_t3674682005 ** get_address_of_camera_2() { return &___camera_2; }
	inline void set_camera_2(GameObject_t3674682005 * value)
	{
		___camera_2 = value;
		Il2CppCodeGenWriteBarrier(&___camera_2, value);
	}

	inline static int32_t get_offset_of_playerInTrigger_3() { return static_cast<int32_t>(offsetof(CameraMovement_t604688050, ___playerInTrigger_3)); }
	inline bool get_playerInTrigger_3() const { return ___playerInTrigger_3; }
	inline bool* get_address_of_playerInTrigger_3() { return &___playerInTrigger_3; }
	inline void set_playerInTrigger_3(bool value)
	{
		___playerInTrigger_3 = value;
	}

	inline static int32_t get_offset_of_cameraSpeed_4() { return static_cast<int32_t>(offsetof(CameraMovement_t604688050, ___cameraSpeed_4)); }
	inline float get_cameraSpeed_4() const { return ___cameraSpeed_4; }
	inline float* get_address_of_cameraSpeed_4() { return &___cameraSpeed_4; }
	inline void set_cameraSpeed_4(float value)
	{
		___cameraSpeed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

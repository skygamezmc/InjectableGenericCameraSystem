//////////////////////////	//////////////////////////////////////////////////////////////////////////////
// Part of Injectable Generic Camera System
// Copyright(c) 2017, Frans Bouma
// All rights reserved.
// https://github.com/FransBouma/InjectableGenericCameraSystem
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met :
//
//  * Redistributions of source code must retain the above copyright notice, this
//	  list of conditions and the following disclaimer.
//
//  * Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and / or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED.IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma once

namespace IGCS::GameSpecific
{
	// Mandatory constants to define for a game
	#define GAME_NAME									"Ryse:Son of Rome 1.0.0.153"
	#define CAMERA_VERSION								"1.0.0"
	#define CAMERA_CREDITS								"Otis_Inf"
	#define GAME_WINDOW_TITLE							"Ryse (TM)"
	#define INITIAL_PITCH_RADIANS						0.0f	// around X axis	(right)
	#define INITIAL_YAW_RADIANS							0.0f	// around Y axis	(into the screen)
	#define INITIAL_ROLL_RADIANS						0.0f	// aruond Z axis	(up)
	#define CONTROLLER_Y_INVERT							false
	#define FASTER_MULTIPLIER							10.0f
	#define SLOWER_MULTIPLIER							0.1f
	#define MOUSE_SPEED_CORRECTION						0.2f	// to correct for the mouse-deltas related to normal rotation.
	#define DEFAULT_MOVEMENT_SPEED						0.045f
	#define DEFAULT_ROTATION_SPEED						0.012f
	#define DEFAULT_FOV_RADIANS							1.0f
	#define DEFAULT_FOV_SPEED							0.001f
	#define DEFAULT_UP_MOVEMENT_MULTIPLIER				0.7f
	#define SUPERSAMPLE_FACTOR_MAX						5.0f
	// End Mandatory constants

	// AOB Keys for interceptor's AOB scanner
	#define CAMERA_ADDRESS_INTERCEPT_KEY				"AOB_CAMERA_ADDRESS_INTERCEPT"
	#define CAMERA_WRITE1_INTERCEPT_KEY					"AOB_CAMERA_WRITE1_INTERCEPT"
	#define CAMERA_WRITE2_INTERCEPT_KEY					"AOB_CAMERA_WRITE2_INTERCEPT"
	#define CAMERA_WRITE3_INTERCEPT_KEY					"AOB_CAMERA_WRITE3_INTERCEPT"
	#define CAMERA_WRITE4_INTERCEPT_KEY					"AOB_CAMERA_WRITE4_INTERCEPT"
	#define CAMERA_WRITE5_INTERCEPT_KEY					"AOB_CAMERA_WRITE5_INTERCEPT"
	#define CAMERA_WRITE6_INTERCEPT_KEY					"AOB_CAMERA_WRITE6_INTERCEPT"
	#define CAMERA_WRITE7_INTERCEPT_KEY					"AOB_CAMERA_WRITE7_INTERCEPT"
	#define CAMERA_WRITE8_INTERCEPT_KEY					"AOB_CAMERA_WRITE8_INTERCEPT"
	#define CAMERA_WRITE9_INTERCEPT_KEY					"AOB_CAMERA_WRITE9_INTERCEPT"
	#define FOV_INTERCEPT_KEY							"AOB_FOV_INTERCEPT"
	#define TIMESTOP1_INTERCEPT_KEY						"AOB_TIMESTOP1_INTERCEPT"
	#define TIMESTOP2_INTERCEPT_KEY						"AOB_TIMESTOP2_INTERCEPT"

	// Indices in the structures read by interceptors 
	#define CAMERA_COORDS_IN_CAMERA_STRUCT_OFFSET		0x0
	#define LOOK_DATA_IN_CAMERA_STRUCT_OFFSET			0xC
	#define FOV_IN_STRUCT_OFFSET						0x30			// in camera struct
	#define TIMESTOP1_IN_STRUCT_OFFSET					0x29C
	#define TIMESTOP2_IN_STRUCT_OFFSET					0x89			// different struct!

	#define SUPERSAMPLING_VAR_IN_IMAGE_OFFSET			0x22BA55C
	#define HUD_TOGGLE_VAR_IN_IMAGE_OFFSET				0x2E0B4C4
}

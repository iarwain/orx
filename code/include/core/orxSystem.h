/* Orx - Portable Game Engine
 *
 * Copyright (c) 2008-2010 Orx-Project
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 *    1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 *
 *    2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 *
 *    3. This notice may not be removed or altered from any source
 *    distribution.
 */

/**
 * @file orxSystem.h
 * @date 25/05/2005
 * @author iarwain@orx-project.org
 *
 * @todo
 */

/**
 * @addtogroup orxSystem
 * 
 * Module file
 * Code that handles modules and their dependencies
 *
 * @{
 */


#ifndef _orxSYSTEM_H_
#define _orxSYSTEM_H_

#include "orxInclude.h"


/** Event enum
 */
typedef enum __orxSYSTEM_EVENT_t
{
  orxSYSTEM_EVENT_CLOSE = 0,
  orxSYSTEM_EVENT_FOCUS_GAINED,
  orxSYSTEM_EVENT_FOCUS_LOST,
  orxSYSTEM_EVENT_MOUSE_IN,
  orxSYSTEM_EVENT_MOUSE_OUT,

  orxSYSTEM_EVENT_NUMBER,

  orxSYSTEM_EVENT_NONE = orxENUM_NONE

} orxSYSTEM_EVENT;


/** System module setup
 */
extern orxDLLAPI void orxFASTCALL       orxSystem_Setup();

/** Inits the system module
 * @return      orxSTATUS_SUCCESS / orxSTATUS_FAILURE
 */
extern orxDLLAPI orxSTATUS orxFASTCALL  orxSystem_Init();

/** Exits from the system module
 */
extern orxDLLAPI void orxFASTCALL       orxSystem_Exit();

/** Gets current time (elapsed from the beginning of the application)
 * @return Current time
 */
extern orxDLLAPI orxFLOAT orxFASTCALL   orxSystem_GetTime();

/** Gets current real time (in seconds)
 * @return Current real time
 */
extern orxDLLAPI orxS32 orxFASTCALL     orxSystem_GetRealTime();

/** Delay the program for given number of seconds
 * @param[in] _fSeconds             Number of seconds to wait
 */
extern orxDLLAPI void orxFASTCALL       orxSystem_Delay(orxFLOAT _fSeconds);

#endif /* _orxSYSTEM_H_ */

/** @} */

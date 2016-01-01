/*
 * This source file is part of Pillar, the C++ Cross-platform middleware for game
 *
 * For the latest information, see https://github.com/prophecy/Pillar
 *
 * The MIT License (MIT)
 * Copyright (c) 2015 Adawat Chanchua
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

#ifndef __ITASK_H__
#define __ITASK_H__

#include "IElement.h"

class TaskManager;
class IEntity;
class IEvent;
class IScene;

class ITask : public IElement
{
public:
	virtual void Start() {}
	virtual void Stop() {}
	virtual void OnTask() = 0;
	virtual void OnEvent(WonderPtr<IEvent> evt, s32 code, std::string message) {} // Optional
	virtual void OnEvent(WonderPtr<IEvent> evt, s8* data) {} // Optional

public:
	IScene*					scene;
	TaskManager*			taskManager;
	std::vector<WonderPtr<IEntity>>		entities;
	std::vector<WonderPtr<IEntity>>		tasks;
};

#endif // __ITASK_H__
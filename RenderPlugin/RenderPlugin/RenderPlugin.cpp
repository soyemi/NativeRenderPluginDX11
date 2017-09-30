// RenderPlugin.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include <IUnityInterface.h>
#include <IUnityGraphics.h>
#include <iostream>

extern "C" void UNITY_INTERFACE_EXPORT UNITY_INTERFACE_API
UnityPluginLoad(IUnityInterfaces * unityInterfaces) {

}


extern "C" void UNITY_INTERFACE_EXPORT UNITY_INTERFACE_API
UnityPluginUnload()
{

}

extern "C" int UNITY_INTERFACE_EXPORT  UNITY_INTERFACE_API
TestFunc()
{
	std::cout << "native plugin output" << std::endl;
	return 10;
}
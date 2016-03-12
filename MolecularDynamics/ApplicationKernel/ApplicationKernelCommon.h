#ifndef ApplicationKernelCommon_h__
#define ApplicationKernelCommon_h__

#ifdef APPKERNEL_EXPORTS
#define APPKERNEL_DLL __declspec(dllexport)
#else
#define APPKERNEL_DLL __declspec(dllimport)
#endif


#endif // ApplicationKernelCommon_h__

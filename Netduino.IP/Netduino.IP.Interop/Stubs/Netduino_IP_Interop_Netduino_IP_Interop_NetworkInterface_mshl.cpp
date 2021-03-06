//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "Netduino_IP_Interop.h"
#include "Netduino_IP_Interop_Netduino_IP_Interop_NetworkInterface.h"

using namespace Netduino::IP::Interop;


HRESULT Library_Netduino_IP_Interop_Netduino_IP_Interop_NetworkInterface::InitializeNetworkInterfaceSettings___VOID( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        NetworkInterface::InitializeNetworkInterfaceSettings( pMngObj,  hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Netduino_IP_Interop_Netduino_IP_Interop_NetworkInterface::GetNetworkInterface___STATIC__OBJECT__U4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 0, param0 ) );

        UNSUPPORTED_TYPE retVal = NetworkInterface::GetNetworkInterface( param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_UNSUPPORTED_TYPE( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Netduino_IP_Interop_Netduino_IP_Interop_NetworkInterface::UpdateConfiguration___VOID__I4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        INT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 1, param0 ) );

        NetworkInterface::UpdateConfiguration( pMngObj,  param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Netduino_IP_Interop_Netduino_IP_Interop_NetworkInterface::IPAddressFromString___STATIC__U4__STRING( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        LPCSTR param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_LPCSTR( stack, 0, param0 ) );

        UINT32 retVal = NetworkInterface::IPAddressFromString( param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_UINT32( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_Netduino_IP_Interop_Netduino_IP_Interop_NetworkInterface::GetNetworkInterfaceCount___STATIC__I4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        INT32 retVal = NetworkInterface::GetNetworkInterfaceCount( hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

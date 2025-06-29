/* Header file automatically generated from Windows.Xbox.UI.Internal.ToastNotifications.idl */
/*
 * File built with Microsoft(R) MIDLRT Compiler Engine Version 10.00.0231 
 */

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __Windows2EXbox2EUI2EInternal2EToastNotifications_h__
#define __Windows2EXbox2EUI2EInternal2EToastNotifications_h__
#ifndef __Windows2EXbox2EUI2EInternal2EToastNotifications_p_h__
#define __Windows2EXbox2EUI2EInternal2EToastNotifications_p_h__


#pragma once

// Ensure that the setting of the /ns_prefix command line switch is consistent for all headers.
// If you get an error from the compiler indicating "warning C4005: 'CHECK_NS_PREFIX_STATE': macro redefinition", this
// indicates that you have included two different headers with different settings for the /ns_prefix MIDL command line switch
#if !defined(DISABLE_NS_PREFIX_CHECKS)
#define CHECK_NS_PREFIX_STATE "never"
#endif // !defined(DISABLE_NS_PREFIX_CHECKS)


#pragma push_macro("MIDL_CONST_ID")
#undef MIDL_CONST_ID
#define MIDL_CONST_ID const __declspec(selectany)


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x70000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)
#define WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION 0x60000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)
#define WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0xf0000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)
#define WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)

#if !defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)
#define WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)
#define WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)
#define WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)
#define WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

#if !defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)
#define WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)

#if !defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)
#define WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION 0x70000
#endif // defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)

#if !defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)
#define WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION 0x70000
#endif // defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)

#if !defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)
#define WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)

#if !defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)
#define WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)

#if !defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)
#define WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)

#if !defined(WINDOWS_XBOX_SHELL_CONTENTENUMERATIONCONTRACT_VERSION)
#define WINDOWS_XBOX_SHELL_CONTENTENUMERATIONCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_XBOX_SHELL_CONTENTENUMERATIONCONTRACT_VERSION)

#if !defined(WINDOWS_XBOX_SHELL_DATACACHECLIENTCONTRACT_VERSION)
#define WINDOWS_XBOX_SHELL_DATACACHECLIENTCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_XBOX_SHELL_DATACACHECLIENTCONTRACT_VERSION)

#if !defined(WINDOWS_XBOX_SHELL_DATACACHECONTRACT_VERSION)
#define WINDOWS_XBOX_SHELL_DATACACHECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_XBOX_SHELL_DATACACHECONTRACT_VERSION)

#if !defined(WINDOWS_XBOX_SHELL_DEPLOYMENTCONTRACT_VERSION)
#define WINDOWS_XBOX_SHELL_DEPLOYMENTCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_XBOX_SHELL_DEPLOYMENTCONTRACT_VERSION)

#if !defined(WINDOWS_XBOX_SHELL_ERRORCONTRACT_VERSION)
#define WINDOWS_XBOX_SHELL_ERRORCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_XBOX_SHELL_ERRORCONTRACT_VERSION)

#if !defined(WINDOWS_XBOX_SHELL_HELPCONTRACT_VERSION)
#define WINDOWS_XBOX_SHELL_HELPCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_XBOX_SHELL_HELPCONTRACT_VERSION)

#if !defined(WINDOWS_XBOX_SHELL_MULTIPLAYERCONTRACT_VERSION)
#define WINDOWS_XBOX_SHELL_MULTIPLAYERCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_XBOX_SHELL_MULTIPLAYERCONTRACT_VERSION)

#if !defined(WINDOWS_XBOX_SHELL_ONESTORESERVICESCONTRACT_VERSION)
#define WINDOWS_XBOX_SHELL_ONESTORESERVICESCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_XBOX_SHELL_ONESTORESERVICESCONTRACT_VERSION)

#if !defined(WINDOWS_XBOX_SHELL_PARENTALCONTROLSCONTRACT_VERSION)
#define WINDOWS_XBOX_SHELL_PARENTALCONTROLSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_XBOX_SHELL_PARENTALCONTROLSCONTRACT_VERSION)

#if !defined(WINDOWS_XBOX_SHELL_SETTINGSCONTRACT_VERSION)
#define WINDOWS_XBOX_SHELL_SETTINGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_XBOX_SHELL_SETTINGSCONTRACT_VERSION)

#if !defined(WINDOWS_XBOX_SHELL_SHARINGCONTRACT_VERSION)
#define WINDOWS_XBOX_SHELL_SHARINGCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_XBOX_SHELL_SHARINGCONTRACT_VERSION)

#if !defined(WINDOWS_XBOX_SHELL_STORECONTRACT_VERSION)
#define WINDOWS_XBOX_SHELL_STORECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_XBOX_SHELL_STORECONTRACT_VERSION)

#if !defined(WINDOWS_XBOX_SHELL_SYSTEMUICONTRACT_VERSION)
#define WINDOWS_XBOX_SHELL_SYSTEMUICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_XBOX_SHELL_SYSTEMUICONTRACT_VERSION)

#if !defined(WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION)
#define WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION)

#if !defined(WINDOWS_XBOX_SHELL_UICONTRACT_VERSION)
#define WINDOWS_XBOX_SHELL_UICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_XBOX_SHELL_UICONTRACT_VERSION)

#if !defined(WINDOWS_XBOX_SHELL_WNFCONTRACT_VERSION)
#define WINDOWS_XBOX_SHELL_WNFCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_XBOX_SHELL_WNFCONTRACT_VERSION)

#if !defined(WINDOWS_XBOX_SYSTEM_CONSOLE2CONTRACT_VERSION)
#define WINDOWS_XBOX_SYSTEM_CONSOLE2CONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_XBOX_SYSTEM_CONSOLE2CONTRACT_VERSION)

#if !defined(WINDOWS_XBOX_SYSTEM_LAUNCHERCONTRACT_VERSION)
#define WINDOWS_XBOX_SYSTEM_LAUNCHERCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_XBOX_SYSTEM_LAUNCHERCONTRACT_VERSION)

#if !defined(WINDOWS_XBOX_SYSTEM_LEGACYUSERCONTRACT_VERSION)
#define WINDOWS_XBOX_SYSTEM_LEGACYUSERCONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_XBOX_SYSTEM_LEGACYUSERCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.Data.Xml.Dom.h"
#include "Windows.Storage.Streams.h"
//#include "Windows.System.Xbox.h"
//#include "Windows.Xbox.Input.h"
//#include "Windows.Xbox.Shell.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIActiveToastChangedHandler_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIActiveToastChangedHandler_FWD_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    interface IActiveToastChangedHandler;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIActiveToastChangedHandler Windows::Xbox::UI::Internal::ToastNotifications::IActiveToastChangedHandler

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIActiveToastChangedHandler_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastActionHandler_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastActionHandler_FWD_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    interface IToastActionHandler;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastActionHandler Windows::Xbox::UI::Internal::ToastNotifications::IToastActionHandler

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastActionHandler_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastExpiredHandler_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastExpiredHandler_FWD_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    interface IToastExpiredHandler;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastExpiredHandler Windows::Xbox::UI::Internal::ToastNotifications::IToastExpiredHandler

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastExpiredHandler_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIEditQuickRow_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIEditQuickRow_FWD_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    interface IEditQuickRow;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIEditQuickRow Windows::Xbox::UI::Internal::ToastNotifications::IEditQuickRow

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIEditQuickRow_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxAction_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxAction_FWD_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    interface IInboxAction;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxAction Windows::Xbox::UI::Internal::ToastNotifications::IInboxAction

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxAction_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxActor_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxActor_FWD_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    interface IInboxActor;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxActor Windows::Xbox::UI::Internal::ToastNotifications::IInboxActor

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxActor_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxGameType_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxGameType_FWD_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    interface IInboxGameType;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxGameType Windows::Xbox::UI::Internal::ToastNotifications::IInboxGameType

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxGameType_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxManager_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxManager_FWD_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    interface IInboxManager;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxManager Windows::Xbox::UI::Internal::ToastNotifications::IInboxManager

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxManager_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotification_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotification_FWD_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    interface IInboxNotification;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotification Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotification_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotificationOptions_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotificationOptions_FWD_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    interface IInboxNotificationOptions;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotificationOptions Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotificationOptions

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotificationOptions_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerOption_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerOption_FWD_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    interface IPickerOption;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerOption Windows::Xbox::UI::Internal::ToastNotifications::IPickerOption

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerOption_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerQuickRow_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerQuickRow_FWD_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    interface IPickerQuickRow;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerQuickRow Windows::Xbox::UI::Internal::ToastNotifications::IPickerQuickRow

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerQuickRow_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToast_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToast_FWD_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    interface IToast;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToast Windows::Xbox::UI::Internal::ToastNotifications::IToast

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToast_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastAction_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastAction_FWD_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    interface IToastAction;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastAction Windows::Xbox::UI::Internal::ToastNotifications::IToastAction

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastAction_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastImage_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastImage_FWD_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    interface IToastImage;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastImage Windows::Xbox::UI::Internal::ToastNotifications::IToastImage

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastImage_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastInternal_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastInternal_FWD_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    interface IToastInternal;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastInternal Windows::Xbox::UI::Internal::ToastNotifications::IToastInternal

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastInternal_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager_FWD_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    interface IToastManager;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager Windows::Xbox::UI::Internal::ToastNotifications::IToastManager

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal_FWD_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    interface IToastManagerInternal;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal Windows::Xbox::UI::Internal::ToastNotifications::IToastManagerInternal

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastPopupModel_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastPopupModel_FWD_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    interface IToastPopupModel;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastPopupModel Windows::Xbox::UI::Internal::ToastNotifications::IToastPopupModel

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastPopupModel_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastQuickRow_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastQuickRow_FWD_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    interface IToastQuickRow;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastQuickRow Windows::Xbox::UI::Internal::ToastNotifications::IToastQuickRow

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastQuickRow_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreGroup_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreGroup_FWD_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    interface IToastStoreGroup;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreGroup Windows::Xbox::UI::Internal::ToastNotifications::IToastStoreGroup

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreGroup_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreModel_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreModel_FWD_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    interface IToastStoreModel;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreModel Windows::Xbox::UI::Internal::ToastNotifications::IToastStoreModel

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreModel_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIVerbQuickRow_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIVerbQuickRow_FWD_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    interface IVerbQuickRow;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIVerbQuickRow Windows::Xbox::UI::Internal::ToastNotifications::IVerbQuickRow

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIVerbQuickRow_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction_USE
#define DEF___FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("81df8d8f-b35f-5f51-899c-fac608fe1a30"))
IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IInboxAction*> : IIterator_impl<Windows::Xbox::UI::Internal::ToastNotifications::IInboxAction*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Xbox.UI.Internal.ToastNotifications.IInboxAction>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IInboxAction*> __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction_t;
#define __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction Windows::Foundation::Collections::__FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction Windows::Foundation::Collections::IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IInboxAction*>
//#define __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction_t Windows::Foundation::Collections::IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IInboxAction*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction_USE
#define DEF___FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fe5884e8-2223-5b67-9c66-243f50bac16b"))
IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IInboxAction*> : IIterable_impl<Windows::Xbox::UI::Internal::ToastNotifications::IInboxAction*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Xbox.UI.Internal.ToastNotifications.IInboxAction>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IInboxAction*> __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction_t;
#define __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction Windows::Foundation::Collections::__FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction Windows::Foundation::Collections::IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IInboxAction*>
//#define __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction_t Windows::Foundation::Collections::IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IInboxAction*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_USE
#define DEF___FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8086f782-da4a-5f17-8da4-890475db18be"))
IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*> : IIterator_impl<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Xbox.UI.Internal.ToastNotifications.IInboxNotification>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*> __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_t;
#define __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification Windows::Foundation::Collections::__FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification Windows::Foundation::Collections::IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*>
//#define __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_t Windows::Foundation::Collections::IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_USE
#define DEF___FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0f71b294-f939-54f8-9014-e6c3f47bca36"))
IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*> : IIterable_impl<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Xbox.UI.Internal.ToastNotifications.IInboxNotification>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*> __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_t;
#define __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification Windows::Foundation::Collections::__FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification Windows::Foundation::Collections::IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*>
//#define __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_t Windows::Foundation::Collections::IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption_USE
#define DEF___FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("846b247e-032a-5cff-acd3-1e4102ca5167"))
IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IPickerOption*> : IIterator_impl<Windows::Xbox::UI::Internal::ToastNotifications::IPickerOption*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Xbox.UI.Internal.ToastNotifications.IPickerOption>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IPickerOption*> __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption_t;
#define __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption Windows::Foundation::Collections::__FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption Windows::Foundation::Collections::IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IPickerOption*>
//#define __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption_t Windows::Foundation::Collections::IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IPickerOption*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption_USE
#define DEF___FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("48925dfb-c009-5907-b053-1d96b1dc12ba"))
IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IPickerOption*> : IIterable_impl<Windows::Xbox::UI::Internal::ToastNotifications::IPickerOption*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Xbox.UI.Internal.ToastNotifications.IPickerOption>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IPickerOption*> __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption_t;
#define __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption Windows::Foundation::Collections::__FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption Windows::Foundation::Collections::IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IPickerOption*>
//#define __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption_t Windows::Foundation::Collections::IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IPickerOption*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast_USE
#define DEF___FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1971d1de-c0c3-587c-898d-3ae72623467d"))
IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IToast*> : IIterator_impl<Windows::Xbox::UI::Internal::ToastNotifications::IToast*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Xbox.UI.Internal.ToastNotifications.IToast>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IToast*> __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast_t;
#define __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast Windows::Foundation::Collections::__FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast Windows::Foundation::Collections::IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IToast*>
//#define __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast_t Windows::Foundation::Collections::IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IToast*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast_USE
#define DEF___FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("67789200-f845-5138-832a-bbc778371290"))
IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IToast*> : IIterable_impl<Windows::Xbox::UI::Internal::ToastNotifications::IToast*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Xbox.UI.Internal.ToastNotifications.IToast>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IToast*> __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast_t;
#define __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast Windows::Foundation::Collections::__FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast Windows::Foundation::Collections::IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IToast*>
//#define __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast_t Windows::Foundation::Collections::IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IToast*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage_USE
#define DEF___FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("15ca047d-acc5-5961-b5e4-8ad588bd2ad1"))
IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IToastImage*> : IIterator_impl<Windows::Xbox::UI::Internal::ToastNotifications::IToastImage*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Xbox.UI.Internal.ToastNotifications.IToastImage>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IToastImage*> __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage_t;
#define __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage Windows::Foundation::Collections::__FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage Windows::Foundation::Collections::IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IToastImage*>
//#define __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage_t Windows::Foundation::Collections::IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IToastImage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage_USE
#define DEF___FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cabcbc51-6fbe-58fb-809d-dad14a46e856"))
IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IToastImage*> : IIterable_impl<Windows::Xbox::UI::Internal::ToastNotifications::IToastImage*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Xbox.UI.Internal.ToastNotifications.IToastImage>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IToastImage*> __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage_t;
#define __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage Windows::Foundation::Collections::__FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage Windows::Foundation::Collections::IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IToastImage*>
//#define __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage_t Windows::Foundation::Collections::IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IToastImage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow_USE
#define DEF___FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1b901de3-9ea5-5e15-9045-66834e74d9ce"))
IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IToastQuickRow*> : IIterator_impl<Windows::Xbox::UI::Internal::ToastNotifications::IToastQuickRow*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Xbox.UI.Internal.ToastNotifications.IToastQuickRow>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IToastQuickRow*> __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow_t;
#define __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow Windows::Foundation::Collections::__FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow Windows::Foundation::Collections::IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IToastQuickRow*>
//#define __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow_t Windows::Foundation::Collections::IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IToastQuickRow*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow_USE
#define DEF___FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b38c9825-6e55-5069-aae4-fc038154d095"))
IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IToastQuickRow*> : IIterable_impl<Windows::Xbox::UI::Internal::ToastNotifications::IToastQuickRow*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Xbox.UI.Internal.ToastNotifications.IToastQuickRow>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IToastQuickRow*> __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow_t;
#define __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow Windows::Foundation::Collections::__FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow Windows::Foundation::Collections::IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IToastQuickRow*>
//#define __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow_t Windows::Foundation::Collections::IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IToastQuickRow*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup_USE
#define DEF___FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("32918ce1-32a6-53ab-8eaa-944bcb2398f2"))
IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IToastStoreGroup*> : IIterator_impl<Windows::Xbox::UI::Internal::ToastNotifications::IToastStoreGroup*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Xbox.UI.Internal.ToastNotifications.IToastStoreGroup>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IToastStoreGroup*> __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup_t;
#define __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup Windows::Foundation::Collections::__FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup Windows::Foundation::Collections::IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IToastStoreGroup*>
//#define __FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup_t Windows::Foundation::Collections::IIterator<Windows::Xbox::UI::Internal::ToastNotifications::IToastStoreGroup*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup_USE
#define DEF___FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("24b3a513-82fe-56ae-955e-3a8bfc314101"))
IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IToastStoreGroup*> : IIterable_impl<Windows::Xbox::UI::Internal::ToastNotifications::IToastStoreGroup*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Xbox.UI.Internal.ToastNotifications.IToastStoreGroup>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IToastStoreGroup*> __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup_t;
#define __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup Windows::Foundation::Collections::__FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup Windows::Foundation::Collections::IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IToastStoreGroup*>
//#define __FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup_t Windows::Foundation::Collections::IIterable<Windows::Xbox::UI::Internal::ToastNotifications::IToastStoreGroup*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction_USE
#define DEF___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("27dc7a8b-6c69-5a59-ac2e-28dbbc2b2341"))
IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IInboxAction*> : IVectorView_impl<Windows::Xbox::UI::Internal::ToastNotifications::IInboxAction*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Xbox.UI.Internal.ToastNotifications.IInboxAction>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IInboxAction*> __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction_t;
#define __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction Windows::Foundation::Collections::__FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction Windows::Foundation::Collections::IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IInboxAction*>
//#define __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction_t Windows::Foundation::Collections::IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IInboxAction*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_USE
#define DEF___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fd9da9b1-e132-5c5a-858a-78dadb60b109"))
IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*> : IVectorView_impl<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Xbox.UI.Internal.ToastNotifications.IInboxNotification>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*> __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_t;
#define __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification Windows::Foundation::Collections::__FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification Windows::Foundation::Collections::IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*>
//#define __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_t Windows::Foundation::Collections::IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption_USE
#define DEF___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("918e3fa6-dbcd-5056-a78f-a9b6c19f16ff"))
IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IPickerOption*> : IVectorView_impl<Windows::Xbox::UI::Internal::ToastNotifications::IPickerOption*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Xbox.UI.Internal.ToastNotifications.IPickerOption>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IPickerOption*> __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption_t;
#define __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption Windows::Foundation::Collections::__FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption Windows::Foundation::Collections::IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IPickerOption*>
//#define __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption_t Windows::Foundation::Collections::IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IPickerOption*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast_USE
#define DEF___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9f187e2f-d720-5835-a639-8979973a0351"))
IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IToast*> : IVectorView_impl<Windows::Xbox::UI::Internal::ToastNotifications::IToast*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Xbox.UI.Internal.ToastNotifications.IToast>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IToast*> __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast_t;
#define __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast Windows::Foundation::Collections::__FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast Windows::Foundation::Collections::IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IToast*>
//#define __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast_t Windows::Foundation::Collections::IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IToast*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage_USE
#define DEF___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3572adde-f214-5a45-95d2-62515a67cf0a"))
IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IToastImage*> : IVectorView_impl<Windows::Xbox::UI::Internal::ToastNotifications::IToastImage*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Xbox.UI.Internal.ToastNotifications.IToastImage>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IToastImage*> __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage_t;
#define __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage Windows::Foundation::Collections::__FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage Windows::Foundation::Collections::IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IToastImage*>
//#define __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage_t Windows::Foundation::Collections::IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IToastImage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow_USE
#define DEF___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("55e3fbaf-df6e-5c9a-9a6c-758a69ac9ed9"))
IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IToastQuickRow*> : IVectorView_impl<Windows::Xbox::UI::Internal::ToastNotifications::IToastQuickRow*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Xbox.UI.Internal.ToastNotifications.IToastQuickRow>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IToastQuickRow*> __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow_t;
#define __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow Windows::Foundation::Collections::__FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow Windows::Foundation::Collections::IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IToastQuickRow*>
//#define __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow_t Windows::Foundation::Collections::IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IToastQuickRow*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup_USE
#define DEF___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2f8d86bb-442c-5dd5-b9bf-49bc5b416ad0"))
IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IToastStoreGroup*> : IVectorView_impl<Windows::Xbox::UI::Internal::ToastNotifications::IToastStoreGroup*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Xbox.UI.Internal.ToastNotifications.IToastStoreGroup>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IToastStoreGroup*> __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup_t;
#define __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup Windows::Foundation::Collections::__FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup Windows::Foundation::Collections::IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IToastStoreGroup*>
//#define __FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup_t Windows::Foundation::Collections::IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IToastStoreGroup*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast_USE
#define DEF___FIVector_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4b002eac-7f94-5ac2-8744-1a1e03b364e8"))
IVector<Windows::Xbox::UI::Internal::ToastNotifications::IToast*> : IVector_impl<Windows::Xbox::UI::Internal::ToastNotifications::IToast*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Xbox.UI.Internal.ToastNotifications.IToast>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<Windows::Xbox::UI::Internal::ToastNotifications::IToast*> __FIVector_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast_t;
#define __FIVector_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast Windows::Foundation::Collections::__FIVector_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast Windows::Foundation::Collections::IVector<Windows::Xbox::UI::Internal::ToastNotifications::IToast*>
//#define __FIVector_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast_t Windows::Foundation::Collections::IVector<Windows::Xbox::UI::Internal::ToastNotifications::IToast*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e569baa7-5175-5d6e-a9a5-10cfeee09cb9"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Xbox.UI.Internal.ToastNotifications.IInboxNotification>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_t
/* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_t Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9ea3a683-9fd8-5189-8363-ab7089fd7154"))
IAsyncOperation<__FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Xbox.UI.Internal.ToastNotifications.IInboxNotification>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification*> __FIAsyncOperation_1___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_t
/* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_t Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f1dfaf63-e62d-5f27-bf3a-c4db0564bba3"))
IAsyncOperationCompletedHandler<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*> : IAsyncOperationCompletedHandler_impl<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Xbox.UI.Internal.ToastNotifications.IInboxNotification>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*> __FIAsyncOperationCompletedHandler_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_t
/* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_t Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_USE
#define DEF___FIAsyncOperation_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e1f71e00-6e62-5c9e-8a2c-8a85bd530130"))
IAsyncOperation<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*> : IAsyncOperation_impl<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Xbox.UI.Internal.ToastNotifications.IInboxNotification>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*> __FIAsyncOperation_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_t;
#define __FIAsyncOperation_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification Windows::Foundation::__FIAsyncOperation_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_t
/* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification Windows::Foundation::IAsyncOperation<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*>
//#define __FIAsyncOperation_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_t Windows::Foundation::IAsyncOperation<Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification_USE */


#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


#ifndef DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("60310303-49c5-52e6-abc6-a9b36eccc716"))
IKeyValuePair<HSTRING,HSTRING> : IKeyValuePair_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,HSTRING> __FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIKeyValuePair_2_HSTRING_HSTRING Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_HSTRING Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>
//#define __FIKeyValuePair_2_HSTRING_HSTRING_t Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("05eb86f1-7140-5517-b88d-cbaebe57e6b1"))
IIterator<__FIKeyValuePair_2_HSTRING_HSTRING*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_HSTRING*> __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e9bdaaf0-cbf6-5c72-be90-29cbf3a1319b"))
IIterable<__FIKeyValuePair_2_HSTRING_HSTRING*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_HSTRING*> __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE */




#ifndef DEF___FIMapView_2_HSTRING_HSTRING_USE
#define DEF___FIMapView_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ac7f26f2-feb7-5b2a-8ac4-345bc62caede"))
IMapView<HSTRING,HSTRING> : IMapView_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,HSTRING> __FIMapView_2_HSTRING_HSTRING_t;
#define __FIMapView_2_HSTRING_HSTRING Windows::Foundation::Collections::__FIMapView_2_HSTRING_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_HSTRING Windows::Foundation::Collections::IMapView<HSTRING,HSTRING>
//#define __FIMapView_2_HSTRING_HSTRING_t Windows::Foundation::Collections::IMapView<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_HSTRING_USE */





#ifndef ____x_Windows_CXbox_CInput_CIController_FWD_DEFINED__
#define ____x_Windows_CXbox_CInput_CIController_FWD_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace Input {
            interface IController;
        } /* Input */
    } /* Xbox */
} /* Windows */
#define __x_Windows_CXbox_CInput_CIController Windows::Xbox::Input::IController

#endif // ____x_Windows_CXbox_CInput_CIController_FWD_DEFINED__










namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    
                    typedef enum InboxActorType : int InboxActorType;
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */


namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    
                    typedef enum InboxCategory : int InboxCategory;
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */


namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    
                    typedef enum InboxImageType : int InboxImageType;
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */


namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    
                    typedef enum InboxType : int InboxType;
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */


namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    
                    typedef enum QuickRowType : int QuickRowType;
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */


namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    
                    typedef enum StandardNotificationType : int StandardNotificationType;
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */


namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    
                    typedef enum ToastDuration : int ToastDuration;
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */


namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    
                    typedef enum ToastNotificationType : int ToastNotificationType;
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */

























namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    class InboxAction;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */



namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    class InboxActor;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */



namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    class InboxGameType;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */




namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    class InboxNotification;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */



namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    class InboxNotificationOptions;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */



namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    class PickerOption;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */



namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    class Toast;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */



namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    class ToastAction;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */



namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    class ToastEditInput;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */



namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    class ToastImage;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */




namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    class ToastPickerInput;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */



namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    class ToastPopupModel;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */



namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    class ToastStoreGroup;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */



namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    class ToastStoreModel;
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */














/*
 *
 * Struct Windows.Xbox.UI.Internal.ToastNotifications.InboxActorType
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 */

#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [v1_enum, contract] */
                    enum InboxActorType : int
                    {
                        InboxActorType_User = 1,
                        InboxActorType_Club = 2,
                        InboxActorType_Title = 3,
                    };
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Xbox.UI.Internal.ToastNotifications.InboxCategory
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 */

#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [v1_enum, contract] */
                    enum InboxCategory : int
                    {
                        InboxCategory_Any = 0,
                        InboxCategory_Achievements = 1,
                        InboxCategory_Assist = 2,
                        InboxCategory_Ballots = 3,
                        InboxCategory_Clubs = 4,
                        InboxCategory_Comments = 5,
                        InboxCategory_Family = 6,
                        InboxCategory_Multiplayer = 7,
                        InboxCategory_People = 8,
                        InboxCategory_SubscriptionsExpiring = 9,
                        InboxCategory_Store = 10,
                        InboxCategory_Insider = 11,
                    };
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Xbox.UI.Internal.ToastNotifications.InboxImageType
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 */

#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [v1_enum, contract] */
                    enum InboxImageType : int
                    {
                        InboxImageType_User = 1,
                        InboxImageType_Club = 2,
                    };
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Xbox.UI.Internal.ToastNotifications.InboxType
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 */

#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [v1_enum, contract] */
                    enum InboxType : int
                    {
                        InboxType_Any = 0,
                        InboxType_AchievementUnlock = 1,
                        InboxType_GeneralCSAT = 2,
                        InboxType_MakeGoodAction = 3,
                        InboxType_SubscriptionPriceChange = 4,
                        InboxType_SubscriptionState = 5,
                        InboxType_PreOrder = 6,
                        InboxType_SubscriptionPiExpired = 7,
                        InboxType_BallotClose = 8,
                        InboxType_MemberAdded = 9,
                        InboxType_RequestToJoin = 10,
                        InboxType_ModerationRequested = 11,
                        InboxType_OwnershipTransferred = 12,
                        InboxType_PromotedToAdmin = 13,
                        InboxType_AdminRemoved = 14,
                        InboxType_InvitedToClub = 15,
                        InboxType_OwnerLike = 16,
                        InboxType_OwnerComment = 17,
                        InboxType_OwnerShare = 18,
                        InboxType_CoComment = 19,
                        InboxType_ContentApproved = 20,
                        InboxType_ContentRejected = 21,
                        InboxType_FriendApproved = 22,
                        InboxType_FriendRejected = 23,
                        InboxType_TitleMultiplayerApproved = 24,
                        InboxType_TitleMultiplayerRejected = 25,
                        InboxType_LfgApplications = 26,
                        InboxType_LfgWithdrawals = 27,
                        InboxType_LfgUpdates = 28,
                        InboxType_GameInvites = 29,
                        InboxType_GamePartyInvites = 30,
                        InboxType_GamePartyInvitesWithoutHandles = 31,
                        InboxType_MultiplayerActivityGameInvites = 32,
                        InboxType_PartyInvites = 33,
                        InboxType_Followers = 34,
                        InboxType_WishListSale = 35,
                        InboxType_Gold = 36,
                        InboxType_GamePass = 37,
                        InboxType_MultiplayerActivityAskToJoin = 38,
                        InboxType_ThermalGuide = 39,
                        InboxType_PlaytestAvailable = 40,
                        InboxType_PlaytestReadyForPreInstall = 41,
                        InboxType_PlaytestStarted = 42,
                        InboxType_PreviewRingInvite = 43,
                        InboxType_InsiderXPEarned = 44,
                        InboxType_NewQuest = 45,
                        InboxType_NewSurvey = 46,
                    };
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Xbox.UI.Internal.ToastNotifications.QuickRowType
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 */

#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [v1_enum, contract] */
                    enum QuickRowType : int
                    {
                        QuickRowType_Unused = 0,
                        QuickRowType_Verb = 1,
                        QuickRowType_Edit = 2,
                        QuickRowType_Picker = 3,
                        QuickRowType_Max = 4,
                    };
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Xbox.UI.Internal.ToastNotifications.StandardNotificationType
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 */

#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [v1_enum, contract] */
                    enum StandardNotificationType : int
                    {
                        StandardNotificationType_IdleTimeout = 0,
                        StandardNotificationType_CurrentUserBackgroundChanged = 1,
                    };
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Xbox.UI.Internal.ToastNotifications.ToastDuration
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 */

#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [v1_enum, contract] */
                    enum ToastDuration : int
                    {
                        ToastDuration_Short = 0,
                        ToastDuration_Long = 1,
                    };
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Xbox.UI.Internal.ToastNotifications.ToastNotificationType
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 */

#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [v1_enum, contract] */
                    enum ToastNotificationType : int
                    {
                        ToastNotificationType_Standard = 0,
                        ToastNotificationType_SignIn = 1,
                        ToastNotificationType_Achievement = 2,
                        ToastNotificationType_RareAchievement = 3,
                        ToastNotificationType_SkypeIncomingCall = 4,
                        ToastNotificationType_Invite = 5,
                        ToastNotificationType_CloudGaming = 6,
                    };
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Xbox.UI.Internal.ToastNotifications.ActiveToastChangedHandler
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIActiveToastChangedHandler_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIActiveToastChangedHandler_INTERFACE_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [object, uuid("7EED3F65-2E49-43F3-AE28-48F1F3152313"), contract] */
                    MIDL_INTERFACE("7EED3F65-2E49-43F3-AE28-48F1F3152313")
                    IActiveToastChangedHandler : public IUnknown
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */Windows::Xbox::UI::Internal::ToastNotifications::IToast * newToast
                            ) = 0;
                        
                    };

                    MIDL_CONST_ID IID & IID_IActiveToastChangedHandler=_uuidof(IActiveToastChangedHandler);
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */

EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIActiveToastChangedHandler;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIActiveToastChangedHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Xbox.UI.Internal.ToastNotifications.ToastActionHandler
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastActionHandler_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastActionHandler_INTERFACE_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [object, uuid("6D7E8B4D-6FB3-483A-9496-55D274ED07F8"), contract] */
                    MIDL_INTERFACE("6D7E8B4D-6FB3-483A-9496-55D274ED07F8")
                    IToastActionHandler : public IUnknown
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */Windows::Xbox::Input::IController * invokingDevice,
                            /* [in] */Windows::System::IUser * invokingUser,
                            /* [in] */__FIMapView_2_HSTRING_HSTRING * inputs
                            ) = 0;
                        
                    };

                    MIDL_CONST_ID IID & IID_IToastActionHandler=_uuidof(IToastActionHandler);
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */

EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastActionHandler;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastActionHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Xbox.UI.Internal.ToastNotifications.ToastExpiredHandler
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastExpiredHandler_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastExpiredHandler_INTERFACE_DEFINED__

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [object, uuid("0C6A7532-F50F-49C6-A968-2E80987A911C"), contract] */
                    MIDL_INTERFACE("0C6A7532-F50F-49C6-A968-2E80987A911C")
                    IToastExpiredHandler : public IUnknown
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */UINT32 userId,
                            /* [in] */UINT32 notificationID
                            ) = 0;
                        
                    };

                    MIDL_CONST_ID IID & IID_IToastExpiredHandler=_uuidof(IToastExpiredHandler);
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */

EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastExpiredHandler;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastExpiredHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Xbox.UI.Internal.ToastNotifications.IEditQuickRow
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Xbox.UI.Internal.ToastNotifications.IToastQuickRow
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIEditQuickRow_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIEditQuickRow_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Xbox_UI_Internal_ToastNotifications_IEditQuickRow[] = L"Windows.Xbox.UI.Internal.ToastNotifications.IEditQuickRow";

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [object, uuid("A542F553-4828-4C53-ACC7-9735D8785841"), contract] */
                    MIDL_INTERFACE("A542F553-4828-4C53-ACC7-9735D8785841")
                    IEditQuickRow : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PlaceHolderContent(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DefaultInput(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        
                    };

                    MIDL_CONST_ID IID & IID_IEditQuickRow=_uuidof(IEditQuickRow);
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */

EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIEditQuickRow;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIEditQuickRow_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Xbox.UI.Internal.ToastNotifications.IInboxAction
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxAction_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxAction_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Xbox_UI_Internal_ToastNotifications_IInboxAction[] = L"Windows.Xbox.UI.Internal.ToastNotifications.IInboxAction";

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [object, uuid("16392156-0A71-4CBB-B82E-3D196CDFDB16"), contract] */
                    MIDL_INTERFACE("16392156-0A71-4CBB-B82E-3D196CDFDB16")
                    IInboxAction : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Actor(
                            /* [retval, out] */Windows::Xbox::UI::Internal::ToastNotifications::IInboxActor * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActionId(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActionTime(
                            /* [retval, out] */Windows::Foundation::DateTime * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LaunchInfo(
                            /* [retval, out] */__FIMapView_2_HSTRING_HSTRING * * value
                            ) = 0;
                        
                    };

                    MIDL_CONST_ID IID & IID_IInboxAction=_uuidof(IInboxAction);
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */

EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxAction;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxAction_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Xbox.UI.Internal.ToastNotifications.IInboxActor
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxActor_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxActor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Xbox_UI_Internal_ToastNotifications_IInboxActor[] = L"Windows.Xbox.UI.Internal.ToastNotifications.IInboxActor";

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [object, uuid("BA54B3FF-9F77-46C2-9FF2-549E352BCE96"), contract] */
                    MIDL_INTERFACE("BA54B3FF-9F77-46C2-9FF2-549E352BCE96")
                    IInboxActor : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UniqueModernGamertag(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                            /* [retval, out] */Windows::Xbox::UI::Internal::ToastNotifications::InboxActorType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pfn(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Image(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        
                    };

                    MIDL_CONST_ID IID & IID_IInboxActor=_uuidof(IInboxActor);
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */

EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxActor;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxActor_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Xbox.UI.Internal.ToastNotifications.IInboxGameType
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxGameType_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxGameType_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Xbox_UI_Internal_ToastNotifications_IInboxGameType[] = L"Windows.Xbox.UI.Internal.ToastNotifications.IInboxGameType";

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [object, uuid("DF8DF69A-F747-4AD7-A044-16DB4613DC0A"), contract] */
                    MIDL_INTERFACE("DF8DF69A-F747-4AD7-A044-16DB4613DC0A")
                    IInboxGameType : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pfn(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TitleId(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        
                    };

                    MIDL_CONST_ID IID & IID_IInboxGameType=_uuidof(IInboxGameType);
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */

EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxGameType;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxGameType_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Xbox.UI.Internal.ToastNotifications.IInboxManager
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Xbox.UI.Internal.ToastNotifications.InboxManager
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxManager_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Xbox_UI_Internal_ToastNotifications_IInboxManager[] = L"Windows.Xbox.UI.Internal.ToastNotifications.IInboxManager";

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [object, uuid("CCA4A2FA-6C2E-4BCC-B475-46B18AA067EC"), exclusiveto, contract] */
                    MIDL_INTERFACE("CCA4A2FA-6C2E-4BCC-B475-46B18AA067EC")
                    IInboxManager : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE ReadNotificationAsync(
                            /* [in] */HSTRING userXuid,
                            /* [in] */HSTRING key,
                            /* [retval, out] */__FIAsyncOperation_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReadNotificationsAsync(
                            /* [in] */HSTRING userXuid,
                            /* [retval, out] */__FIAsyncOperation_1___FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxNotification * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE FireToast(
                            /* [in] */Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification * notification
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DeserializeNotification(
                            /* [in] */HSTRING payload,
                            /* [in] */HSTRING userXuid,
                            /* [retval, out] */Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification * * notification
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ActivateNotificationAction(
                            /* [in] */Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotification * notification
                            ) = 0;
                        
                    };

                    MIDL_CONST_ID IID & IID_IInboxManager=_uuidof(IInboxManager);
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */

EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxManager;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Xbox.UI.Internal.ToastNotifications.IInboxNotification
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotification_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotification_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Xbox_UI_Internal_ToastNotifications_IInboxNotification[] = L"Windows.Xbox.UI.Internal.ToastNotifications.IInboxNotification";

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [object, uuid("25BAA4AD-2B7A-4731-9D12-5FAC7EE0211D"), contract] */
                    MIDL_INTERFACE("25BAA4AD-2B7A-4731-9D12-5FAC7EE0211D")
                    IInboxNotification : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Category(
                            /* [retval, out] */Windows::Xbox::UI::Internal::ToastNotifications::InboxCategory * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE UpdateCategory(
                            /* [in] */HSTRING rawCategory
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RawCategory(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                            /* [retval, out] */Windows::Xbox::UI::Internal::ToastNotifications::InboxType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Text(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Text(
                            /* [in] */HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Seen(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Seen(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MarkedRead(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MarkedRead(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Image(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ImageType(
                            /* [retval, out] */Windows::Xbox::UI::Internal::ToastNotifications::InboxImageType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NotificationOptions(
                            /* [retval, out] */Windows::Xbox::UI::Internal::ToastNotifications::IInboxNotificationOptions * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Actions(
                            /* [retval, out] */__FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIInboxAction * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OtherActionCount(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TotalActionCount(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RecipientXuid(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RecipientXuid(
                            /* [in] */HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LaunchInfo(
                            /* [retval, out] */__FIMapView_2_HSTRING_HSTRING * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Action(
                            /* [retval, out] */Windows::Xbox::UI::Internal::ToastNotifications::IInboxAction * * value
                            ) = 0;
                        
                    };

                    MIDL_CONST_ID IID & IID_IInboxNotification=_uuidof(IInboxNotification);
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */

EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotification;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotification_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Xbox.UI.Internal.ToastNotifications.IInboxNotificationOptions
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotificationOptions_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotificationOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Xbox_UI_Internal_ToastNotifications_IInboxNotificationOptions[] = L"Windows.Xbox.UI.Internal.ToastNotifications.IInboxNotificationOptions";

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [object, uuid("81DD2891-04A2-43ED-BC7F-52984AC197E1"), contract] */
                    MIDL_INTERFACE("81DD2891-04A2-43ED-BC7F-52984AC197E1")
                    IInboxNotificationOptions : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LaunchInfo(
                            /* [retval, out] */__FIMapView_2_HSTRING_HSTRING * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalizationInfo(
                            /* [retval, out] */__FIMapView_2_HSTRING_HSTRING * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Location(
                            /* [retval, out] */Windows::Xbox::UI::Internal::ToastNotifications::IInboxActor * * value
                            ) = 0;
                        
                    };

                    MIDL_CONST_ID IID & IID_IInboxNotificationOptions=_uuidof(IInboxNotificationOptions);
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */

EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotificationOptions;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotificationOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Xbox.UI.Internal.ToastNotifications.IPickerOption
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerOption_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerOption_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Xbox_UI_Internal_ToastNotifications_IPickerOption[] = L"Windows.Xbox.UI.Internal.ToastNotifications.IPickerOption";

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [object, uuid("0F1D27C1-313A-47AA-9F0C-A08C2828AB04"), contract] */
                    MIDL_INTERFACE("0F1D27C1-313A-47AA-9F0C-A08C2828AB04")
                    IPickerOption : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Content(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        
                    };

                    MIDL_CONST_ID IID & IID_IPickerOption=_uuidof(IPickerOption);
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */

EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerOption;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerOption_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Xbox.UI.Internal.ToastNotifications.IPickerQuickRow
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Xbox.UI.Internal.ToastNotifications.IToastQuickRow
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerQuickRow_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerQuickRow_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Xbox_UI_Internal_ToastNotifications_IPickerQuickRow[] = L"Windows.Xbox.UI.Internal.ToastNotifications.IPickerQuickRow";

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [object, uuid("C9C4E4FB-1147-46C9-BE82-2A95DA0AFB55"), contract] */
                    MIDL_INTERFACE("C9C4E4FB-1147-46C9-BE82-2A95DA0AFB55")
                    IPickerQuickRow : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DefaultInput(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Options(
                            /* [retval, out] */__FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIPickerOption * * value
                            ) = 0;
                        
                    };

                    MIDL_CONST_ID IID & IID_IPickerQuickRow=_uuidof(IPickerQuickRow);
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */

EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerQuickRow;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerQuickRow_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Xbox.UI.Internal.ToastNotifications.IToast
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToast_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToast_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Xbox_UI_Internal_ToastNotifications_IToast[] = L"Windows.Xbox.UI.Internal.ToastNotifications.IToast";

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [object, uuid("9533078B-4846-4F42-B4B1-D689D2AFFA23"), contract] */
                    MIDL_INTERFACE("9533078B-4846-4F42-B4B1-D689D2AFFA23")
                    IToast : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE ActivateToastAction(
                            /* [in] */HSTRING invokedActionId,
                            /* [in] */Windows::Xbox::Input::IController * invokingDevice,
                            /* [in] */Windows::System::IUser * invokingUser,
                            /* [in] */__FIMapView_2_HSTRING_HSTRING * inputs
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportToastDecayed(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportToastDismissed(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportToastDisabled(void) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NotificationID(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ToastType(
                            /* [retval, out] */Windows::Xbox::UI::Internal::ToastNotifications::ToastNotificationType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Line1(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Line2(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Line3(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AttributionText(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppLogoOverrideImage(
                            /* [retval, out] */Windows::Xbox::UI::Internal::ToastNotifications::IToastImage * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeroImage(
                            /* [retval, out] */Windows::Xbox::UI::Internal::ToastNotifications::IToastImage * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InlineImages(
                            /* [retval, out] */__FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastImage * * inlineImageUriList
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppSmallIconUri(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppBackgroundColor(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserColor1(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserColor2(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserColor3(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserGamertag(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Duration(
                            /* [retval, out] */Windows::Xbox::UI::Internal::ToastNotifications::ToastDuration * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SourceApplicationId(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SourceApplicationTitle(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Timestamp(
                            /* [retval, out] */UINT64 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserId(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CorrelationID(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UniqueToastId(
                            /* [retval, out] */GUID * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsUnseen(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsUnseen(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsUnread(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsUnread(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserXuid(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WpnUserId(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_QuickRows(
                            /* [retval, out] */__FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastQuickRow * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CombinedImageNarratorString(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Scenario(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AttractModeData(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InboxCategory(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InboxType(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InboxId(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        
                    };

                    MIDL_CONST_ID IID & IID_IToast=_uuidof(IToast);
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */

EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToast;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToast_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Xbox.UI.Internal.ToastNotifications.IToastAction
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastAction_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastAction_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Xbox_UI_Internal_ToastNotifications_IToastAction[] = L"Windows.Xbox.UI.Internal.ToastNotifications.IToastAction";

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [object, uuid("3AA718E7-7FF5-4F41-A3AB-77C4A1A8ADB2"), contract] */
                    MIDL_INTERFACE("3AA718E7-7FF5-4F41-A3AB-77C4A1A8ADB2")
                    IToastAction : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActivationArgs(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSystemCommand(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Execute(
                            /* [in] */Windows::Xbox::Input::IController * invokingDevice,
                            /* [in] */Windows::System::IUser * invokingUser,
                            /* [in] */__FIMapView_2_HSTRING_HSTRING * inputs
                            ) = 0;
                        
                    };

                    MIDL_CONST_ID IID & IID_IToastAction=_uuidof(IToastAction);
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */

EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastAction;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastAction_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Xbox.UI.Internal.ToastNotifications.IToastImage
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastImage_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastImage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Xbox_UI_Internal_ToastNotifications_IToastImage[] = L"Windows.Xbox.UI.Internal.ToastNotifications.IToastImage";

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [object, uuid("48ED78AE-1D8F-4106-8B46-74BD3E2D2B7B"), contract] */
                    MIDL_INTERFACE("48ED78AE-1D8F-4106-8B46-74BD3E2D2B7B")
                    IToastImage : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RoundImage(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequiresFileStream(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetFileStream(
                            /* [retval, out] */Windows::Storage::Streams::IRandomAccessStream * * fileStream
                            ) = 0;
                        
                    };

                    MIDL_CONST_ID IID & IID_IToastImage=_uuidof(IToastImage);
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */

EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastImage;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastImage_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Xbox.UI.Internal.ToastNotifications.IToastInternal
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Xbox.UI.Internal.ToastNotifications.Toast
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastInternal_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastInternal_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Xbox_UI_Internal_ToastNotifications_IToastInternal[] = L"Windows.Xbox.UI.Internal.ToastNotifications.IToastInternal";

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [object, uuid("15268FC7-64CF-44BD-805C-FE0D6B85A083"), exclusiveto, contract] */
                    MIDL_INTERFACE("15268FC7-64CF-44BD-805C-FE0D6B85A083")
                    IToastInternal : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TargetUser(
                            /* [retval, out] */Windows::System::IUser * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DismissNotification(void) = 0;
                        
                    };

                    MIDL_CONST_ID IID & IID_IToastInternal=_uuidof(IToastInternal);
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */

EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastInternal;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastInternal_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Xbox.UI.Internal.ToastNotifications.IToastManager
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Xbox.UI.Internal.ToastNotifications.ToastManager
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Xbox_UI_Internal_ToastNotifications_IToastManager[] = L"Windows.Xbox.UI.Internal.ToastNotifications.IToastManager";

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [object, uuid("944FEE54-68BA-4CBE-8541-08122DBE3A4A"), exclusiveto, contract] */
                    MIDL_INTERFACE("944FEE54-68BA-4CBE-8541-08122DBE3A4A")
                    IToastManager : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetToastPopupModel(
                            /* [retval, out] */Windows::Xbox::UI::Internal::ToastNotifications::IToastPopupModel * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetToastStoreModel(
                            /* [retval, out] */Windows::Xbox::UI::Internal::ToastNotifications::IToastStoreModel * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE FireSystemNotification(
                            /* [in] */HSTRING aumid,
                            /* [in] */Windows::Data::Xml::Dom::IXmlDocument * payload,
                            /* [in] */UINT32 expirationInS
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE FireStandardNotification(
                            /* [in] */Windows::Xbox::UI::Internal::ToastNotifications::StandardNotificationType type,
                            /* [in] */HSTRING param1,
                            /* [in] */HSTRING param2,
                            /* [in] */HSTRING param3
                            ) = 0;
                        
                    };

                    MIDL_CONST_ID IID & IID_IToastManager=_uuidof(IToastManager);
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */

EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Xbox.UI.Internal.ToastNotifications.IToastManagerInternal
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Xbox.UI.Internal.ToastNotifications.ToastManager
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Xbox_UI_Internal_ToastNotifications_IToastManagerInternal[] = L"Windows.Xbox.UI.Internal.ToastNotifications.IToastManagerInternal";

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [object, uuid("154762D0-7895-45AF-BA7B-A1DAE10E07E3"), exclusiveto, contract] */
                    MIDL_INTERFACE("154762D0-7895-45AF-BA7B-A1DAE10E07E3")
                    IToastManagerInternal : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE OnWpnUserServiceStatusChanged(
                            /* [in] */UINT32 userId,
                            /* [in] */UINT32 eventType
                            ) = 0;
                        
                    };

                    MIDL_CONST_ID IID & IID_IToastManagerInternal=_uuidof(IToastManagerInternal);
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */

EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Xbox.UI.Internal.ToastNotifications.IToastPopupModel
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Xbox.UI.Internal.ToastNotifications.ToastPopupModel
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastPopupModel_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastPopupModel_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Xbox_UI_Internal_ToastNotifications_IToastPopupModel[] = L"Windows.Xbox.UI.Internal.ToastNotifications.IToastPopupModel";

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [object, uuid("97B2FEC8-856E-4FB4-940D-30E2E0CBC7FA"), exclusiveto, contract] */
                    MIDL_INTERFACE("97B2FEC8-856E-4FB4-940D-30E2E0CBC7FA")
                    IToastPopupModel : public IInspectable
                    {
                    public:
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_OnActiveToastChanged(
                            /* [in] */Windows::Xbox::UI::Internal::ToastNotifications::IActiveToastChangedHandler  * handler,
                            /* [retval, out] */EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_OnActiveToastChanged(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActiveToast(
                            /* [retval, out] */Windows::Xbox::UI::Internal::ToastNotifications::IToast * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportToastMissed(
                            /* [in] */Windows::Xbox::UI::Internal::ToastNotifications::IToast * missedToast
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportToastDismissed(
                            /* [in] */Windows::Xbox::UI::Internal::ToastNotifications::IToast * dismissedToast
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ActivateToast(
                            /* [in] */Windows::Xbox::UI::Internal::ToastNotifications::IToast * activatedToast,
                            /* [in] */Windows::Xbox::Input::IController * invokingDevice,
                            /* [in] */Windows::System::IUser * invokingUser
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportViewAvailable(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportViewUnavailable(void) = 0;
                        
                    };

                    MIDL_CONST_ID IID & IID_IToastPopupModel=_uuidof(IToastPopupModel);
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */

EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastPopupModel;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastPopupModel_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Xbox.UI.Internal.ToastNotifications.IToastQuickRow
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastQuickRow_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastQuickRow_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Xbox_UI_Internal_ToastNotifications_IToastQuickRow[] = L"Windows.Xbox.UI.Internal.ToastNotifications.IToastQuickRow";

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [object, uuid("E71CBF2D-3F95-4B7A-885A-A2C7AC9C6829"), contract] */
                    MIDL_INTERFACE("E71CBF2D-3F95-4B7A-885A-A2C7AC9C6829")
                    IToastQuickRow : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                            /* [retval, out] */Windows::Xbox::UI::Internal::ToastNotifications::QuickRowType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        
                    };

                    MIDL_CONST_ID IID & IID_IToastQuickRow=_uuidof(IToastQuickRow);
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */

EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastQuickRow;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastQuickRow_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Xbox.UI.Internal.ToastNotifications.IToastStoreGroup
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreGroup_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreGroup_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Xbox_UI_Internal_ToastNotifications_IToastStoreGroup[] = L"Windows.Xbox.UI.Internal.ToastNotifications.IToastStoreGroup";

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [object, uuid("DEBCD554-F959-4AFB-A3C5-FDF623403642"), contract] */
                    MIDL_INTERFACE("DEBCD554-F959-4AFB-A3C5-FDF623403642")
                    IToastStoreGroup : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Timestamp(
                            /* [retval, out] */UINT64 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ApplicationId(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Toasts(
                            /* [retval, out] */__FIVector_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToast * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsUnseen(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        
                    };

                    MIDL_CONST_ID IID & IID_IToastStoreGroup=_uuidof(IToastStoreGroup);
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */

EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreGroup;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreGroup_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Xbox.UI.Internal.ToastNotifications.IToastStoreModel
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Xbox.UI.Internal.ToastNotifications.ToastStoreModel
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreModel_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreModel_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Xbox_UI_Internal_ToastNotifications_IToastStoreModel[] = L"Windows.Xbox.UI.Internal.ToastNotifications.IToastStoreModel";

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [object, uuid("FA125502-5B54-45B5-A1FC-6CA677D25431"), exclusiveto, contract] */
                    MIDL_INTERFACE("FA125502-5B54-45B5-A1FC-6CA677D25431")
                    IToastStoreModel : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetToastsForUser(
                            /* [in] */Windows::System::IUser * user,
                            /* [retval, out] */__FIVectorView_1_Windows__CXbox__CUI__CInternal__CToastNotifications__CIToastStoreGroup * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetUnseenToastCountForUser(
                            /* [in] */Windows::System::IUser * user,
                            /* [retval, out] */UINT32 * count
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE UpdateToastsMarkedAsSeen(
                            /* [in] */Windows::System::IUser * user
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE OnActionCenterClosed(
                            /* [in] */Windows::System::IUser * user
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DismissSingleToast(
                            /* [in] */Windows::Xbox::UI::Internal::ToastNotifications::IToast * dismissedToast
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DismissToastGroup(
                            /* [in] */Windows::Xbox::UI::Internal::ToastNotifications::IToastStoreGroup * dismissedGroup
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DismissAllToasts(
                            /* [in] */Windows::System::IUser * user
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportPendingMultiActionToast(void) = 0;
                        
                    };

                    MIDL_CONST_ID IID & IID_IToastStoreModel=_uuidof(IToastStoreModel);
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */

EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreModel;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreModel_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Xbox.UI.Internal.ToastNotifications.IVerbQuickRow
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Xbox.UI.Internal.ToastNotifications.IToastQuickRow
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIVerbQuickRow_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIVerbQuickRow_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Xbox_UI_Internal_ToastNotifications_IVerbQuickRow[] = L"Windows.Xbox.UI.Internal.ToastNotifications.IVerbQuickRow";

namespace Windows {
    namespace Xbox {
        namespace UI {
            namespace Internal {
                namespace ToastNotifications {
                    /* [object, uuid("E4FA0321-93CE-4F51-B6EE-6C32EC2E2D92"), contract] */
                    MIDL_INTERFACE("E4FA0321-93CE-4F51-B6EE-6C32EC2E2D92")
                    IVerbQuickRow : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Label(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TargetInput(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        
                    };

                    MIDL_CONST_ID IID & IID_IVerbQuickRow=_uuidof(IVerbQuickRow);
                    
                } /* ToastNotifications */
            } /* Internal */
        } /* UI */
    } /* Xbox */
} /* Windows */

EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIVerbQuickRow;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIVerbQuickRow_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.InboxAction
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IInboxAction ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_InboxAction_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_InboxAction_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_InboxAction[] = L"Windows.Xbox.UI.Internal.ToastNotifications.InboxAction";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.InboxActor
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IInboxActor ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_InboxActor_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_InboxActor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_InboxActor[] = L"Windows.Xbox.UI.Internal.ToastNotifications.InboxActor";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.InboxGameType
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IInboxGameType ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_InboxGameType_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_InboxGameType_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_InboxGameType[] = L"Windows.Xbox.UI.Internal.ToastNotifications.InboxGameType";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.InboxManager
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Xbox.UI.Internal.ToastNotifications.IInboxManager interface starting with version 1.0 of the Windows.Xbox.Shell.ToastNotificationsContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_InboxManager_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_InboxManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_InboxManager[] = L"Windows.Xbox.UI.Internal.ToastNotifications.InboxManager";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.InboxNotification
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IInboxNotification ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_InboxNotification_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_InboxNotification_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_InboxNotification[] = L"Windows.Xbox.UI.Internal.ToastNotifications.InboxNotification";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.InboxNotificationOptions
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IInboxNotificationOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_InboxNotificationOptions_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_InboxNotificationOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_InboxNotificationOptions[] = L"Windows.Xbox.UI.Internal.ToastNotifications.InboxNotificationOptions";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.PickerOption
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IPickerOption ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_PickerOption_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_PickerOption_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_PickerOption[] = L"Windows.Xbox.UI.Internal.ToastNotifications.PickerOption";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.Toast
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IToast ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_Toast_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_Toast_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_Toast[] = L"Windows.Xbox.UI.Internal.ToastNotifications.Toast";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.ToastAction
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IToastAction ** Default Interface **
 *    Windows.Xbox.UI.Internal.ToastNotifications.IToastQuickRow
 *    Windows.Xbox.UI.Internal.ToastNotifications.IVerbQuickRow
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastAction_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastAction_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_ToastAction[] = L"Windows.Xbox.UI.Internal.ToastNotifications.ToastAction";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.ToastEditInput
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IToastQuickRow ** Default Interface **
 *    Windows.Xbox.UI.Internal.ToastNotifications.IEditQuickRow
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastEditInput_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastEditInput_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_ToastEditInput[] = L"Windows.Xbox.UI.Internal.ToastNotifications.ToastEditInput";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.ToastImage
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IToastImage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastImage_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastImage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_ToastImage[] = L"Windows.Xbox.UI.Internal.ToastNotifications.ToastImage";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.ToastManager
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Xbox.UI.Internal.ToastNotifications.IToastManagerInternal interface starting with version 1.0 of the Windows.Xbox.Shell.ToastNotificationsContract API contract
 *   Static Methods exist on the Windows.Xbox.UI.Internal.ToastNotifications.IToastManager interface starting with version 1.0 of the Windows.Xbox.Shell.ToastNotificationsContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastManager_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_ToastManager[] = L"Windows.Xbox.UI.Internal.ToastNotifications.ToastManager";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.ToastPickerInput
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IToastQuickRow ** Default Interface **
 *    Windows.Xbox.UI.Internal.ToastNotifications.IPickerQuickRow
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastPickerInput_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastPickerInput_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_ToastPickerInput[] = L"Windows.Xbox.UI.Internal.ToastNotifications.ToastPickerInput";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.ToastPopupModel
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IToastPopupModel ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastPopupModel_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastPopupModel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_ToastPopupModel[] = L"Windows.Xbox.UI.Internal.ToastNotifications.ToastPopupModel";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.ToastStoreGroup
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IToastStoreGroup ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastStoreGroup_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastStoreGroup_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_ToastStoreGroup[] = L"Windows.Xbox.UI.Internal.ToastNotifications.ToastStoreGroup";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.ToastStoreModel
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IToastStoreModel ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastStoreModel_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastStoreModel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_ToastStoreModel[] = L"Windows.Xbox.UI.Internal.ToastNotifications.ToastStoreModel";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000






#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIActiveToastChangedHandler_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIActiveToastChangedHandler_FWD_DEFINED__
typedef interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIActiveToastChangedHandler __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIActiveToastChangedHandler;

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIActiveToastChangedHandler_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastActionHandler_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastActionHandler_FWD_DEFINED__
typedef interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastActionHandler __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastActionHandler;

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastActionHandler_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastExpiredHandler_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastExpiredHandler_FWD_DEFINED__
typedef interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastExpiredHandler __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastExpiredHandler;

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastExpiredHandler_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIEditQuickRow_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIEditQuickRow_FWD_DEFINED__
typedef interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIEditQuickRow __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIEditQuickRow;

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIEditQuickRow_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxAction_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxAction_FWD_DEFINED__
typedef interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxAction __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxAction;

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxAction_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxActor_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxActor_FWD_DEFINED__
typedef interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxActor __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxActor;

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxActor_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxGameType_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxGameType_FWD_DEFINED__
typedef interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxGameType __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxGameType;

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxGameType_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxManager_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxManager_FWD_DEFINED__
typedef interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxManager __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxManager;

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxManager_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotification_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotification_FWD_DEFINED__
typedef interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotification __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotification;

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotification_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotificationOptions_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotificationOptions_FWD_DEFINED__
typedef interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotificationOptions __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotificationOptions;

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIInboxNotificationOptions_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerOption_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerOption_FWD_DEFINED__
typedef interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerOption __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerOption;

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerOption_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerQuickRow_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerQuickRow_FWD_DEFINED__
typedef interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerQuickRow __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerQuickRow;

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIPickerQuickRow_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToast_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToast_FWD_DEFINED__
typedef interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToast __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToast;

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToast_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastAction_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastAction_FWD_DEFINED__
typedef interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastAction __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastAction;

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastAction_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastImage_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastImage_FWD_DEFINED__
typedef interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastImage __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastImage;

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastImage_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastInternal_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastInternal_FWD_DEFINED__
typedef interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastInternal __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastInternal;

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastInternal_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager_FWD_DEFINED__
typedef interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager;

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal_FWD_DEFINED__
typedef interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal;

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastPopupModel_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastPopupModel_FWD_DEFINED__
typedef interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastPopupModel __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastPopupModel;

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastPopupModel_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastQuickRow_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastQuickRow_FWD_DEFINED__
typedef interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastQuickRow __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastQuickRow;

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastQuickRow_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreGroup_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreGroup_FWD_DEFINED__
typedef interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreGroup __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreGroup;

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreGroup_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreModel_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreModel_FWD_DEFINED__
typedef interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreModel __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreModel;

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreModel_FWD_DEFINED__

#ifndef ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIVerbQuickRow_FWD_DEFINED__
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIVerbQuickRow_FWD_DEFINED__
typedef interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIVerbQuickRow __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIVerbQuickRow;

#endif // ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIVerbQuickRow_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


/*
 *
 * Interface Windows.Xbox.UI.Internal.ToastNotifications.IToastManager
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Xbox.UI.Internal.ToastNotifications.ToastManager
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Xbox_UI_Internal_ToastNotifications_IToastManager[] = L"Windows.Xbox.UI.Internal.ToastNotifications.IToastManager";
/* [object, uuid("944FEE54-68BA-4CBE-8541-08122DBE3A4A"), exclusiveto, contract] */
typedef struct __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetToastPopupModel )(
        __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager * This,
        /* [retval, out] */__x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastPopupModel * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetToastStoreModel )(
        __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager * This,
        /* [retval, out] */__x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastStoreModel * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FireSystemNotification )(
        __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager * This,
        /* [in] */HSTRING aumid,
        /* [in] */__x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument* payload,
        /* [in] */UINT32 expirationInS
        );
    HRESULT ( STDMETHODCALLTYPE *FireStandardNotification )(
        __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager * This,
        /* [in] */UINT32 type,
        /* [in] */HSTRING param1,
        /* [in] */HSTRING param2,
        /* [in] */HSTRING param3
        );
    END_INTERFACE
    
} __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerVtbl;

interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager
{
    CONST_VTBL struct __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager_GetToastPopupModel(This,value) \
    ( (This)->lpVtbl->GetToastPopupModel(This,value) )

#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager_GetToastStoreModel(This,value) \
    ( (This)->lpVtbl->GetToastStoreModel(This,value) )

#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager_FireSystemNotification(This,aumid,payload,expirationInS) \
    ( (This)->lpVtbl->FireSystemNotification(This,aumid,payload,expirationInS) )

#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager_FireStandardNotification(This,type,param1,param2,param3) \
    ( (This)->lpVtbl->FireStandardNotification(This,type,param1,param2,param3) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Xbox.UI.Internal.ToastNotifications.IToastManagerInternal
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Xbox.UI.Internal.ToastNotifications.ToastManager
 *
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#if !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal_INTERFACE_DEFINED__)
#define ____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Xbox_UI_Internal_ToastNotifications_IToastManagerInternal[] = L"Windows.Xbox.UI.Internal.ToastNotifications.IToastManagerInternal";
/* [object, uuid("154762D0-7895-45AF-BA7B-A1DAE10E07E3"), exclusiveto, contract] */
typedef struct __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternalVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OnWpnUserServiceStatusChanged )(
        __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal * This,
        /* [in] */UINT32 userId,
        /* [in] */UINT32 eventType
        );
    END_INTERFACE
    
} __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternalVtbl;

interface __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal
{
    CONST_VTBL struct __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternalVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal_OnWpnUserServiceStatusChanged(This,userId,eventType) \
    ( (This)->lpVtbl->OnWpnUserServiceStatusChanged(This,userId,eventType) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal;
#endif /* !defined(____x_Windows_CXbox_CUI_CInternal_CToastNotifications_CIToastManagerInternal_INTERFACE_DEFINED__) */
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.InboxAction
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IInboxAction ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_InboxAction_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_InboxAction_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_InboxAction[] = L"Windows.Xbox.UI.Internal.ToastNotifications.InboxAction";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.InboxActor
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IInboxActor ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_InboxActor_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_InboxActor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_InboxActor[] = L"Windows.Xbox.UI.Internal.ToastNotifications.InboxActor";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.InboxGameType
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IInboxGameType ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_InboxGameType_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_InboxGameType_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_InboxGameType[] = L"Windows.Xbox.UI.Internal.ToastNotifications.InboxGameType";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.InboxManager
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Xbox.UI.Internal.ToastNotifications.IInboxManager interface starting with version 1.0 of the Windows.Xbox.Shell.ToastNotificationsContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_InboxManager_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_InboxManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_InboxManager[] = L"Windows.Xbox.UI.Internal.ToastNotifications.InboxManager";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.InboxNotification
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IInboxNotification ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_InboxNotification_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_InboxNotification_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_InboxNotification[] = L"Windows.Xbox.UI.Internal.ToastNotifications.InboxNotification";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.InboxNotificationOptions
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IInboxNotificationOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_InboxNotificationOptions_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_InboxNotificationOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_InboxNotificationOptions[] = L"Windows.Xbox.UI.Internal.ToastNotifications.InboxNotificationOptions";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.PickerOption
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IPickerOption ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_PickerOption_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_PickerOption_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_PickerOption[] = L"Windows.Xbox.UI.Internal.ToastNotifications.PickerOption";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.Toast
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IToast ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_Toast_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_Toast_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_Toast[] = L"Windows.Xbox.UI.Internal.ToastNotifications.Toast";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.ToastAction
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IToastAction ** Default Interface **
 *    Windows.Xbox.UI.Internal.ToastNotifications.IToastQuickRow
 *    Windows.Xbox.UI.Internal.ToastNotifications.IVerbQuickRow
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastAction_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastAction_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_ToastAction[] = L"Windows.Xbox.UI.Internal.ToastNotifications.ToastAction";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.ToastEditInput
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IToastQuickRow ** Default Interface **
 *    Windows.Xbox.UI.Internal.ToastNotifications.IEditQuickRow
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastEditInput_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastEditInput_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_ToastEditInput[] = L"Windows.Xbox.UI.Internal.ToastNotifications.ToastEditInput";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.ToastImage
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IToastImage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastImage_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastImage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_ToastImage[] = L"Windows.Xbox.UI.Internal.ToastNotifications.ToastImage";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.ToastManager
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Xbox.UI.Internal.ToastNotifications.IToastManagerInternal interface starting with version 1.0 of the Windows.Xbox.Shell.ToastNotificationsContract API contract
 *   Static Methods exist on the Windows.Xbox.UI.Internal.ToastNotifications.IToastManager interface starting with version 1.0 of the Windows.Xbox.Shell.ToastNotificationsContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastManager_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_ToastManager[] = L"Windows.Xbox.UI.Internal.ToastNotifications.ToastManager";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.ToastPickerInput
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IToastQuickRow ** Default Interface **
 *    Windows.Xbox.UI.Internal.ToastNotifications.IPickerQuickRow
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastPickerInput_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastPickerInput_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_ToastPickerInput[] = L"Windows.Xbox.UI.Internal.ToastNotifications.ToastPickerInput";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.ToastPopupModel
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IToastPopupModel ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastPopupModel_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastPopupModel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_ToastPopupModel[] = L"Windows.Xbox.UI.Internal.ToastNotifications.ToastPopupModel";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.ToastStoreGroup
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IToastStoreGroup ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastStoreGroup_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastStoreGroup_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_ToastStoreGroup[] = L"Windows.Xbox.UI.Internal.ToastNotifications.ToastStoreGroup";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Xbox.UI.Internal.ToastNotifications.ToastStoreModel
 *
 * Introduced to Windows.Xbox.Shell.ToastNotificationsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Xbox.UI.Internal.ToastNotifications.IToastStoreModel ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 */
#if WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastStoreModel_DEFINED
#define RUNTIMECLASS_Windows_Xbox_UI_Internal_ToastNotifications_ToastStoreModel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Xbox_UI_Internal_ToastNotifications_ToastStoreModel[] = L"Windows.Xbox.UI.Internal.ToastNotifications.ToastStoreModel";
#endif
#endif // WINDOWS_XBOX_SHELL_TOASTNOTIFICATIONSCONTRACT_VERSION >= 0x10000






#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Windows2EXbox2EUI2EInternal2EToastNotifications_p_h__

#endif // __Windows2EXbox2EUI2EInternal2EToastNotifications_h__

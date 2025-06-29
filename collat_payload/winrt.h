#ifndef _WINRT_H
#define _WINRT_H

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <Windows.h>
#include <initguid.h>
#include <roapi.h>
#include <Windows.ui.notifications.h>
#include <windows.ui.popups.h>
#include <WinSock2.h>
#include "Windows.Xbox.UI.Internal.ToastNotifications.h"

int show_toast_rare_achievement(LPCWSTR line1_1, LPCWSTR line2_1, LPCWSTR line1_2, LPCWSTR line2_2);
int show_toast(LPCWSTR line1_1, LPCWSTR line2_1, LPCWSTR line1_2, LPCWSTR line2_2);
int show_message_dialog(LPCWSTR dialogTitle, LPCWSTR dialogContent);

#endif
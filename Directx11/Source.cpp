//
//#include "framework.h"
//
//#include <iostream>
//
//// Windows procedure
//LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
//{
//    switch (message)
//    {
//    case WM_DESTROY:
//        PostQuitMessage(0);
//        break;
//    default:
//        break;
//    }
//
//    return DefWindowProc(hWnd, message, wParam, lParam);
//}
//
//int WINAPI wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPWSTR lpCmdLine, _In_ int nCmdShow)
//{
//    UNREFERENCED_PARAMETER(hPrevInstance);
//    UNREFERENCED_PARAMETER(lpCmdLine);
//
//    if (!DirectX::XMVerifyCPUSupport())
//        return 1;
//
//    FAIL_FAST_IF_FAILED(CoInitializeEx(nullptr, COINITBASE_MULTITHREADED));
//
//    // Register class and create window
//    {
//        const wchar_t* CLASS_NAME = L"Directx11-SineWave";
//
//        // Register class
//        WNDCLASSEXW wcex = {};
//        wcex.cbSize = sizeof(WNDCLASSEXW);
//        wcex.style = CS_HREDRAW | CS_VREDRAW;
//        wcex.lpfnWndProc = WndProc;
//        wcex.hInstance = hInstance;
//        wcex.hbrBackground = reinterpret_cast<HBRUSH>(COLOR_WINDOW + 1);
//        wcex.lpszClassName = CLASS_NAME;
//
//        if(!RegisterClassExW(&wcex))
//            return 1;
//
//        int width = 800, height = 600;
//        RECT rc = { .left = 0, .top = 0, .right = width, .bottom = height };
//
//        AdjustWindowRect(&rc, WS_OVERLAPPEDWINDOW, FALSE);
//
//        HWND hwnd = CreateWindowExW(0, 
//            wcex.lpszClassName, 
//            CLASS_NAME, 
//            WS_OVERLAPPEDWINDOW,
//            CW_USEDEFAULT, 
//            CW_USEDEFAULT,
//            rc.right - rc.left,
//            rc.bottom - rc.top, 
//            nullptr,
//            nullptr,
//            hInstance,
//            nullptr);
//
//        if (!hwnd)
//            return 1;
//
//        ShowWindow(hwnd, nCmdShow);
//    }
//
//    // Main message loop
//    MSG msg = {};
//    while (WM_QUIT != msg.message)
//    {
//        if (PeekMessage(&msg, nullptr, 0, 0, PM_REMOVE))
//        {
//            TranslateMessage(&msg);
//            DispatchMessage(&msg);
//        }
//        else
//        {
//        }
//    }
//
//    CoUninitialize();
//
//	return 0;
//}
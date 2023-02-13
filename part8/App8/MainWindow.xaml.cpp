// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#include <microsoft.ui.xaml.window.h>
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::App8::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();

        // Get the window's HWND
        auto windowNative{ this->try_as<::IWindowNative>() };
        HWND hWnd{ 0 };
        windowNative->get_WindowHandle(&hWnd);
        SetWindowPos(hWnd, NULL, 400, 200, 500, 400, NULL);  // 위치 x,y 크기 가로,세로

    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}

void winrt::App8::implementation::MainWindow::RunningRB_Checked(winrt::Windows::Foundation::IInspectable const& /*sender*/, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& /*e*/)
{
    ProgressBar().ShowPaused(false);
    ProgressBar().ShowError(false);
    ProgressBar().IsIndeterminate(true);
}

void winrt::App8::implementation::MainWindow::PausedRB_Checked(winrt::Windows::Foundation::IInspectable const& /*sender*/, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& /*e*/)
{
    ProgressBar().ShowPaused(true);
    ProgressBar().ShowError(false);
    ProgressBar().IsIndeterminate(true);
}

void winrt::App8::implementation::MainWindow::ErrorRB_Checked(winrt::Windows::Foundation::IInspectable const& /*sender*/, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& /*e*/)
{
    ProgressBar().ShowPaused(false);
    ProgressBar().ShowError(true);
    ProgressBar().IsIndeterminate(true);
}
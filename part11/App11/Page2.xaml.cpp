// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "Page2.xaml.h"
#if __has_include("Page2.g.cpp")
#include "Page2.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::App11::implementation
{
    Page2::Page2()
    {
        InitializeComponent();
    }

    int32_t Page2::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void Page2::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}

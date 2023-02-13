// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "Page1.xaml.h"
#if __has_include("Page1.g.cpp")
#include "Page1.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::App11::implementation
{
    Page1::Page1()
    {
        InitializeComponent();
    }

    int32_t Page1::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void Page1::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}

//
// Bareflank Hypervisor
//
// Copyright (C) 2015 Assured Information Security, Inc.
// Author: Rian Quinn        <quinnr@ainfosec.com>
// Author: Brendan Kerrigan  <kerriganb@ainfosec.com>
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA

#ifndef TEST_H
#define TEST_H

#include <unittest.h>

class vmm_ut : public unittest
{
public:

    vmm_ut();
    ~vmm_ut() {}

protected:

    bool init() override;
    bool fini() override;
    bool list() override;

private:

    void test_check_support_v8086_enabled();
    // void test_check_support_long_mode_inactive();
    // void test_check_support_long_mode_active_not_in_compatibility_mode();
    // void test_check_support_cr0_protected_mode_disabled();
    // void test_check_support_cr0_paging_disabled();
    // void test_check_support_cr0_numeric_error_disabled();
    // void test_check_support_cr0_vmx_extensions_disabled();
    // void test_check_support_unsupported_cpuid_vmx();
    // void test_check_support_ia32_vmx_cr0_fixed0_failed();
    // void test_check_support_ia32_vmx_cr0_fixed1_failed();
    // void test_check_support_unsupported_physical_address_width();
    // void test_check_support_unsupported_memory_type();
    // void test_check_support_ia32_vmx_cr4_fixed0_failed();
    // void test_check_support_ia32_vmx_cr4_fixed1_failed();
    // void test_check_support_();
    // void test_check_support_();
    // void test_check_support_();
};


#endif

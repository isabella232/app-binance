/*******************************************************************************
*   (c) 2016 Ledger
*   (c) 2018, 2019 ZondaX GmbH
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
********************************************************************************/
#pragma once

#include "os.h"
#include "cx.h"
#include "view_common.h"

#if defined(TARGET_NANOX) || defined(TARGET_NANOS2)
#include "ux.h"
extern const ux_flow_step_t* const ux_view_address_flow[];
extern const ux_flow_step_t* const ux_show_address_flow[];
extern const ux_flow_step_t* const ux_get_address_flow[];
extern const ux_flow_step_t* const ux_confirm_full_flow[];
#endif

// Initialize and show control
void viewexpl_start(
        int start_page,
        bool single_page,
        viewctl_delegate_getData delegate_update,
        viewctl_delegate_ready delegate_ready,
        viewctl_delegate_exit delegate_exit
        );


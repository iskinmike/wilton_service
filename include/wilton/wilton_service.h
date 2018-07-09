/*
 * Copyright 2018, alex at staticlibs.net
 * Copyright 2018, mike at myasnikov.mike@gmail.com
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* 
 * File:   wilton_service.h
 * Author: alex
 *
 * Created on July 8, 2018, 8:48 PM
 */

#ifndef WILTON_SERVICE_H
#define WILTON_SERVICE_H

#include "wilton/wilton.h"

#ifdef __cplusplus
extern "C" {
#endif

char* wilton_service_get_pid(
        int* pid_out);
char* wilton_service_get_process_memory_size_bytes(
        int* memory_out);

char* wilton_service_get_threads_count(
		int* count_out);
char* wilton_service_increase_threads_count();
char* wilton_service_decrease_threads_count();

#ifdef __cplusplus
}
#endif

#endif /* WILTON_SERVICE_H */

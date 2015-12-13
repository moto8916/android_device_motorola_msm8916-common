/*
 * Copyright (C) 2015 The CyanogenMod Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* TODO: Actually provide implementations for these function! */
#include <media/stagefright/MediaCodec.h>
#include <media/stagefright/foundation/AMessage.h>

namespace android {

extern "C" {

void _ZN7android8AMessageC1Eji() {}

sp<MediaCodec> _ZN7android10MediaCodec12CreateByTypeERKNS_2spINS_7ALooperEEEPKcbPi(
    const sp<ALooper> &looper, const char *mime, bool encoder, status_t *err, pid_t pid);

sp<MediaCodec> _ZN7android10MediaCodec12CreateByTypeERKNS_2spINS_7ALooperEEEPKcbPi(
    const sp<ALooper> &looper, const char *mime, bool encoder, status_t *err, pid_t pid) {
         return _ZN7android10MediaCodec12CreateByTypeERKNS_2spINS_7ALooperEEEPKcbPi(
                 looper, mime, encoder, err, pid);
}

void _ZN7android11AudioSourceC1E14audio_source_tjj() {}

  
}
};

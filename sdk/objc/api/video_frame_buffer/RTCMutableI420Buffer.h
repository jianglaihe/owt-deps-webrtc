/*
 *  Copyright 2018 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#import <AVFoundation/AVFoundation.h>

#import "RTCI420Buffer.h"
#import "base/RTCMacros.h"
#import "base/RTCMutableI420Buffer.h"

NS_ASSUME_NONNULL_BEGIN

/** Mutable version of RTCI420Buffer */
RTC_EXPORT
@interface RTCMutableI420Buffer : RTCI420Buffer <RTCMutableI420Buffer>
@end

NS_ASSUME_NONNULL_END

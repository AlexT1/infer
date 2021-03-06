/*
 * Copyright (c) 2015 - present Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Foundation/Foundation.h>

CFMutableArrayRef __cf_alloc(CFMutableArrayRef);
CFMutableArrayRef __cf_non_null_alloc(CFMutableArrayRef);

CFMutableArrayRef CFArrayCreateMutable(CFAllocatorRef allocator,
                                       CFIndex capacity,
                                       const CFArrayCallBacks* callBacks) {
  CFMutableArrayRef c;
  return __cf_alloc(c);
}

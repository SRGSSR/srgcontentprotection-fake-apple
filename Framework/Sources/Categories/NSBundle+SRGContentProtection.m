//
//  Copyright (c) SRG SSR. All rights reserved.
//
//  License information is available from the LICENSE file.
//

#import "NSBundle+SRGContentProtection.h"

@interface SRGContentProtectionFake : NSObject

@end

@implementation SRGContentProtectionFake

@end

@implementation NSBundle (SRGContentProtection)

#pragma mark Class methods

+ (instancetype)srg_contentProtectionBundle
{
    static NSBundle *s_bundle;
    static dispatch_once_t s_onceToken;
    dispatch_once(&s_onceToken, ^{
        NSString *bundlePath = [[NSBundle bundleForClass:[SRGContentProtectionFake class]].bundlePath stringByAppendingPathComponent:@"SRGContentProtection.bundle"];
        s_bundle = [NSBundle bundleWithPath:bundlePath];
        NSAssert(s_bundle, @"Please add SRGContentProtection.bundle to your project resources");
    });
    return s_bundle;
}

@end

//
//  Copyright (c) SRG SSR. All rights reserved.
//
//  License information is available from the LICENSE file.
//

#import "AVURLAsset+SRGContentProtection.h"

@implementation AVURLAsset (SRGContentProtection)

#pragma mark Class methods

+ (instancetype)srg_akamaiTokenProtectedAssetWithURL:(NSURL *)URL options:(NSDictionary *)options
{
    return [self assetWithURL:URL];
}

+ (instancetype)srg_fairPlayProtectedAssetWithURL:(NSURL *)URL certificateURL:(NSURL *)certificateURL options:(NSDictionary *)options
{
    return [self assetWithURL:URL];
}

@end

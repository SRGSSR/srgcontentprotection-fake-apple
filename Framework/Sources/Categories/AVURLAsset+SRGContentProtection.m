//
//  Copyright (c) SRG SSR. All rights reserved.
//
//  License information is available from the LICENSE file.
//

#import "AVURLAsset+SRGContentProtection.h"

@implementation AVURLAsset (SRGContentProtection)

#pragma mark Class methods

+ (instancetype)srg_assetWithURL:(NSURL *)URL options:(NSDictionary *)options
{
    return [self assetWithURL:URL];
}

+ (instancetype)srg_assetWithURL:(NSURL *)URL
{
    return [self assetWithURL:URL];
}

+ (instancetype)srg_assetWithURL:(NSURL *)URL licenseURL:(NSURL *)licenseURL options:(NSDictionary<SRGAssetOption,id> *)options
{
    return [self assetWithURL:URL];
}

+ (instancetype)srg_assetWithURL:(NSURL *)URL licenseURL:(NSURL *)licenseURL
{
    return [self assetWithURL:URL];
}

@end

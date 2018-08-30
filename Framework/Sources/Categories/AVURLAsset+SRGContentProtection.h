//
//  Copyright (c) SRG SSR. All rights reserved.
//
//  License information is available from the LICENSE file.
//

#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  Compatibility interface with the closed source SRG Content Protection framework.
 */
@interface AVURLAsset (SRGContentProtection)

/**
 *  Equivalent to `+[AVURLAsset assetWithURL:]`.
 */
+ (instancetype)srg_assetWithURL:(NSURL *)URL;
+ (instancetype)srg_assetWithURL:(NSURL *)URL licenseURL:(nullable NSURL *)licenseURL;

@end

NS_ASSUME_NONNULL_END

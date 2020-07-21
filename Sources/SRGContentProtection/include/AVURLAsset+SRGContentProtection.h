//
//  Copyright (c) SRG SSR. All rights reserved.
//
//  License information is available from the LICENSE file.
//

#import "SRGContentProtectionConstants.h"

@import AVFoundation;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Compatibility interface with the closed source SRG Content Protection framework.
 */
@interface AVURLAsset (SRGContentProtection)

/**
 *  Equivalent to `+[AVURLAsset assetWithURL:]`.
 */
+ (instancetype)srg_akamaiTokenProtectedAssetWithURL:(NSURL *)URL options:(nullable NSDictionary<SRGResourceLoaderOption, id> *)options;
+ (instancetype)srg_fairPlayProtectedAssetWithURL:(NSURL *)URL certificateURL:(NSURL *)certificateURL options:(nullable NSDictionary<SRGResourceLoaderOption, id> *)options;

@end

NS_ASSUME_NONNULL_END

//
//  Copyright (c) SRG SSR. All rights reserved.
//
//  License information is available from the LICENSE file.
//

#import "SRGContentProtectionConstants.h"

#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  Compatibility interface with the closed source SRG Content Protection framework.
 */
@interface AVURLAsset (SRGContentProtection)

/**
 *  Equivalent to `+[AVURLAsset assetWithURL:]`.
 */
+ (instancetype)srg_assetWithURL:(NSURL *)URL options:(nullable NSDictionary<SRGAssetOption, id> *)options;
+ (instancetype)srg_assetWithURL:(NSURL *)URL;
+ (instancetype)srg_assetWithURL:(NSURL *)URL certificateURL:(nullable NSURL *)certificateURL options:(nullable NSDictionary<SRGAssetOption, id> *)options;
+ (instancetype)srg_assetWithURL:(NSURL *)URL certificateURL:(nullable NSURL *)certificateURL;

@end

NS_ASSUME_NONNULL_END

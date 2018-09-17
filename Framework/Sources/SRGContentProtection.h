//
//  Copyright (c) SRG SSR. All rights reserved.
//
//  License information is available from the LICENSE file.
//

#import <Foundation/Foundation.h>

// Official version number.
FOUNDATION_EXPORT NSString *SRGContentProtectionMarketingVersion(void);

@interface NSBundle (SRGContentProtectionVersion)

/**
 *  Return `YES` iff run in a public (open source) setup. Always `NO`.
 */
+ (BOOL)srg_contentProtectionIsPublic;

@end

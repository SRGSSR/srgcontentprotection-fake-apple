//
//  Copyright (c) SRG SSR. All rights reserved.
//
//  License information is available from the LICENSE file.
//

#import <Foundation/Foundation.h>

// Official version number.
FOUNDATION_EXPORT NSString *SRGContentProtectionMarketingVersion(void);

//  Return `YES` iff run in a public (open source) setup. Always `YES`.
FOUNDATION_EXPORT BOOL SRGContentProtectionIsPublic(void);

// Public headers.
#import "SRGContentProtectionConstants.h"

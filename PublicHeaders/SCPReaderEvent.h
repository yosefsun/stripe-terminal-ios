//
//  SCPConnectionStatus.h
//  StripeTerminal
//
//  Created by Ben Guo on 8/25/17.
//  Copyright © 2017 Stripe. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

/**
 The possible events from a connected reader.
 */
typedef NS_ENUM(NSUInteger, SCPReaderEvent) {
    /**
     A card was inserted.
     */
    SCPReaderEventCardInserted,
    /**
     A card was removed.
     */
    SCPReaderEventCardRemoved,
} NS_SWIFT_NAME(ReaderEvent);

NS_ASSUME_NONNULL_END

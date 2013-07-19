//
//  RACSignal+Kiwi.h
//  Collections
//
//  Created by Tony Xiao on 2/24/13.
//  Copyright (c) 2013 Collections Labs, Inc. All rights reserved.
//

#import <ReactiveCocoa/ReactiveCocoa.h>
#import <Kiwi/Kiwi.h>

@interface RACSignal (Kiwi)

- (KWFutureObject *)kwFuture;
- (KWFutureObject *)kwFutureDefault:(id)defaultValue;

@end
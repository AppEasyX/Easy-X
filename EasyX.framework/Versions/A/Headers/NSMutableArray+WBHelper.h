//
//  NSMutableArray+WBHelper.h
//  FFriends
//
//  Created by fenglu on 11-8-9.
//  Copyright 2011年 58.com. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kNotificationArrayWillEmpty		(@"kNotificationArrayWillEmpty")
#define kNotificationArrayDidEmpty		(@"kNotificationArrayDidEmpty")
#define kNotificationArrayWillAdd		(@"kNotificationArrayWillAdd")
#define kNotificationArrayDidAdd		(@"kNotificationArrayDidAdd")
#define kNotificationArrayWillRemove	(@"kNotificationArrayWillRemove")
#define kNotificationArrayDidRemoved	(@"kNotificationArrayDidRemoved")

@interface NSMutableArray (Sort)

- (void)reverse;

@end


@interface NSMutableArray (Notify)

- (void)addObjectWithNotify:(id)anObject;
- (void)removeObjectWithNotify:(id)anObject;
- (void)removeAllObjectsWithNotify;

- (void)notifyWillEmpty;
- (void)notifyDidEmpty;
- (void)notifyWillAdd:(id)theObj;
- (void)notifyDidAdd:(id)theObj;
- (void)notifyWillRemove:(id)theObj;
- (void)notifyDidRemoved;

@end
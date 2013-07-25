//
//  NSMutableDictionary+WBHelper.h
//  FFriends
//
//  Created by fenglu on 11-9-15.
//  Copyright 2011年 58.com. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kNotificationDictionaryEmpty	(@"kNotificationDictionaryEmpty")
#define kNotificationDictionaryAdd		(@"kNotificationDictionaryAdd")
#define kNotificationDictionaryRemove	(@"kNotificationDictionaryRemove")

@interface NSMutableDictionary (Notify)

- (void)removeObjectForKeyWithNotify:(id)aKey;
- (void)removeAllObjectsWithNotify;
- (void)removeObjectsForKeysWithNotify:(NSArray *)keyArray;

- (void)setObjectWithNotify:(id)anObject forKey:(id)aKey;

- (void)notifyOnEmpty;
- (void)notifyOnAdd;
- (void)notifyOnRemove;

@end

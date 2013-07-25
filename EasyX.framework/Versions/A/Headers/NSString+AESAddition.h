//
//  NSString＋AESAddition.h
//  App58ForIphone
//
//  Created by cxk on 12-2-20.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString(AESAddition)
- (NSString *)encryptAesToBase64;  
- (NSString *)decryptAesFromBase64;

- (NSString *)encryptAesToBase64:(NSString *)key;  
- (NSString *)decryptAesFromBase64:(NSString *)key;
@end

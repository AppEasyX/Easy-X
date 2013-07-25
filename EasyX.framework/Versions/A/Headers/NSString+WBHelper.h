//
//  NSString+WBHelper.h
//  App58ForIphone
//
//  Created by fenglu on 11-10-24.
//  Copyright (c) 2011年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

unsigned char strToChar(char a,char b);

@interface NSString (WBHelper)

- (NSString *)URLEncode;
- (NSString *)URLDecode;

- (NSString *)trim;
- (NSString *)toQueryString:(NSDictionary *)params;

- (CGSize)size:(CGFloat)aFontSize constrainedWidth:(CGFloat)maxWidth;

- (NSString *)subStringFromIndex:(NSUInteger )fromIndex toIndex:(NSUInteger)toIndex;
// 在发布历史推到详情页面，对服务器返回的串儿做截取操作。
- (NSArray *)thanslateFormaterWithConditionString:(NSString *)str;

+ (NSString *)combanStrings:(NSArray *)strArr withSeparator:(NSString *)sep;
@end

@interface NSString (Regex)

+ (BOOL)regexVerify:(NSString *)inputed regex:(NSString *)aRegex;

@end


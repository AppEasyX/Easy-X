//
//  FStyledTextDelegate.h
//  EasyX
//
//  Created by feng lu on 13-2-21.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>

@class EXStyledText;

@protocol EXStyledTextDelegate <NSObject>
@optional

- (void)styledTextNeedsDisplay:(EXStyledText*)text;

@end

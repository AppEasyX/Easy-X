//
//  FStyledTextLable+FStyledTextLableInternal.h
//  EasyX
//
//  Created by feng lu on 13-2-27.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "EXStyledTextLable.h"

@class EXStyledText;

@interface EXStyledTextLable (EXStyledTextLableInternal)

- (EXStyledText*)findLastStyledText:(EXStyledText*)styledText;
@end

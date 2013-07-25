//
//  FStyledTextNode.h
//  EasyX
//
//  Created by feng lu on 13-2-22.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "EXStyledNode.h"

@interface EXStyledTextNode : EXStyledNode
{
    NSString* _text;
}

@property (nonatomic, copy) NSString* text;


- (id)initWithText:(NSString*)text;

// Designated initializer
- (id)initWithText:(NSString*)text next:(EXStyledNode*)nextSibling;
@end

//
//  FStyledElement.h
//  EasyX
//
//  Created by feng lu on 13-2-22.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "EXStyledNode.h"

@interface EXStyledElement : EXStyledNode
{
    EXStyledNode* _firstChild;
    EXStyledNode* _lastChild;
}

@property (nonatomic, readonly) EXStyledNode* firstChild;
@property (nonatomic, readonly) EXStyledNode* lastChild;


- (id)initWithText:(NSString*)text;

// Designated initializer
- (id)initWithText:(NSString*)text next:(EXStyledNode*)nextSibling;

- (void)addChild:(EXStyledNode*)child;
@end

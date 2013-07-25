//
//  FStyledTextFrame.h
//  EasyX
//
//  Created by feng lu on 13-2-22.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "EXStyledFrame.h"

@class EXStyledTextNode;

@interface EXStyledTextFrame : EXStyledFrame
{
    EXStyledTextNode* _node;
    NSString*         _text;
    UIFont*           _font;
}

/**
 * The node represented by the frame.
 */
@property (nonatomic, readonly) EXStyledTextNode* node;

/**
 * The text that is displayed by this frame.
 */
@property (nonatomic, readonly) NSString* text;

/**
 * The font that is used to measure and display the text of this frame.
 */
@property (nonatomic, retain) UIFont* font;

- (id)initWithText:(NSString*)text node:(EXStyledTextNode*)node;

@end

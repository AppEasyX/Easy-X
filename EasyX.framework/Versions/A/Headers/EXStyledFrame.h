//
//  FStyledFrame.h
//  EasyX
//
//  Created by feng lu on 13-2-21.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>

@class EXStyledElement;
@class EXStyledFrame;
@class EXStyledTextLineFrame;

@interface EXStyledFrame : NSObject
{
    EXStyledElement*  _element;
    EXStyledFrame*    _nextFrame;
    CGRect            _bounds;
}

/**
 * The element that contains the frame.
 */
@property (nonatomic, readonly) EXStyledElement* element;

/**
 * The next in the linked list of frames.
 */
@property (nonatomic, retain) EXStyledFrame* nextFrame;

/**
 * The bounds of the content that is displayed by this frame.
 */
@property (nonatomic) CGRect bounds;


- (id)initWithElement:(EXStyledElement*)element;


/**
 * Draws the frame.
 */
- (void)drawInRect:(CGRect)rect;

- (EXStyledTextLineFrame*)hitTest:(CGPoint)point;

@end

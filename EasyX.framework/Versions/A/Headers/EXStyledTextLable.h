//
//  FStyledTextLable.h
//  EasyX
//
//  Created by feng lu on 13-2-21.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EXStyledTextDelegate.h"


@class EXStyledText;
@class EXStyledLayout;
@class EXStyledFrame;
@class EXStyledTextLineFrame;

/**
 自定义Lable，可以通过html描述text的样式
 */

@interface EXStyledTextLable : UIView <EXStyledTextDelegate>
{
    UIColor*          _textColor;
    UIColor*          _highlightedTextColor;
    UIFont*           _font;
    UITextAlignment   _textAlignment;
    
    EXStyledLayout*    _styledLayout;
    UIEdgeInsets      _contentInset;
    
    EXStyledTextLineFrame* _highlightedFrame;
    
    CGFloat             _contentSpacing;
}

/**
 * The font of the text.
 */
@property (nonatomic, retain) UIFont* font;

/**
 * The color of the text.
 */
@property (nonatomic, retain) UIColor* textColor;

/**
 * The highlight color applied to the text.
 */
@property (nonatomic, retain) UIColor* highlightedTextColor;

@property (nonatomic, retain) EXStyledLayout* styledLayout;

/**
 * The alignment of the text.
 */
@property (nonatomic) UITextAlignment textAlignment;

/**
 * The inset of the edges around the text.
 *
 * This will increase the size of the label when sizeToFit is called.
 */
@property (nonatomic) UIEdgeInsets contentInset;


@property (nonatomic) CGFloat contentSpacing;

- (void) addStyledText:(EXStyledText*)styledText;

//暂时不开启
- (void) addFinish;
@end

//
//  FStyledText.h
//  EasyX
//
//  Created by feng lu on 13-2-21.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

/**
 *  为textlable提供类型存储的类
 *  -为textlable提供文本，样式，颜色，行为
 *  -开发人员应该告诉这个类要显示的文本内容，以及对于此段文本内容的描述
 *  -这个类是可以多次声明的，在一段文本显示中，可以有多种样式，多种行为
 */

#import <Foundation/Foundation.h>
#import "EXStyledTextDelegate.h"
#import "EXStyledTextNode.h"

@class FStyledNode;
@class FStyledFrame;

@interface EXStyledText : EXStyledTextNode
{
    EXStyledText*   _nextStyledText;
    
    id<EXStyledTextDelegate> _delegate;
    
    UIColor*          _textColor;
    UIFont*           _textFont;
    NSString*         _URLs;
    BOOL              _textLink;
}
/**
 * 代理
 */
@property (nonatomic, assign) id<EXStyledTextDelegate> delegate;

/**
 * 下一个节点
 */
@property (nonatomic, retain) EXStyledText* nextStyledText;

/**
 * 设置文字颜色
 */
@property (nonatomic, retain) UIColor*          textColor;

/**
 * 设置文字样式
 */
@property (nonatomic, retain) UIFont*           textFont;

/**
 * 设置文字点击后的去向，比如去某一个类，或者某一个网址
 */
@property (nonatomic, copy) NSString*         URLs;

/**
 * 设置文字下划线
 */
@property (nonatomic) BOOL textLink;

/**
 *  初始化方法
 *  @param textFromString: text 需要显示的文本内容
 *  @return 填充好的EXStyledText实例
 */
+ (EXStyledText*)textFromString:(NSString*)text;

/**
 *  初始化方法，集成初始化方法
 *  @param textFromString：text 需要显示的文本内容
 *  @param textFont：font 设置文本的字体
 *  @param textColor：color 设置文本颜色
 *  @return 填充好的EXStyledText实例
 */
+ (EXStyledText*)textFromString:(NSString*)text textFont:(UIFont*)font textColor:(UIColor*)color;



/**
 * 按照坐标绘制文本
 */
- (void)drawAtPoint:(CGPoint)point;

/**
 * Draws the text at a point with optional highlighting.
 *
 * If highlighted is YES, text colors will be ignored and all text will be drawn in the same color.
 */
- (void)drawAtPoint:(CGPoint)point highlighted:(BOOL)highlighted;
@end

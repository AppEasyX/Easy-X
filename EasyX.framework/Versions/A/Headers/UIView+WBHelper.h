//
//  UIView+WBHelper.h
//  App58ForIphone
//
//  Created by fenglu on 11-10-24.
//  Copyright (c) 2011年 __MyCompanyName__. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface UIView (Positioning)
- (void)centerInRect:(CGRect)rect;
- (void)centerVerticallyInRect:(CGRect)rect;
- (void)centerHorizontallyInRect:(CGRect)rect;

- (void)centerInSuperView;
- (void)centerVerticallyInSuperView;
- (void)centerHorizontallyInSuperView;

- (void)centerHorizontallyBelow:(UIView *)view padding:(CGFloat)padding;
- (void)centerHorizontallyBelow:(UIView *)view;

@end


@interface UIView (Size)

@property (nonatomic, assign) CGSize size;

@property (nonatomic, assign) CGFloat left;
@property (nonatomic, assign) CGFloat right;
@property (nonatomic, assign) CGFloat top;
@property (nonatomic, assign) CGFloat bottom;

@property (nonatomic, assign) CGFloat centerX;
@property (nonatomic, assign) CGFloat centerY;

@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;

@property (nonatomic, assign, readonly) CGPoint rightTopPoint;

@end



@interface UIView (InnerShadow)

- (void)drawInnerShadowInRect:(CGRect)rect fillColor:(UIColor *)fillColor;
- (void)drawInnerShadowInRect:(CGRect)rect radius:(CGFloat)radius fillColor:(UIColor *)fillColor;

@end


@interface UIView (Draw)

+ (void)drawGradientInRect:(CGRect)rect withColors:(NSArray *)colors;
+ (void)drawLinearGradientInRect:(CGRect)rect colors:(CGFloat[])colors;

+ (void)drawRectangleInRect:(CGRect)rect color:(UIColor *)color;
+ (void)drawDialogBoxInRect:(CGRect)rect withRadius:(CGFloat)radius strokeColors:(CGFloat[])sColor fillColor:(CGFloat[])fColor;
+ (void)drawRoundRectangleInRect:(CGRect)rect withRadius:(CGFloat)radius color:(UIColor*)color;

+ (void)drawLineInRect:(CGRect)rect red:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;
+ (void)drawLineInRect:(CGRect)rect colors:(CGFloat[])colors;
+ (void)drawLineInRect:(CGRect)rect colors:(CGFloat[])colors width:(CGFloat)lineWidth cap:(CGLineCap)cap;

@end


@interface UIView (Animation)
- (void)shake;
@end


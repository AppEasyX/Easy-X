//
//  UIScrollView+indiactor.h
//  SunNote
//
//  Created by jf4444 on 13-5-3.
//
//

/**
 *  框架提供的简易的实现自定义horizontalIndiactor以及verticalScrollIndicator的方法
 *  -只需要设置customVerticalIndiactor为YES或者customHorizontalIndiactor为YES
 *  -customVerticalIndiactor和customHorizontalIndiactor可以分别设置
 *  -若你需要实现scrollView的delegate方法，需要super这个方法
 */

#import <UIKit/UIKit.h>

@class EXVerticalIndiactorImageView;
@class EXHorizontalIndiactorImageView;

@interface UIScrollView (indiactor)

/**
 * 自定义verticalScrollIndicator
 */
@property (nonatomic) BOOL customVerticalIndiactor;

/**
 * 获取verticalIndiactor
 */
@property (nonatomic) EXVerticalIndiactorImageView *verticalIndiactor;

/**
 * 自定义horizontalIndiactor
 */
@property (nonatomic) BOOL customHorizontalIndiactor;

/**
 * 获取horizontalIndiactor
 */
@property (nonatomic) EXHorizontalIndiactorImageView *horizontalIndiactor;

@end

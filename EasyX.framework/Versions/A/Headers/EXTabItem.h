//
//  EXTabItem.h
//  EasyX
//
//  Created by feng lu on 12-11-26.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "EXTableLinkedItem.h"

@class EXTab;
@interface EXTabItem : EXTableLinkedItem
{
    EXTab*      _tab;
    id          _object;       //一个对象指针
    UIView*     _badgeView;     //badge的信息
}

@property (nonatomic, retain) EXTab*    tab;
@property (nonatomic, retain) id        object;
@property (nonatomic, retain) UIView *  badgeView;

/**
 *	@brief	生成一个指定了titile，url，icon，highlightIcon，badgeView的EXTabItem并返回。
 *
 *	@param 	title 	tab的标题
 *	@param 	URL 	一个指定的url
 *	@param 	icon 	tab未选中时的背景图片
 *	@param 	highlightIcon 	tab选中后的背景图片
 *	@param 	badgeView 	badge的信息
 *
 *	@return	返回一个EXTabItem
 */

+ (id)tabItemWithTab:(EXTab*)tab URL:(NSString*)URL;

+ (id)tabItemWithTab:(EXTab*)tab URL:(NSString*)URL Badge:(UIView *)badgeView;


/**
 *	@brief	传入titile的初始化方法
 *
 *	@param 	title 		tab的标题
 *
 *	@return	一个指定了title的EXTabItem
 */
- (id)initWithTitle:(UILabel*)title;


@end

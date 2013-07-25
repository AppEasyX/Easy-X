//
//  EXSlideItem.h
//  EasyX
//
//  Created by feng lu on 12-11-29.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

/**
 * 创建slideController所对应的model
 */

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "EXTableLinkedItem.h"

@interface EXSlideItem : EXTableLinkedItem {
@private
    NSString*       _title;
    id              _cell;
    BOOL            _share;
    id              _model;
    CGFloat         _cellHeight;
}

/**
 * SlideController默认的cell的title
 */
@property(nonatomic, copy, readonly)   NSString*       title;

/**
 * 用自定义的SlideController的cell
 */
@property(nonatomic, assign, readonly) id              cell;

/**
 * 供自定义的SlideController的cell显示用的model
 */
@property(nonatomic, retain, readonly) id              model;

/**
 * SlideController默认的cell的高度
 */
@property(nonatomic, assign, readonly) CGFloat         cellHeight;

/**
 * SlideController默认的cell对应的controller每次切换不会被回收，而不是每一次都创建
 */
@property(nonatomic, readonly)         BOOL            share;


/**
 *	@brief	快速创建一个item，用提供的默认的cell，item对应的controller不会被回收
 *
 *	@param 	text 	对应的SlideController默认的cell的title
 *	@param 	delegate 	点击item对应的cell后回调谁
 *	@param 	URL 	对应controller的ClassName
 */
+ (id)shareItemWithText:(NSString*)text delegate:(id)delegate URL:(NSString*)URL;

/**
 *	@brief	快速创建一个item，用提供的默认的cell，item对应的controller会被回收
 *
 *	@param 	text 	对应的SlideController默认的cell的title
 *	@param 	delegate 	点击item对应的cell后回调谁
 *	@param 	URL 	对应controller的ClassName
 */
+ (id)itemWithText:(NSString*)text delegate:(id)delegate URL:(NSString*)URL;

/**
 *	@brief	快速创建一个item，用自定义的cell，item对应的controller不会被回收
 *
 *  @param  cell   自定义的cell
 *	@param 	model 	对应cell的数据
 *	@param 	delegate 	点击item对应的cell后回调谁
 *	@param 	URL 	对应controller的ClassName
 */
+ (id)shareWithCell:(id)cell Model:(id)model delegate:(id)delegate URL:(NSString*)URL;

/**
 *	@brief	快速创建一个item，用自定义的cell，item对应的controller会被回收
 *
 *  @param  cell   自定义的cell
 *	@param 	model 	对应cell的数据
 *	@param 	delegate 	点击item对应的cell后回调谁
 *	@param 	URL 	对应controller的ClassName
 */
+ (id)itemWithCell:(id)cell Model:(id)model delegate:(id)delegate URL:(NSString*)URL;

@end
